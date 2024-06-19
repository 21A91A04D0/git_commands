#include<bits/stdc++.h>
using namespace std;
int binary_exponentiation(int a, int b) {
    int result = 1;
    int mod = 1e9 + 7;
    while(b) {
        if(b & 1) {
            b = b - 1;
            result = (result % mod * a % mod) % mod;
        }
        else {
            b = b / 2;
            a = a * a;
        }
    }
    return result;
}
int main(){
    int a, pow;
    cin >> a >> pow;
    cout << binary_exponentiation(a, pow);
}