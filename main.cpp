#include <iostream>
using namespace std;

int max(int a=0, int b=0, int c=0) {
    if(a>b && a>c) {
        return a;
    } else if(b>c) {
        return b;
    }else {
        return c;
    }
}

int main() {
    cout<<max()<<endl;
    cout<<max(10)<<endl;
    cout<<max(10,13)<<endl;
    cout<<max(10,13,15)<<endl;

    return 0;
}
