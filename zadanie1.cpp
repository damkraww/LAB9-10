#include <iostream>
using namespace std;
class bazowa
{
public:
	bazowa();
	~bazowa();
	virtual void pochodzenie();
};
class pochodna : public bazowa
{
public:
	pochodna();
	~pochodna();
	void pochodzenie();
};
bazowa::bazowa()
{
}
bazowa::~bazowa()
{
}
void bazowa::pochodzenie()
{
	cout << "jesstem z klasy bazowej"<<endl;
}
pochodna::pochodna()
{
}
pochodna::~pochodna()
{
}
void pochodna::pochodzenie()
{
	cout << "jestem z klasy pochodnej"<<endl;
}
int main()
{
	bazowa b;
	pochodna p;
	b.pochodzenie();
	p.pochodzenie();
	bazowa * wskaznik = &p;
	wskaznik->pochodzenie();
return 0;
}
