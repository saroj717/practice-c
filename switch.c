# include <stdio.h>

int main(void)
{
    
   int number;
   printf("Enter number between 1 to 7: ");
   scanf("%d", &number);

    switch(number){
        case 1: 
        printf("It is Sunday.\n ");
        break;

        case 2: 
        printf("It is Monday.\n ");
        break;

        case 3: 
        printf("It is Tuesday.\n ");
        break;

        case 4: 
            printf("It is Wednesday.\n ");
            break;

        case 5: 
        printf("It is Thursday.\n ");
        break;

        case 6: 
        printf("It is Friday.\n ");
        break;

        case 7: 
        printf("It is Saturday.\n ");
        break;

        default:
        printf("This is not valid number.");
        break;
    }

    
    return 0;
}       