#include<hotel.h>
void receipt()
{
    total_dosa = dosaQTY * DOSA_PRICE;
	total_vadda = vaddaQTY * VADDA_PRICE;
	total_uppma = uppmaQTY * UPPMA_PRICE;
	total_tea = teaQTY * TEA_PRICE;
	total_chapathi = chapathiQTY * CHAPATHI_PRICE;
	subTotal = total_dosa + total_vadda + total_uppma + total_tea + total_chapathi;
	tax = (subTotal * taxRate)/100;
	bill_Amount = subTotal + tax;
    
}