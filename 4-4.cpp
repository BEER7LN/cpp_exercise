#include <iostream>
#include <cstring>

using namespace std;
class FS{
private:
    int fz,fm;
public:
    FS(int a = 0,int b = 1):fz(a),fm(b) {}
    FS to_fs (int, int);
    FS operator+(FS &) const; //重载双目运算符'+',当主函数‘+’的左边是对象时，只写一个传进来的参数
    void Display() const; //规范输出
    int measure(int, int) const; //求最大公约数
};
FS FS::to_fs(int m, int n) {
    fz = m;
    fm = n;
}
FS FS::operator+(FS &s) const {
    int all_m = fm * s.fm;
    int all_z = (fz * s.fm) + (s.fz * fm);
    int all_g = measure(all_z,all_m);
    if(all_m / all_g < 0)
        return FS(-all_z / all_g,-all_m / all_g);
    else
        return FS(all_z / all_g,all_m / all_g);
}
void FS::Display() const{
    cout << fz << "z" << fm <<"m" <<'\n';
}
int FS::measure(int x, int y) const {
    int z = y;
    while(x%y!=0){
        z = x%y;
        x = y;
        y = z;
    }
    return z;
}
int main() {
    int n, i;
    cin >> n;
    for( i = 0; i < n; i++){
        int a1,a2,af = 0,b1,b2,bf = 0;
        char shu1[6],shu2[6];
        FS x,y;
        cin >> shu1 >> shu2;
        if (shu1[2] == '-'){
            af = 1;
            shu1[2] = 'z';
        }
        if (shu2[2] == '-'){
            bf = 1;
            shu2[2] = 'z';
        }
        a1 = atoi(strtok(shu1, "z"));
        a2 = atoi(strtok(strtok(NULL, "z"),"m"));
        b1 = atoi(strtok(shu2, "z"));
        b2 = atoi(strtok(strtok(NULL, "z"),"m"));
        if(af)
            x.to_fs(-a1,a2);
        else
            x.to_fs(a1,a2);
        if(bf)
            y.to_fs(-b1,b2);
        else
            y.to_fs(b1,b2);
        (x+y).Display();
    }
    return 0;
}
