#include <iostream>
using namespace std;

int main () {
    int N, M, i, j;
    cin >> N >> M;
    int arrMIN[100], arrMAX[100], arr[100][100];
    for (j = 0; j < M; ++j) arrMAX[j] = -1;
    for (i = 0; i < N; ++i) arrMIN[i] = 100000;
    for (i = 0; i < N; ++i){
        for (j=0; j<M; j++) cin >> arr[i][j];
    }
    for (i = 0; i < N; ++i) {
        for (j = 0; j < M; ++j) {
            if (arr[i][j]<arrMIN[i]) arrMIN[i] = arr[i][j];
        }
    }
    for (j = 0; j < M; ++j) {
        for (i = 0; i < N; ++i) {
            if (arr[i][j] > arrMAX[j]) arrMAX[j] = arr[i][j];
        }
    }
    int minnum = 1088881;
    int maxnum = -1;
    for (j = 0; j < M; ++j) {
        if (arrMAX[j] < minnum) minnum=arrMAX[j];
    }
    for (i = 0; i < N; ++i) {
        if (arrMIN[i] > maxnum) maxnum = arrMIN[i];
    }
    cout << minnum << endl;
    cout << maxnum << endl;
    return 0;
}