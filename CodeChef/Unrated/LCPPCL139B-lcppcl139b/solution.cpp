#include<iostream>
using namespace std;
// complete the function below to calculcate (a + b)^2
inline int abSquared(int a, int b){
    return a*a+b*b+2*a*b;
}
int main(){
    int a, b;
    cin >> a >> b;
    int expression_value = abSquared(a, b);
    cout<<expression_value<<endl;
}
