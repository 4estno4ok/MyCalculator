#include <iostream> 
#include <cmath>
using namespace std;


void finteger(int fnum, int snum, char symb); //вычисление с целыми числами
void fdoubler(double fnum, double snum, char symb); //вычисление с дробными числами
void ffloater(float fnum, float snum, char symb); //вычисление с плавающей точкой

void fhelper(char synb); //справочник по стандартному калькулятору
void fhelperPRO(char synb); //справочник по расширенному калькулятору

void fswap(double fnum, double snum, char symb); //вычисление с степенями, по умолчанию параметры заданы 
void fswapx(double fnum, double snum, double x, double y, char symb); //вычисление с степенями по умолчанию котроый задал пользователь
void frootC(double fnum, double snum, char symb); //вычисление с корнями
void froot(double fnum); //просто находит корень числа

void fsin(double x); //синус
void fcos(double y); //косинус
void ftan(double x); //тангенс

void fSinCalc(double x, double y, char symb); //вычисление с синусом
void fCosCalc(double x, double y, char symb); //вычисление с косинусом
void ftanCalc(double x, double y, char symb); //вычисление с тангенсом

void fpi1(double fnum); //возведение числа в пи с параметром по умолчанию(+,-,*,/)
void fpi2(double fnum);
void fpi3(double fnum);
void fpi4(double fnum);

void fpiCalcPlus(double fnum, double snum, char symb); //вычисления с параметром сложение по умолчанию с числом пи
void fpiCalcMinus(double fnum, double snum, char symb); //вычисления с параметром вычитание по умолчанию с числом пи
void fpiCalcM(double fnum, double snum, char symb); //вычисления с параметром умножение по умолчанию с числом пи
void fpiCalcDiv(double fnum, double snum, char symb); //вычисления с параметром деления по умолчанию с числом пи

void fmoduleCalc(double fnum, double snum, char symb); //вычисление модулей
void fmoduleCalcDeg(double fnum, double snum, char symb); //вычисление модулей с степенями
void fmoduleCalcDegPro(double fnum, double snum, double x, double y, char symb); //вычисление модулей с степенями пользователь который задал числа этим степеням

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


	cout<<"\nВведите число для выбора программы калькулятора стандартный(1) или расширенный калькулятор(2) или же выход из программы(66)\n";
	cin>>con;

		if(con == 66) {cout<<"Успешный выход из программы :)!\n"; return 0;}

	if(con == 1)
	{
	cout<<"\nВведите условие для запуска программы; если вам нужен справочник введите(1); или для выхода из программы введите(66) \n";
	cin>>conh;
		
	if(conh == 1) //спарвочник по стандартному калькулятору
	{
		cout<<"\nВведите символ для выбора справки по модулю 2 из 5\n";
			cin>>sym;
		fhelper(sym);
	}

	if(conh == 66) {cout<<"Успешный выход из программы :)!\n"; return 0;}

	if(conh == 2) //вычисления с целыми числами;
	{
		cout<<"\nВведите первое целое число и условие(+,-,/,%,*) для вычисления программы и второго числа\n";
			cin>>numi1>>sym>>numi2;
	finteger(numi1,numi2,sym);
	}

	if(conh == 3) //вычисленя с дробными числами;
	{
		cout<<"\nВведите первое дробное число и условие (+,-,/,*) для вычисления программы и второе число\n";
			cin>>numd1>>sym>>numd2;
	fdoubler(numd1, numd2, sym);
	}

	if(conh == 4) //вычисления с павающей точкой;
	{
		cout<<"\nВведите первое число с плавающей точкой и условие (+,-,/,*) для вычисления программы и второе число\n";
			cin>>numf1>>sym>>numf2;

	ffloater(numf1, numf2, sym);
	}

	if(conh == 5) //вычисленя с степенями;
	{
		cout<<"\nВведите первое число\n";
		cin>>numd1;

	cout<<"Введите второе число\n";
		cin>>numd2;

	cout<<"Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам просто нужно возвести два числа в степень, введите(!)\n";
		cin>>sym;

	fswap(numd1, numd2, sym);
	}

	if(conh == 6)//возведение и вычисления с степенями параметры которых по умолчанию задал пользователь
	{
		cout<<"\nВведите первое число\n";
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

	if(conh == 7)//просто возводит число в корень;
	{
		cout<<"\nВведите число\n";
		cin>>numd1;
		froot(numd1);
	}

	if(conh == 8) //вычисления с корнями;
	{
		cout<<"\nВведите первое число\n";
		cin>>numd1;

	cout<<"Введите второе число\n";
		cin>>numd2;

	cout<<"Введите символ для условия выполнения работы программы(+,-,/,*)\n";
	cout<<"Если вам нужно узнать корень из двух чисел (!)\n";
		cin>>sym;

		frootC(numd1, numd2, sym);
	} 

	if(conh == 9) //просто возведения числа в pi;
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

	if(conh == 10) //вычисления с числами pi;
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

	if(con == 2) //расширенный калькулятор
	{

		cout<<"\nВведите условие для запуска программы; если вам нужен справочник введите(1); или для выхода из программы введите(66) \n";
	cin>>conh;

	if(conh == 1)
	{
		cout<<"\nВведите символ для выбора справки по модулю 2 из 3\n";
			cin>>sym;
		fhelperPRO(sym);
	}

	if(conh == 2) //синус;
	{
		cout<<"\nВведите число, чтобы узнать синус\n";
		cin>>numd1;
		fsin(numd1);
	}

	if(conh == 3) //косинус;
	{
		cout<<"\nВведите число, чтобы узнать косинус\n";
		cin>>numd2;
		fcos(numd2);
	}

	if(conh == 4) //тангенс;
	{
		cout<<"\nВведите число, чтобы узнать тангенс\n";
		cin>>numd1;
		ftan(numd1);
	}

	if(conh == 5) //вычисления синуса;
	{
		cout<<"\nВведите первое число и условие (+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления синусов\n";
		cin>>numd1>>sym>>numd2;
		fSinCalc(numd1,numd2,sym);
	}
	if(conh == 6) //вычисления косинуса;
	{
		cout<<"\nВведите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления косинусов\n";
		cin>>numd1>>sym>>numd2;
		fCosCalc(numd1,numd2,sym);
	}
	if(conh == 7) //вычисление тангенса;
	{
		cout<<"\nВведите первое число и условные выполнение работы программы(+,-,*,/) и ещё второе число\n";
		cout<<"Это нужно для того чтобы производить вычисления тангенсов\n";
		cin>>numd1>>sym>>numd2;
		ftanCalc(numd1,numd2,sym);
	
	}

		if(conh == 8) // вычисление модулей;
	{
		cout<<"\nВведите первое число и условие (+,-,*,/) и ещё второе число\n";
		cin>>numd1>>sym>>numd2;
		fmoduleCalc(numd1,numd2,sym);
	}

	if(conh == 9) // вычисление модуля с степенью;
	{
		cout<<"\nВведите первое число и условие (+,-,*,/) и ещё второе число\n";
		cin>>numd1>>sym>>numd2;
		fmoduleCalcDeg(numd1,numd2,sym);
	}

	if(conh == 10) // calculation module with degree that user set param for degree 
	{
		cout<<"\nВведите первое число\n";
		cin>>numd1;
		cout<<"Введите степень в которую хотите возвести первое число\n";
		cin>>numd3;
		cout<<"Введите второе число\n";
		cin>>numd2;
		cout<<"Введите степень в которую хотите возвести первое число\n";
		cin>>numd4;
		cout<<"Введите условие выполнения программы (+,-,*,/)\n";
		cin>>sym;
		fmoduleCalcDegPro(numd1, numd2, numd3, numd4, sym);
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

void fdoubler(double fnum, double snum, char symb) //вычисление с дробными числами;
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

void ffloater(float fnum, float snum, char symb) //вычисления с числами плавающей точкой;
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


void fhelper(char synb) //справочник по обычному калькулятору
{
	switch(synb)
	{
	case '2':
		cout<<"\nЭтот модуль для вычисления целочисленных чисел, горячая клавиша(2)\n";
		cout<<"Этот модуль для вычисления дробных чисел, горячая клавиша(3)\n";
		cout<<"Этот модуль предназначен для вычисления чисел с плавающей запятой, горячая клавиша(4)\n";
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
		cout<<"\nЭтот модуль, необходимый для того, чтобы найти число PI, горячая клавиша(9)\n";
		cout<<"Этот модуль, необходимый для, вычислении числа PI, горячая клавиша(10)\n";
		break;	
	}
}

void fhelperPRO(char synb)//справочник по расширеннному калькулятору
{
	switch(synb)
	{
		case '2':
		cout<<"\nЭтот модуль, необходимый для того, чтобы найти синус, горячая клавиша(2)\n";
		cout<<"Этот модуль, необходимый для того, чтобы найти косинус, горячая клавиша(3)\n";
		cout<<"Этот модуль, необходимый для того, чтобы найти тангенс, горячая клавиша(4)\n";
		break;

		case '3':
		cout<<"\nЭто модуль, необходимый для вычислении синуса, горячая клавиша(5)\n";
		cout<<"Этот модуль, необходимый для вычислении косинуса, горячая клавиша(6)\n";
		cout<<"Этот модуль, необходимый для вычислении тангенса, горячая клавиша(7)\n";
		break;

		case '4':
		cout<<"\nЭтот модуль нужен для расчета математических модулей, горячая клавиша(8)\n";
		cout<<"Этот модуль нужен для расчета математических модулей со степенями, горячей клавишей(9)\n";
		cout<<"Этот модуль нужен для расчета математических модулей со степенями параметров, которые указал пользователь, горячая клавиша(10)\n";
		break;
	}
}

void fswap(double fnum, double snum, char symb) //вычисление с корнями 
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

void fswapx(double fnum, double snum, double x, double y, char symb)  //возведение числа в степень с параметером по умолчанию который задал пользователь или же вычисление с степенями
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

void froot(double fnum) //просто находит корень числа;
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

void fpi1(double fnum) //найти число пи с параметром по умолчанию(+,-,*,/);
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

void fpiCalcPlus(double fnum, double snum, char symb) //вычисления с параметром сложение по умолчанию с числом пи
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

void fpiCalcMinus(double fnum, double snum, char symb) //вычисления с параметром вычитание по умолчанию с числом пи
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

void fpiCalcM(double fnum, double snum, char symb) //вычисления с параметром умножение по умолчанию с числом пи
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

void fpiCalcDiv(double fnum, double snum, char symb) //вычисления с параметром деления по умолчанию с числом пи
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
//количество симолов примерно 15019
//прошлая версия 0.9, актуальная версия 0.10;