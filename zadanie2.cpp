#include <iostream>
#include <string>
#include <stdio.h>
#include <tchar.h>
#include <SDKDDKVer.h>


using namespace std;

template<class one, class two>
class klasa
{
public:
	klasa(one x, two y) : zmienna_1(x), zmienna_2(y)
	{
	}
	~klasa()
	{
	}

	one zmienna_1;
	two zmienna_2;

	void wyswietl()
	{
		cout << endl<<"zmienna 1: \n" << zmienna_1 << endl;
		cout <<endl<< "zmienna 2: \n" << zmienna_2 << endl;
	}
};

template <typename X> void add(X x, X y)
{
	cout << x << " + " << y <<" = ";
	x = x + y;
	cout << x <<endl<<endl;
}

template <typename Y> void modulo(Y x, Y y)
{
	cout << x << " % " << y<<" = ";
	x = x%y;
	cout <<x<<endl;
}

int main()
{
	
	cout << "przyklad 1 int  double"<<endl;
	klasa <int, double> przyklad1(100, 0.1234);
	przyklad1.wyswietl();
	cout << "przyklad 2 string   int"<<endl;
	klasa <string, int> przyklad2("ciag znakow", 100);
	przyklad2.wyswietl();
	cout << "przyklad 3 string   double";
	klasa <string, double> przyklad3("ciag znakow", 0.1234);
	przyklad3.wyswietl();

	cout << "rozne typy zmiennych\n"; 
	add<string>("Damian", "Krawczyk");
	add<double>(0.1234, -1.1234);
	modulo<int>(100, 24);
	return 0;
}
