#include <iostream>
#define size 10
using namespace std;
int main() {
    char *mon[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int month[size];
    int repeat, i;
    cin >> repeat;
    for(i = 0; i < repeat; i++) {
        cin >> month[i];
    }
    for(i = 0; i < repeat; i++) {
        if(month[i] < 1 || month[i] > 12)
            cout << "Wrong input!" << endl;
        else
            cout << *(mon + month[i] -1)<< endl;
    }
    return 0;
}
