#include <iostream>
#define size 20
using namespace std;
void mov(int x[],int n,int m) {
    int j, k = n;
   for(j = 0; j < n; j++) {
       x[m + k -1] = x[k-1];
       k--;
   }
   k = n;
   cout << "After move: ";
   for(j = 0; j < m; j++) {
       cout << x[k] << " ";
       k++;
   }
   k = m;
   for(j = 0; j < n - m; j++) {
       cout << x[k];
       k++;
       if (k != n)
           cout <<" ";
   }
}
int main() {
    int i, num, gom;
    cin >> num >> gom;
    int a[size];
    for(i = 0; i < num; i++) {
        cin >> a[i];
    }
    mov(a, num, gom);
    return 0;
}
