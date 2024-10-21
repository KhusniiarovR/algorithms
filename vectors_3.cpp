#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int counter = 0;
    vector<long long int> v1;
    vector<int> v2;
    vector<int> answer;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v2.push_back(x);
        if ((v1[i] * v2[i]) % 60 == 0) {
            if (v1[i] != 0 && v2[i] != 0) {
                answer.push_back(v1[i]);
                counter++;
            }
        }
    }
    cout << counter << endl;
    for (int i : answer) {
        cout << answer[i] << " ";
    }
    return 0;
}