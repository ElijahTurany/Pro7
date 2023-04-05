#include <iostream>
#include "ObscuredStructure.h"
using namespace std;

int main(){
    Child1 ch1;
    ch1.add(1);
    ch1.add(2);
    ch1.add(3);
    cout << ch1.peek();
    ch1.remove();
    cout << ch1.peek();
    ch1.remove();
    cout << ch1.peek() << endl;
    ch1.remove();
    ch1.remove();

    Child2 ch2;
    ch2.add(4);
    ch2.add(5);
    ch2.add(6);
    cout << ch2.peek();
    ch2.remove();
    cout << ch2.peek();
    ch2.remove();
    cout << ch2.peek() << endl;
    ch2.remove();
    ch2.remove();

    try {
        ch1.peek();
    }
    catch (...) {
        cout << "Ch1 is empty" << endl;
    }

    try {
        ch2.peek();
    }
    catch (...) {
        cout << "Ch2 is empty" << endl;
    }
}
