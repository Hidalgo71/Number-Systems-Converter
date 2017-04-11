#include <stdio.h>

void decToHex(int decHex);
void decToBin(int decBin);
void hexToDec(int hexDec);
void hexToBin(int hexBin);
void binToDec(int binDec);
void binToHex(int binHex);

int main()
{
	int select;
	int decHex = 0 , decBin = 0, hexDec = 0, hexBin = 0, binDec = 0, binHex = 0;

	printf("1)Decimal To Hexadecimal\n");
	printf("2)Decimal To Binary\n");
	printf("3)Hexadecimal To Decimal\n");
	printf("4)Hexadecimal To Binary\n");
	printf("5)Binary To Decimal\n");
	printf("6)Binary To Hexadecimal\n");

	printf("Select Your Convert: ");
	scanf_s("%d", &select);

	switch (select)
	{
	case 1:
		decToHex(decHex);
		break;
	case 2:
		decToBin(decBin);
		break;
	case 3:
		hexToDec(hexDec);
		break;
	case 4:
		hexToBin(hexBin);
		break;
	case 5:
		binToDec(binDec);
		break;
	case 6:
		binToHex(binHex);
		break;
	default:
		printf("Invalid Enter!\n");
		break;
	}
	
	system("PAUSE");
	return 0;
}
void decToHex(int decHex)
{
	int remainder, quot, i;
	int remArray[50];
	printf("Enter The Decimal Number:");
	scanf_s("%d", &decHex);
	while (remainder == 0)
	{
		quot = decHex / 16;
		for ( i = 0; i < ; i++)
		{

		}
		remArray[i]= decHex % 16;
		decHex = quot;
	}


}

void decToBin(int decBin)
{
	int remainder;
	printf("Enter The Decimal Number:");														
	scanf_s("%d", &decBin);
	while (decBin >= 1)
	{
		remainder = decBin % 2;
		printf("%d", remainder);
		decBin = decBin / 2;
	}

}
void hexToDec(int hexDec)
{

}
void hexToBin(int hexBin)
{

}
void binToDec(int binDec)
{
	
}
void binToHex(int binHex)
{

}