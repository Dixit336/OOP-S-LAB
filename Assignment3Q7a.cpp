#include <iostream>
using namespace std;
class Number {
public:
    int x;
    Number(int a = 0) { x = a; }
};
Number increment(Number obj) {   
    obj.x += 10;
    return obj;
}
int main() {
    Number n1(5);
    Number n2 = increment(n1);
    cout << "Original value = " << n1.x << endl;
    cout << "Returned value = " << n2.x << endl;
    return 0;
}