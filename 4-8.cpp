#include <iostream>
using namespace std;
class Polygon{
protected:
    int number = 0;//边数，最多不超过100条边
private:
    int side_length[100];//边长数组
public:
    Polygon();
    Polygon(int bian):number(bian){}
    Polygon(int *,int);//构造函数根据需要重载
    int perimeter();//计算多边形周长
    void display();//输出多边形边数和周长
};
Polygon::Polygon(int *s1, int num){
    number = num;
    for(int i = 0; i < num; i++)
        side_length[i] = *(s1 + i);
}
int Polygon::perimeter(){
    int sum = 0,i;
    for(i = 0; i < number;i++)
        sum += side_length[i];
    return sum;
}
void Polygon::display(){
    cout << number << " " << perimeter() <<'\n';
}
class Rectangle:public Polygon{
private:
    int height;
    int width;
public:
    Rectangle();
    Rectangle(int a, int b):Polygon(4),height(a),width(b){}
    int perimeter();//计算矩形周长
    void display();//输出多边形边数和周长
};
int Rectangle::perimeter(){
    return 2*(height + width);
}
void Rectangle::display(){
    cout << 4 << " " << perimeter() <<'\n';
}
class Equal_polygon:public Polygon{
private:
    int side_len;
public:
    Equal_polygon(int c, int d):Polygon(c),side_len(d) {}
    Equal_polygon();
    int perimeter();//计算等边多边形周长
    void display();//输出多边形边数和周长
};
int Equal_polygon::perimeter(){
    return number * side_len;
}
void Equal_polygon::display(){
    cout << number << " " << perimeter() <<'\n';
}
int main() {
    int n,i,type;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> type;
        if(type == 0){
            int num_edge = 0,j = 0;
            int p_length[100];
            while (1){
                cin >> *(p_length + j);
                if(p_length[j] == -1)
                    break;
                j++;
                num_edge++;
            }
            Polygon tu1(p_length,num_edge);
            tu1.display();
        }
        else if(type == 1){
            int a,b;
            cin >> a >> b;
            Rectangle tu2(a,b);
            tu2.display();
        }
        else if(type == 2){
            int c,d;
            cin >> c >> d;
            Equal_polygon tu3(c,d);
            tu3.display();
        }
    }
    return 0;
}
