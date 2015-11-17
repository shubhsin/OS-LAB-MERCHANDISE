#include<stdio.h>

int main()
{
int queue[100],n,head,i,j,k,seek=0,diff;
float avg;
printf("\tFCFS Disk Scheduling Algorithm\n");
printf("Enter the size of Queue\t");
scanf("%d",&n);
printf("Enter the Queue\t");
for(i=1;i<=n;i++)
  {
    scanf("%d",&queue[i]);
  }
  printf("Enter the initial head position\t");
scanf("%d",&head);
queue[0]=head;
printf("\n");
int displacement = 0;
for(j=0;j<=n-1;j++)
{
    diff=abs(queue[j+1]-queue[j]);
    seek+=diff;
    printf("Move from %d to %d with Seek %d\n",queue[j],queue[j+1],diff);
displacement++;

  }
printf("\nTotal Seek Time is %d\t",seek);
printf("\nNumber of times displaced : %d\n",displacement);  
return 0;
}

