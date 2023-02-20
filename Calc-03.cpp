#include <iostream> 
#include <cmath>
using namespace std;

//names variable: first number & second number & symbol;

void finteger(int fnum, int snum, char symb); //calculation with integer numbers
void fdoubler(double fnum, double snum, char symb); //calculation with double
void ffloater(float fnum, float snum, char symb); //calculation with float

void fhelper(char synb); //guide

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

int main()
{	
	for(;;){
	int conh;

	int numi1, numi2; //name variable: name,type,numbering;
	double numd1, numd2; double numd3, numd4; 
	float numf1, numf2;
	char sym; char smb;
	int i; //check; 

	i=cin.rdstate();
        if (i & ios::failbit){
                cerr<<"Incorrect symbol\n";
                                return 0;
            }

	cout<<"\nEnter condtion for launch program; or if you need guide pls enter(1); or eixt for program(66) \n";
	cin>>conh;
		
	if(conh == 1) //guide
	{
		cout<<"Enter symbol for choose module help 2 from 7\n";
			cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"successful exit from the program\n"; return 0;}

	if(conh == 2) //integer  calculation;
	{
		cout<<"Enter first integer number & condition(+,-,/,%,*) for program calculation and second number\n";
			cin>>numi1>>sym>>numi2;
	finteger(numi1,numi2,sym);
	}

	if(conh == 3) //double calculation;
	{
		cout<<"Enter first double number & condition(+,-,/,*) for program calculation and second number\n";
			cin>>numd1>>sym>>numd2;
	fdoubler(numd1, numd2, sym);
	}

	if(conh == 4) //float calculation;
	{
		cout<<"Enter first float number & condition(+,-,/,*) for program calculation and second number\n";
			cin>>numf1>>sym>>numf2;

	ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //degree double;
	{
		cout<<"Enter double first number\n";
		cin>>numd1;

	cout<<"Enter double second number\n";
		cin>>numd2;

	cout<<"Enter symbol for condition program(+,-,/,*)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\n";
		cin>>sym;

	fswap(numd1, numd2, sym);
	}

	if(conh == 6)//degree double with param which input user
	{
		cout<<"Enter double first number\n";
		cin>>numd1;

		cout<<"Enter first num degree\n";
		cin>>numd3;

		cout<<"Enter double second number\n";
		cin>>numd2;

		cout<<"Enter second num degree\n";
		cin>>numd4;

	cout<<"Enter symbol for condition program(+,-,/,*)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\n";
		cin>>sym;

		fswapx(numd1,numd2,numd3,numd4,sym);
	}

	if(conh == 7)//just number root;
	{
		cout<<"Enter double one number\n";
		cin>>numd1;
		froot(numd1);
	}

	if(conh == 8) //calculation root;
	{
		cout<<"Enter double first number\n";
		cin>>numd1;

	cout<<"enter float double number\n";
		cin>>numd2;

	cout<<"Enter symbol for condition(+,-,/,*) program\n";
	cout<<"if you need to find out the root of two numbers(!)\n";
		cin>>sym;

		frootC(numd1, numd2, sym);
	} 

	if(conh == 9) //sin;
	{
		cout<<"Enter double num in order to learn sin\n";
		cin>>numd1;
		fsin(numd1);
	}

	if(conh == 10) //cos;
	{
		cout<<"Enter double num in order to learn cos\n";
		cin>>numd2;
		fcos(numd2);
	}

	if(conh == 11) //tan;
	{
		cout<<"Enter double num in order to learn cos\n";
		cin>>numd1;
		ftan(numd1);
	}

	if(conh == 12) //calculation sin;
	{
		cout<<"Enter first double number and condititon(+,-,*,/) and yet second\n";
		cout<<"it`s need in order to calculation sin\n";
		cin>>numd1>>sym>>numd2;
		fSinCalc(numd1,numd2,sym);
	}
	if(conh == 13) //calculation cos;
	{
		cout<<"Enter first double number and condititon(+,-,*,/) and yet second num\n";
		cout<<"it`s need in order to calculation cos\n";
		cin>>numd1>>sym>>numd2;
		fCosCalc(numd1,numd2,sym);
	}
	if(conh == 14) //calculation tan;
	{
		cout<<"Enter first double number and condititon(+,-,*,/) and yet second num\n";
		cout<<"it`s need in order to calculation tan\n";
		cin>>numd1>>sym>>numd2;
		ftanCalc(numd1,numd2,sym);
	}

	if(conh == 15) //just number increasing to pi;
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

	if(conh == 16) //calculation number pi;
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


void fhelper(char synb) //guide;
{
	switch(synb)
	{
	case '2':
		cout<<"\nit`s module for type integer calculation, hot key(2)\n";
		cout<<"it`s module for type double calculation, hot key(3)\n";
		cout<<"it`s module for type float calculation, hot key (4)\n";
		break;

	case '3':
		cout<<"\nIt`s module for calculation degree type double, hot key(5)\n";
		cout<<"\nIt`s module for calculation degree with user set by default num for degree, hot key(6)\n";
		break;

	case '4':
		cout<<"\nit`s module need in order to find root, hot key(7)\n";
		cout<<"it`s moudle need in order to calculation root, hot key(8)\n";
		break;

	case '5':
		cout<<"\nIt`s module need in order to find sin, hot key(9)\n";
		cout<<"It`s module need in order to find cos, hot key(10)\n";
		cout<<"It`s module need in order to find tan, hot key(11)\n";
		break;

	case '6':
		cout<<"\nIt`s module need in order to calculation sin, hot key(12)\n";
		cout<<"It`s module need in order to calculation cos, hot key(13)\n";
		cout<<"It`s module need in order to calculation tan, hot key(14)\n";
		break;

	case '7':
		cout<<"\nIt`s module need in order to find number PI, hot key(15)\n";
		cout<<"It`s module need in order to calculation number PI, hot key(16)\n";
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
		cout<<"it`s first num root:\t"<<sqrt(numr1)<<"\ntit`s second num root:\t"<<sqrt(numr2)<<endl;
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
//quantiy symbol 15019
//last update version 0.8, now version 0.9;