#include <stdio.h>

void FIFO(char [],char [],int,int);
void opt(char [],char [],int,int);

int main()
{
   int ch,YN=1,i,l,f;
   char F[10],s[25];
   printf("\n\nEnter the no of empty frames: ");
   scanf("%d",&f);
   printf("\n\nEnter the length of the string: ");
   scanf("%d",&l);
   printf("\n\nEnter the string: ");
   scanf("%s",s);
   for(i=0;i<f;i++)
     F[i]=-1;
      do
    {
      printf("\n\n\t\tMENU");
      printf("\n1:FIFO\n2:OPTIMAL\n3:EXIT");
      printf("\n\nEnter your choice: ");
      scanf("%d",&ch);

      switch(ch)
       {
      case 1:
          for(i=0;i<f;i++)
           {
             F[i]=-1;
           }

          FIFO(s,F,l,f);
          break;
      case 2:
          for(i=0;i<f;i++)
           {
             F[i]=-1;
           }

          opt(s,F,l,f);
          break;
      case 3:
          exit(0);
       }
      printf("\n\nPress 1 to continue\n\nPress 0 to exit");
      scanf("%d",&YN);
    }while(YN==1);return(0);
}

//FIFO
void FIFO(char s[],char F[],int l,int f)
{
   int i,j=0,k,flag=0,cnt=0;
   printf("\n\tPAGE\t    FRAMES\t  FAULTS");
   for(i=0;i<l;i++)
    {
       for(k=0;k<f;k++)
    {
      if(F[k]==s[i])
        flag=1;
    }

       if(flag==0)
    {
      printf("\n\t%c\t",s[i]);
      F[j]=s[i];
      j++;

      for(k=0;k<f;k++)
       {
        printf("   %c",F[k]);
       }
      printf("\tPage-fault%d",cnt);
      cnt++;
    }

       else
    {
      flag=0;
      printf("\n\t%c\t",s[i]);
      for(k=0;k<f;k++)
       {
        printf("   %c",F[k]);
       }

      printf("\tNo page-fault");
    }
       if(j==f)
    j=0;
    }

}

//optimal
void opt(char s[],char F[],int l,int f)
{
   int i,j=0,k,m,flag=0,cnt=0,temp[10];

   printf("\n\tPAGE\t    FRAMES\t  FAULTS");
   for(i=0;i<10;i++)
     temp[i]=0;

   for(i=0;i<f;i++)
     F[i]=-1;

   for(i=0;i<l;i++)
    {
       for(k=0;k<f;k++)
    {
      if(F[k]==s[i])
        flag=1;
    }

       if(j!=f && flag==0)
    {
      F[j]=s[i];
      j++;
    }

       else if(flag==0)
    {
       for(m=0;m<f;m++)
        {
          for(k=i+1;k<l;k++)
           {
          if(F[m]!=s[k])
           {
             temp[m]=temp[m]+1;
           }
          else
           break;
           }
        }
       m=0;
       for(k=0;k<f;k++)
        {
           if(temp[k]>temp[m])
        {
          m=k;
        }
        }

       F[m]=s[i];
    }

       printf("\n\t%c\t",s[i]);
       for(k=0;k<f;k++)
    {
       printf("  %c",F[k]);
    }
       if(flag==0)
    {
      printf("\tPage-fault %d",cnt);
      cnt++;
    }
       else
     printf("\tNo Page-fault");
       flag=0;

       for(k=0;k<10;k++)
     temp[k]=0;
     }
}
