#include <iostream>
#include <algorithm>
using namespace std;

int main () {
    int N, i;
    cin >> N;
    int A[N], B[N];

    for (i = 0; i < N; ++i) cin >> A[i];
    for (i = 0; i < N; ++i) cin >> B[i];
    int j;
    int counter = 0;
    std::sort(A, A+N);
    std::sort(B, B+N);
    for (i = 0; i < N; ++i){
        if (A[i] == B[i]) counter++;
    }
    if (counter == N) cout<<"yes"<<endl;
    else {
        int min, max;
        if (A[0] != B[0]) {
            if (A[0] < B[0]) min=A[0];
            else min=B[0];
        }
        else if (A[0] == B[0]) {
            i = 1;
            if (A[i] == B[i]) {
                while (A[i] == B[i]) i++;
            }
            if (A[i] < B[i]) min=A[i];
            else min=B[i];
        }
        if (A[N-1] != B[N-1]) {
            if (A[N-1] > B[N-1]) max=A[N-1];
            else max=B[N-1];
        }
        else if (A[N-1] == B[N-1]) {
            i = N - 2;
            if (A[i] == B[i]) {
                while(A[i] == B[i]) --i;
            }
            if (A[i] > B[i]) max=A[i];
            else max=B[i];
        }
        cout << "no" << ' ' << min << ' ' << max << endl;
    }
    return 0;
}