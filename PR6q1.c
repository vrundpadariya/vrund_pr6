#include<stdio.h>

void main(){
  int i,j;
int v,r;
char a[100];
char b[100];

int z = 0;

printf("Enter your name  :");
scanf("%s",&a);

for(v=0;a[z]!='\0';v++){
	
	z++;
}
  r=z-1;
if(a[z-2]==a[z-r]){
	printf("Word is palindrome ");
	  }else{
	  	printf("Word is not  palindrome");
	  } 	
	
}
