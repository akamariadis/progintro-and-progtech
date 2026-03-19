#include <iostream>

int main(){
    int N, i;
    std::cin >> N;
    if (N <= 0) std::cout << "nothing today" << std::endl;
    else {
        for(i=0;i<N;i++) std::cout << "hello world" << std::endl;
    }
    return 0;
}