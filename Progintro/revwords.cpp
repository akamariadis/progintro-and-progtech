#include <iostream>
#include <string>
using namespace std;

bool isletter (char c){
    if((c>='A' && c<='Z') || (c>='a' && c<='z')) return true;
    else return false;
}

int main () {
    int c, pl = 1, i = 0;
    string words[100], word;
    int chars[100] = {0};
    char CHARS[100];
    c = getchar();
    while (c != EOF){
        if (c != '\n'){
            if(pl < 20 && isletter(c) == true) {
                pl++;
                c = getchar();
                word[pl-1] = c;
            }
            else if (pl >= 20) {
                pl = 0;
                words[i] = word;
                ++i;
                word.clear();
                if (c >= 33 && c <= 64) {
                    chars[i] = 1;
                    CHARS[i] = c;
                }
            }
        }
        else {
            for (int j = i; j >= 0; --j) {
                if(chars[j] == 1) cout << words[j] << CHARS[j] << ' ';
                else cout << words[j] << ' ';
                words[i].clear();
            }
            i = 0;
            word.clear();
        }
        c = getchar();
    }
    return 0;
}