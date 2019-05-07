#include<stdio.h>
void main(){
	char arr[50];
	printf("enter string\n");
	gets(arr);
	int len = 0;
	while(arr[len]!='\0'){
		len++;
	}
	printf("%d\n", len);
	int i = 0,count = 0;
	while(i<len){
		if(arr[i]==' '){
			count++;
		}
		i++;
	}
	char temp[50];
	int index = 0;
	for(int i = 0; i< len; i++){
		if(arr[i]!=' '){
			// printf("%c\n",arr[i]);
			temp[index]=arr[i];

		}else {
			if(arr[i] == ' '){
				int j;
				temp[index] = ' ';
				for(j = i+1; j<len; j++){
					if(arr[j] != ' '){
						break;
					}
				}
				i = j-1;
			}
		}
		index++;
	}
	printf("%s\n",temp);
}