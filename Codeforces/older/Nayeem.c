#include<stdio.h>
int main(){

int price,bill,quantity;

char choice;
char Menu,B,F,P,S;
printf("\t\t\t\t\nHELLO!welcone in Mist cafe\t\t\t");
printf("\nHERE is our Menu.");
printf("\nchoose any one option from this menu");
printf("\nB-Burger");
printf("\nF-FRENCH FRIES");
printf("\nP-PIZZA");
printf("\nS-SALAD");
printf("\nchoice:");
scanf("%c", &choice);
switch(choice)
{

case 'B':
    printf("\nok this is burger,which price is 200 RS. ");
    scanf("%d", &price);
    printf("\nEnter the quantity of burger:");
    scanf("%d", &quantity);

    printf("\nYour total bill is = price*quantity");
    scanf("%d%d", &price,&quantity);
    break;
    }
}