#include <stdio.h>

int main()
{
	// khai bao bien 
	int firstNumber,perimeter,acreage;
	
	// nhap gia tri canh hinh vuong cho bien firstNumber
	printf("Moi nhap gia tri canh hinh vuong:");
	scanf("%d",&firstNumber);
	
    perimeter = firstNumber * 4;
    
    printf("Chu Vi hinh vuong la: 4 * %d =%d\n",firstNumber,perimeter);
    
    acreage = firstNumber * firstNumber;
	
	printf("Dien tich hinh vuong la: %d * %d =%d",firstNumber,firstNumber,acreage);
    
	 return 0;
}
