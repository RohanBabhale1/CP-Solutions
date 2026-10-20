#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    int majority = N / 2 + 1;
    int needed = majority - K;

    if (needed < 0) {
        needed = 0;
    }

    cout << needed;

    return 0;
}
