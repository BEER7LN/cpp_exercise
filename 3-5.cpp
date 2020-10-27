#include <iostream>
#include <cstring>
using namespace std;
int main() {
    char a[101];
    int n, i;
    cin >> a;
    n = strlen(a);
    for(i = 0; i < n; i++) {
        if(a[i] != 'a')
            cout << a[i];
    }
    return 0;
}
