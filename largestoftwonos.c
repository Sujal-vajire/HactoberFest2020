#include<stdio.h>
int main(){
int n,i,a[10];
int *big;
printf("Enterthevaluesofn:");
scanf("%d",&n);
printf("Entertheelements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
big=&a[0];
for(i=0;i<=n-1;i++)
{
if(a[i]>*big)
*big=a[i];

}
printf("Largestnumberis:%d",*big);
return 0;
}
