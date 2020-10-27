#include <iostream>
#include <iomanip>
#define size 50
using namespace std;
void sort_sge(double b1[],int m){
    int p, t;
    double q;
    for(p = 0; p < m - 1; p ++){
        for(t = p; t < m - 1;t++){
            if(b1[t] < b1[t + 1]){
                q = b1[t];
                b1[t] = b1[t + 1];
                b1[t + 1] = q;
            }
        }
    }
}
int main(){
    int sid[size];
    char name[size][10];
    int c1[size];
    int c2[size];
    int c3[size];
    double avg_c[size], sort_c[size];
    int n, i, j, s;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> sid[i];
        cin >> name[i];
        cin >> c1[i];
        cin >> c2[i];
        cin >> c3[i];
        sort_c[i] = avg_c[i] = (double)(c1[i] + c2[i] + c3[i])/3;
    }
    sort_sge(sort_c, n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            s = 0;
            if(sort_c[i] == avg_c[j]){
                cout << sid[j] << ",";
                while(name[j][s] != '\0'){
                    cout << name[j][s];
                    s++;
                }
                cout <<"," << fixed << setprecision(2) << *(avg_c + j);
                break;
            }
        }
        cout << '\n';
    }
    return 0;
}