#include<stdio.h>
void main(){
	char string[50];
	printf("enter string\n");
	gets(string);
	int len = 0;
	while(string[len]!='\0'){
		len++;

	}
	printf("given string length%d\n",len);
	int start =0;
	int end = len-1;
	while(start<end){
		char temp = string[start];
		string[start] = string[end];
		string[end] = temp;
		start++;
		end--;
	}
	printf("%s\n", string);
}