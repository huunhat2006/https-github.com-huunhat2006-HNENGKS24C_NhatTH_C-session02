#include <stdio.h>

int main()
{
	// khai bao bien
	int firstNumber,secondNumber,total,signal,accumulation,division;
	
	// nhap gia tri cho bien num1 tu ban phim 
	printf("Moi ban nhap gia tri thu nhat");
	scanf("%d",&firstNumber);
	
	// nhap gia tri cho bien num2 tu ban phim 
	printf("Moi ban nhap gia tri thu hai");
	scanf("%d",&secondNumber);
	
	total = firstNumber + secondNumber;
	
	 printf("%d + %d =%d\n",firstNumber,secondNumber,total);
	 
	signal = firstNumber - secondNumber;
	
	 printf("%d - %d =%d\n",firstNumber,secondNumber,signal);
	
	accumulation = firstNumber * secondNumber;
	
	 printf("%d * %d =%d\n",firstNumber,secondNumber,accumulation);
	
	division = firstNumber / secondNumber;
	
	 printf("%d / %d =%d\n",firstNumber,secondNumber,division);
	 
	   return 0; 
} 
