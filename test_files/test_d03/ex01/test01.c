#include <stdio.h>
#include <unistd.h>

// void ft_putchar(char c) {
// 	write(1, &c, 1);
// }

void ft_ultimate_ft(int *********nbr);

int main () {
	int i;
	int *ptr1;
	int **ptr2;
	int ***ptr3;
	int ****ptr4;
	int *****ptr5;
	int ******ptr6;
	int *******ptr7;
	int ********ptr8;
	int *********ptr9;

	i = 41;
	ptr1 = &i;
	ptr2 = &ptr1;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_ultimate_ft(ptr9);
	printf("%d", i);
	return(0);
}