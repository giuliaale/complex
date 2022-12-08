using namespace std;
#include <iostream>
#include "complex.h"
complex multiplication(complex a, complex b)
{
 complex c;
 c.real=a.real*b.real-a.imaginary*b.imaginary;
 c.imaginary=a.imaginary*b.real+a.real*b.imaginary;
 
	
	return c;
}

 complex add(complex  a, complex b)
{ 
  complex c;
  c.real=a.real+b.real;
  c.imaginary=a.imaginary+b.imaginary;
	return c;

}
complex subtraction(complex a, complex b)
 {
  complex c;
  c.real=a.real-b.real;
  c.imaginary=a.imaginary-b.imaginary;
	 
	return c;
 }

complex division(complex number1, complex number2)
{
	complex number3;
	float div;
	
	{
		
		div = number2.real * number2.real + number2.imaginary * number2.imaginary;
		
		number3.real =( number1.real*number2.real+number1.imaginary*number2.imaginary)/ div;
		number3.imaginary =(number1.imaginary*number2.real-number1.real*number2.imaginary) /div;
		
		return number3;
	}
}