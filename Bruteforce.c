#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int m ,n,i,j;
    char t[40],p[40];
    printf("enter the text\n");
    scanf("%s",t);
    printf("enter the pattern\n");
    scanf("%s",p);
    n=strlen(t);
    m=strlen(p);
    for(i=0;i<=n-m;i++)
    {
      j=0;
       while(j<m && p[j]==t[i+j])
       {
           j=j+1;
       }
       if(j==m)
       {
           printf("position is %d\n",i);
       }
     }
    printf("invalid\n");
    return 0;
}
