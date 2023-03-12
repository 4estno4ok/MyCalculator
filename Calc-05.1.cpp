#include <iostream>  //добавить новые модули в справочник
#include <cmath>

using namespace std;

void finteger(int fnum, int snum, char symb); //calculation with integer numbers
void fdoubler(double fnum, double snum, char symb); //calculation with double numbers
void ffloater(float fnum, float snum, char symb); //calculation with float point numbers

void fhelper(char synb); //guide base calculator
void fhelperPRO(char synb); //guide pro calculator

void fCalcDeg(double fnum, double snum, char symb); //degree root numbers
void fCalcDegx(double fnum, double snum, double x, double y, char symb); //degree with, set number by default user 
void frootC(double fnum, double snum, char symb); //root calculation
void froot(double fnum); //just root numbers math operations

void fsin(double x); //sin
void fcos(double y); //cos
void ftan(double x); //tan

void fSinCalc(double x, double y, char symb); //sin calculation
void fCosCalc(double x, double y, char symb); //cos calculation
void ftanCalc(double x, double y, char symb); //tan calculation

void fpi1(double fnum); //set by default number pi(+,-,*,/)
void fpi2(double fnum);
void fpi3(double fnum);
void fpi4(double fnum);

void fpiCalcPlus(double fnum, double snum, char symb); //calculation pi plus
void fpiCalcMinus(double fnum, double snum, char symb); // calculation pi minus
void fpiCalcM(double fnum, double snum, char symb); //calculation pi muliplication
void fpiCalcDiv(double fnum, double snum, char symb); //calculation pi division

void fpiCalc(char symb); //calculation with pi, pi+pi, pi-pi 

void fmoduleCalc(double fnum, double snum, char symb); //caclulation module
void fmoduleCalcDeg(double fnum, double snum, char symb); //caclulation module whith degree
void fmoduleCalcDegPro(double fnum, double snum, double x, double y, char symb); //calculation module with degree that user set param for degree

void fe1(double fnum); //set by default number e (+,-,*,/)
void fe2(double fnum);
void fe3(double fnum);
void fe4(double fnum);

void feCalcPlus(double fnum, double snum, char symb); //calculation e plus
void feCalcMinus(double fnum, double snum, char symb);// calculation e minus

void feCalcM(double fnum, double snum, char symb); //calculation e muliplication
void feCalcDiv(double fnum, double snum, char symb); //calculation e division

void feCalc(char symb); //calculation with e, e+e, e-e


int main()
{	
	for(;;){
	int conh; int con;

	int numi1, numi2; //variable name must contain: name,type,number;
	double numd1, numd2; double numd3, numd4; 
	float numf1, numf2;
	char sym; char smb;
	int i; //A variable that triggers user input; 

	i=cin.rdstate();
        if (i & ios::failbit){
                cerr<<"Incorrect input\n";
                                return 0;
            }

            label: 
	cout<<"\nCalc> Enter a number to select a standard(1);\nadvanced calculator(2);\nexit the program(66)\n\nCalc> ";
		cin>>con;

		if(con == 66) {cout<<"Successful exit from the program 'Calc'\n\n"; return 0;}

	if(con == 1){

	cout<<"\nCalc> Enter a condition to start the program;\nif you need a reference, enter (1);\nor to exit the program, enter (66)\nStep back(77)\n\nCalc> ";
	cin>>conh;
		
	if(conh == 1) //guide base calculator
	{
		cout<<"\nCalc> Enter the symbol to select the help module 2 of 6\n";
			cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"Successful exit from the program 'Calculator'\n\n"; return 0;}
	if(conh == 77) goto label;

	if(conh == 2) //integer  calculation;
	{
		cout<<"\nCalc> This module for calculation ineteger numbers\n";
		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
			cin>>numi1>>sym>>numi2;
	finteger(numi1,numi2,sym);
	}

	if(conh == 3) //double calculation;
	{
		cout<<"\nCalc> This module for calculating fractional numbers\n";
		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
			cin>>numd1>>sym>>numd2;
	fdoubler(numd1, numd2, sym);
	}

	if(conh == 4) //float calculation;
	{
		cout<<"\nCalc> This module for calculation floating point numbers\n";
		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
			cin>>numf1>>sym>>numf2;

	ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //calculating squared numbers || NOT WORK 10^2+45
	{
		cout<<"\nCalc> This module for calculating squared numbers\n";
		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\n";
			cout<<"if you just need to raise two numbers to a power, enter(!)\nCalc> ";
			cin>>numd1>>sym>>numd2;

	fCalcDeg(numd1, numd2, sym);
	}

	if(conh == 6) //calculation with powers of numbers that the user has set
	{
		cout<<"\nCalc> This module for calculation numbers with degree x(y)\n";
		cout<<"Enter first number\nCalc> ";
		cin>>numd1;

		cout<<"Calc> Enter first num degree\nCalc> ";
		cin>>numd3;

			cout<<"\nCalc> Enter second number\nCalc> ";
			cin>>numd2;

			cout<<"Calc> Enter second num degree\nCalc> ";
			cin>>numd4;

	cout<<"Calc> Enter the symbol for the program execution condition(+,-,*,/)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\nCalc> ";
		cin>>sym;

		fCalcDegx(numd1,numd2,numd3,numd4,sym);
	}

	if(conh == 7)//just number root
	{
		cout<<"\nCalc> This`s module raises your number to the square root\n";
			cout<<"Enter one number\nCalc> ";
			cin>>numd1;
		froot(numd1);
	}

	if(conh == 8) //calculation root
	{
		cout<<"\nCalc> This module for calculation roots numbers\n";

			cout<<"Enter first number and symbol(+,-,*,/) and yet second number\nCalc> ";
		cin>>numd1>>sym>>numd2;

		frootC(numd1, numd2, sym);
	} 
	
	if(conh == 9) //calculating your number with pi
	{
		cout<<"\nCalc> This module for calculation your number with pi number\n";
		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number PI\nCalc> ";
		cin>>sym;
		switch(sym)
		{
			case '+': 
				cout<<"\nCalc> Enter number PI\nCalc> ";
				cin>>numd1;
				fpi1(numd1);
				break;
			case '-': 
				cout<<"\nCalc> Enter number PI\nCalc> ";
				cin>>numd1;
				fpi2(numd1);
				break;
			case '*': 
				cout<<"\nCalc> Enter number PI\nCalc> ";
				cin>>numd1;
				fpi3(numd1);
				break;
			case '/': 
				cout<<"\nCalc> Enter number PI\nCalc> ";
				cin>>numd1;
				fpi4(numd1);
				break;
		}
	}

	if(conh == 10) //calculation number pi;
	{
		cout<<"\nCalc> This module calculation numbers PI\n";
		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number PI\n\n";
		cout<<"Attention,\n first a calculation will be made with the numbers that you entered,\n after which the sum of your numbers will be (+, -,*,/) with the number pi\n\nCalc> ";

		cin>>sym;
		switch(sym)
		{
			case '+':
				cout<<"\nCalc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcPlus(numd1, numd2, smb);
				break;

			case '-': 
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcMinus(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcM(numd1, numd2, smb);
				break;
			case '/':
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcDiv(numd1, numd2, smb);
				break;
		}
	}

	if(conh == 11)
	{
		cout<<"\nCalc> This module calculation number PI\nPrototype program(PI (+,-,*,/) PI)";
		cout<<"\n\nCalc> Enter symbol ";
			cin>>sym;
		fpiCalc(sym);
	}
		}

	

	if(con == 2) //The work on finding bugs in the program is over
	{
		cout<<"\nCalc> Enter a condition to start the program;\nif you need a reference, enter (1);\nor to exit the program, enter (66)\nStep back(77)\n\nCalc> ";
			cin>>conh;

	if(conh == 1) //guide pro calc
	{
		cout<<"\nCalc> Enter the symbol to select the help module 2 of 6\nCalc> ";
		cin>>sym;
			fhelperPRO(sym);
	}

	if(conh == 66) {cout<<"Successful exit from the program 'Calculator'\n\n"; return 0;}
	if(conh == 77) goto label;

	if(conh == 2) //sin; //incorrect work
	{
		cout<<"\nCalc> Enter a number to find out the sin\nCalc> ";
		cin>>numd1;
			fsin(numd1);
	}

	if(conh == 3) //cos; //incorrect work
	{
		cout<<"\nCalc> Enter a number to find out the cos\nCalc> ";
		cin>>numd2;
			fcos(numd2);
	}

	if(conh == 4) //tan; incorrect work
	{
		cout<<"\nCalc> Enter a number to find out the tan\nCalc> ";
		cin>>numd1;
			ftan(numd1);
	}

	if(conh == 5) //calculation sin; incorrect work
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\n";
		cout<<"it`s need for calculation sin\nCalc> ";
			cin>>numd1>>sym>>numd2;
			fSinCalc(numd1,numd2,sym);
	}

	if(conh == 6) //calculation cos;  incorrect work
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\n";
		cout<<"it`s need for calculation cos\nCalc> ";
			cin>>numd1>>sym>>numd2;
			fCosCalc(numd1,numd2,sym);
	}

	if(conh == 7) //calculation tan; incorrect work
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\n";
		cout<<"it`s need for calculation tan\nCalc> ";
			cin>>numd1>>sym>>numd2;
			ftanCalc(numd1,numd2,sym);
	}

	if(conh == 8) //calculation module;
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
		cin>>numd1>>sym>>numd2;
			fmoduleCalc(numd1,numd2,sym);
	}

	if(conh == 9) //calculation module with degree; //incorrect work
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc> ";
		cin>>numd1>>sym>>numd2;
			fmoduleCalcDeg(numd1,numd2,sym);
	}

	if(conh == 10) // calculation module with degree that user set param for degree 
	{
		cout<<"Calc> Enter fisrt number\nCalc> ";
		cin>>numd1;
		cout<<"Calc> Enter degree fisrt number\nCalc> ";
		cin>>numd3;
		cout<<"Calc> Enter second number\nCalc> ";
		cin>>numd2;
		cout<<"Calc> Enter degree second number\nCalc> ";
		cin>>numd4;
		cout<<"Calc> Enter a character for the condition(+,-,*,/) of the program\nCalc> ";
		cin>>sym;
			fmoduleCalcDegPro(numd1, numd2, numd3, numd4, sym);
	}

	if(conh == 11) //calculation numbers e
	{
		cout<<"\nCalc> This module for calculation for numbers e\n";
		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number e\n\nCalc> ";
			cin>>sym;

		switch(sym)
		{
			case '+':
				cout<<"Calc> Enter number e\nCalc> ";
				cin>>numd1;
				fe1(numd1);
				break;

			case '-':
				cout<<"Calc> Enter number e\nCalc> ";
				cin>>numd1;
				fe2(numd1);
				break;
			case '*':
				cout<<"Calc> Enter number e\nCalc> ";
				cin>>numd1;
				fe3(numd1);
				break;

			case '/':
				cout<<"Calc> Enter number e\nCalc> ";
				cin>>numd1;
				fe4(numd1);
				break;
		}
	}

	if(conh == 12)
	{
		cout<<"\nCalc> This module calculation number e\n";
		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number e\n\nCalc> ";
			cin>>sym;

		switch(sym)
		{
			case '+': 
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc> ";
				cin>>numd1>>smb>>numd2;
				feCalcPlus(numd1, numd2, smb);
				break;

			case '-': 
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc> ";
				cin>>numd1>>smb>>numd2;
				feCalcMinus(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc> ";
				cin>>numd1>>smb>>numd2;
				feCalcM(numd1, numd2, smb);
				break;

			case '/':
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc> ";
				cin>>numd1>>smb>>numd2;
				feCalcDiv(numd1, numd2, smb);
				break;
		}
	}

	if(conh == 13)
	{

		cout<<"\nCalc> This module calculation number e\nPrototype program(e (+,-,*,/) e)\n";
		cout<<"Calc> ";
			cin>>sym;
		feCalc(sym);
	}

		}
	}
	return 0;
}

void finteger(int fnum, int snum, char symb) //calculation integer;
{
	int result;
	switch(symb)
	{
	case '+':
		result = fnum + snum;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<"Calc> "<<result<<endl;}
			else {result = fnum - snum; cout<<"Calc> "<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<"Calc> "<<result<<endl;
		break;
	case '%':
		result = fnum % snum;
		cout<<"Calc> "<<result<<endl;
		break;
	case '*':
		result = fnum * snum;
		cout<<"Calc> "<<result<<endl;
		break;
	}
}

void fdoubler(double fnum, double snum, char symb) //calculation double;
{
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = fnum + snum;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<"Calc> "<<result<<endl;}
			else {result = fnum - snum; cout<<"Calc> "<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<"Calc> "<<result<<endl;
		break;
	case '%':
		cout<<"Calc> Oopes... invalid syntax\n";
		break;
	case '*':
		result = fnum * snum;
		cout<<"Calc> "<<result<<endl;
		break;
	}
}

void ffloater(float fnum, float snum, char symb) //calculation float;
{
	float result;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = fnum + snum;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<"Calc> "<<result<<endl;}
			else {result = fnum - snum; cout<<"Calc> "<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<"Calc> "<<result<<endl;
		break;
	case '%':
		cout<<"Calc> Oopys... invalid syntax\n";
		break;
	case '*':
		result = fnum * snum;
		cout<<"Calc> "<<result<<endl;
		break;
	}
}


void fhelper(char synb) //guide base calculator;
{
	switch(synb)
	{
	case '2':
		cout<<"\nCalc>\tThis module is for calculating integer numbers, a hotkey(2)\n\t";
		cout<<"This module is for calculating fractional numbers, a hotkey(3)\n\t";
		cout<<"it`s module for type float calculation, hot key (4)\n";
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
		cout<<"\nCalc>\tThis module is designed to calculate pi numbers.\n\tNarimer: pi + pi or pi - pi.\n\tyou will only need to enter the character(+,-,*,/)\n";
		break;
	}
}

void fhelperPRO(char synb) //guide pro calculator;
{
	switch(synb)
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
	cout<<"\nCalc>\tThis module is designed to calculate pi numbers.\n\tNarimer: e + e or e - e.\n\tyou will only need to enter the character(+,-,*,/) hotkey(13)\n";
		break;	
	}
}

void fCalcDeg(double fnum, double snum, char symb) //calculation degree double;
{
	double result;
	double deg1 = fnum * fnum;
	double deg2 = snum * snum;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = deg1 + deg2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(deg2 > deg1) {result = deg2 - deg1; cout<<"Calc> "<<result<<endl;}
			else {result = deg1 - deg2; cout<<"Calc> "<<result<<endl;}
		break;
	case '/':
		result = deg1 / deg2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '*':
		result = deg1 * deg2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '!':
		cout<<"Calc> it`s first num degree:\t"<<deg1<<"\nCalc> it`s second num degree:\t"<<deg2<<endl;
		break;
	}
}

void fCalcDegx(double fnum, double snum, double x, double y, char symb)
{
	double res1 = pow(fnum,x);
	double res2 = pow(snum, y);
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = res1 + res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Calc> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Calc> "<<result<<endl;}
		break;
	case '/':
		result = res1 / res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '*':
		result = res1 * res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '!':
		cout<<"\nCalc> It`s first num degree:\t"<<res1<<"\nCalc> it`s second num degree:\t"<<res2<<endl;
		break;
	}
}

void frootC(double fnum, double snum, char symb) //calculation number root;
{
	double result;
	double numr1 = sqrt(fnum);
	double numr2 = sqrt(snum);

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = numr1 + numr2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(numr2 > numr1) {result = numr2 - numr1; cout<<"Calc> "<<result<<endl;}
			else {result = numr1 - numr2; cout<<"Calc> "<<result<<endl;}
		break;
	case '/':
		result = numr1 / numr2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '*':
		result = numr1 * numr2;
		cout<<"Calc> "<<result<<endl;
		break;

	}
}

void froot(double fnum) //just find number root;
{
	cout.setf(ios::fixed);
	cout<<"Calc> This root is equal to:\t"<<sqrt(fnum)<<endl;
}

void fsin(double x) //incorrect work
{
	double result;
	result = sin(x);
		cout.setf(ios::fixed);
		cout<<"Calc> sin(x) = "<<result<<endl;
}

void fcos(double y) //incorrect work
{
	double result;
	result = cos(y);
		cout.setf(ios::fixed);
		cout<<"Calc> sin(y) = "<<result<<endl;
}

void ftan(double x) //incorrect work
{
	double result;
	result = tan(x);
		cout.setf(ios::fixed);
		cout<<"Calc> tan(x) = "<<result<<endl;
}

void fSinCalc(double x, double y, char symb) //sin calculation;
{
	double res1;
	double res2;
	double result;

	res1 = sin(x);
	res2 = sin(y);

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = res1 + res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Calc> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Calc> "<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<"Calc> "<<result<<endl;
		break;
	}
}

void fCosCalc(double x, double y, char symb) //cos calculation;
{
	double res1;
	double res2;
	double result;

	res1 = cos(x);
	res2 = cos(y);

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = res1 + res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Calc> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Calc> "<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<"Calc> "<<result<<endl;
		break;
	}
}

void ftanCalc(double x, double y, char symb) //tan calculation;
{
	double res1;
	double res2;
	double result;

	res1 = tan(x);
	res2 = tan(y);

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = res1 + res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Calc> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Calc> "<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<"Calc> "<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<"Calc> "<<result<<endl;
		break;
	}
} 

void fpi1(double fnum) //found number pi by deafult set param(+,-,*,/);
{
	double PI = 3.141592653589793;
	double res;

	res = PI + fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl;
}

void fpi2(double fnum) 
{
	double PI = 3.141592653589793;
	double res;

	res = PI - fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl;
}

void fpi3(double fnum)
{
	double PI = 3.141592653589793;
	double res;

	res = PI * fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl; 
}

void fpi4(double fnum)
{
	double PI = 3.141592653589793;
	double res;

	res = PI / fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl;
}

void fpiCalcPlus(double fnum, double snum, char symb) //param plus number pi;
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+': 
			result = PI + fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-': 
			result = PI + fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = PI + fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = PI + fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void fpiCalcMinus(double fnum, double snum, char symb) //minus number pi;
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = PI - fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = PI - fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = PI - fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = PI - fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void fpiCalcM(double fnum, double snum, char symb) //multiplication number pi;
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = PI * fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = PI * fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = PI * fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = PI * fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void fpiCalcDiv(double fnum, double snum, char symb) //division number pi;
{
	double PI = 3.141592653589793;
	double result;


	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = PI / fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = PI / fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = PI / fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = PI / fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void fpiCalc(char symb) //pi calculator;
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+': 
			result = PI + PI;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-': 
			result = PI - PI;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = PI * PI;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = PI / PI;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void fmoduleCalc(double fnum, double snum, char symb)
{
	double res1, res2;
	double result;

	res1 = fabs(fnum);
	res2 = fabs(snum);

	switch(symb)
	{
		case '+':
			result = res1 + res2;
			cout<<"Calc> "<<result<<endl;
			break;

		case '-':
			if(res2 > res1){result = res2 - res1; cout<<"Calc> "<<result<<endl;}
			else{result = res1 - res2; cout<<"Calc> "<<result<<endl;}
			break;
		case '*':
			result = res1 * res2;
			cout<<"Calc> "<<result<<endl;
			break;

		case '/':
			result = res1 / res2;
			cout<<"Calc> "<<result<<endl;
			break;
	}		
}

void fmoduleCalcDeg(double fnum, double snum, char symb)
{
	double res1, res2, res3, res4;
	double result;

	res1 = fabs(fnum);
	res2 = fabs(snum);

	res3 = res1 * res1;
	res4 = res2 * res2;

	switch(symb)
	{
		case '+':
			result = res3 + res4;
			cout<<"Calc> "<<result<<endl;
			break;

		case '-':
			if(res2 > res1){result = res2 - res1; cout<<"Calc> "<<result<<endl;}
			else{result = res1 - res2; cout<<"Calc> "<<result<<endl;}
			break;

		case '*':
			result = res3 * res4;
			cout<<"Calc> "<<result<<endl;
			break;

		case '/':
			result = res3 / res4;
			cout<<"Calc> "<<result<<endl;
			break;
	}	
}

void fmoduleCalcDegPro(double fnum, double snum, double x, double y, char symb)
{
	double res1, res2, res3, res4;
	double result;

	res1 = fabs(fnum);
	res2 = fabs(snum);

	res3 = pow(res1, x);
	res4 = pow(res2, y);
	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = res3 + res4;
			cout<<"Calc> "<<result<<endl;
			break;

		case '-':
			if(res2 > res1){result = res2 - res1; cout<<"Calc> "<<result<<endl;}
			else{result = res1 - res2; cout<<"Calc> "<<result<<endl;}
			break;

		case '*':
			result = res3 * res4;
			cout<<"Calc> "<<result<<endl;
			break;

		case '/':
			result = res3 / res4;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void fe1(double fnum) //found number e by deafult set param(+,-,*,/);
{
	double e = 2.7182818284;
	double res;

	res = e + fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl;
}

void fe2(double fnum) 
{
	double e = 2.7182818284;
	double res;

	res = e - fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl;
}

void fe3(double fnum)
{
	double e = 2.7182818284;
	double res;

	res = e * fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl; 
}

void fe4(double fnum)
{
	double e = 2.7182818284;
	double res;

	res = e / fnum;
	cout.setf(ios::fixed);
	cout<<"Calc> "<<res<<endl;
}

void feCalcPlus(double fnum, double snum, char symb) //plus number e;
{
	double e = 2.7182818284;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = e + fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = e + fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = e + fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = e + fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void feCalcMinus(double fnum, double snum, char symb) //minus number e;
{
	double e = 2.7182818284;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = e - fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = e - fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = e - fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = e - fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void feCalcM(double fnum, double snum, char symb) //multiplication number e;
{
	double e = 2.7182818284;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = e * fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = e * fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = e * fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = e * fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void feCalcDiv(double fnum, double snum, char symb) //division number e;
{
	double e = 2.7182818284;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = e / fnum + snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = e / fnum - snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = e / fnum * snum;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = e / fnum / snum;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}

void feCalc(char symb) //Calculation number e;
{
	double e = 2.7182818284;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = e + e;
			cout<<"Calc> "<<result<<endl;
			break;
		case '-':
			result = e - e;
			cout<<"Calc> "<<result<<endl;
			break;
		case '*':
			result = e * e;
			cout<<"Calc> "<<result<<endl;
			break;
		case '/':
			result = e / e;
			cout<<"Calc> "<<result<<endl;
			break;
	}
}
//quantiy symbol 1509
//last update version 0.10, now version 0.11;