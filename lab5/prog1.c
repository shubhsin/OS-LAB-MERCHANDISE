// FCFS LAB5 QUESTION 1
#include<stdio.h>
 
int main()
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    printf("Enter total number of processes:");
    scanf("%d",&n);
 
    printf("\nEnter Process Burst Time\n");
    for(i=0;i<n;i++)
    {
        printf("Process %d:",i+1);
        scanf("%d",&bt[i]);
    }
 
    wt[0]=0;    
    //first process doesn't wait since fcfs
 
    //calculating waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j]; // Since the jth process will wait for time = sum of burst times until ith process
    }
 
    printf("\nProcess\t\tBurst Time\tWaiting Time\tTurnaround Time");
 
    //calculating turnaround time
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i]; // Also = completion - arrival
        avwt+=wt[i];
        avtat+=tat[i];
        printf("\nP[%d]\t\t%d\t\t%d\t\t%d",i+1,bt[i],wt[i],tat[i]);
    }
 
    avwt/=i;
    avtat/=i;
    printf("\nAverage Waiting Time:%d",avwt);
    printf("\nAverage Turnaround Time:%d\n",avtat);
 
    return 0;
}
