#include <iostream> 
#include <cmath>

using namespace std;

void finteger(int fnum, int snum, char symb); //calculation with integer numbers
void fdoubler(double fnum, double snum, char symb); //calculation with double
void ffloater(float fnum, float snum, char symb); //calculation with float

void fhelper(char synb); //guide base calculator
void fhelperPRO(char synb); //guide pro calculator

void fswap(double fnum, double snum, char symb); //degree root double
void fswapx(double fnum, double snum, double x, double y, char symb); //degree with, set number by default user
void frootC(double fnum, double snum, char symb); //root calculation
void froot(double fnum); //just root

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

void fmoduleCalc(double fnum, double snum, char symb); //caclulation module
void fmoduleCalcDeg(double fnum, double snum, char symb); //caclulation module whith degree
void fmoduleCalcDegPro(double fnum, double snum, double x, double y, char symb); //

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

	cout<<"\nEnter a number to select a standard(1) or advanced calculator(2) or exit the program(66)\n";
	cin>>con;

		if(con == 66) {cout<<"successful exit from the program\n"; return 0;}

	if(con == 1){
 		void fmoduleCalcDeg(double fnum, double snum, char symb);
		void fmoduleCalcDegPro(double fnum, double snum, char symb);
	cout<<"\nEnter a condition to start the program; if you need a reference, enter (1); or to exit the program, enter (66)\n";
	cin>>conh;
		
	if(conh == 1) //guide base calculator
	{
		cout<<"\nEnter the symbol to select the help module 2 of 5\n";
			cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"successful exit from the program\n"; return 0;}

	if(conh == 2) //integer  calculation;
	{
		cout<<"\nEnter the first integer and condition(+,-,/,%,*) to calculate the program and the second number\n";
			cin>>numi1>>sym>>numi2;
	finteger(numi1,numi2,sym);
	}

	if(conh == 3) //double calculation;
	{
		cout<<"\nEnter the first fractional number and the condition (+,-,/,*) to calculate the program and the second number\n";
			cin>>numd1>>sym>>numd2;
	fdoubler(numd1, numd2, sym);
	}

	if(conh == 4) //float calculation;
	{
		cout<<"\nEnter the first floating point number and the condition (+,-,/,*) to calculate the program and the second number\n";
			cin>>numf1>>sym>>numf2;

	ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //degree double;
	{
		cout<<"\nEnter double first number\n";
		cin>>numd1;

	cout<<"Enter double second number\n";
		cin>>numd2;

	cout<<"Enter the symbol for the program execution condition(+,-,/,*)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\n";
		cin>>sym;

	fswap(numd1, numd2, sym);
	}

	if(conh == 6)//degree double with param which input user
	{
		cout<<"\nEnter double first number\n";
		cin>>numd1;

		cout<<"Enter first num degree\n";
		cin>>numd3;

		cout<<"Enter double second number\n";
		cin>>numd2;

		cout<<"Enter second num degree\n";
		cin>>numd4;

	cout<<"Enter the symbol for the program execution condition(+,-,/,*)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\n";
		cin>>sym;

		fswapx(numd1,numd2,numd3,numd4,sym);
	}

	if(conh == 7)//just number root;
	{
		cout<<"\nEnter one number\n";
		cin>>numd1;
		froot(numd1);
	}

	if(conh == 8) //calculation root;
	{
		cout<<"\nEnter first number\n";
		cin>>numd1;

	cout<<"enter number\n";
		cin>>numd2;

	cout<<"Enter the symbol for the program execution condition(+,-,/,*)\n";
	cout<<"if you need to find out the root of two numbers(!)\n";
		cin>>sym;

		frootC(numd1, numd2, sym);
	} 
	
	if(conh == 9) //just number increasing to pi;
	{
		cout<<"\nIt`s module just erected number to PI\n";
		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number PI\n";
		cin>>sym;
		switch(sym)
		{
			case '+':
				cout<<"Enter number PI\n";
				cin>>numd1;
				fpi1(numd1);
				break;
			case '-':
				cout<<"Enter number PI\n";
				cin>>numd1;
				fpi2(numd1);
				break;
			case '*':
				cout<<"Enter number PI\n";
				cin>>numd1;
				fpi3(numd1);
				break;
			case '/':
				cout<<"Enter number PI\n";
				cin>>numd1;
				fpi4(numd1);
				break;
		}
	}

	if(conh == 10) //calculation number pi;
	{
		cout<<"\nIt`s module calculation number PI\n";
		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number PI\n\n";
		
		cin>>sym;
		switch(sym)
		{
			case '+':
				cout<<"Enter first number and condition(+,-,*,/) & second number\n";
				cin>>numd1>>smb>>numd2;
				fpiCalcPlus(numd1, numd2, smb);
				break;
			case '-':
				cout<<"Enter first number and condition(+,-,*,/) & second number\n";
				cin>>numd1>>smb>>numd2;
				fpiCalcMinus(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Enter first number and condition(+,-,*,/) & second number\n";
				cin>>numd1>>smb>>numd2;
				fpiCalcM(numd1, numd2, smb);
				break;
			case '/':
				cout<<"Enter first number and condition(+,-,*,/) & second number\n";
				cin>>numd1>>smb>>numd2;
				fpiCalcDiv(numd1, numd2, smb);
				break;
		}
	}
		}

	
	
	if(con == 2)
	{
		cout<<"\nEnter a condition to start the program; if you need a reference, enter (1); or to exit the program, enter (66)\n";
	cin>>conh;

	if(conh == 1)
	{
		cout<<"\nEnter the symbol to select the help module 2 of 4\n";
			cin>>sym;
		fhelperPRO(sym);
	}

	if(conh == 66) {cout<<"successful exit from the program\n"; return 0;}

	if(conh == 2) //sin;
	{
		cout<<"\nEnter a number to find out the sin\n";
		cin>>numd1;
		fsin(numd1);
	}

	if(conh == 3) //cos;
	{
		cout<<"\nEnter a number to find out the cos\n";
		cin>>numd2;
		fcos(numd2);
	}

	if(conh == 4) //tan;
	{
		cout<<"\nEnter a number to find out the tan\n";
		cin>>numd1;
		ftan(numd1);
	}

	if(conh == 5) //calculation sin;
	{
		cout<<"\nEnter first number and condition(+,-,*,/) & second number\n";
		cout<<"it`s need for calculation sin\n";
		cin>>numd1>>sym>>numd2;
		fSinCalc(numd1,numd2,sym);
	}

	if(conh == 6) //calculation cos;
	{
		cout<<"\nEnter first number and condition(+,-,*,/) & second number)\n";
		cout<<"it`s need for calculation cos\n";
		cin>>numd1>>sym>>numd2;
		fCosCalc(numd1,numd2,sym);
	}

	if(conh == 7) //calculation tan;
	{
		cout<<"\nEnter first number and condition(+,-,*,/) & second number\n";
		cout<<"it`s need for calculation tan\n";
		cin>>numd1>>sym>>numd2;
		ftanCalc(numd1,numd2,sym);
	}

	if(conh == 8) //calculation module;
	{
		cout<<"\nEnter first number and condition(+,-,*,/) & second number\n";
		cin>>numd1>>sym>>numd2;
		fmoduleCalc(numd1,numd2,sym);
	}

	if(conh == 9) // calculation module with degree;
	{
		cout<<"\nEnter first number and condition(+,-,*,/) & second number\n";
		cin>>numd1>>sym>>numd2;
		fmoduleCalcDeg(numd1,numd2,sym);
	}

	if(conh == 10) // calculation module with degree that user set param for degree 
	{
		cout<<"Enter fisrt number\n";
		cin>>numd1;
		cout<<"Enter degree fisrt number\n";
		cin>>numd3;
		cout<<"Enter second number\n";
		cin>>numd2;
		cout<<"Enter degree secind number\n";
		cin>>numd4;
		cout<<"Enter a character for the condition of the program\n";
		cin>>sym;
		fmoduleCalcDegPro(numd1, numd2, numd3, numd4, sym);
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
		cout<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<result<<endl;}
			else {result = fnum - snum; cout<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<result<<endl;
		break;
	case '%':
		result = fnum % snum;
		cout<<result<<endl;
		break;
	case '*':
		result = fnum * snum;
		cout<<result<<endl;
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
		cout<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<result<<endl;}
			else {result = fnum - snum; cout<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<result<<endl;
		break;
	case '%':
		cout<<"Oopes... invalid syntax\n";
		break;
	case '*':
		result = fnum * snum;
		cout<<result<<endl;
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
		cout<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<result<<endl;}
			else {result = fnum - snum; cout<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<result<<endl;
		break;
	case '%':
		cout<<"Oopys... invalid syntax\n";
		break;
	case '*':
		result = fnum * snum;
		cout<<result<<endl;
		break;
	}
}


void fhelper(char synb) //guide base calculator;
{
	switch(synb)
	{
	case '2':
		cout<<"\nThis module is for calculating integer numbers, a hotkey(2)\n";
		cout<<"This module is for calculating fractional numbers, a hotkey(3)\n";
		cout<<"it`s module for type float calculation, hot key (4)\n";
		break;

	case '3':
		cout<<"\nThis module is for calculating the degree, hotkey(5)\n";
		cout<<"This is a module for calculating the degree with a custom default value for the degree, a hotkey(6)\n";
		break;

	case '4':
		cout<<"\nThis module is necessary in order to find the root, the hotkey(7)\n";
		cout<<"This module is for root calculations, a hotkey(8)\n";
		break;

	case '5':
		cout<<"\nThis module is necessary in order to find the number PI, the hotkey(9)\n";
		cout<<"This module is required for, calculation of the number PI, hotkey(10)\n";
		break;	
	}
}

void fhelperPRO(char synb) //guide pro calculator;
{
	switch(synb)
	{
	case '2':
		cout<<"\nThis module is necessary in order to find the sin, the hotkey(2)\n";
		cout<<"This module is necessary in order to find the cos, the hotkey(3)\n";
		cout<<"This module is necessary in order to find the tan, the hotkey(4)\n";
		break;

	case '3':
		cout<<"\nThis is the module needed to calculate the sin, the hotkey(5)\n";
		cout<<"This module, necessary for calculating the cos, is a hotkey(6)\n";
		cout<<"This module, necessary for calculating the tan, is a hotkey(7)\n";
		break;

	case '4':
		cout<<"\nThis module is needed to calculate mathematical modules, hotkey(8)\n";
		cout<<"This module is needed to calculate math modules with degrees, hotkey(9)\n";
		cout<<"This module is needed to calculate math modules with degrees of parameters that the user has specified, hotkey(10)\n";
		break;
	}
}

void fswap(double fnum, double snum, char symb) //calculation degree double;
{
	double result;
	double deg1 = fnum * fnum;
	double deg2 = snum * snum;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = deg1 + deg2;
		cout<<result<<endl;
		break;
	case '-':
		if(deg2 > deg1) {result = deg2 - deg1; cout<<result<<endl;}
			else {result = deg1 - deg2; cout<<result<<endl;}
		break;
	case '/':
		result = deg1 / deg2;
		cout<<result<<endl;
		break;
	case '*':
		result = deg1 * deg2;
		cout<<result<<endl;
		break;
	case '!':
		cout<<"it`s first num degree:\t"<<deg1<<"\nit`s second num degree:\t"<<deg2<<endl;
		break;
	}
}

void fswapx(double fnum, double snum, double x, double y, char symb)
{
	double res1 = pow(fnum,x);
	double res2 = pow(snum, y);
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = res1 + res2;
		cout<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<result<<endl;}
			else {result = res1 - res2; cout<<result<<endl;}
		break;
	case '/':
		result = res1 / res2;
		cout<<result<<endl;
		break;
	case '*':
		result = res1 * res2;
		cout<<result<<endl;
		break;
	case '!':
		cout<<"it`s first num degree:\t"<<res1<<"\nit`s second num degree:\t"<<res2<<endl;
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
		cout<<result<<endl;
		break;
	case '-':
		if(numr2 > numr1) {result = numr2 - numr1; cout<<result<<endl;}
			else {result = numr1 - numr2; cout<<result<<endl;}
		break;
	case '/':
		result = numr1 / numr2;
		cout<<result<<endl;
		break;
	case '*':
		result = numr1 * numr2;
		cout<<result<<endl;
		break;
	case '!':
		cout<<"\nit`s first num root:\t"<<sqrt(numr1)<<"\ntit`s second num root:\t"<<sqrt(numr2)<<endl;
		break;
	}
}

void froot(double fnum) //just find number root;
{
	cout.setf(ios::fixed);
	cout<<"This root is equal to:\t"<<sqrt(fnum)<<endl;
}

void fsin(double x)
{
	double result;
	result = sin(x);
	cout.setf(ios::fixed);
	cout<<"sin(x) = "<<result<<endl;
}

void fcos(double y)
{
	double result;
	result = cos(y);
	cout.setf(ios::fixed);
	cout<<"sin(y) = "<<result<<endl;
}

void ftan(double x)
{
	double result;
	result = tan(x);
	cout.setf(ios::fixed);
	cout<<"tan(x) = "<<result<<endl;
}

void fSinCalc(double x, double y, char symb) //function sin calculation;
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
		cout<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<result<<endl;}
			else {result = res1 - res2; cout<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<result<<endl;
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
		cout<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<result<<endl;}
			else {result = res1 - res2; cout<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<result<<endl;
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
		cout<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<result<<endl;}
			else {result = res1 - res2; cout<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<result<<endl;
		break;
	}
} 

void fpi1(double fnum) //found number pi by deafult set param(+,-,*,/);
{
	double PI = 3.141592653589793;
	double res;

	res = fnum + PI;
	cout.setf(ios::fixed);
	cout<<res<<endl;
}

void fpi2(double fnum) 
{
	double PI = 3.141592653589793;
	double res;

	res = fnum - PI;
	cout.setf(ios::fixed);
	cout<<'-'<<res<<endl;
}

void fpi3(double fnum)
{
	double PI = 3.141592653589793;
	double res;

	res = fnum * PI;
	cout.setf(ios::fixed);
	cout<<res<<endl; 
}

void fpi4(double fnum)
{
	double PI = 3.141592653589793;
	double res;

	res = fnum / PI;
	cout.setf(ios::fixed);
	cout<<res<<endl;
}

void fpiCalcPlus(double fnum, double snum, char symb) //plus number pi;
{
	double PI = 3.141592653589793;
	double res1, res2;
	double result;

	res1 = fnum + PI;
	res2 = snum + PI;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = res1 + res2;
			cout<<result<<endl;
			break;
		case '-':
			if(res2 > res1){result = res2 - res1; cout<<result<<endl;}
			else{result = res1 - res2; cout<<result<<endl;}
			break;
		case '*':
			result = res1 * res2;
			cout<<result<<endl;
			break;
		case '/':
			result = res1 / res2;
			cout<<result<<endl;
			break;
	}
}

void fpiCalcMinus(double fnum, double snum, char symb) //minus number pi;
{
	double PI = 3.141592653589793;
	double res1, res2;
	double result;

	res1 = fnum - PI;
	res2 = snum - PI;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = res1 + res2;
			cout<<result<<endl;
			break;
		case '-':
			if(res2 > res1){result = res2 - res1; cout<<result<<endl;}
			else{result = res1 - res2; cout<<result<<endl;}
			break;
		case '*':
			result = res1 * res2;
			cout<<result<<endl;
			break;
		case '/':
			result = res1 / res2;
			cout<<result<<endl;
			break;
	}
}

void fpiCalcM(double fnum, double snum, char symb) //multiplication number pi;
{
	double PI = 3.141592653589793;
	double res1, res2;
	double result;

	res1 = fnum * PI;
	res2 = snum * PI;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = res1 + res2;
			cout<<result<<endl;
			break;
		case '-':
			if(res2 > res1){result = res2 - res1; cout<<result<<endl;}
			else{result = res1 - res2; cout<<result<<endl;}
			break;
		case '*':
			result = res1 * res2;
			cout<<result<<endl;
			break;
		case '/':
			result = res1 / res2;
			cout<<result<<endl;
			break;
	}
}

void fpiCalcDiv(double fnum, double snum, char symb) //division number pi;
{
	double PI = 3.141592653589793;
	double res1, res2;
	double result;

	res1 = fnum / PI;
	res2 = snum / PI;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = res1 + res2;
			cout<<result<<endl;
			break;
		case '-':
			if(res2 > res1){result = res2 - res1; cout<<result<<endl;}
			else{result = res1 - res2; cout<<result<<endl;}
			break;
		case '*':
			result = res1 * res2;
			cout<<result<<endl;
			break;
		case '/':
			result = res1 / res2;
			cout<<result<<endl;
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
		cout<<result<<endl;
		break;

		case '-':
		if(res2 > res1){result = res2 - res1; cout<<result<<endl;} //error
		else{result = res1 - res2; cout<<result<<endl;}

		case '*':
		result = res1 * res2;
		cout<<result<<endl;
		break;

		case '/':
		result = res1 / res2;
		cout<<result<<endl;
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
		cout<<result<<endl;
		break;

		case '-':
		if(res4 > res3){result = res4 - res3; cout<<result<<endl;} //error
		else{result = res3 - res4; cout<<result<<endl;}

		case '*':
		result = res3 * res4;
		cout<<result<<endl;
		break;

		case '/':
		result = res3 / res4;
		cout<<result<<endl;
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

	switch(symb)
	{
		case '+':
		result = res3 + res4;
		cout<<result<<endl;
		break;

		case '-':
		if(res4 > res3){result = res4 - res3; cout<<result<<endl;} //error
		else{result = res3 - res4; cout<<result<<endl;}

		case '*':
		result = res3 * res4;
		cout<<result<<endl;
		break;

		case '/':
		result = res3 / res4;
		cout<<result<<endl;
		break;
	}
}
//quantiy symbol 1509
//last update version 0.9, now version 0.10;