#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int counter = 0;
    cin >> n;
    vector<string> Strings;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        if (s.length() % 2 == 0) {
            counter++;
            Strings.push_back(s);
        }
    }
    cout << counter << endl;
    for (int i = 0; i < Strings.size(); i++) {
        cout << Strings[i] << " ";
    }
    return 0;
}