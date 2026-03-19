#include <iostream>

int mkd (int ar, int par) {
    while (ar > 0 && par > 0) {
        if (ar > par) ar = ar % par;
        else par = par % ar;
    }
    int gcd = ar + par;
    return gcd;
}

void add (int ar1, int par1, int ar2, int par2) {
    int ar = ar1 * par2 + ar2 * par1;
    int par = par1 * par2;
    int gcd = mkd (ar, par);
    ar = ar / gcd;
    par = par / gcd;
    std::cout << ar << " " << par << std::endl;
}

void sub (int ar1, int par1, int ar2, int par2) {
    int ar = ar1 * par2 - ar2 * par1;
    int par = par1 * par2;
    int gcd = mkd (ar, par);
    ar = ar / gcd;
    par = par / gcd;
    std::cout << ar << " " << par << std::endl;
}

void mul (int ar1, int par1, int ar2, int par2) {
    int ar = ar1 * ar2;
    int par = par1 * par2;
    int gcd = mkd (ar, par);
    ar = ar / gcd;
    par = par / gcd;
    std::cout << ar << " " << par << std::endl;
}

void div (int ar1, int par1, int ar2, int par2) {
    int ar = ar1 * par2;
    int par = par1 * ar2;
    int gcd = mkd (ar, par);
    ar = ar / gcd;
    par = par / gcd;
    std::cout << ar << " " << par << std::endl;
}

int main () {
    int N, ar1, par1, ar2, par2;
    char c;
    std::cin >> N;
    for (int i = 0; i < N; ++i) {
        std::cin >> c;
        std::cin >> ar1 >> par1;
        std::cin >> ar2 >> par2;
        if (c == '+') add(ar1, par1, ar2, par2);
        else if (c == '-') sub(ar1, par1, ar2, par2);
        else if (c == '*') mul(ar1, par1, ar2, par2);
        else div(ar1, par1, ar2, par2);
    }
    return 0;
}