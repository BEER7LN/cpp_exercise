#include <iostream>
using namespace std;
class Complex{
private:
    int real,imag;
public:
    Complex(int a = 0,int b = 0):real(a),imag(b) {}
    friend const bool operator>(Complex &,Complex &);

};
bool const operator>(Complex &a,Complex &b){
    int moa,mob;
    moa = a.imag*a.imag + a.real*a.real;
    mob = b.imag*b.imag + b.real*b.real;
    if(moa > mob)
        return true;
    else
        return false;
}
int main() {
    while (1){
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if(a1 == 0 && a2 == 0 && b1 == 0 && b2 == 0)
            break;
        Complex a(a1,a2),b(b1,b2);
        if(a>b)
            cout << "true" << '\n';
        else
            cout << "false" << '\n';
    }
    return 0;
}
