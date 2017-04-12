#include <stdio.h>
#include <math.h>
#include <string.h>  

void decToHex(int decHex);
void decToBin(int decBin);
void hexToDec(int hexDec);
void hexToBin(int hexBin);
void binToDec(int binDec);
void binToHex(int binHex);

int main()
{
	int select;
	int decHex = 0, decBin = 0, hexDec = 0, hexBin = 0, binDec = 0, binHex = 0;

	printf("1)Decimal To Hexadecimal\n");
	printf("2)Decimal To Binary\n");
	printf("3)Hexadecimal To Decimal\n");
	printf("4)Hexadecimal To Binary\n");
	printf("5)Binary To Decimal\n");
	printf("6)Binary To Hexadecimal\n");

	printf("Select Your Convert: ");
	scanf_s("%d", &select);
	system("cls");

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
	printf("Enter The Decimal Number:");
	scanf_s("%d", &decHex);
	printf("Hexadecimal Number Is: %x\n", decHex);

}

void decToBin(int decBin)
{
	int remainder;
	printf("Enter The Decimal Number:");
	scanf_s("%d", &decBin);
	while (decBin >= 1)
	{
		remainder = decBin % 2;
		printf("%d\n", remainder);
		decBin = decBin / 2;
	}

}
void hexToDec(int hexDec)
{
	long long decimalNumber = 0;
	char hexDigits[16] = { '0', '1', '2', '3', '4', '5', '6', '7', '8',
		'9', 'A', 'B', 'C', 'D', 'E', 'F' };
	char hexadecimal[30];
	int i, j, power = 0, digit;

	printf("Enter a Hexadecimal Number\n");
	scanf("%s", hexadecimal);

	/* Converting hexadecimal number to decimal number */
	for (i = strlen(hexadecimal) - 1; i >= 0; i--) {
		/*search currect character in hexDigits array */
		for (j = 0; j<16; j++) {
			if (hexadecimal[i] == hexDigits[j]) {
				decimalNumber += j*pow(16, power);
			}
		}
		power++;
	}

	printf("Decimal Number : %ld\n", decimalNumber);
}
void hexToBin(int hexBin)
{
	
}
void binToDec(int binDec)
{
	printf("Enter The Decimal Number:");
	scanf_s("%d", &binDec);
	printf("Hexadecimal Number Is: %n\n", binDec);
}
void binToHex(int binHex)
{
	printf("Enter The Decimal Number:");
	scanf_s("%d", &binHex);
	printf("Hexadecimal Number Is: %x\n", binHex);
}