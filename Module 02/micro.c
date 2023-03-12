#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

void print_error(char *msg) {
    int i = -1;
    while(msg[++i])
        write(2, &msg[i], 1);
}

void ft_cd(char *path) {
    if (chdir(path) == -1) {
        print_error("error: cd: cannot change directory to ");
        print_error(path);
        print_error("\n");
    }
}

int main(int argc, char **argv, char **env) {
    int i = 0;
    int last_index = 0;
    int pid;
    int p[2] = {-1, -1};
    int tmp_fd = -1;


    if (argc < 2)
        return (1);
    while (argv[i++]) {
        while (argv[i] && !strcmp(argv[i], ";"))
            i++;

        if (!argv[i])
            return(0);

        last_index = i;
        while (argv[++i]) {
            if (!strcmp(argv[i], ";"))
                break;
            else if (!strcmp(argv[i], "|")) {
                pipe(p);
                break;
            }
        }

        if (!strcmp("cd", argv[last_index]))
        {
            if (i - last_index != 2)
                print_error("Error cd\n");
            else
                ft_cd(argv[last_index + 1]);
        }
        else {
            pid = fork();
            if (pid == 0) {
                if (p[1] != -1) {
                    close(p[0]);
                    dup2(p[1], 1);
                    close(p[1]);
                }
                if (tmp_fd != -1) {
                    dup2(tmp_fd, 0);
                    close(tmp_fd);
                    close(p[0]);
                    close(p[1]);
                }
                argv[i] = NULL;
                argv += last_index;
                if (execve(argv[0], argv, env) == -1) {
                    print_error("error: cannot execute ");
                    print_error(argv[0]);
                    print_error("\n");
                    exit(1);
                }
            }
            if (tmp_fd != -1)
                close(tmp_fd);
            tmp_fd = p[0];
            close(p[1]);
            p[0] = -1;
            p[1] = -1;
            while (waitpid(-1, NULL, 0) != -1);
        }
    }
    if (tmp_fd != -1)
        close(tmp_fd);
}
