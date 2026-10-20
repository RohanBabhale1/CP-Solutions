#include <iostream>
using namespace std;

// User-defined function to generate and print a list of numbers from 1 to limit
void list_generator(int limit) {
    int i=1;
    while(i<=limit){
        cout<<i<<" ";
        i++;
    }
    cout<<"\n";
    
}

// Do not update the code below this line

int main() {
    int A, B;
    cin >> A >> B;

    list_generator(A);
    list_generator(B);

    
}
