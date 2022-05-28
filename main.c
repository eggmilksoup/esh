#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

#include <sys/wait.h>

int
main()
{
	while(1)
	{
		char line[2048];
		char *argv[2048];
		char args[1025][2048];
		int i = 0;
		int arg = 0;

		printf("$ ");
		fgets(line, 1024, stdin);

		for(i=0; line[i] != '\0'; arg++) {
			int j;
			for(j=0; !isblank(line[i]) && line[i] != '\n'; j++)
			{
				args[arg][j] = line[i];
				i++;
			}
			args[arg][j] = '\0';
			argv[arg] = args[arg];
			i++;
		}

		argv[arg] = NULL;

		if(strcmp(argv[0], "cd") == 0) 
		{
			chdir(argv[1]);
		}
		else
		{
			int pid = fork();
			if(pid == 0)
				execvp(argv[0], argv);
			else {
				int *status;
				waitpid(pid, status, 0);
			}
		}
	}
}
