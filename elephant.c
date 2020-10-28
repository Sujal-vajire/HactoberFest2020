#include <stdio.h> 
Void main()
 { 
int t;
 scanf(“%d",&t)
while(t>0)
{
int n ,a ,c ; 
scanf("%d",&n); 
scanf("%d",&c); int a[n];
 for(int i=0;i<n;i++) 
{ 
scanf("%d",&a[i]); 
} 
int sum=0;
 for(int i=0;i<n;i++) 
{ 
sum+=a[i]; 
} 
a=sum+(2*n);
 if(a>c) { 
printf(“no"); 
}
else
{
printf(“yes”);
}
t- -;
} 
