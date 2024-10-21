#include <bits/stdc++.h>
using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> VECTOR;
    for (int i = 0; i < q; i++) {
        const int ADD_END = 1, DELETE_END = 2, ADD_BEFORE = 3, DELETE_P = 4, FIND_V = 5, SHOW_P = 6;
        int type;
        cin >> type;
        switch (type) {
            case ADD_END: {
                int x;
                cin >> x;
                VECTOR.push_back(x);
                break;
            }
            case DELETE_END: {
                auto it = VECTOR.end() - 1;
                if (VECTOR.empty()) {
                    cout << -1 << " ";
                }
                else {
                    cout << *it << " ";
                    VECTOR.erase(it);
                }

                break;
            }
            case ADD_BEFORE: {
                int x,y;
                cin >> x >> y;
                auto it = VECTOR.begin()+ x -1;
                VECTOR.insert(it, y);
                break;
            }
            case DELETE_P: {
                int x;
                cin >> x;
                auto it = VECTOR.begin() + x - 1;
                cout << *it << " ";
                VECTOR.erase(it);
                break;
            }
            case FIND_V: {
                int x;
                cin >> x;
                auto it = std::find(VECTOR.begin(), VECTOR.end(), x);
                auto it2 = distance(VECTOR.begin(), it);
                if (it == VECTOR.end()) {
                    cout << -1 << " ";
                }
                else {
                    cout << it2+1 << " ";
                }
                break;
            }
            case SHOW_P: {
                int x;
                cin >> x;
                auto it = VECTOR.begin() + x - 1;
                if (it == VECTOR.end()) {
                    cout << -1 << " ";
                }
                else {
                    cout << *it << " ";
                }
                break;
            }
        }
    }
    return 0;
}