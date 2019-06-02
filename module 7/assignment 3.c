#include <stdio.h>
int main(){
    char Arp[10][100];
    printf("%s\n", "\nenter text\n");
    for (int i = 0; i < 10; i++)
    {
        /* code */
        scanf("%100s",Arp[i]);
        // printf("every val is %s", Arp[0]);

    }
    // printf("%s",*Arp);
    
        
    printf("%s\n","\ngive a number to print the last elements\n\n" );
    int ne;
    scanf("%d",&ne);

    for (int j = 10; j >= ne; j--)
    {
        
        printf("%s\n", Arp[j]);
    }


        return 0;

}