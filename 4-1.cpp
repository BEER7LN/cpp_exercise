#include <iostream>
using namespace std;

class Rectangle{
private:
    double width,height;
public:
    Rectangle(double x, double y){width = x; height = y; }
    void getArea(){ cout << width*height << '\n';}
    void getPerimeter(){ cout << 2*(width + height);}
};
int main(){
    double x,y;
    cin >> x >> y;
    Rectangle a(x, y);
    a.getArea();
    a.getPerimeter();
    return 0;
}

