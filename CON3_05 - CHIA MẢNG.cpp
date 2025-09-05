#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
        if(k <= n/2){  
            int sum1 = 0, sum2 = 0;
            for(int i = 0; i < k; i++) sum1 += a[i];
            for (int i = k; i < n; i++) sum2 += a[i];
            cout << sum2 - sum1 << endl;
        }
        else{ 
            int sum1 = 0, sum2 = 0;
            for(int i = 0; i < n-k; i++) sum1 += a[i];
            for (int i = n-k; i < n; i++) sum2 += a[i];
            cout << sum2 - sum1 << endl;
        }
    }
}