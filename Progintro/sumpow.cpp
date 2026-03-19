#include <iostream>
#include <cmath>
using namespace std;

int main () {
    int i, N, dig, k, sum=0;
    cin >> N;
    int powers[10];
    for (i = 0; i < 10; ++i) powers[i] = pow(i,N);
    for (i=0; i<89999999; i++){
        k = i;
        while(k > 0){
            dig = k % 10;
            sum += powers[dig];
            k = k / 10;
        }
        if(sum == i) cout << sum << endl;
        sum = 0;
    }
    return 0;
}