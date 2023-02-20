#include <iostream>
#include <cmath>
using namespace std;

//names variable: first number & second number & symbol;

void finteger(int fnum, int snum, char symb); //calculation with integer numbers
void fdoubler(double fnum, double snum, char symb); //calculation with double
void ffloater(float fnum, float snum, char symb); //calculation with float

void fhelper(char synb); //guide

void iswap(int fnum, int snum, char symb); //degree root integer
void fswap(float fnum, float snum, char symb); //degree root float

void frootC(float fnum, float snum, char symb); //root calculation
void froot(float fnum); //just root

void fsin(float x); //sin
void fcos(float y); //cos
void ftan(float x); //tan

void fSinCalc(float x, float y, char symb); //sin calculation
void fCosCalc(float x, float y, char symb); //cos calculation
void ftanCalc(float x, float y, char symb); //tan calculation

int main()
{	
	for(;;){
	int conh;

	int numi1, numi2; //name variable: name,type,numbering;
	double numd1, numd2; 
	float numf1, numf2;
	char sym; 
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
		cout<<"Enter symbol for choose module help 1 from 8\n";
			cin>>sym;
		fhelper(sym);
	}

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

	if(conh == 5) //degree integer;
	{
		
	cout<<"Enter integer first number\n";
		cin>>numi1;

	cout<<"Enter integer second number\n";
		cin>>numi2;

	cout<<"Enter symbol for condition program(+,-,/,%,*)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\n";
		cin>>sym;

	iswap(numi1, numi2, sym); }


	if(conh == 6) //degree float;
	{
		cout<<"Enter float first number\n";
		cin>>numf1;

	cout<<"enter float second number\n";
		cin>>numf2;

	cout<<"Enter symbol for condition program(+,-,/,*)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\n";
		cin>>sym;

	fswap(numf1, numf2, sym);
	}

	if(conh == 7) //calculation root;
	{
		cout<<"Enter float first number\n";
		cin>>numf1;

	cout<<"enter float second number\n";
		cin>>numf2;

	cout<<"Enter symbol for condition(+,-,/,*) program\n";
	cout<<"if you need to find out the root of two numbers(!)\n";
		cin>>sym;

		frootC(numf1, numf2, sym);
	} 
	if(conh == 66) {cout<<"successful exit from the program\n"; return 0;}

	if(conh == 8)//just number root;
	{
		cout<<"Enter float one number\n";
		cin>>numf1;
		froot(numf1);
	}

	if(conh == 9) //sin;
	{
		cout<<"Enter float num in order to learn sin\n";
		cin>>numf1;
		fsin(numf1);
	}

	if(conh == 10) //cos;
	{
		cout<<"Enter float num in order to learn cos\n";
		cin>>numf2;
		fcos(numf2);
	}

	if(conh == 11) //tan;
	{
		cout<<"Enter float num in order to learn cos\n";
		cin>>numf1;
		ftan(numf1);
	}

	if(conh == 12) //calculation sin;
	{
		cout<<"Enter first float number and condititon(+,-,*,/) and yet second\n";
		cout<<"it`s need in order to calculation sin\n";
		cin>>numf1>>sym>>numf2;
		fSinCalc(numf1,numf2,sym);
	}
	if(conh == 13) //calculation cos;
	{
		cout<<"Enter first float number and condititon(+,-,*,/) and yet second num\n";
		cout<<"it`s need in order to calculation cos\n";
		cin>>numf1>>sym>>numf2;
		fCosCalc(numf1,numf2,sym);
	}
	if(conh == 14) //calculation tan;
	{
		cout<<"Enter first float number and condititon(+,-,*,/) and yet second num\n";
		cout<<"it`s need in order to calculation tan\n";
		cin>>numf1>>sym>>numf2;
		ftanCalc(numf1,numf2,sym);
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
	cout<<"Enter symbol ~ for exit from program\n\n";
	switch(synb)
	{
	case '2':
		cout<<"it`s module for integer calculation\n";
		break;
	case '3':
		cout<<"it`s module for double calculation\n";
		break;
	case '4':
		cout<<"it`s module for float calculation\n";
		break;
	case '5':
		cout<<"It`s module for comparison and true or false\n";
		break;
	case '6':
		cout<<"it`s module need in order to you can use the program for it`s intended purpose\n";
		break;
	case '7':
		cout<<"it`s moudle need in order to calculation root\n";
		break;
	case '8':
		cout<<"it`s module need in order to build root\n";
		break;
	case '~':
		cout<<"exit from program in main menu\n";
		break;
	}
}

void iswap(int fnum, int snum, char symb) //calculation degree integer;
{
	int deg1 = fnum * fnum;
	int deg2 = snum * snum;
	int result;

	switch(symb)
	{
	case '+':
		result = deg1 + deg2;
		cout<<result<<endl;
		break;
	case '-':
		if(deg1 > deg2){result = deg2 - deg1; cout<<result<<endl;}
			else {result = deg1 - deg2; cout<<result<<endl;}
		break;
	case '/':
		result = deg1 / deg2;
		cout<<result<<endl;
		break;
	case '%':
		result = deg1 % deg2;
		cout<<result<<endl;
		break;
	case '*':
		result = deg1 * deg2;
		cout<<result<<endl;
		break;
	case '!':
		cout<<"it`s first number degree:\t"<<deg1<<"\tit`s second number degree:\t"<<deg2<<endl;	
		break;
	}
}

void fswap(float fnum, float snum, char symb) //calculation degree float;
{
	float result;
	float deg1 = fnum * fnum;
	float deg2 = snum * snum;

	switch(symb)
	{
	case '+':
		result = fnum + snum;
		cout<<result<<endl;
		break;
	case '-':
		if(snum > fnum) {result = snum - fnum; cout<<result<<endl;}
			else {result = fnum - snum; cout<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<result<<endl;
		break;
	case '*':
		result = fnum * snum;
		cout<<result<<endl;
		break;
	case '!':
		cout<<"it`s first num degree:\t"<<deg1<<"\tit`s second num degree:\t"<<deg2<<endl;
		break;
	}
}

void frootC(float fnum, float snum, char symb) //calculation number root;
{
	float result;
	float numr1 = sqrt(fnum);
	float numr2 = sqrt(snum);

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
		cout<<"it`s first num root:\t"<<sqrt(numr1)<<"\tit`s second num root:\t"<<sqrt(numr2)<<endl;
		break;
	}
}

void froot(float fnum) //just number root;
{
	cout<<"This root is equal to:\t"<<sqrt(fnum)<<endl;
}

void fsin(float x)
{
	float result;
	result = sin(x);
	cout<<"sin(x) = "<<result<<endl;
}

void fcos(float y)
{
	float result;
	result = cos(y);
	cout<<"sin(y) = "<<result<<endl;
}

void ftan(float x)
{
	float result;
	result = tan(x);
	cout<<"tan(x) = "<<result<<endl;
}

void fSinCalc(float x, float y, char symb) //function sin calculation;
{
	float res1;
	float res2;
	float result;

	res1 = sin(x);
	res2 = sin(y);

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
void fCosCalc(float x, float y, char symb) //cos calculation;
{
	float res1;
	float res2;
	float result;

	res1 = cos(x);
	res2 = cos(y);

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

void ftanCalc(float x, float y, char symb) //tan calculation;
{
	float res1;
	float res2;
	float result;

	res1 = tan(x);
	res2 = tan(y);

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
} //last update version 0.7