#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main () {
    string str;
    int N, i, a = 0, counter = 0, sum = 0, j;
    cin >> N;
    getline(cin, str);
    str.clear();
    for (i = 0; i < N; ++i) {
        getline(cin, str);
        a += str.size();
        if (a > 20) cout << "error" << endl;
        else if (a == 0) cout << "empty" << endl;
        else if (a > 0 && a <= 20) {
            for (j = 0 ; j < (a / 2) ; ++j){
                if (str[j] == str[a-j-1]) counter++;
            }
            if(counter==a/2){
                cout << "yes" << endl;
                sum++;
            }
            else cout<<"no"<<endl;
        }
        a = 0;
        str.clear();
        counter = 0;
    }
    double per = (sum * 100.000) / N;
    cout << fixed << setprecision(3) << per << endl;
    return 0;
}