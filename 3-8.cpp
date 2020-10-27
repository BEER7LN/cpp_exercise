#include <iostream>
#define size 10
using namespace std;
void sort_sge(int b1[],int m){
    int p, q, * b;
    for(p = 0; p < m - 1; p ++){
        for(b = b1 + p; b < b1 + m - 1; b++){
            if(*(b) > *(b + 1)){
                q = *(b);
                *(b) = *(b + 1);
                *(b + 1) = q;
            }
        }
    }
}
int main(){
    char name[size][10];
    int brith[size], age[size];
    char phone[size][20];
    int n, i, j, s;
    cin >> n;
    for(i = 0; i < n; i++){
        cin >> name[i];
        cin >> brith[i];
        age[i] = brith[i];
        cin >> phone[i];
    }
    sort_sge(age, n);
    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++,s = 0){
            if(*(age + i) == *(brith + j)){
                while(name[j][s] != '\0'){
                    cout << name[j][s];
                    s++;
                }
                cout <<" " << *(brith + j) << " ";
                s = 0;
                while(phone[j][s] != '\0'){
                    cout << phone[j][s];
                    s++;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}