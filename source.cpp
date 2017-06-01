#include "iostream"
#include <stdlib.h>
using namespace std;
class Real
{
protected:
	double x;
public:
	Real(double x)
	{
		this->x = x;
	}
virtual double absol()
{
 return	abs(x);
 }
virtual void print()
{
	cout << x << endl;
}
};

class Complex : public Real
{
private:
	double y;
public:
	Complex(double x, double y): Real(x)
	{
		this->y = y;
	}
	 double absol()
	{
		return	abs(Real::absol()+y);
	}
	 void print() 
	{
		 Real::print();
		 cout << y << endl;
	}
	};
int main()
{
	Real f1(-5);
	Complex f2(-5,1);
	Real * f4 = &f1;
	Real * f3 = &f2;
	cout << "Real: " << endl;
	f4->print();
	cout << "Complex: " << endl;
	f3->print();
	cout << "Absolute Real : " << endl;
	cout << f4->absol() << endl;
	cout << "Absolute Complex : " << endl;
	cout << f3->absol() << endl;
	system("pause");
	return 0;
};
