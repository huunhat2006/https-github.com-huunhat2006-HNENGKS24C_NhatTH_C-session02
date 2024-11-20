#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber,secondNumber,perimeter,acreage;
	
	// nhap gia tri chieu dai cho bien firstNumber
	printf("Moi nhap gia tri chieu dai:");
	scanf("%d",&firstNumber);
	
	// nhap gia tri chieu rong cho bien firstNumber
	printf("Moi nhap gia tri chieu dai:");
	scanf("%d",&secondNumber);
	
    perimeter = (firstNumber + secondNumber) *2;
    
    printf("Chu Vi hinh chu nhat la: (%d + %d) *2=%d\n",firstNumber, secondNumber,perimeter);
    
    acreage = firstNumber * secondNumber;
	
	printf("Dien tich hinh chu nhat la: %d * %d =%d",firstNumber,secondNumber,acreage); 
    
	 return 0;
}
