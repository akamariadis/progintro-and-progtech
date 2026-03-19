#include <iostream>

int main () {
    int a, b, a1, b1, sum1, sum2;
    std::cin >> a >> b;
    std::cin >> a1 >> b1;
    if (b != b1){
        sum2 = (b * b1);
        sum1 = (a * b1) + (b * a1);
    }
    else {
        sum1 = a + a1;
        sum2 = b;
    }
    std::cout << sum1 << " " << sum2 << std::endl;
    return 0;
}