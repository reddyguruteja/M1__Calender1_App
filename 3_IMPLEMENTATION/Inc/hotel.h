#ifndef __BILL_H__
#define __BILL_H__
#include <stdio.h>


#define DOSA_PRICE   110.00
#define VADDA_PRICE  80.00
#define UPPMA_PRICE  90.20

  

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
    char date[250];

    void start();
    void quantity();
    void receipt();



#endif