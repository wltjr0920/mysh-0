#include <string.h>
#include <unistd.h>
#include "commands.h"
#include <string.h>

#define BUF 8096

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

  // TODO: Fill it!
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  char cwd[BUF];
  getcwd(cwd,sizeof(cwd));
return 0;
}
int validate_cd_argv(int argc, char** argv) {
  if(!strcmp((char*)argv[0],"cd"))
	return 0;
  return 1;
}
int validate_pwd_argv(int argc, char** argv) {
  if(!strcmp((char*)argv[0],"pwd")){
	return 0;
}
 return 1;
}
