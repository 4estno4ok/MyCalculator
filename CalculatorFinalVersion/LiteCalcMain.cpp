#include <iostream>
#include <cmath>
#include "LiteCalcBase.hpp"
#include "LiteCalcPro.hpp"
using namespace std;
	
int main()
{	
	for(;;){
	int conh, con, conc;

	int numi1, numi2; //variable name must contain: name,type,number;
	double numd1, numd2; double numd3, numd4; 
	float numf1, numf2;
	char sym; char smb;
	int i; //A variable that triggers user input; 

	label:

	i=cin.rdstate();
        if (i & ios::failbit){
                cerr<<"Incorrect input\n";
                                return 0;
            }


            cout<<"\n\nHello user_name\n";
	cout<<"\nCalc> Enter a number to select a Standard(1);\nAdvanced calculator(2);\nExit the program(66)\n\nCalc: "; 
		cin>>con;

		if(con == 66) {cout<<"Successful exit from the program 'Calculator'\n\n"; return 0;}

	if(con == 1)
	{

	cout<<"\nCalc> Enter a condition to start the program;\nif you need a REFERENCE, enter (1);\nor to EXIT the program, enter (66)\nSTEP BACK(77)\n\nCalc: ";
	cin>>conh;
		
	if(conh == 1) //guide base calculator
	{
		cout<<"\nCalc>? Enter the symbol to select the help module 2 of 6\n\nCalc: ";
			cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"Successful exit from the program 'Calculator'\n\n"; return 0;}
	if(conh == 77) goto label;

	if(conh == 2) //integer  calculation;
	{
		cout<<"\nCalc> This module for calculation ineteger numbers\n";
		cout<<"Prototype: fnum - snum integers\n\n";
		
		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
			cin>>numi1>>sym>>numi2;
		finteger(numi1,numi2,sym);
	}

	if(conh == 3) //double calculation;
	{
		cout<<"\nCalc> This module for calculating fractional numbers\n";
		cout<<"Prototype: 23.5 - 13.5 = 10\n\n";
		
		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
			cin>>numd1>>sym>>numd2;
		fdoubler(numd1, numd2, sym);
	}

	if(conh == 4) //float calculation;
	{
		cout<<"\nCalc> This module for calculation floating point numbers\n";
		cout<<"Prototype: fnum / snum, but forbidden % because on zero division forbidden\n\n";
		
		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
			cin>>numf1>>sym>>numf2;

		ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //calculating squared numbers
	{
		cout<<"\nCalc> This module for calculating squared numbers\n";
		cout<<"Prototype: (a*a) - (b*b) = c\n\n";

		cout<<"Enter first number and symbol(+,-,*,/) and yet second number\n\n";
			cout<<"if you just need to raise two numbers to a power, enter(!)\nCalc: ";
			cin>>numd1>>sym>>numd2;

		fCalcDeg(numd1, numd2, sym);
	}

	if(conh == 6) //calculation with powers of numbers that the user has set
	{
		cout<<"\nCalc> This module for calculation numbers with degree\n";
		cout<<"Prototype: fnum^x * snum^y\n\n";

		cout<<"Enter first number\nCalc: ";
		cin>>numd1;

		cout<<"Calc> Enter first num degree\nCalc: ";
		cin>>numd3;

			cout<<"\nCalc> Enter second number\nCalc: ";
			cin>>numd2;

			cout<<"Calc> Enter second num degree\nCalc: ";
			cin>>numd4;

	cout<<"Calc> Enter the symbol for the program execution condition(+,-,*,/)\n";
	cout<<"if you just need to raise two numbers to a power, enter(!)\nCalc: ";
		cin>>sym;

		fCalcDegPro(numd1,numd2,numd3,numd4,sym);
	}

	if(conh == 7)//just number root
	{
		cout<<"\nCalc> This`s module raises your number to the square root\n";
			cout<<"Enter one number\nCalc: ";
			cin>>numd1;
		fRoot(numd1);
	}

	if(conh == 8) //calculation root
	{
		cout<<"Calc> Choose prototype\n";

		cout<<"Prototype: root - root = result(1)\n";
		cout<<"Prototype: root - snum = result(2)\n";
			cin>>conc;

		if(conc == 1)
		{
		cout<<"\nCalc> This module for calculation roots numbers\n";

			cout<<"Enter first number and symbol(+,-,*,/) and yet second number\nCalc: ";
		cin>>numd1>>sym>>numd2;

		fCalcRootOne(numd1, numd2, sym);
		}

		if(conc == 2)
		{
			cout<<"\nCalc> This module for calculation roots numbers\n";

			cout<<"Enter first number and symbol(+,-,*,/) and yet second number\nCalc: ";
		cin>>numd1>>sym>>numd2;

		fCalcRootTwo(numd1, numd2, sym);
		}
	} 
	
	if(conh == 9) //calculating your number with pi
	{
		cout<<"\nCalc> This module for calculation your number with pi number\n";
		cout<<"Prototype: pi - your number\n";
			
			cout<<"Choose action(+,-,*,/)\nCalc: ";

		cin>>sym;
		switch(sym)
		{
			case '+': 
				cout<<"\nCalc> Enter number\nCalc: ";
				cin>>numd1;
				fpi1(numd1);
				break;
			case '-': 
				cout<<"\nCalc> Enter number\nCalc: ";
				cin>>numd1;
				fpi2(numd1);
				break;

			case '*': 
				cout<<"\nCalc> Enter number\nCalc: ";
				cin>>numd1;
				fpi3(numd1);
				break;
			case '/': 
				cout<<"\nCalc> Enter number\nCalc: ";
				cin>>numd1;
				fpi4(numd1);
				break;
		}
	}

	if(conh == 10) //calculation number pi;
	{
		cout<<"\nCalc> This module calculation numbers PI\n";

		cout<<"Prototype: pi + fnum - snum = result(1)\n";
		cout<<"Prototype: pi + fnum - snum + pi = result(2)\n";
			cin>>conc;

		if(conc == 1)
		{
			cout<<"Choose action(+,-,*,/)\nCalc: ";
				cin>>sym;

		switch(sym){
			case '+':
				cout<<"\nCalc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcPlusFirst(numd1, numd2, smb);
				break;
			case '-': 
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcMinusFirst(numd1, numd2, smb);
				break;

			case '*':
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcMFirst(numd1, numd2, smb);
				break;
			case '/':
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcDivFirst(numd1, numd2, smb);
				break;
			}
		}

		if(conc == 2)
		{
			cout<<"Choose action(+,-,*,/)\nCalc: ";
				cin>>sym;

		switch(sym){
			case '+':
				cout<<"\nCalc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcPlusSecond(numd1, numd2, smb);
				break;
			case '-': 
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcMinusSecond(numd1, numd2, smb);
				break;

			case '*':
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcMSecond(numd1, numd2, smb);
				break;
			case '/':
				cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
				cin>>numd1>>smb>>numd2;
				fpiCalcDivSecond(numd1, numd2, smb);
				break;
			}
		}
	}

	if(conh == 11)
	{
		cout<<"\nCalc> This module for calculation number PI or e\n";
		
		cout<<"Prototype program(PI (+,-,*,/) PI)(1)";
		cout<<"Prototype program(PI (+,-,*,/) e)(2)";
			cin>>conc;

		if(conc == 1)
		{
			cout<<"\n\nCalc> Enter symbol ";
				cin>>sym;
		
			fpiCalc(sym);
		}

		if(conc == 2)
		{
			cout<<"\n\nCalc> Enter symbol ";
				cin>>sym;
		
			feAndpiCalc(sym);
		}
		
	}
		}

	

	if(con == 2) //The work on finding bugs in the program is over xd:)
	{
		cout<<"\nCalc> Enter a condition to start the program;\nif you need a REFERENCE, enter (1);\nor to EXIT the program, enter (66)\nSTEP BACK(77)\n\nCalc: ";
			cin>>conh;

	if(conh == 1) //guide pro calc
	{
		cout<<"\nCalc>? Enter the symbol to select the help module 2 of 6\nCalc: ";
		cin>>sym; 
			fhelperPRO(sym);
	}

	if(conh == 66) {cout<<"Successful exit from the program 'Calculator'\n\n"; return 0;}
	if(conh == 77) goto label;

	if(conh == 2) //sin
	{
		cout<<"\nCalc> Enter a number to find out the sin\nCalc: ";
		cin>>numd1;
			fSinRad(numd1);
	}

	if(conh == 3) //cos
	{
		cout<<"\nCalc> Enter a number to find out the cos\nCalc: ";
		cin>>numd2;
			fCosRad(numd2);
	}

	if(conh == 4) //tan
	{
		cout<<"\nCalc> Enter a number to find out the tan\nCalc: ";
		cin>>numd1;
			fTanRad(numd1);
	}

	if(conh == 5) //calculation sin
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\n";
		cout<<"it`s need for calculation sin\nCalc: ";
			cin>>numd1>>sym>>numd2;
			fSinCalcRad(numd1,numd2,sym);
	}

	if(conh == 6) //calculation cos
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\n";
		cout<<"it`s need for calculation cos\nCalc: ";
			cin>>numd1>>sym>>numd2;
			fCosCalcRad(numd1,numd2,sym);
	}

	if(conh == 7) //calculation tan
	{
		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\n";
		cout<<"it`s need for calculation tan\nCalc: ";
			cin>>numd1>>sym>>numd2;
			fTanCalcRad(numd1,numd2,sym);
	}

	if(conh == 8) //calculation module
	{	
		cout<<"Calc> This module for calculation math module\n";
		cout<<"Prototype: |fn| + |sn| = |result|\n\n";

		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
		cin>>numd1>>sym>>numd2;
			fModuleCalc(numd1,numd2,sym);
	}

	if(conh == 9) //calculation module with degree
	{
		cout<<"Calc> This module for calculation math module^2\n";
		cout<<"Prototype: |fn|^2 - |sn|^2 = |result|\n";

		cout<<"Calc> Enter first number and symbol(+,-,*,/) and yet second number\n\nCalc: ";
		cin>>numd1>>sym>>numd2;
			fModuleCalcSqrt(numd1,numd2,sym);
	}

	if(conh == 10) // calculation module with degree that user set param for degree 
	{
		cout<<"This module for calculation module^x\n";
		cout<<"Prototype: |fn|^x / |sn|^y = |result|\n";

		cout<<"Calc> Enter fisrt number\nCalc: ";
		cin>>numd1;
		cout<<"Calc> Enter degree fisrt number\nCalc: ";
		cin>>numd3;
		cout<<"Calc> Enter second number\nCalc: ";
		cin>>numd2;
		cout<<"Calc> Enter degree second number\nCalc: ";
		cin>>numd4;
		cout<<"Calc> Enter a character for the condition(+,-,*,/) of the program\nCalc: ";
		cin>>sym;
			fModuleCalcDegPro(numd1, numd2, numd3, numd4, sym);
	}

	if(conh == 11) //calculation numbers e
	{
		cout<<"\nCalc> This module for calculation for numbers e\n";
		cout<<"Prototype: e - first number * snum = result\n\n";

		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number e\n\nCalc: ";
			cin>>sym;

		switch(sym)
		{
			case '+':
				cout<<"Calc> Enter number e\nCalc: ";
				cin>>numd1;
				fe1(numd1);
				break;

			case '-':
				cout<<"Calc> Enter number e\nCalc: ";
				cin>>numd1;
				fe2(numd1);
				break;
			case '*':
				cout<<"Calc> Enter number e\nCalc: ";
				cin>>numd1;
				fe3(numd1);
				break;

			case '/':
				cout<<"Calc> Enter number e\nCalc: ";
				cin>>numd1;
				fe4(numd1);
				break;
		}
	}

	if(conh == 12) //calculation numbers e
	{
		cout<<"\nCalc> This module calculation number e\n";
		cout<<"Choose prototype for calculation\n";

		cout<<"Prototype: e + fnum - snum = result(1)\n\n";
		cout<<"Prototype: e - fnum + snum - e = ressult(2)\n\nCalc: ";
			cin>>conc;

		if(conc == 1)
		{

		cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
		cout<<"Param which you enter will be set by default to the number e\n\nCalc: ";
			cin>>sym;

		switch(sym){

			case '+': 
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcPlusFirst(numd1, numd2, smb);
				break;

			case '-': 
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcMinusFirst(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcMFirst(numd1, numd2, smb);
				break;

			case '/':
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcDivFirst(numd1, numd2, smb);
				break;
			}
		}

		if(conc == 2)
		{
			cout<<"Enter number then action for choose condition(+,-,*,/) to accomplishment program\n";
			cout<<"Param which you enter will be set by default to the number e\n\nCalc: ";
				cin>>sym;

		switch(sym){

			case '+': 
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcPlusSecond(numd1, numd2, smb);
				break;

			case '-': 
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcMinusSecond(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcMSecond(numd1, numd2, smb);
				break;

			case '/':
				cout<<"Calc> Enter first number and condition(+,-,*,/) & second number\nCalc: ";
				cin>>numd1>>smb>>numd2;
				feCalcDivSecond(numd1, numd2, smb);
				break;
			}
		}
	}

	if(conh == 13)
	{
		cout<<"\nCalc> This module calculation number e\nPrototype program(e (+,-,*,/) e)\nCalc: ";
			cin>>sym;
		feCalc(sym);
	}

		}
	}
	return 0;
}