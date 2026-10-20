#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    if (str[0] == 's' || str[str.size() - 1] == 's') {
        cout << "Yes";
    } else {
        cout << "No";
    }

    return 0;
}
