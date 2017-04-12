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

	// Converting hexadecimal number to decimal number
	for (i = strlen(hexadecimal) - 1; i >= 0; i--) {
		//search currect character in hexDigits array
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
	char hex[17], bin[65] = "";
	int i = 0;

	//Input hexadecimal number from user	
	printf("Enter any hexadecimal number: ");
	scanf("%s", hex);

	//Extract first digit and find binary of each hex digit
	
	for (i = 0; hex[i] != '\0'; i++)
	{
		switch (hex[i])
		{
		case '0':
			strcat(bin, "0000");
			break;
		case '1':
			strcat(bin, "0001");
			break;
		case '2':
			strcat(bin, "0010");
			break;
		case '3':
			strcat(bin, "0011");
			break;
		case '4':
			strcat(bin, "0100");
			break;
		case '5':
			strcat(bin, "0101");
			break;
		case '6':
			strcat(bin, "0110");
			break;
		case '7':
			strcat(bin, "0111");
			break;
		case '8':
			strcat(bin, "1000");
			break;
		case '9':
			strcat(bin, "1001");
			break;
		case 'a':
		case 'A':
			strcat(bin, "1010");
			break;
		case 'b':
		case 'B':
			strcat(bin, "1011");
			break;
		case 'c':
		case 'C':
			strcat(bin, "1100");
			break;
		case 'd':
		case 'D':
			strcat(bin, "1101");
			break;
		case 'e':
		case 'E':
			strcat(bin, "1110");
			break;
		case 'f':
		case 'F':
			strcat(bin, "1111");
			break;
		default:
			printf("Invalid hexadecimal input.");
		}
	}
	printf("Binary number = %s\n", bin);
	
}
void binToDec(int binDec)
{
	long int binaryNumber, decimalNumber = 0, j = 1, remainder;

	printf("Enter any number any binary number: ");
	scanf("%ld", &binaryNumber);

	while (binaryNumber != 0) {
		remainder = binaryNumber % 10;
		decimalNumber = decimalNumber + remainder*j;
		j = j * 2;
		binaryNumber = binaryNumber / 10;
	}

	printf("Equivalent decimal value: %ld\n", decimalNumber);
}
void binToHex(int binHex)
{
	long int binaryNumber, hexadecimalNumber = 0, j = 1, remainder;

	printf("Enter any number any binary number: ");
	scanf("%ld", &binaryNumber);

	while (binaryNumber != 0) {
		remainder = binaryNumber % 10;
		hexadecimalNumber = hexadecimalNumber + remainder*j;
		j = j * 2;
		binaryNumber = binaryNumber / 10;
	}

	printf("Equivalent hexadecimal value: %lX", hexadecimalNumber);
}