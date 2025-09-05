#include <iostream>
#include <vector>
using namespace std;

// void catalan(){
//     long long a[32];
//     a[0] = a[1] = 1; a[2] = 2;
//     for(int n = 3; n <= 31; i++){
//         for(int i = 0; i <= n/2 - 1; i++){
//                 long long sum = 0;
//                 sum += a[i]*a[n-i];
//             }
//         if(n % 2 == 0){
//             a[n] = 2 * sum;
//         }
//         else{
//             a[n] = 2 * sum + a[n/2] * a[n/2];
//         }
//     }
// }

int main(){
    int t; cin >> t;
    long long a[32];
    a[0] = a[1] = 1; a[2] = 2;
    for (int n = 1; n <= 31; n++) {
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i] * a[n - 1 - i];
        }
        a[n] = sum;
    }
    while(t--){
        int n; cin >> n;
        cout << a[n] << endl;
    }
}