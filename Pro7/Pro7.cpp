#include <iostream>
#include "ObscuredStructure.h"
using namespace std;

int main(){
    Child1<int> ch1;
    ch1.add(1);
    ch1.add(2);
    ch1.add(3);
    cout << ch1.peek();
    
}
