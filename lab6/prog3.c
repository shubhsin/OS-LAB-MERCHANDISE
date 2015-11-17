#include<stdio.h>
#include<string.h>

int main(int argc, char *argv[])
{
int i,j;
char t[20];
char strOrg[10][20];

for(i = 1; i < argc; i++){
strcpy(strOrg[i],argv[i]);
}

//for(i = 1; i < argc; i++)
//    printf("String[%d] = %s\n", i, argv[i]);

for (i = 1; i < argc; i++) {
      for (j = 1; j < argc; j++) {
         if (strcmp(argv[j - 1], argv[j]) > 0) {
            strcpy(t, argv[j - 1]);
            strcpy(argv[j - 1], argv[j]);
            strcpy(argv[j], t);
         }
      }
   }

int p = fork();

if(p==0)
{
   printf("Child Process");
   printf("\nStrings in order are :\n");
   for (i = 1; i < argc; i++)
      printf("%s\n", argv[i]);
}
else {
wait();
printf("\nParent Process Unordered Strings\n");
for(i = 1; i < argc; i++){
 printf("\n%s\n",strOrg[i]);
}
}


  return 0;
}
