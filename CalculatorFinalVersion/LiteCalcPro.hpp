//Add log(b)^a

#include <iostream>
#include <cmath>
using namespace std;

void fhelperPRO(char synb); //guide pro calculator

void fSinRad(double n); //sin
void fCosRad(double n); //cos
void fTanRad(double n); //tan

void fSinCalcRad(double x, double y, char symb); //sin calculation
void fCosCalcRad(double x, double y, char symb); //cos calculation
void fTanCalcRad(double x, double y, char symb); //tan calculation

void fSinCosCalcRad(double x, double y, char symb); //sin & cos calculation
void fSinTanCalcRad(double x, double y, char symb); //tan & sin calculation
void fCosTanCalcRad(double x, double y, char symb); //cos & tan calculation


void fpi1(double n); //num pi (+,-,*,/) your number
void fpi2(double n);
void fpi3(double n);
void fpi4(double n);

void fpiCalc(char symb); //calculation with pi, pi+pi, pi-pi

void fpiCalcPlusFirst(double fnum, double snum, char symb); //calculation pi plus 	prototype: pi - n + n
void fpiCalcMinusFirst(double fnum, double snum, char symb); // calculation pi minus
void fpiCalcMFirst(double fnum, double snum, char symb); //calculation pi muliplication
void fpiCalcDivFirst(double fnum, double snum, char symb); //calculation pi division

void fpiCalcPlusSecond(double fnum, double snum, char symb); //calculation pi plus 	prototype: pi + n * n + pi
void fpiCalcMinusSecond(double fnum, double snum, char symb); // calculation pi minus
void fpiCalcMSecond(double fnum, double snum, char symb); //calculation pi muliplication
void fpiCalcDivSecond(double fnum, double snum, char symb); //calculation pi division


void fModuleCalc(double fnum, double snum, char symb); //calculation module
void fModuleCalcSqrt(double fnum, double snum, char symb); //calculation module whith degree
void fModuleCalcDegPro(double fnum, double snum, double x, double y, char symb); //calculation module with degree that user set param for degree, prototype: |m|^x + |m|^y


void fe1(double n); //num e (+,-,*,/) number
void fe2(double n);
void fe3(double n);
void fe4(double n);

void feCalc(char symb); //calculation with e, e+e, e-e

void feCalcPlusFirst(double fnum, double snum, char symb); //calculation e plus 	prototype: e / n * n
void feCalcMinusFirst(double fnum, double snum, char symb); // calculation e minus
void feCalcMFirst(double fnum, double snum, char symb); //calculation e muliplication
void feCalcDivFirst(double fnum, double snum, char symb); //calculation e division


void feCalcPlusSecond(double fnum, double snum, char symb); //calculation e plus 	prototype: e - n + n - e
void feCalcMinusSecond(double fnum, double snum, char symb); // calculation e minus
void feCalcMSecond(double fnum, double snum, char symb); //calculation e muliplication
void feCalcDivSecond(double fnum, double snum, char symb); //calculation e division


const double PI = 3.1415926535;
const double e = 2.7182818284;


void fhelperPRO(char symb)
{
	switch(symb)
	{
	case '2':
		cout<<"\nCalc>\tThis module is necessary in order to find the sin, the hotkey(2)\n\t";
		cout<<"This module is necessary in order to find the cos, the hotkey(3)\n\t";
		cout<<"This module is necessary in order to find the tan, the hotkey(4)\n";
		break;

	case '3':
		cout<<"\nCalc>\tThis is the module needed to calculate the sin, the hotkey(5)\n\t";
		cout<<"This module, necessary for calculating the cos, is a hotkey(6)\n\t";
		cout<<"This module, necessary for calculating the tan, is a hotkey(7)\n";
		break;

	case '4':
		cout<<"\nCalc>\tThis module is needed to calculate mathematical modules, hotkey(8)\n\t";
		cout<<"This module is needed to calculate math modules with degrees, hotkey(9)\n\t";
		cout<<"This module is needed to calculate math modules with degrees,\n\tof parameters that the user has specified, hotkey(10)\n";
		break;
	case '5':
		cout<<"\nCalc>\tThis module is necessary in order to find the number e, the hotkey(11)\n\t";
		cout<<"This module is required for, calculation of the number e, hotkey(12)\n";
		break;

	case '6':
	cout<<"\nCalc>\tThis module is designed to calculate pi numbers.\n\tNarimer: e + e or e - e.\n\tyou will only need to enter the character(+,-,*,/)hotkey(13\n";
		break;	
	}
}

void fSinRad(double n)
{
	double result;
	result = sin(n);
		printf("Calc> sin(n) = %f\n", result);
}

void fCosRad(double n)
{
	double result;
	result = cos(n);
		printf("Calc> cos(n) = %f\n", result);
}

void fTanRad(double n)
{
	double result;
	result = tan(n);
		printf("Calc> tan(n) = %f\n", result);
}

void fSinCalcRad(double x, double y, char symb) //sin calculation
{
	double res1;
	double res2;
	double result;

	res1 = sin(x);
	res2 = sin(y);

	switch(symb){

	case '+':
	result = res1 + res2;
		printf("Calc> %f + %f = %f\n", res1, res2, result);
		break;

	case '-':
	result = res1 - res2;
		printf("Calc> %f - %f = %f\n", res1, res2, result);
		break;

	case '*':
	result = res1 * res2;
		printf("Calc> %f * %f = %f\n", res1, res2, result);
		break;

	case '/':
	result = res1 / res2;
		printf("Calc> %f / %f = %f\n", res1, res2, result);
		break;
	}
}

void fCosCalcRad(double x, double y, char symb) //cos calculation
{
	double res1;
	double res2;
	double result;

	res1 = cos(x);
	res2 = cos(y);

	switch(symb){

	case '+':
	result = res1 + res2;
		printf("Calc> %f + %f = %f\n", res1, res2, result);
		break;

	case '-':
	result = res1 - res2;
		printf("Calc> %f - %f = %f\n", res1, res2, result);
		break;

	case '*':
	result = res1 * res2;
		printf("Calc> %f * %f = %f\n", res1, res2, result);
		break;

	case '/':
	result = res1 / res2;
		printf("Calc> %f / %f = %f\n", res1, res2, result);
		break;
	}
}

void fTanCalcRad(double x, double y, char symb) //tan calculation
{
	double res1;
	double res2;
	double result;

	res1 = tan(x);
	res2 = tan(y);

	switch(symb){

	case '+':
	result = res1 + res2;
		printf("Calc> %f + %f = %f\n", res1, res2, result);
		break;

	case '-':
	result = res1 - res2;
		printf("Calc> %f - %f = %f\n", res1, res2, result);
		break;

	case '*':
	result = res1 * res2;
		printf("Calc> %f * %f = %f\n", res1, res2, result);
		break;

	case '/':
	result = res1 / res2;
		printf("Calc> %f / %f = %f\n", res1, res2, result);
		break;
	}
} 


void fSinCosCalcRad(double x, double y, char symb) //sin & cos calculation
{
	double res1;
	double res2;
	double result;

	res1 = sin(x);
	res2 = cos(y);

	switch(symb){

	case '+':
	result = res1 + res2;
		printf("Calc> %f + %f = %f\n", res1, res2, result);
		break;

	case '-':
	result = res1 - res2;
		printf("Calc> %f - %f = %f\n", res1, res2, result);
		break;

	case '*':
	result = res1 * res2;
		printf("Calc> %f * %f = %f\n", res1, res2, result);
		break;

	case '/':
	result = res1 / res2;
		printf("Calc> %f / %f = %f\n", res1, res2, result);
		break;
	}
} 

void fSinTanCalcRad(double x, double y, char symb) //tan & sin calculation
{
	double res1;
	double res2;
	double result;

	res1 = sin(x);
	res2 = tan(y);

	switch(symb){

	case '+':
	result = res1 + res2;
		printf("Calc> %f + %f = %f\n", res1, res2, result);
		break;

	case '-':
	result = res1 - res2;
		printf("Calc> %f - %f = %f\n", res1, res2, result);
		break;

	case '*':
	result = res1 * res2;
		printf("Calc> %f * %f = %f\n", res1, res2, result);
		break;

	case '/':
	result = res1 / res2;
		printf("Calc> %f / %f = %f\n", res1, res2, result);
		break;
	}
}

void fCosTanCalcRad(double x, double y, char symb) //cos & tan calculation
{
	double res1;
	double res2;
	double result;

	res1 = cos(x);
	res2 = tan(y);

	switch(symb){

	case '+':
	result = res1 + res2;
		printf("Calc> %f + %f = %f\n", res1, res2, result);
		break;

	case '-':
	result = res1 - res2;
		printf("Calc> %f - %f = %f\n", res1, res2, result);
		break;

	case '*':
	result = res1 * res2;
		printf("Calc> %f * %f = %f\n", res1, res2, result);
		break;

	case '/':
	result = res1 / res2;
		printf("Calc> %f / %f = %f\n", res1, res2, result);
		break;
	}
} 



void fpi1(double fnum) //number pi + your number or if (+,-,*,/)
{
	double res;
	res = PI + fnum;

	printf("Calc> %f + %f = %f\n", PI, fnum, res);
}

void fpi2(double fnum) 
{
	double res;
	res = PI - fnum;

	printf("Calc> %f + %f = %f\n", PI, fnum, res);
}

void fpi3(double fnum)
{
	double res;
	res = PI * fnum;

	printf("Calc> %f + %f = %f\n", PI, fnum, res);
}

void fpi4(double fnum)
{
	double res;

	res = PI / fnum;
	printf("Calc> %f + %f = %f\n", PI, fnum, res);
}

void fpiCalc(char symb) //just pi calculator :)
{
	double result;

	switch(symb){

		case '+':
		result = PI + PI;
			printf("Calc> PI + PI = %f\n", result);
			break;

		case '-': 
		result = PI - PI;
			printf("Calc> PI - PI = %f\n", result);
			break;

		case '*':
		result = PI * PI;
			printf("Calc> PI * PI = %f\n", result);
			break;

		case '/':
		result = PI / PI;
			printf("Calc> PI / PI = %f\n", result);
			break;
	}
}

void fpiCalcPlusFirst(double fnum, double snum, char symb) //plus number pi
{
	double result;

	switch(symb){

		case '+':
		result = PI + fnum + snum;
			printf("Calc> PI + %f + %f = %f\n", fnum, snum, result);
			break;

		case '-': 
		result = PI + fnum - snum;
			printf("Calc> PI + %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI + fnum * snum;
			printf("Calc> PI + %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI + fnum / snum;
			printf("Calc> PI + %f / %f = %f\n", fnum, snum, result);
			break;
	}
}

void fpiCalcMinusFirst(double fnum, double snum, char symb) //minus number pi
{
	double result;

	switch(symb){

		case '+':
		result = PI - fnum + snum;
			printf("Calc> PI - %f + %f = %f\n", fnum, snum, result);
			break;

		case '-':
		result = PI - fnum - snum;
			printf("Calc> PI - %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI - fnum * snum;
			printf("Calc> PI - %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI - fnum / snum;
			printf("Calc> PI - %f / %f = %f\n", fnum, snum, result);
			break;
	}
}

void fpiCalcMFirst(double fnum, double snum, char symb) //multiplication number pi
{
	double result;

	switch(symb){

		case '+':
		result = PI * fnum + snum;
			printf("Calc> PI * %f + %f = %f\n", fnum, snum, result);
			break;

		case '-':
		result = PI * fnum - snum;
			printf("Calc> PI * %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI * fnum * snum;
			printf("Calc> PI * %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI * fnum / snum;
			printf("Calc> PI * %f / %f = %f\n", fnum, snum, result);
			break;
	}
}

void fpiCalcDivFirst(double fnum, double snum, char symb) //division number pi
{
	double result;
		
	switch(symb){

		case '+':
		result = PI / fnum + snum;
			printf("Calc> PI / %f + %f = %f\n", fnum, snum, result);
			break;

		case '-':
		result = PI / fnum - snum;
			printf("Calc> PI / %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI / fnum * snum;
			printf("Calc> PI / %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI / fnum / snum;
			printf("Calc> PI / %f / %f = %f\n", fnum, snum, result);
			break;
	}
}



void fpiCalcPlusSecond(double fnum, double snum, char symb) //param plus number pi
{
	double result;

	switch(symb){

		case '+':
		result = PI + fnum + snum + PI;
			printf("Calc> PI + %f + %f + PI = %f\n", fnum, snum, result);
			break;

		case '-':
		result = PI + fnum - snum + PI;
			printf("Calc> PI + %f - %f + PI = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI + fnum * snum + PI;
			printf("Calc> PI + %f * %f + PI = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI + fnum / snum + PI;
			printf("Calc> PI + %f / %f + PI = %f\n", fnum, snum, result);
			break;
	}
}

void fpiCalcMinusSecond(double fnum, double snum, char symb) //minus number pi
{
	double result;

	switch(symb){

		case '+':
		result = PI - fnum + snum - PI;
			printf("Calc> PI - %f + %f - PI = %f\n", fnum, snum, result);
			break;

		case '-':
		result = PI - fnum - snum - PI;
			printf("Calc> PI - %f - %f - PI = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI - fnum * snum - PI;
			printf("Calc> PI - %f * %f - PI = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI - fnum / snum - PI;
			printf("Calc> PI - %f / %f - PI = %f\n", fnum, snum, result);
			break;
	}
}

void fpiCalcMSecond(double fnum, double snum, char symb) //multiplication number pi
{
	double result;

	switch(symb){

		case '+':
		result = PI * fnum + snum * PI;
			printf("Calc> PI * %f + %f * PI = %f\n", fnum, snum, result);
			break;

		case '-':
		result = PI * fnum - snum * PI;
			printf("Calc> PI * %f - %f * PI = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI * fnum * snum * PI;
			printf("Calc> PI * %f * %f * PI = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI * fnum / snum * PI;
			printf("Calc> PI * %f / %f * PI = %f\n", fnum, snum, result);
			break;
	}
}

void fpiCalcDivSecond(double fnum, double snum, char symb) //division number pi
{
	double result;

	switch(symb){

		case '+':
		result = PI / fnum + snum / PI;
			printf("Calc> PI / %f + %f / PI = %f\n", fnum, snum, result);
			break;

		case '-':
		result = PI / fnum - snum / PI;
			printf("Calc> PI / %f - %f / PI = %f\n", fnum, snum, result);
			break;

		case '*':
		result = PI / fnum * snum / PI;
			printf("Calc> PI / %f * %f / PI = %f\n", fnum, snum, result);
			break;

		case '/':
		result = PI / fnum / snum / PI;
			printf("Calc> PI / %f / %f / PI = %f\n", fnum, snum, result);
			break;
	}
}

void fe1(double n) //number e (+,-,*,/) your number
{
	double res;

	res = e + n;
	printf("Calc> e + %f = %f\n", n, res);
}

void fe2(double n)
{
	double res;

	res = e - n;
	printf("Calc> e + %f = %f\n", n, res);
}

void fe3(double n)
{
	double res;
	res = e * n;

	printf("Calc> e + %f = %f\n", n, res);
}

void fe4(double n)
{
	double res;
	res = e / n;

	printf("Calc> e + %f = %f\n", n, res);
}

void feCalc(char symb) //Calculation number e
{
	double result;

	switch(symb){

		case '+':
		result = e + e;
			printf("Calc> e + e = %f\n", result);
			break;

		case '-':
		result = e - e;
			printf("Calc> e - e = %f\n", result);
			break;

		case '*':
		result = e * e;
			printf("Calc> e * e = %f\n", result);
			break;

		case '/':
		result = e / e;
			printf("Calc> e / e = %f\n", result);
			break;
	}
}

void feCalcPlusFirst(double fnum, double snum, char symb) //plus number e
{
	double result;

	switch(symb){

		case '+':
		result = e + fnum + snum;
			printf("Calc> e + %f + %f = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e + fnum - snum;
			printf("Calc> e + %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e + fnum * snum;
			printf("Calc> e + %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e + fnum / snum;
			printf("Calc> e + %f / %f = %f\n", fnum, snum, result);
			break;
	}
}

void feCalcMinusFirst(double fnum, double snum, char symb) //minus number e
{
	double result;

	switch(symb){

		case '+':
		result = e - fnum + snum;
			printf("Calc> e - %f + %f = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e - fnum - snum;
			printf("Calc> e - %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e - fnum * snum;
			printf("Calc> e - %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e - fnum / snum;
			printf("Calc> e - %f / %f = %f\n", fnum, snum, result);
			break;
	}
}

void feCalcMFirst(double fnum, double snum, char symb) //multiplication number e
{
	double result;

	switch(symb){

		case '+':
		result = e * fnum + snum;
			printf("Calc> e * %f + %f = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e * fnum - snum;
			printf("Calc> e * %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e * fnum * snum;
			printf("Calc> e * %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e * fnum / snum;
			printf("Calc> e * %f / %f = %f\n", fnum, snum, result);
			break;
	}
}

void feCalcDivFirst(double fnum, double snum, char symb) //division number e
{
	double result;

	switch(symb){

		case '+':
		result = e / fnum + snum;
			printf("Calc> e / %f + %f = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e / fnum - snum;
			printf("Calc> e / %f - %f = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e / fnum * snum;
			printf("Calc> e / %f * %f = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e / fnum / snum;
			printf("Calc> e / %f / %f = %f\n", fnum, snum, result);
			break;
	}
}

void feCalcPlusSecond(double fnum, double snum, char symb) //plus number e
{
	double result;

	switch(symb){

		case '+':
		result = e + fnum + snum + e;
			printf("Calc> e + %f + %f + e = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e + fnum - snum + e;
			printf("Calc> e + %f - %f + e = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e + fnum * snum + e;
			printf("Calc> e + %f * %f + e = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e + fnum / snum + e;
			printf("Calc> e + %f / %f + e = %f\n", fnum, snum, result);
			break;
	}
}

void feCalcMinusSecond(double fnum, double snum, char symb) //minus number e
{
	double result;

	switch(symb){

		case '+':
		result = e - fnum + snum - e;
			printf("Calc> e - %f + %f - e = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e - fnum - snum - e;
			printf("Calc> e - %f - %f - e = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e - fnum * snum - e;
			printf("Calc> e - %f * %f - e = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e - fnum / snum - e;
			printf("Calc> e - %f / %f - e = %f\n", fnum, snum, result);
			break;
	}
}

void feCalcMSecond(double fnum, double snum, char symb) //multiplication number e
{
	double result;

	switch(symb){

		case '+':
		result = e * fnum + snum * e;
			printf("Calc> e * %f + %f * e = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e * fnum - snum * e;
			printf("Calc> e * %f - %f * e = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e * fnum * snum * e;
			printf("Calc> e * %f * %f * e = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e * fnum / snum * e;
			printf("Calc> e * %f / %f * e = %f\n", fnum, snum, result);
			break;
	}
}

void feCalcDivSecond(double fnum, double snum, char symb) //division number e
{
	double result;

	switch(symb){

		case '+':
		result = e / fnum + snum / e;
			printf("Calc> e / %f + %f / e = %f\n", fnum, snum, result);
			break;

		case '-':
		result = e / fnum - snum / e;
			printf("Calc> e / %f - %f / e = %f\n", fnum, snum, result);
			break;

		case '*':
		result = e / fnum * snum / e;
			printf("Calc> e / %f * %f / e = %f\n", fnum, snum, result);
			break;

		case '/':
		result = e / fnum / snum / e;
			printf("Calc> e / %f / %f / e = %f\n", fnum, snum, result);
			break;
	}
}

void feAndpiCalc(char symb) //just e and pi calculation :)
{
	double result;

	switch(symb){

		case '+':
		result = e + PI;
			printf("Calc> e + PI = %f\n", result);
			break;

		case '-': 
		result = e - PI;
			printf("Calc> e - PI = %f\n", result);
			break;

		case '*':
		result = e * PI;
			printf("Calc> e * PI = %f\n", result);
			break;

		case '/':
		result = e / PI;
			printf("Calc> e / PI = %f\n", result);
			break;
	}
}

void fModuleCalc(double fnum, double snum, char symb) //calculation module
{
	double res1, res2;
	double result;

	res1 = fabs(fnum);
	res2 = fabs(snum);

	switch(symb){
	
		case '+':
		result = res1 + res2;
			printf("Calc> %f + %f = %f\n", res1, res2, result);
			break;

		case '-':
		result = res1 - res2;
			printf("Calc> %f - %f = %f\n", res1, res2, result);
			break;

		case '*':
		result = res1 * res2;
			printf("Calc> %f * %f = %f\n", res1, res2, result);
			break;

		case '/':
		result = res1 / res2;
			printf("Calc> %f / %f = %f\n", res1, res2, result);
			break;
	}
}

void fModuleCalcSqrt(double fnum, double snum, char symb) //calculation module whith degree
{
	double res1, res2, res3, res4;
	double result;

	res1 = fabs(fnum);
	res2 = fabs(snum);

	res3 = pow(res1, 2);
	res4 = pow(res2, 2);

	switch(symb){
	
		case '+':
		result = res3 + res4;
			printf("Calc> %f + %f = %f\n", res3, res4, result);
			break;

		case '-':
		result = res3 - res4;
			printf("Calc> %f - %f = %f\n", res3, res4, result);
			break;

		case '*':
		result = res3 * res4;
			printf("Calc> %f * %f = %f\n", res3, res4, result);
			break;

		case '/':
		result = res3 / res4;
			printf("Calc> %f / %f = %f\n", res3, res4, result);
			break;
	}
}

void fModuleCalcDegPro(double fnum, double snum, double x, double y, char symb)
{
	double res1, res2, res3, res4;
	double result;

	res1 = fabs(fnum);
	res2 = fabs(snum);

	res3 = pow(res1, x);
	res4 = pow(res2, y);

	switch(symb){
	
		case '+':
		result = res3 + res4;
			printf("Calc> %f + %f = %f\n", res3, res4, result);
			break;

		case '-':
		result = res3 - res4;
			printf("Calc> %f - %f = %f\n", res3, res4, result);
			break;

		case '*':
		result = res3 * res4;
			printf("Calc> %f * %f = %f\n", res3, res4, result);
			break;

		case '/':
		result = res3 / res4;
			printf("Calc> %f / %f = %f\n", res3, res4, result);
			break;
	}
}
 