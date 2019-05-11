#include<stdio.h>
#include<math.h>
void main(){
	printf("enter hexa decimal number\n");
	char hex[50];
	gets(hex);
	printf("entered string\n"); 
	puts(hex);
	int size = 0;
	while(hex[size]!='\0'){
		size++;
	}
	// printf("size is%d\n", size);
	int index = 0;
	int result = 0;
	for(int i = size-1; i >= 0; i--){

		if(hex[i]=='A'){
			result = result+10*(int)pow(16, index);
		}else if(hex[i] =='B'){
			result = result+11*(int)pow(16, index);
		}else if(hex[i] == 'C'){
			result = result+12*(int)pow(16, index);
		}else if(hex[i] == 'D'){
			result = result+13*(int)pow(16, index);
		}else if(hex[i] == 'E'){
			result = result+14*(int)pow(16, index);
		}else if(hex[i] == 'F'){
			result = result+15*(int)pow(16, index);
		}else {
			// printf("result %d\n", );
			result = result+(hex[i]-'0')*(int)pow(16, index);
		}
		index++;
	}
	printf("decimal number is %d\n", result);
}