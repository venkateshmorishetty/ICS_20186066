#include<stdio.h> 
#include<unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include<stdlib.h>  
int main() {  
   pid_t pid;
   if ((pid = fork()) == 0){
     pause();
     printf("control shouldn't reach here\n");
     exit(0);
   }
   kill(pid,SIGKILL);
   exit(0);
    
    return 0;
} 