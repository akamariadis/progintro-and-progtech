#include <iostream>
#include <iomanip>
using namespace std;

int main () {
    int N, M, i, j;
    cin >> N >> M;
    double mo_gra[N], sum_gra=0, mo_stil[M], sum_stil=0, arr[N][M];
    for (i = 0; i < N; ++i) {
        for (j = 0; j < M; ++j) {
            cin >> arr[i][j];
            sum_gra += arr[i][j];
        }
        mo_gra[i] = sum_gra / M;
        sum_gra = 0;
    }
    for (j = 0; j < M; ++j) {
        for (i = 0; i < N; ++i) sum_stil += arr[i][j];
        mo_stil[j] = sum_stil / N;
        sum_stil = 0;
    }
    double aver_gra, sum1=0;
    double aver_stil, sum2=0;
    for (i = 0; i < N; ++i) sum1 = sum1 + mo_gra[i];
    for (j=0; j<M; j++) sum2 = sum2 + mo_stil[j];
    aver_gra = sum1 / N;
    aver_stil = sum2 / M;
    cout << fixed << setprecision(3) << aver_gra << endl;
    cout << fixed << setprecision(3) << aver_stil << endl;
    return 0;
}
