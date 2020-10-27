#include <iostream>
#include <cstring>
#define size 50
using namespace std;
void strmcpy(char *s,char *t,int m){
    char *temp;
    temp = t + m - 1;
    while(*s++ = *temp++);
}
int main(){
    int repeat, i = 0,n;
    char str_2[size], str_1[size];
    cin >> repeat;
    for(; i < repeat; i++) {
        getchar();
        cin.getline(str_1,size);
        cin >> n;
        //在调用外进行判断，函数内，只有指针无法获取数组长度
        if (n > strlen(str_1))
            cout << "error input";
        else {
            strmcpy(str_2, str_1, n);
            puts(str_2);
        }
    }
    return 0;
}