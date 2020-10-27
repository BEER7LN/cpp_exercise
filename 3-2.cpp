#include <iostream>
#define size 50
using namespace std;
int main() {
    int n[size];
    int num, i, max, min;
    cin >> num;
    for (i = 0; i < num; i++) {
        cin >> n[i];
    }
    max = min = n[0];
    for (i = 0; i < num; i++) {
        if(max < n[i])
            max = n[i];
        if(min > n[i])
            min = n[i];
    }
    cout << "max = " << max <<'\n';
    cout << "min = " << min <<'\n';
    return 0;
}
