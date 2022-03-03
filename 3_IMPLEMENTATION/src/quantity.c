#include <hotel.h>
void quantity()
{
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

    receipt();
}