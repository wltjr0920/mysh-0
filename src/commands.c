#include <string.h>
#include <unistd.h>
#include "commands.h"
#include <string.h>

#define BUF 8096

int do_cd(int argc, char** argv) {
  if (!validate_cd_argv(argc, argv))
    return -1;

  if(chdir(argv[1])==-1){
//	printf("No such file or directory\n");
	return -2;
	}
  return 0;
}

int do_pwd(int argc, char** argv) {
  if (!validate_pwd_argv(argc, argv))
    return -1;
  char pwd[BUF];
  if(getcwd(pwd,sizeof(pwd))==NULL)
	return -2;//getcwd error
  else
  printf("%s\n",pwd);
return 0;
}
int validate_cd_argv(int argc, char** argv) {
  if(argc!=2){
	return 0;
	}
  if((argc==2&&!strcmp((char*)argv[0],"cd"))){
	return 1;
}
  if((strcmp((char*)argv[0],"cd"))){
	return 0;
}
  return 1;
}
int validate_pwd_argv(int argc, char** argv) {
  if((strcmp((char*)argv[0],"pwd"))){
		return 0;
	}
else if(argc==1){
return 1;
}
 return 0;
}
