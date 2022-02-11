#include<stdio.h>
#include <conio.h>

#define DOSA_PRICE   110.00
#define VADDA_PRICE  80.00
#define UPPMA_PRICE  90.20


int main(void)
{

//	Local Declarations

	const double TEA_PRICE = 5.00;
	const double CHAPATHI_PRICE = 48.00;
	const double taxRate = 8.25; 

	int dosaQTY;
	int vaddaQTY;
	int uppmaQTY;
	int teaQTY;
	int chapathiQTY;

	float total_dosa;
	float total_vadda;
	float total_uppma;
	float total_tea;
	float total_chapathi;
	float subTotal;
	float tax;
	float bill_Amount;
	char name[250];
	char cname[250];

//	Statements


	printf("\t\tWelcome To TEJ RESTAURANT\n");
	printf("\n Please Enter the following details. \n\n");
	
	printf("Cashier's Name: \n");
	scanf("%s",name);
	printf("Customer's Name: \n");
	scanf("%s",cname);
	
	printf("\n\t**Enter 0 for none*");

	printf("\nHow many Dosa? \n");
	scanf("%d", &dosaQTY);

	printf("How many Vadda? \n");
	scanf("%d", &vaddaQTY);

	printf("How many Uppma? \n");
	scanf("%d", &uppmaQTY);

	printf("How many Tea? \n");
	scanf("%d", &teaQTY);

	printf("How many Chapathi? \n");
	scanf("%d", &chapathiQTY);
	
	printf("\n Press Any Key To Generate Bill");
	getch();

printf("\n\n\n\t\t\t\t\tLOADING \n\t\t\t\t\t");
int a;
   	for( a=1;a<8;a++) // Change 'a<?' to how many * you want
	{
		Sleep(500);
		printf("...");
	}
      printf("\n\n\t\t\t\t\tBill Generated. \n\n");
      
      system("PAUSE");
      system("CLS");

//	Calculation Statements

	total_dosa = dosaQTY * DOSA_PRICE;
	total_vadda = vaddaQTY * VADDA_PRICE;
	total_uppma = uppmaQTY * UPPMA_PRICE;
	total_tea = teaQTY * TEA_PRICE;
	total_chapathi = chapathiQTY * CHAPATHI_PRICE;
	subTotal = total_dosa + total_vadda + total_uppma + total_tea + total_chapathi;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;



//	Printing Bills
    printf("\n");
    printf("\t\t\t====================================================\n");
	printf("\t\t\t\t      TEJ RESTAURANT BILL \n");
	printf("\t\t\t====================================================\n");
	printf("\t\t\tQTY \t Description \t Unit Price$\t Total Price$\n");
	printf("\t\t\t--- \t ----------- \t ---------- \t -----------\n\n");
	printf("\t\t\t%02d \t DOSA                   %.2f       %10.2f \n", dosaQTY, DOSA_PRICE, total_dosa);
	printf("\t\t\t%02d  \t VADDA                 %.2f       %10.2f  \n", vaddaQTY, VADDA_PRICE, total_vadda);
	printf("\t\t\t%02d   \t UPPMA                %.2f       %10.2f   \n", uppmaQTY, UPPMA_PRICE, total_uppma);
	printf("\t\t\t%02d    \t TEA                 %.2f       %10.2f    \n", teaQTY, TEA_PRICE, total_tea);
	printf("\t\t\t%02d     \t CHAPATHI           %.2f       %10.2f     \n\n", chapathiQTY, CHAPATHI_PRICE, total_chapathi);
	printf("\t\t\t                                           ---------\n\n");
	printf("\t\t\t                           SUBTOTAL       %10.2f   \n", subTotal);
	printf("\t\t\t                           TAX            %10.2f    \n", tax);
	printf("\t\t\t                           Total$         %10.2f     \n", bill_Amount);
	printf("\t\t\t                           Customer         %s     \n", cname);
	printf("\t\t\t                           Cashier          %s     \n", name);
	printf("\t\t\t====================================================\n\n");
	printf("\t\t\t\t\t\tEnd of bill\n\n");

	system("PAUSE");
	system("CLS");
	//main();
	printf("\n\n\n\t\t\tBrought To You By code-projects.org\n\n");
	return 0;
	
}