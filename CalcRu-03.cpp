#include <iostream> 
#include <cmath>

using namespace std;


void finteger(int fnum, int snum, char symb); //вычисление с целыми числами
void fdoubler(double fnum, double snum, char symb); //вычисление с дробными числами
void ffloater(float fnum, float snum, char symb); //вычисление с плавающей точкой

void fhelper(char synb); //справочник по стандартному калькулятору
void fhelperPRO(char synb); //справочник по расширенному калькулятору

void fCalcDeg(double fnum, double snum, char symb); //вычисление с степенями, по умолчанию параметры заданы 
void fCalcDegx(double fnum, double snum, double x, double y, char symb); //вычисление с степенями по умолчанию котроый задал пользователь
void frootC(double fnum, double snum, char symb); //вычисление с корнями
void froot(double fnum); //просто находит корень числа

void fsin(double x); //синус
void fcos(double y); //косинус
void ftan(double x); //тангенс

void fSinCalc(double x, double y, char symb); //вычисление с синусом
void fCosCalc(double x, double y, char symb); //вычисление с косинусом
void ftanCalc(double x, double y, char symb); //вычисление с тангенсом

void fpi1(double number); //возведение числа в пи с параметром по умолчанию(+,-,*,/)
void fpi2(double number);
void fpi3(double number);
void fpi4(double number);

void fpiCalcPlus(double fnum, double snum, char symb); //вычисления с параметром сложение по умолчанию с числом пи
void fpiCalcMinus(double fnum, double snum, char symb); //вычисления с параметром вычитание по умолчанию с числом пи
void fpiCalcM(double fnum, double snum, char symb); //вычисления с параметром умножение по умолчанию с числом пи
void fpiCalcDiv(double fnum, double snum, char symb); //вычисления с параметром деления по умолчанию с числом пи

void fmoduleCalc(double fnum, double snum, char symb); //вычисление модулей
void fmoduleCalcDeg(double fnum, double snum, char symb); //вычисление модулей с степенями
void fmoduleCalcDegPro(double fnum, double snum, double x, double y, char symb); //вычисление модулей с степенями пользователь который задал числа этим степеням

void fe1(double number); //e (+,-,*,/) (Твоё число)
void fe2(double number);
void fe3(double number);
void fe4(double number);

void feCalcPlus(double fnum, double snum, char symb); // Вычисление с положительным числом е
void feCalcMinus(double fnum, double snum, char symb); // Вычисление с отрицательным числом е

void feCalcM(double fnum, double snum, char symb); // Вычисление с умноженым числом е
void feCalcDiv(double fnum, double snum, char symb); // Вычисление с Деленым числом е

int main()
{	
	for(;;){
	int conh; int con;

	int numi1, numi2; //имя переменной должно содержать: имя,тип,номер;
	double numd1, numd2; double numd3, numd4; 
	float numf1, numf2;
	char sym; char smb;
	int i; //переменная которая провряет ввод пользователя; 

    setlocale(LC_ALL, "Ru");

	i=cin.rdstate();
        if (i & ios::failbit){
                cerr<<"Некорректный ввод\n";
                                return 0;
            }


	cout<<"\nКалькулятор> Введите число для выбора программы калькулятора стандартный(1)\n\tрасширенный калькулятор(2)\n\tвыход из программы(66)\nКалькулятор> ";
	cin>>con;

		if(con == 66) {cout<<"Успешный выход из программы 'Калькулятор' :)!\n"; return 0;}

	if(con == 1)
	{
	cout<<"\nКалькулятор> Введите условие для запуска программы;\n\tесли вам нужен справочник введите(1);\n\tвыхода из программы введите(66)\nКалькулятор> ";
	cin>>conh;
		
	if(conh == 1) //спарвочник по стандартному калькулятору
	{
		cout<<"\nКалькулятор> Введите символ для выбора справки по модулю 2 из 5\nКалькулятор> ";
			cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"Успешный выход из программы Калькулятор :)!\n"; return 0;}

	if(conh == 2) //вычисления с целыми числами;
	{
		cout<<"\nКалькулятор> Введите первое целое число и условие(+,-,/,%,*) для вычисления программы и второго числа\nКалькулятор> ";
			cin>>numi1>>sym>>numi2;
	finteger(numi1,numi2,sym);
	}

	if(conh == 3) //вычисленя с дробными числами;
	{
		cout<<"\nКалькулятор> Введите первое дробное число и условие (+,-,/,*) для вычисления программы и второе число\nКалькулятор> ";
			cin>>numd1>>sym>>numd2;
	fdoubler(numd1, numd2, sym);
	}

	if(conh == 4) //вычисления с павающей точкой;
	{
		cout<<"\nКалькулятор> Введите первое число с плавающей точкой и условие (+,-,/,*) для вычисления программы и второе число\nКалькулятор> ";
			cin>>numf1>>sym>>numf2;

	ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //вычисленя с степенями;
	{
		cout<<"\nКалькулятор> Введите первое число\nКалькулятор> ";
		cin>>numd1;

	cout<<"Калькулятор> Введите второе число\nКалькулятор> ";
		cin>>numd2;

	cout<<"Калькулятор> Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам просто нужно возвести два числа в степень, введите(!)\nКалькулятор> ";
		cin>>sym;

	fCalcDeg(numd1, numd2, sym);
	}

	if(conh == 6)//возведение и вычисления с степенями параметры которых по умолчанию задал пользователь
	{
		cout<<"\nКалькулятор> Калькулятор> Введите первое число\nКалькулятор> ";
		cin>>numd1;

		cout<<"Калькулятор> Введите первую числовую степень\nКалькулятор> ";
		cin>>numd3;

		cout<<"Калькулятор> Введите второе число\nКалькулятор> ";
		cin>>numd2;

		cout<<"Калькулятор> Введите второую числовую степень\nКалькулятор> ";
		cin>>numd4;

	cout<<"Калькулятор> Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам просто нужно возвести два числа в степень, введите(!)\nКалькулятор> ";
		cin>>sym;

		fCalcDegx(numd1,numd2,numd3,numd4,sym);
	}

	if(conh == 7)//просто возводит число в корень;
	{
		cout<<"\nКалькулятор> Введите число\nКалькулятор> ";
		cin>>numd1;
		froot(numd1);
	}

	if(conh == 8) //вычисления с корнями;
	{
		cout<<"\nКалькулятор> Введите первое число\nКалькулятор> ";
		cin>>numd1;

	cout<<"Калькулятор> Введите второе число\nКалькулятор> ";
		cin>>numd2;

	cout<<"Калькулятор> Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам нужно узнать корень из двух чисел (!)\nКалькулятор> ";
		cin>>sym;

		frootC(numd1, numd2, sym);
	} 

	if(conh == 9) //просто возведения числа в pi;
	{
		cout<<"\nКалькулятор> Этот модуль просто возводить число в PI\n";
		cout<<"Введите число, затем параметр который по умолчанию будет задан числу PI(+,-,*,/)\n";
		cout<<"Параметр, который вы введете, по умолчанию будет установлен на число PI\nКалькулятор> ";
		cin>>sym;
		switch(sym)
		{
			case '+':
				cout<<"Калькулятор> Введите число которое будет возведено в PI\nКалькулятор> ";
				cin>>numd1;
				fpi1(numd1);
				break;
			case '-':
				cout<<"Калькулятор> Введите число которое будет возведено в PI\nКалькулятор> ";
				cin>>numd1;
				fpi2(numd1);
				break;
			case '*':
				cout<<"Калькулятор> Введите число которое будет возведено в PI\nКалькулятор> ";
				cin>>numd1;
				fpi3(numd1);
				break;
			case '/':
				cout<<"Калькулятор> Введите число которое будет возведено в PI\nКалькулятор> ";
				cin>>numd1;
				fpi4(numd1);
				break;
		}
	}

	if(conh == 10) //вычисления с числами pi;
	{
		cout<<"\nКалькулятор> Этот модуль для вычисления \n";
		cout<<"Введите число, затем параметр который по умолчанию будет задан числу PI(+,-,*,/)\n";
		cout<<"Параметр, который вы введете, по умолчанию будет задан числу PI\n\nКалькулятор> ";
		
		cin>>sym;
		switch(sym)
		{
			case '+':
				cout<<"Калькулятор> Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcPlus(numd1, numd2, smb);
				break;
			case '-':
				cout<<"Калькулятор> Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcMinus(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Калькулятор> Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcM(numd1, numd2, smb);
				break;
			case '/':
				cout<<"Калькулятор> Введите первое число и условие выполнение работы программы(+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				fpiCalcDiv(numd1, numd2, smb);
				break;
		}
	}
		}

	if(con == 2) //расширенный калькулятор
	{

		cout<<"\nКалькулятор> Введите условие для запуска программы;\n\tесли вам нужен справочник введите(1);\n\tдля выхода из программы введите(66)\nКалькулятор> ";
	cin>>conh;

	if(conh == 1)
	{
		cout<<"\nКалькулятор> Введите символ для выбора справки по модулю 2 из 3\nКалькулятор> ";
			cin>>sym;
		fhelperPRO(sym);
	}

	if(conh == 2) //синус;
	{
		cout<<"\nКалькулятор> Введите число, чтобы узнать синус\nКалькулятор> ";
		cin>>numd1;
		fsin(numd1);
	}

	if(conh == 3) //косинус;
	{
		cout<<"\nКалькулятор> Введите число, чтобы узнать косинус\nКалькулятор> ";
		cin>>numd2;
		fcos(numd2);
	}

	if(conh == 4) //тангенс;
	{
		cout<<"\nКалькулятор> Введите число, чтобы узнать тангенс\nКалькулятор> ";
		cin>>numd1;
		ftan(numd1);
	}

	if(conh == 5) //вычисления синуса;
	{
		cout<<"\nКалькулятор> Введите первое число и условие (+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления синусов\nКалькулятор> ";
		cin>>numd1>>sym>>numd2;
		fSinCalc(numd1,numd2,sym);
	}
	if(conh == 6) //вычисления косинуса;
	{
		cout<<"\nКалькулятор> Введите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления косинусов\nКалькулятор> ";
		cin>>numd1>>sym>>numd2;
		fCosCalc(numd1,numd2,sym);
	}
	if(conh == 7) //вычисление тангенса;
	{
		cout<<"\nКалькулятор> Введите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления тангенсов\nКалькулятор> ";
		cin>>numd1>>sym>>numd2;
		ftanCalc(numd1,numd2,sym);
	
	}

		if(conh == 8) // вычисление модулей;
	{
		cout<<"\nКалькулятор> Введите первое число и условие (+,-,*,/) и ещё второе число\nКалькулятор> ";
		cin>>numd1>>sym>>numd2;
		fmoduleCalc(numd1,numd2,sym);
	}

	if(conh == 9) // вычисление модуля с степенью;
	{
		cout<<"\nКалькулятор> Введите первое число и условие (+,-,*,/) и ещё второе число\nКалькулятор> ";
		cin>>numd1>>sym>>numd2;
		fmoduleCalcDeg(numd1,numd2,sym);
	}

	if(conh == 10) // calculation module with degree that user set param for degree 
	{
		cout<<"\nКалькулятор> Введите первое число\nКалькулятор> ";
		cin>>numd1;
		cout<<"Калькулятор> Введите степень в которую хотите возвести первое число\nКалькулятор> ";
		cin>>numd3;
		cout<<"Калькулятор> Введите второе число\nКалькулятор> ";
		cin>>numd2;
		cout<<"Калькулятор> Введите степень в которую хотите возвести первое число\nКалькулятор> ";
		cin>>numd4;
		cout<<"Калькулятор> Введите условие выполнения программы (+,-,*,/)\nКалькулятор> ";
		cin>>sym;
		fmoduleCalcDegPro(numd1, numd2, numd3, numd4, sym);
	}	
	if(conh == 11) //calculation numbers e
	{
		cout<<"\nКалькулятор> Этот модуль вычисления вашего числа с числом e\n";
		cout<<"Введите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Параметр, который вы введете, по умолчанию будет установлен для числа e\n\nКалькулятор> ";
			cin>>sym;

		switch(sym)
		{
			case '+':
				cout<<"Калькулятор>  Введите число \nКалькулятор> ";
				cin>>numd1;
				fe1(numd1);
				break;

			case '-':
				cout<<"Калькулятор> Введите число \nКалькулятор> ";
				cin>>numd1;
				fe2(numd1);
				break;
			case '*':
				cout<<"Калькулятор> Введите число \nКалькулятор> ";
				cin>>numd1;
				fe3(numd1);
				break;

			case '/':
				cout<<"Калькулятор> Введите число \nКалькулятор> ";
				cin>>numd1;
				fe4(numd1);
				break;
		}
	}

	if(conh == 12)
	{
		cout<<"\nКалькулятор> Этот модуль вычисления вашего числа с числом e\n";
		cout<<"Введите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Параметр, который вы введете, по умолчанию будет установлен для числа e\n\nКалькулятор> ";
			cin>>sym;

		switch(sym)
		{
			case '+': 
				cout<<"Калькулятор> Введите первое число и условие (+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				feCalcPlus(numd1, numd2, smb);
				break;

			case '-': 
				cout<<"Калькулятор> Введите первое число и условие (+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				feCalcMinus(numd1, numd2, smb);
				break;
			case '*':
				cout<<"Калькулятор> Введите первое число и условие (+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				feCalcM(numd1, numd2, smb);
				break;

			case '/':
				cout<<"Калькулятор> Введите первое число и условие (+,-,*,/) и ещё второе число\nКалькулятор> ";
				cin>>numd1>>smb>>numd2;
				feCalcDiv(numd1, numd2, smb);
				break;
		}
	}

	}
		}
	
	return 0;
}

void finteger(int fnum, int snum, char symb) //вычисление с целыми числами;
{
	int result;
	switch(symb)
	{
	case '+':
		result = fnum + snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<"Калькулятор> "<<result<<endl;}
			else {result = fnum - snum; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '%':
		result = fnum % snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '*':
		result = fnum * snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	}
}

void fdoubler(double fnum, double snum, char symb) //вычисление с дробными числами;
{
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = fnum + snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<"Калькулятор> "<<result<<endl;}
			else {result = fnum - snum; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '%':
		cout<<"Упсс!.... недопустимый ввод\n";
		break;
	case '*':
		result = fnum * snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	}
}

void ffloater(float fnum, float snum, char symb) //вычисления с числами плавающей точкой;
{
	float result;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = fnum + snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(snum > fnum){result = snum - fnum; cout<<"Калькулятор> "<<result<<endl;}
			else {result = fnum - snum; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '/':
		result = fnum / snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '%':
		cout<<"Упсс!.... недопустимый ввод\n";
		break;
	case '*':
		result = fnum * snum;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	}
}


void fhelper(char synb) //справочник по обычному калькулятору
{
	switch(synb)
	{
	case '2':
		cout<<"\nКалькулятор> Этот модуль для вычисления целочисленных чисел, горячая клавиша(2)\n";
		cout<<"Этот модуль для вычисления дробных чисел, горячая клавиша(3)\n";
		cout<<"Этот модуль предназначен для вычисления чисел с плавающей запятой, горячая клавиша(4)\n";
		break;

	case '3':
		cout<<"\nКалькулятор> Этот модуль для вычисления степени, горячая клавиша(5)\n";
		cout<<"Этот модуль для вычисления степени с пользовательским значением по умолчанию для степени, горячая клавиша(6)\n";
		break;

	case '4':
		cout<<"\nКалькулятор> Этот модуль, необходимый для того, чтобы найти корень, горячая клавиша(7)\n";
		cout<<"Этот модуль для вычислений корней, горячая клавиша(8)\n";
		break;

	case '5':
		cout<<"\nКалькулятор> Этот модуль, необходимый для того, чтобы найти число PI, горячая клавиша(9)\n";
		cout<<"Этот модуль, необходимый для, вычислении числа PI, горячая клавиша(10)\n";
		break;	
	}
}

void fhelperPRO(char synb)//справочник по расширеннному калькулятору
{
	switch(synb)
	{
		case '2':
		cout<<"\nКалькулятор> Этот модуль, необходимый для того, чтобы найти синус, горячая клавиша(2)\n";
		cout<<"Этот модуль, необходимый для того, чтобы найти косинус, горячая клавиша(3)\n";
		cout<<"Этот модуль, необходимый для того, чтобы найти тангенс, горячая клавиша(4)\n";
		break;

		case '3':
		cout<<"\nКалькулятор> Это модуль, необходимый для вычислении синуса, горячая клавиша(5)\n";
		cout<<"Этот модуль, необходимый для вычислении косинуса, горячая клавиша(6)\n";
		cout<<"Этот модуль, необходимый для вычислении тангенса, горячая клавиша(7)\n";
		break;

		case '4':
		cout<<"\nКалькулятор> Этот модуль нужен для расчета математических модулей, горячая клавиша(8)\n";
		cout<<"Этот модуль нужен для расчета математических модулей со степенями, горячей клавишей(9)\n";
		cout<<"Этот модуль нужен для расчета математических модулей со степенями параметров, которые указал пользователь, горячая клавиша(10)\n";
		break;

		case '5':
		cout<<"\nКалькулятор> Этот модуль необходим для того, ввычисление с вашего числа с числом e, горячую клавишу(11)\n";
		cout<<"Этот модуль необходим для вычисления числа e, горячей клавиши(12)\n";		
		break;
	}
}

void fCalcDeg(double fnum, double snum, char symb) //вычисление с корнями 
{
	double result;
	double deg1 = fnum * fnum;
	double deg2 = snum * snum;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = deg1 + deg2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(deg2 > deg1) {result = deg2 - deg1; cout<<"Калькулятор> "<<result<<endl;}
			else {result = deg1 - deg2; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '/':
		result = deg1 / deg2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '*':
		result = deg1 * deg2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '!':
		cout<<"\nКалькулятор> Первое число которое возведено в степень равно:\t"<<deg1<<"\nКалькулятор> Второе число которое возведено в степень равно:\t"<<deg2<<endl;
		break;
	}
}

void fCalcDegx(double fnum, double snum, double x, double y, char symb)  //возведение числа в степень с параметером по умолчанию который задал пользователь или же вычисление с степенями
{
	double res1 = pow(fnum,x);
	double res2 = pow(snum, y);
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = res1 + res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Калькулятор> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '/':
		result = res1 / res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '*':
		result = res1 * res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '!':
		cout<<"\nКалькулятор> Первое число которое возведено в степень равно:\t"<<res1<<"\nКалькулятор> Второе число которое возведено в степень равно\t"<<res2<<endl;
		break;
	}
}

void frootC(double fnum, double snum, char symb) //вычисление с корнями чисел;
{
	double result;
	double numr1 = sqrt(fnum);
	double numr2 = sqrt(snum);

	cout.setf(ios::fixed);
	switch(symb)
	{
	case '+':
		result = numr1 + numr2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(numr2 > numr1) {result = numr2 - numr1; cout<<"Калькулятор> "<<result<<endl;}
			else {result = numr1 - numr2; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '/':
		result = numr1 / numr2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '*':
		result = numr1 * numr2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '!':
		cout<<"\nКалькулятор> Первый корень равен:\t"<<sqrt(numr1)<<"\nКалькулятор> второй корень равен:\t"<<sqrt(numr2)<<endl;
		break;
	}
}

void froot(double fnum) //просто находит корень числа;
{
	cout.setf(ios::fixed);
	cout<<"Калькулятор> Корень равен:\t"<<sqrt(fnum)<<endl;
}

void fsin(double x)
{
	double result;
	result = sin(x);
	cout.setf(ios::fixed);
	cout<<"Калькулятор> sin(x) = "<<result<<endl;
}

void fcos(double y)
{
	double result;
	result = cos(y);
	cout.setf(ios::fixed);
	cout<<"Калькулятор> sin(y) = "<<result<<endl;
}

void ftan(double x)
{
	double result;
	result = tan(x);
	cout.setf(ios::fixed);
	cout<<"Калькулятор> tan(x) = "<<result<<endl;
}

void fSinCalc(double x, double y, char symb) //вычисления с синусом;
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
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Калькулятор> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	}
}

void fCosCalc(double x, double y, char symb) //вычисления с косинусом;
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
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Калькулятор> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	}
}

void ftanCalc(double x, double y, char symb) //вычисление с тангенсом;
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
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '-':
		if(res2 > res1) {result = res2 - res1; cout<<"Калькулятор> "<<result<<endl;}
			else {result = res1 - res2; cout<<"Калькулятор> "<<result<<endl;}
		break;
	case '*':
		result = res1 * res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	case '/':
		result = res1 / res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	}
} 

void fpi1(double number) //найти число пи с параметром по умолчанию(+,-,*,/);
{
	double PI = 3.141592653589793;
	double res;

	res = PI + number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl;
}

void fpi2(double number) 
{
	double PI = 3.141592653589793;
	double res;

	res = PI - number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl;
}

void fpi3(double number)
{
	double PI = 3.141592653589793;
	double res;

	res = PI * number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl; 
}

void fpi4(double number)
{
	double PI = 3.141592653589793;
	double res;

	res = PI / number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl;
}

void fpiCalcPlus(double fnum, double snum, char symb) //вычисления с параметром сложение по умолчанию с числом пи
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = PI + fnum + snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = PI + fnum - snum;
			break;
		case '*':
			result = PI + fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = PI + fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
	}
}

void fpiCalcMinus(double fnum, double snum, char symb) //вычисления с параметром вычитание по умолчанию с числом пи
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = PI - fnum + snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = PI - fnum - snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '*':
			result = PI - fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = PI - fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
	}
}

void fpiCalcM(double fnum, double snum, char symb) //вычисления с параметром умножение по умолчанию с числом пи
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = PI * fnum + snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = PI * fnum - snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '*':
			result = PI * fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = PI * fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
	}
}

void fpiCalcDiv(double fnum, double snum, char symb) //вычисления с параметром деления по умолчанию с числом пи
{
	double PI = 3.141592653589793;
	double result;

	cout.setf(ios::fixed);
	switch(symb)
	{
		case '+':
			result = PI / fnum + snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = PI / fnum - snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '*':
			result = PI / fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = PI / fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
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
		cout<<"Калькулятор> "<<result<<endl;
		break;

		case '-':
		if(res2 > res1){result = res2 - res1; cout<<"Калькулятор> "<<result<<endl;} //error
		else{result = res1 - res2; cout<<"Калькулятор> "<<result<<endl;}
		break;

		case '*':
		result = res1 * res2;
		cout<<"Калькулятор> "<<result<<endl;
		break;

		case '/':
		result = res1 / res2;
		cout<<"Калькулятор> "<<result<<endl;
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
		cout<<"Калькулятор> "<<result<<endl;
		break;

		case '-':
		if(res4 > res3){result = res4 - res3; cout<<"Калькулятор> "<<result<<endl;} //error
		else{result = res3 - res4; cout<<"Калькулятор> "<<result<<endl;}
		break;

		case '*':
		result = res3 * res4;
		cout<<"Калькулятор> "<<result<<endl;
		break;

		case '/':
		result = res3 / res4;
		cout<<"Калькулятор> "<<result<<endl;
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
		cout<<"Калькулятор> "<<result<<endl;
		break;

		case '-':
		if(res4 > res3){result = res4 - res3; cout<<"Калькулятор> "<<result<<endl;} //error
		else{result = res3 - res4; cout<<"Калькулятор> "<<result<<endl;}
		break;

		case '*':
		result = res3 * res4;
		cout<<"Калькулятор> "<<result<<endl;
		break;

		case '/':
		result = res3 / res4;
		cout<<"Калькулятор> "<<result<<endl;
		break;
	}
}

void fe1(double number) //found number e by deafult set param(+,-,*,/);
{
	double e = 2.7182818284;
	double res;

	res = e + number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl;
}

void fe2(double number) 
{
	double e = 2.7182818284;
	double res;

	res = e - number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl;
}

void fe3(double number)
{
	double e = 2.7182818284;
	double res;

	res = e * number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl; 
}

void fe4(double number)
{
	double e = 2.7182818284;
	double res;

	res = e / number;
	cout.setf(ios::fixed);
	cout<<"Калькулятор> "<<res<<endl;
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
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = e + fnum - snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '*':
			result = e + fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = e + fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
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
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = e - fnum - snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '*':
			result = e - fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = e - fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
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
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = e * fnum - snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '*':
			result = e * fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = e * fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
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
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '-':
			result = e / fnum - snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '*':
			result = e / fnum * snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
		case '/':
			result = e / fnum / snum;
			cout<<"Калькулятор> "<<result<<endl;
			break;
	}
}
//количество симолов примерно 27504
//прошлая версия 0.10, актуальная версия 0.11;