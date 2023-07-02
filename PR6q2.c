#include<stdio.h>

void main(){
	int i,n;
	char b[n];
	int freq[50]={0};
	
   printf("Enter the length:");
   scanf("%s",&n);
	
	printf("Enter any word :");
	scanf("%s",&b);
	
	for(i=0;i<b[n];i++){
		freq[b[i]-'a']++;
		
	}
for(i=0;i<50;i++){
	printf("%c=>%d \n",i+'a',freq[i]);
}

}

