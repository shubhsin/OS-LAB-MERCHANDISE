#include<stdio.h>
void main()
{
struct process
{
    char na3[20];
    int at3,bt3,ft3,tat3,rem3;
    float ntat3;
}Q3[5],temp3;
int f3,r3,n3,i3,j3,tt3=0,qt3,t3,flag3,wt3=0;
    float awt3=0,antat3=0,atat3=0;
int rr3[20],q3,x3,k3;
 int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
int n1,bt1[20],wt1[20],tat1[20],avwt1=0,avtat1=0,i1,j1;
int ch;
printf("\nEnter 1 for Priority and 2 for Round Robin");
scanf("%d",&ch);
switch(ch)
{
case 1:
   
    printf("\nEnter Total Number of Process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time and Priority\n");
    for(i=0;i<n;i++)
    {
        printf("\nP[%d]\n",i+1);
        printf("Burst Time:");
        scanf("%d",&bt[i]);
        printf("\nPriority:");
        scanf("%d",&pr[i]);
        p[i]=i+1;           // process number
    }
 
    //using selection sort sort burst time, priority and process number 
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pr[j]<pr[pos])
                pos=j;
        }
 
        temp=pr[i];
        pr[i]=pr[pos];
        pr[pos]=temp;
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
 
    wt[0]=0;            //waiting time for first process is zero
 
    //calculate waiting time
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
 
        total+=wt[i];
    }
 
    avg_wt=total/n;      //average waiting time
    total=0;
 
    printf("\nProcess\t    Burst Time    \tWaiting TimetTurnaround Time");
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];     //calculate turnaround time
        total+=tat[i];
        printf("\nP[%d]\t\t  %d\t\t    %d\t\t\t%d",p[i],bt[i],wt[i],tat[i]);
    }
 
    avg_tat=total/n;     //average turnaround time
    printf("\n\nAverage Waiting Time=%d",avg_wt);
    printf("\nAverage Turnaround Time=%d\n",avg_tat);
break;
case 2:
printf("Enter the number of Processes:");
    scanf("%d",&n3);
    for(r3=0;r3<n3;r3++)
    {
        printf("Enter process name,arrival time and burst time:\n");
        scanf("%s%d%d",Q3[r3].na3,&Q3[r3].at3,&Q3[r3].bt3);
    }
    printf("Enter Time Slice:\n");
    scanf("%d",&qt3);
    for(i3=0;i3<n3;i3++)
    {
        for(j3=i3+1;j3<n3;j3++)
        {
           if(Q3[i3].at3>Q3[j3].at3)
           {
                temp3=Q3[i3];
                Q3[i3]=Q3[j3];
                Q3[j3]=temp3;
            }
        }
    }
    for(i3=0;i3<n3;i3++)
    {
        Q3[i3].rem3=Q3[i3].bt3;
        Q3[i3].ft3=0;
    }
    tt3=0;
    q3=0;
    rr3[q3]=0;
    do
    {
        for(j3=0;j3<n3;j3++)
        if(tt3>=Q3[j3].at3)
        {
            x3=0;
            for(k3=0;k3<=q3;k3++)
            if(rr3[k3]==j3)
            x3++;
            if(x3==0)
            {
                q3++;
                rr3[q3]=j3;
            }
        }
        if(q3==0)
        i3=0;
        if(Q3[i3].rem3==0)
        i3++;
        if(i3>q3)
        i3=(i3-1)%q3;
        if(i3<=q3)
        {
            if(Q3[i3].rem3>0)
            {
                if(Q3[i3].rem3<qt3)
                {
                    tt3+=Q3[i3].rem3;
                    Q3[i3].rem3=0;
                }
                else
                {
                    tt3+=qt3;
                    Q3[i3].rem3-=qt3;
                }
                Q3[i3].ft3=tt3;
            }
            i3++;
        }
        flag3=0;
        for(j3=0;j3<n3;j3++)
        if(Q3[j3].rem3>0)
        flag3++;
    }while(flag3!=0);
   
    printf("\n\n\t\tRound Robin");
    printf("\n");
    printf("\nProcesses\tArrival time\tBurst time\tFinish time\tTAT\tWT");
    for(f3=0;f3<n3;f3++)
    {
        wt3=Q3[f3].ft3-Q3[f3].bt3-Q3[f3].at3;
        Q3[f3].tat3=Q3[f3].ft3-Q3[f3].at3;
        Q3[f3].ntat3=(float)Q3[f3].tat3/Q3[f3].bt3;
        antat3+=Q3[f3].ntat3;
        atat3+=Q3[f3].tat3;
        awt3+=wt3;
        printf("\n\t%s\t%d\t\t%d\t%d\t%d\t%d",
        Q3[f3].na3,Q3[f3].at3,Q3[f3].bt3,Q3[f3].ft3,Q3[f3].tat3,wt3);
    }
    antat3/=n3;
    atat3/=n3;
    awt3/=n3;
    printf("\nAverage Turnarund Time = %f",atat3);
   // printf("\nAverage tat is %f",antat3);
    printf("\nAverage Waiting time = %f",awt3);

break;

 
}

}




