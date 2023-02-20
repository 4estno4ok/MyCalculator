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

    setlocale(LC_ALL, "Ru");

	i=cin.rdstate();
        if (i & ios::failbit){
                cerr<<"Некорректный ввод\n";
                                return 0;
            }

	cout<<"\nВведите условие для запуска программы; если вам нужен справочник введите(1); или для выхода из программы введите(66) \n";
	cin>>conh;
		
	if(conh == 1) //guide
	{
		cout<<"Введите символ для выбора справки по модулю 2 из 7\n";
			cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"Успешный выход из программы :)!\n"; return 0;}

	if(conh == 2) //integer  calculation;
	{
		cout<<"Введите первое целое число и условие(+,-,/,%,*) для вычисления программы и второго числа\n";
			cin>>numi1>>sym>>numi2;
	finteger(numi1,numi2,sym);
	}

	if(conh == 3) //double calculation;
	{
		cout<<"Введите первое дробное число и условие (+,-,/,*) для вычисления программы и второе число\n";
			cin>>numd1>>sym>>numd2;
	fdoubler(numd1, numd2, sym);
	}

	if(conh == 4) //float calculation;
	{
		cout<<"Введите первое число с плавающей точкой и условие (+,-,/,*) для вычисления программы и второе число\n";
			cin>>numf1>>sym>>numf2;

	ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //degree double;
	{
		cout<<"Введите первое число\n";
		cin>>numd1;

	cout<<"Введите второе число\n";
		cin>>numd2;

	cout<<"Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам просто нужно возвести два числа в степень, введите(!)\n";
		cin>>sym;

	fswap(numd1, numd2, sym);
	}

	if(conh == 6)//degree double with param which input user
	{
		cout<<"Введите первое число\n";
		cin>>numd1;

		cout<<"Введите первую числовую степень\n";
		cin>>numd3;

		cout<<"Введите второе число\n";
		cin>>numd2;

		cout<<"Введите второую числовую степень\n";
		cin>>numd4;

	cout<<"Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам просто нужно возвести два числа в степень, введите(!)\n";
		cin>>sym;

		fswapx(numd1,numd2,numd3,numd4,sym);
	}

	if(conh == 7)//just number root;
	{
		cout<<"Введите число\n";
		cin>>numd1;
		froot(numd1);
	}

	if(conh == 8) //calculation root;
	{
		cout<<"Введите первое число\n";
		cin>>numd1;

	cout<<"Введите второе число\n";
		cin>>numd2;

	cout<<"Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам нужно узнать корень из двух чисел (!)\n";
		cin>>sym;

		frootC(numd1, numd2, sym);
	} 

	if(conh == 9) //sin;
	{
		cout<<"Введите число, чтобы узнать синус\n";
		cin>>numd1;
		fsin(numd1);
	}

	if(conh == 10) //cos;
	{
		cout<<"Введите число, чтобы узнать косинус\n";
		cin>>numd2;
		fcos(numd2);
	}

	if(conh == 11) //tan;
	{
		cout<<"Введите число, чтобы узнать тангенс\n";
		cin>>numd1;
		ftan(numd1);
	}

	if(conh == 12) //calculation sin;
	{
		cout<<"Введите первое число и условие (+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления синусов\n";
		cin>>numd1>>sym>>numd2;
		fSinCalc(numd1,numd2,sym);
	}
	if(conh == 13) //calculation cos;
	{
		cout<<"Введите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления косинусов\n";
		cin>>numd1>>sym>>numd2;
		fCosCalc(numd1,numd2,sym);
	}
	if(conh == 14) //calculation tan;
	{
		cout<<"Введите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления тангенсов\n";
		cin>>numd1>>sym>>numd2;
		ftanCalc(numd1,numd2,sym);
	}

	if(conh == 15) //just number increasing to pi;
	{
		cout<<"\nЭтот модуль просто возводить число в PI\n";
		cout<<"Введите число, затем параметр который по умолчанию будет задан числу PI(+,-,*,/)\n";
		cout<<"Параметр, который вы введете, по умолчанию будет установлен на число PI\n";
		cin>>sym;
		switch(sym)
		{
			case '+':
				cout<<"Введите число которое будет возведено в PI\n";
				cin>>numd1;
				fpi1(numd1);
				break;
			case '-':
				cout<<"Введите число которое будет возведено в PI\n";
				cin>>numd1;
				fpi2(numd1);
				break;
			case '*':
				cout<<"Введите число которое будет возведено в PI\n";
				cin>>numd1;
				fpi3(numd1);
				break;
			case '/':
				cout<<"Введите число которое будет возведено в PI\n";
				cin>>numd1;
				fpi4(numd1);
				break;
		}
	}

	if(conh == 16) //calculation number pi;
	{
		cout<<"\nЭтот модуль для вычисления \n";
		cout<<"Введите число, затем параметр который по умолчанию будет задан числу PI(+,-,*,/)\n";
		cout<<"Параметр, который вы введете, по умолчанию будет задан числу PI\n\n";
		
		cin>>sym;
		switch(sym)
		{
			case '+':
				cout<<"Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\n";
				cin>>numd1>>smb>>numd2;
				fpiCalcPlus(numd1, numd2, smb);
				break;
			case '-':
				cout<<"Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\n";
				cin>>numd1>>smb>>numd2;
				fpiCalcMinus(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\n";
				cin>>numd1>>smb>>numd2;
				fpiCalcM(numd1, numd2, smb);
				break;
			case '/':
				cout<<"Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\n";
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
		cout<<"Упсс!.... недопустимый ввод\n";
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
		cout<<"Упсс!.... недопустимый ввод\n";
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
		cout<<"\nЭтот модуль для вычисления целочисленых чисел, горячая клавиша(2)\n";
		cout<<"Этот модуль для вычисления дробных чисел, горячая клавиша(3)\n";
		cout<<"Этот модуль для вычисления чисел с плавающей точкой, горячая клавиша(4)\n";
		break;

	case '3':
		cout<<"\nЭтот модуль для вычисления степени, горячая клавиша(5)\n";
		cout<<"Этот модуль для вычисления степени с пользовательским значением по умолчанию для степени, горячая клавиша(6)\n";
		break;

	case '4':
		cout<<"\nЭтот модуль, необходимый для того, чтобы найти корень, горячая клавиша(7)\n";
		cout<<"Этот модуль для вычислений корней, горячая клавиша(8)\n";
		break;

	case '5':
		cout<<"\nЭтот модуль, необходимый для того, чтобы найти синус, горячая клавиша(9)\n";
		cout<<"Этот модуль, необходимый для того, чтобы найти косинус, горячая клавиша(10)\n";
		cout<<"Этот модуль, необходимый для того, чтобы найти тангенс, горячая клавиша(11)\n";
		break;

	case '6':
		cout<<"\nЭто модуль, необходимый для вычислении синуса, горячая клавиша(12)\n";
		cout<<"Этот модуль, необходимый для вычислении косинуса, горячая клавиша(13)\n";
		cout<<"Этот модуль, необходимый для вычислении тангенса, горячая клавиша(14)\n";
		break;

	case '7':
		cout<<"\nЭтот модуль, необходимый для того, чтобы найти число PI, горячая клавиша(15)\n";
		cout<<"Этот модуль, необходимый для, вычислении числа PI, горячая клавиша(16)\n";
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
		cout<<"Первое число которое возведено в степень равно:\t"<<deg1<<"\nВторое число которое возведено в степень равно:\t"<<deg2<<endl;
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
		cout<<"Первое число которое возведено в степень равно:\t"<<res1<<"\nВторое число которое возведено в степень равно\t"<<res2<<endl;
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
		cout<<"Первый корень равен:\t"<<sqrt(numr1)<<"\nвторой корень равен:\t"<<sqrt(numr2)<<endl;
		break;
	}
}

void froot(double fnum) //just find number root;
{
	cout.setf(ios::fixed);
	cout<<"Корень равен:\t"<<sqrt(fnum)<<endl;
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