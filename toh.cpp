#include<stdio.h>
#include<conio.h>
void TOH(int, char,char,char);
void main(){
	int n;
	printf("\n Enter the number of disks: ");
	scanf("%d",&n);
	TOH(n,'X','Y','Z');
	getch();
}

void TOH(int n, char X,char Z,char Y){
	if(n>0){
		TOH(n-1,X,Y,Z);
		printf("\n Move the disc from %c to %c",X,Y);
		TOH(n-1,Z,X,Y);
	}
}