#include<stdio.h>

int main()
{

        int i;
        printf("hello before creation of child \n");
        //printf("i : %d\n",i);

        i=fork();
        printf("\n");

        if(i==0)
        {

                printf("Child has started\n\n");
                printf("Message from Child \n");
                printf("getpid : %d getppid : %d \n",getpid(),getppid());
               // printf("\nchild printing second time \n");
                //printf("getpid : %d getppid : %d \n",getpid(),getppid());
        }
        else
        {
                printf("parent has started\n");
                printf("getpid : %d  getppid : %d \n",getpid(),getppid());
                printf("\n");

        }
        return 0;


}
