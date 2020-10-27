#include <iostream>
#include <iomanip>
using namespace std;
const float PI=3.14159;
class Shape{
public:
    float area;
    virtual void GetArea() = 0;//纯虚函数
};
class Circle:public Shape{
private:
    float ci_r;
public:
    Circle(float r):ci_r(r){}
    virtual void GetArea(){
        area = PI*ci_r*ci_r;
    }
};
class Square:public Shape{
private:
    float sq_r;
public:
    Square(float r):sq_r(r){}
    virtual void GetArea(){
        area = sq_r*sq_r;
    }
};
class Rectangle:public Shape{
private:
    float re_length;
    float re_height;
public:
    Rectangle(float r1, float r2):re_length(r1),re_height(r2){}
    virtual void GetArea(){
        area = re_length*re_height;
    }
};
class Trapezoid:public Shape{
private:
    float tr_up;
    float tr_down;
    float tr_height;
public:
    Trapezoid(float r1, float r2, float r3):tr_up(r1),tr_down(r2),tr_height(r3){}
    virtual void GetArea(){
        area = (tr_up + tr_down)*tr_height/2;
    }
};
class Triangle:public Shape{
private:
    float tri_down;
    float tri_height;
public:
    Triangle(float r1, float r2):tri_down(r1),tri_height(r2){}
    virtual void GetArea(){
        area =  tri_down * tri_height/2;
    }
};
int main() {
    float sum = 0, r1, r2, r3;
    cin >> r1;
    Circle tu1(r1);
    tu1.GetArea();
    sum += tu1.area;
    cin >> r1;
    Square tu2(r1);
    tu2.GetArea();
    sum += tu2.area;
    cin >> r1 >> r2;
    Rectangle tu3(r1,r2);
    tu3.GetArea();
    sum += tu3.area;
    cin >> r1 >> r2 >> r3;
    Trapezoid tu4(r1,r2,r3);
    tu4.GetArea();
    sum += tu4.area;
    cin >> r1 >> r2;
    Triangle tu5(r1,r2);
    tu5.GetArea();
    sum += tu5.area;
    cout << fixed << setprecision(3) << sum;
    return 0;
}
