#include <iostream>
#include <iomanip>
using namespace std;
int max_score(int s[5]) {
    int max, j;
    max = s[0];
    for(j = 0; j < 5; j++) {
        if(max < s[j])
            max = s[j];
    }
    return max;
}
int main() {
    char name[5][4];
    int score[5];
    int i, k;
    double maxs;
    for(i = 0; i < 5; i++) {
        cin >> name[i];
        cin >> score[i];
    }
    maxs = max_score(score);
    for(i = 0; i < 5; i++) {
        if(score[i] == maxs) {
            cout << "name = ";
            for(k = 0; k < 4;k++) {
                cout << name[i][k];
            }
            cout << ", score = " << fixed << setprecision(1) << maxs;
        }
    }
    return 0;
}
