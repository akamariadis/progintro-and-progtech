#include <iostream>
using namespace std;

int main () {
    int check[26],i;
    char c[26];
    for (i = 0;i < 26; ++i) check[i] = 1;
    for (i = 0;i < 26; ++i) {
        c[i] = getchar();
        if (c[i] <= 122 && c[i] >= 97)
            check[c[i] -'a']=0;
        else{
            cout<<"error"<<endl;
            return 0;
        }
    }
    int flag = 0;
    for( i=0;i<26;i++){
        if(check[i] ==1)
            flag = 1;
    }
    if(flag ==1) cout<<"error"<<endl;
    else {
        char l, p[100000];
        i = 0;
        getchar();
        do {
            l = getchar();
            p[i] = l;
            i++;
        } while (l != EOF);


        for (int j = 0; j < i-1; j++) {
            if (97 <= p[j] && 122 >= p[j])
                p[j] = c[p[j]-'a'];
            else if (65 <= p[j] && 90 >= p[j])
                p[j] = c[p[j]-'A'] - 32;
            cout << p[j];
        }
    }
    return 0;
}