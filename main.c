#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){

    if (fork()== 0){

        printf("I'm childish !\n");
        execl("/bin/ls","ls","-al",NULL);
    }else
    {
        printf("I'm old and parental. \%d",getpid());
    }

}
