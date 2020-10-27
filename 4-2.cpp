#include <iostream>
using namespace std;

class Complex
{
	public:
		Complex(double r=0, double i=0):real(r), imag(i){	}
		Complex operator+(Complex &) const;//重载双目运算符'+',当主函数‘+’的左边是对象时，只写一个传进来的参数
		Complex operator-=(Complex &); //重载双目运算符'-='
		friend const Complex operator-( Complex &,Complex &) ;//重载双目运算符'-'
		void Display() const;
	private:
		double real;
		double imag;
};

void Complex::Display() const
{
	cout << "(" << real << ", " << imag << ")" << endl;
}
Complex Complex::operator+(Complex &x) const{
    return Complex(real + x.real, imag + x.imag);
}
Complex Complex::operator-=(Complex &x){
    //对象本身数值也发生变化
    real -= x.real;
    imag -= x.imag;
    return Complex(real, imag);
}
Complex const operator-( Complex &x,Complex &y){
    return Complex(x.real - y.real, x.imag - y.imag);
}
int main()
{
	double r, m;
	cin >> r >> m;
	Complex c1(r, m);
	cin >> r >> m;
	Complex c2(r, m);
	Complex c3 = c1+c2;
	c3.Display();
	c3 = c1-c2;
	c3.Display();
	c3 -= c1;
	c3.Display();
	return 0;
}