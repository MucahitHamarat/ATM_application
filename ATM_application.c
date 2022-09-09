#include <stdio.h>
#include <stdlib.h>

int main (void){

    int miktar,islem,bakiye=1000;
    char yeniden ='y';
    printf("Operations : 1- Balance Inquery, 2- Withdrawing Money, 3- Depositing Money\n");
    
    
    while(yeniden =='y'){
        printf("Please choose an operation : ");
        scanf("%d",&islem);


        switch(islem){

            case 1: 
            printf("Your balance is %d TL .\n",bakiye); 
            break;
            
            case 2:
            printf("The money you want to withdraw :  ",miktar);
            scanf("%d",&miktar);
            bakiye-=miktar;
            printf("Your new balance is %d TL .\n", bakiye);
            break;
            
            case 3:
            printf("The money you want to deposit : ",miktar);
            scanf("%d",&miktar);
            bakiye+=miktar;
            printf("Your new balance is %d TL .\n", bakiye);
            break;

            default :
            printf("It is not a valid number !!!\n");
            break;

        }
    printf("Would you like to make a new operation ? y/n \n");
    scanf("%s",&yeniden);

    }
    printf("Hope to see you again..");
}