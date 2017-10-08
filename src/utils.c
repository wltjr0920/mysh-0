#include "utils.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#define BUF 8096

void mysh_parse_command(const char* command, int *argc, char*** argv)
{
    int argcnum = 0;

    char str[BUF];
    char parse[] = " \n\t";
    memset(str, 0x00, BUF);
    strcpy(str, command);
    *argv = (char**)malloc(sizeof(char*) * BUF);
    char *tok = NULL;
    tok = strtok(str, parse);

    if (tok == NULL) {
//        *argv[0] = "";
	*argv[0]=(char*)malloc(sizeof(char*)*BUF);
	strcpy((*argv)[0],"");  
      *argc = 1;
        return;
    }
    else {
        for (argcnum = 0; tok != NULL; argcnum++) {
            (*argv)[argcnum] = (char*)malloc(sizeof(char)*strlen(tok));
            strcpy((*argv)[argcnum], tok);
            tok = strtok(NULL, parse);
        }
        *argc = argcnum;
    }


 
}
