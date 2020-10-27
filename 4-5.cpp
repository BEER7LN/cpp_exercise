#include <iostream>

using namespace std;
class Time{ //类名首字母必须大写
private:
    int min;
    int sec;
public:
    Time (int a = 0, int b = 0):min(a),sec(b){}
    friend const Time operator-( Time &, Time &);
    void turn_to_sec () const ;
};
Time const operator-( Time &x, Time &y)  {
    return Time(y.min-x.min,y.sec-x.sec);
}
void Time::turn_to_sec() const {
    cout << min*60 + sec << '\n';
}
int main(){
    while (1) {
        int a1,a2,b1,b2;
        cin >> a1 >> a2 >> b1 >> b2;
        if(a1 == 0 && a2 == 0 && b1 == 0 && b2 == 0)
            break;
        Time shi1(a1,a2);
        Time shi2(b1,b2);
        Time re = shi1 - shi2;
        re.turn_to_sec();
    }
    return 0;
}