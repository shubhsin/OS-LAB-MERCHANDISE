#include<stdio.h>

int main()
{

        int i;
        i=fork();
        printf("\n");
        if(i==0)
        {
                printf("Child has started\n\n");
                printf("Date from child: %s:\n",__DATE__);
        }
        else
        {
		wait();
                printf("parent has started\n");
                printf("\n");

        }
        return 0;


}
