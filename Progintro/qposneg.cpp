#include <iostream>
#include <queue>
#include <cmath>
using namespace std;


int main () {
    queue<int> abspos, absneg;
    int data;
    while (scanf("%d", &data) == 1) {
        if (data > 0) {
            abspos.push(data);
        }
        else if (data < 0) {
            absneg.push(abs(data));
        }
        if(cin.get() == '\n') break;
    }
    if (abspos.size() == absneg.size()) {
        int qsize = abspos.size();
        int cnt = 0;
        bool ans = true;
        while (ans == true && !abspos.empty() && !absneg.empty()) {
            if (abspos.front() == absneg.front()) {
                abspos.pop();
                absneg.pop();
                cnt++;
                ans = true;
            }
            else {
                ans = false;
            }
        }
        if (cnt == qsize) {
            cout << "yes" << endl;
        }
        else {
            cout << "no" << endl;
        }
    }
    else {
        cout << "no" << endl;
    }
    return 0;
}
