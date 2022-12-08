#include "complex.h"
using namespace std;
#include <iostream>
int main()
{
	complex number1, number2,number3;
	

	printf_s("Real part of the first number: ");
	scanf_s("%f", &number1.real);
	printf_s("Imaginary part of the first number: ");
	scanf_s("%f", &number1.imaginary);
	if(number1.imaginary>=0)
	printf_s("The first number is:  %.2f+%.2fi\n",number1.real,number1.imaginary);
	else
	printf_s("The first number is:  %.2f%.2fi\n", number1.real, number1.imaginary);


	printf_s("\nReal part of the second number: ");
	scanf_s("%f", &number2.real);
	printf_s("Imaginary part of the second number: ");
	scanf_s("%f", &number2.imaginary);
	if (number2.imaginary >= 0)
	printf_s("The second number is:  %.2f+%.2fi\n ", number2.real, number2.imaginary);
	else
		printf_s("The second number is:  %.2f%.2fi \n", number2.real, number2.imaginary);
	if (number2.real == 0 && number2.imaginary == 0)
	{
		printf("The division can not be done.\n ");
	}
	else {
		
	 number3= division(number1, number2);
	
	if (number3.imaginary < 0)
		printf("\nThe result of the disivion of the two number is %f%fi\n", number3.real, number3.imaginary);
	else

		printf("\nThe result of the disivion of the two number is %f+%fi\n", number3.real, number3.imaginary);

	}
	
	

	return 0;

}