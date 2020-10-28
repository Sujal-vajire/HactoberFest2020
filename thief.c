#include <stdio.h> 
int main( ) 
{ int test;
 scanf("%d",&test); 
while(test>0)
{ int a[150]={0}; 
int m; 
scanf("%d",&m); 
int x, int y; 
scanf("%d",&x); 
scanf(“%d",&y);
 Int p =0; 
while(p<m) { 
int q;  
scanf("%d",&q); 
for(int i=q;i<=150 && i<=(q+(x*y)); i++)
 { 
a[i]=1; 
} 
for(int i=q;i>0 && i>=(q-(x*y)); i--) 
{ 
a[i]=1;
} p++; 
} int s=0; for(int i=0;i<=150;i++)
 { 
if(a[i]==0) 
{ 
s++;
} 
} 
printf(“sum is%d”,s);

 test—;
 } return 0; 
} 
