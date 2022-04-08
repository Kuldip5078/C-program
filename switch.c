// #include <stdio.h>
// int main()
// {
//     int a = 10, b = 5, ch;
//     printf("\n a=%d \t b=%d", a, b);
//     printf("\n1 adition");
//     printf("\n2 subtraction");
//     printf("\n3 multipication");
//     printf("\n4 division");
//     printf("\n enter your choice:");
//     scanf("%d",&ch);
//     switch (ch)
//     {
//     case 1:
//         printf("\n \na+b=%d", a + b);
//         break;
//     case 2:
//         printf("\n \na-b=%d", a - b);
//         break;
//     case 3:
//         printf("\n \na*b=%d", a * b);
//         break;
//     case 4:
//         printf("\n \na/b=%d", a / b);
//         break;

//     default:
//         printf("\n wrng choice...")
//         ;
//         break;
//     }
// }

#include <stdio.h>

unsigned long amount = 57380250, deposit, withdraw;
int choice, pin, i;
char transaction = 'y';
void main()
{

    while (pin != 1097)
    {
        printf("ENTER YOUR PIN NUMBER: ");
        scanf("%d", &pin);
        if (pin != 1097)
            printf("PLEASE ENTER VALID PASSWORD\n");
    }
    do
    {
        printf(" Welcome to ATM Service \n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Cash\n");
        printf("3. Deposit Cash\n");
        printf("4. Quit\n");
        printf("\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("\n YOUR BALANCE =Rs.%lu ", amount);
            break;
        case 2:
            printf("\n ENTER THE AMOUNT: ");
            scanf("%lu", &withdraw);
            if (withdraw % 100 != 0)
            {
                printf("\n PLEASE ENTER THE AMOUNT IN MULTIPLES OF 100");
            }
            else if (withdraw > (amount - 1000))
            
            {
                printf("\n INSUFFICENT BALANCE");
            }
            else
            {
                amount = amount - withdraw;
                printf("\n\n PLEASE COLLECT YOUR CASH");
                printf("\n YOUR CURRENT BALANCE =RS.%lu", amount);
            }
            break;
        case 3:
            printf("\n ENTER THE AMOUNT: ");
            scanf("%lu", &deposit);
            amount = amount + deposit;
            printf(" YOUR BALANCE =RS.%lu", amount);
            break;
        case 4:
            printf("\n THANK YOU USING OUR KOTAK ATM SERVICES");
            break;
        default:
            printf("\n INVALID CHOICE");
        }
        printf("\n\n\n DO U WISH TO HAVE ANOTHER TRANSCATION?(y/n): ");
        fflush(stdin);
        scanf("%c", &transaction);
        if (transaction == 'n' || transaction == 'N')
            i = 1;
    } while (!i);
    printf("\n\n THANKS FOR USING OUR KOTAK ATM SERVICE");
}