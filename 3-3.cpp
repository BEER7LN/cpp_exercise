#include <iostream>
using namespace std;
int m[4] = {0};
int s[4] = {0};
void stat(int x[4][4]) {
    int a, b;
    for(a = 0; a < 4; a++) {
        for(b = 0; b < 4; b++) {
            if(x[a][b] % 2 == 0) {
                m[a]++;
                s[a] += x[a][b];
            }
        }
    }
}
int main() {
    int data[4][4];
    int i, j;
    for(i = 0; i < 4; i++) {
        for(j = 0; j < 4; j++) {
            cin >> data[i][j];
        }
    }
    stat(data);
    for(i = 0; i < 4; i++) {
        cout << "line" << i+1 << " = " << m[i] << ";";
        cout << " sum = " << s[i];
        cout <<'\n';
    }
    return 0;
}
