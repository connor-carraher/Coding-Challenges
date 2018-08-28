#include <bits/stdc++.h>

using namespace std;

// Complete the makeAnagram function below.
int makeAnagram(string a, string b) {
    int sameChars = 0;
    int aLength = a.length();
    int bLength = b.length();
    for(int i = 0; i < a.length(); ++i){
        for(int j = 0; j < b.length(); ++j){
            if(a[i] == b[j]){
                a.erase(a.begin() + i);
                b.erase(b.begin() + j);
                ++sameChars;
                i = 0;
                j = 0;
            }
        }
    }
    return (aLength + bLength) - (sameChars * 2);
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string a;
    getline(cin, a);

    string b;
    getline(cin, b);

    int res = makeAnagram(a, b);

    fout << res << "\n";

    fout.close();

    return 0;
}
