#include <stdio.h> 
void main( )
{ int test; 
scanf("%d",&test); 
while(test>0)
{ int n; 
scanf(“%d",&n);
 int a[n]; 
for(int i=0;i<n;i++) 
{ 
scanf("%d",&a[i]); 
} 
int m=a[0]; 
for(int i=0;i<n;i++) 
{ 
    if(a[i]>m)
    {
m=a[i]; 
} 
} int s=0; for(int i=0;i<n;i++) 
{
s=s+(m-a[i]); 
} 
printf("%d",s); 
test--; 

} 
} 
