#include <iostream>
using namespace std;

void finteger(int fnum, int snum, char symb);
void fdoubler(double fnum, double snum, char symb);
void ffloater(float fnum, float snum, char symb);

void fhelper(char synb);

void iswap(int fnum, int snum, char symb);


int main()
{	
	label:
	int conh;

	int numi1, numi2;
	double numd1, numd2; 
	float numf1, numf2;
	char sym;
	
	cout<<"\nEnter condtion for launch program or eixt form program(66) or if you need guide, pls enter(4)\n";
	cin>>conh;

	if(conh == 1) //integer  calculation
	{
		cout<<"Enter first integer number & condition for program calculation and second number\n";
	cin>>numi1>>sym>>numi2;

	finteger(numi1,numi2,sym);
	}

	if(conh == 2) //double calculation
	{
		cout<<"Enter first double number & condition for program calculation and second number\n";
	cin>>numd1>>sym>>numd2;

	fdoubler(numd1, numd2, sym);
	}

	if(conh == 3) //float calculation
	{
		cout<<"Enter first float number & condition for program calculation and second number\n";
	cin>>numf1>>sym>>numf2;

	ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //guide
	{
		cout<<"Enter symbol for choose module help 1 from 5\n";
		cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"successful exit from the program\n"; return 0;}
	
	if(conh == 4)
	{
		
	cout<<"Enter first number\n";
		cin>>numi1;

	cout<<"enter second number\n";
		cin>>numi2;

	cout<<"Enter symbol for condition program\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\n";
		cin>>sym;

	iswap(numi1, numi2, sym);

	}

	goto label;
	return 0;
}

void finteger(int fnum, int snum, char symb) //calcuation integer
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
	}
}

void fdoubler(double fnum, double snum, char symb) //calculation double
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
	}
}

void ffloater(float fnum, float snum, char symb) //calculation float 
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
	}
}


void fhelper(char synb) //guide
{
	switch(synb)
	{
	case '1':
		cout<<"it`s module for integer calculation\n";
		break;
	case '2':
		cout<<"it`s module for double calculation\n";
		break;
	case '3':
		cout<<"it`s module for float calculation\n";
		break;
	case '4':
		cout<<"It`s module for comparison and true or false\n";
		break;
	case '5':
		cout<<"it`s module need in order to you can use the program for it`s intended purpose\n";
		break;
	}
}

void iswap(int fnum, int snum, char symb) //degree
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
	case '!':
		cout<<"it`s first number degree:\t"<<deg1<<"\tit`s first number degree:\t"<<deg2<<endl;	
	}
}