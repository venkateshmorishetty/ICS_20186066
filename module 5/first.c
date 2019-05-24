#include<stdio.h>
int findindex(char source[],char searchfor[]);
int main(void) {
    char main[100], sub[50];
    printf("enter the main string: ");
    gets(main);
    printf("enter the sub string: ");
    gets(sub);

    int match;
    match = findindex(main, sub);
    printf("%d\n", match);

}
int findindex(char string[],char sub[]) {
    int i,j,k, index, check;
    index = -1;
    for(i = 0; string[i] != '\0'; i++) {
        for(j = i, k = 0; string[j] == sub[k] && string[j] != '\0'; j++, k++) {
            check = 1;
        }
        if(check == 1) {
            index = i;
        }
        check = 0;
    }
    return index;
}