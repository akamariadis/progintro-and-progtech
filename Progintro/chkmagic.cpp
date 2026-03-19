#include <iostream>
using namespace std;

int main () {
    int N; //cols rows
    cin >> N;
    int arr[N][N];
    int i, j;
    int sum=0;
    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            cin >> arr[i][j];
            sum += arr[i][j];
        }
    }
    int sum2 = 0;
    for (i = 0; i < N*N; ++i) sum2 += i;
    if (sum == sum2) {
        int sumdiag = 0;
        int sumdiag2 = 0;
        int sumrows[N];
        int sumcols[N];
        for (i = 0; i < N; ++i) {
            sumrows[i] = 0;
            sumcols[i] = 0;
        }
        for (i = 0; i < N; ++i) {
            for (j = 0; j < N; ++j) {
                sumrows[i] += arr[i][j];
                if (i == j) sumdiag += arr[i][j];
                if (i+j==N-1) sumdiag2+=arr[i][j];
            }
        }
        for (j = 0; j < N; ++j) {
            for (i = 0; i < N; ++i) sumcols[j] += arr[i][j];
        }
        int counter = 0;
        for (i = 0 ;i < N; ++i) if (sumrows[i] == sumcols[i] && sumrows[i] == sumdiag && sumdiag == sumdiag2) counter++;
        if(counter==N) cout << "yes" << endl;
        else cout << "no" << endl;
    }
    else cout<<"no"<<endl;
    return 0;
}