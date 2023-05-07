#include <iostream>
#include <cmath>
using namespace std;

void fhelper(char synb); //guide base calculator

void finteger(int fnum, int snum, char symb); //integer calculation
//template <class T> void fCalc(T fnum, T snum, char symb); //calculation double or float

void fCalcDeg(double fnum, double snum, char symb); //degree root numbers
void fCalcDegPro(double fnum, double snum, double x, double y, char symb); //degree with, set number by default user 

void fCalcRootOne(double fnum, double snum, char symb); //root calculation
void fCalcRootTwo(double fnum, double snum, char symb); //root calculation
void fRoot(double fnum); //just root numbers math operations


void fhelper(char synb) //guide base calculator;
{
	switch(synb){
	case '2':
		cout<<"\nCalc>\tThis module is for calculating integer numbers, a hotkey(2)\n\t";
		cout<<"This module for calculation double numbers, a hotkey(3)\n\t";
		cout<<"This module for calculation float numbers, hot key (4)\n";
		break;

	case '3':
		cout<<"\nCalc>\tThis module is for calculating the degree, hotkey(5)\n\t";
		cout<<"This is a module for calculating the degree,\n\twith a custom default value for the degree, a hotkey(6)\n";
		break;

	case '4':
		cout<<"\nCalc>\tThis module is necessary in order to find the root, the hotkey(7)\n\t";
		cout<<"This module is for root calculations, a hotkey(8)\n";
		break;

	case '5':
		cout<<"\nCalc>\tThis module is necessary in order to find the number PI, the hotkey(9)\n\t";
		cout<<"This module is required for, calculation of the number PI, hotkey(10)\n";
		break;
	case '6':
		cout<<"\nCalc>\tThis module for calculation number pi or e\nPrototype: pi + pi or e - e\nYou enter symbol for choose action(+,-,*,/), hotkey(11)\n";
		break;
	}
}

void finteger(int fnum, int snum, char symb)
{
	int result;

	switch(symb){
	
	case '+':
	result = fnum + snum;
		printf("Calc> %d + %d = %d\n", fnum, snum, result);
		break;

	case '-':
	result = fnum - snum;
		printf("Calc> %d - %d = %d\n", fnum, snum, result);
		break;

	case '*':
	result = fnum * snum;
		printf("Calc> %d * %d = %d\n", fnum, snum, result);
		break;

	case '/':
	result = fnum / snum;
		printf("Calc> %d / %d = %d\n", fnum, snum, result);
		break;

	case '%':
		result = fnum % snum;
		printf("Calc> %d %% %d = %d\n", fnum, snum, result);
		break;
	}
}

template <class T> void fCalc(T fnum, T snum, char symb) //double or float calculation
{
	T result;

	switch(symb){

	case '+':
	result = fnum + snum;
		printf("Calc> %f + %f = %f\n", fnum, snum, result);
		break;

	case '-':
	result = fnum - snum;
		printf("Calc> %f - %f = %f\n", fnum, snum, result);
		break;

	case '*':
	result = fnum * snum;
		printf("Calc> %f * %f= %f\n", fnum, snum, result);
		break;

	case '/':
	result = fnum / snum;
		printf("Calc> %f / %f = %f\n", fnum, snum, result);
		break;
	}
}

void fCalcDeg(double fnum, double snum, char symb)
{
	double res1, res2;
	double result;

	res1 = fnum * fnum;
	res2 = snum * snum;

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

	case '!':
		printf("%f and %f\n", res1, res2);
		break;
	}
}

void fCalcDegPro(double fnum, double snum, double x, double y, char symb)
{
	double res1, res2;
	double result;

	res1 = pow(fnum, x);
	res2 = pow(snum, y);

	switch(symb){
	
	case '+':
	result = res1 + res2;
		printf("Calc> %f + %f = %f\n", res1, res2, result);
		break;

	case '-':
	result = res1 - res2;
		printf("Calc> %f - %f = %f\n", res1, res2, result);
		break;

	case '/':
	result = res1 / res2;
		printf("Calc> %f / %f = %f\n", res1, res2, result);
		break;

	case '*':
	result = res1 * res2;
		printf("Calc> %f * %f = %f\n", res1, res2, result);
		break;
	
	case '!':
		printf("%f and %f\n", res1, res2);
		break;
	}
}

void fRoot(double fnum)
{
	double res;

	res = sqrt(fnum);
	printf("Calc> num %f is equal root %f\n", fnum, res);
}

void fCalcRootOne(double fnum, double snum, char symb)
{
	double res1, res2;
	double result;

	res1 = sqrt(fnum);
	res2 = sqrt(snum);

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

void fCalcRootTwo(double fnum, double snum, char symb)
{
	double res1;
	double result;

	res1 = sqrt(fnum);

	switch(symb){
		
		case '+':
		result = res1 + snum;
			printf("Calc> %f + %f = %f\n", res1, snum, result);
			break;

		case '-':
		result = res1 - snum;
			printf("Calc> %f - %f = %f\n", res1, snum, result);
			break;

		case '*':
		result = res1 * snum;
			printf("Calc> %f * %f = %f\n", res1, snum, result);
			break;

		case '/':
		result = res1 / snum;
			printf("Calc> %f / %f = %f\n", res1, snum, result);
			break;

	}
}