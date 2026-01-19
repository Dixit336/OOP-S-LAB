#include <iostream>
using namespace std;

namespace First {
    int value = 10;

    void display() {
        cout << "Value from First namespace: " << value << endl;
    }
}
namespace Second {
    int value = 20;
    void display() {
        cout << "Value from Second namespace: " << value << endl;
    }
}

int main() {
    First::display();
    Second::display();
    return 0;
}
