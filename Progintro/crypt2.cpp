#include <iostream>
using namespace std;

bool pezo (char a) {
    return (a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z');
}

bool kef (char b) {
    return (b >= 'A' && b <= 'Z');
}

int main () {
    char character[26];
    int flag = 0, i;
    for (i = 0; i < 26; i++) character[i] = getchar();
    char disposable = getchar();
    for (i = 0; i < 26; ++i) {
        if (pezo(character[i]) == 0)
            flag = 1;
        if (flag == 1) break;
        for (int j = 0; j < 26; ++j) {
            if (i == j)break;
            else if (character[i] == character[j]) {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 1) {
        cout << "error" << endl;
        return 0;
    }
    char letter;
    cin >> letter;
    if (letter == 'd') {
        cin.ignore(1000,'\n');
        int c = getchar();
        while (c != EOF) {
            if (pezo(c)) {
                if (kef(c)) {
                    for (i = 0; i < 26; i++) {
                        if (char('a' + (c - 'A')) == character[i]) {
                            cout << char('A' + i);
                            break;
                        }
                    }
                } else {
                    for (i = 0; i < 26; ++i) {
                        if (c == character[i]) {
                            cout << char('a' + i);
                            break;
                        }
                    }
                }
            } else putchar(c);
            c = getchar();
        }
    } else {
        cin.ignore(1000,'\n');
        int c = getchar();
        while(c!=EOF){
            if(pezo(c)){
                if(kef(c))
                    cout<<char('A'+(character[c-'A']-'a'));
                else
                    cout<< character[c-'a'];
            }
            else putchar(c);
            c=getchar();
        }
    }
}