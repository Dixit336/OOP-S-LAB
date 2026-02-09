#include <iostream>
using namespace std;

class Rectangle {
    int length, breadth;
public:
    Rectangle(int l = 0, int b = 0) {
        length = l;
        breadth = b;
    }
    int area() {
        return length * breadth;
    }
};

int main() {
    int* pInt = new int(10);
    cout << "Integer value: " << *pInt << endl;
    float* pFloat = new float(5.5);
    cout << "Float value: " << *pFloat << endl;
    int n = 5;
    int* intArr = new int[n];
    cout << "Integer array: ";
    for (int i = 0; i < n; i++) {
        intArr[i] = i + 1;
        cout << intArr[i] << " ";
    }
    cout << endl;
    float* floatArr = new float[n];
    cout << "Float array: ";
    for (int i = 0; i < n; i++) {
        floatArr[i] = (i + 1) * 1.1;
        cout << floatArr[i] << " ";
    }
    cout << endl;
    Rectangle* r1 = new Rectangle(10, 4);
    cout << "Area of rectangle object: " << r1->area() << endl;

    Rectangle* rArr = new Rectangle[3] {
        Rectangle(),
        Rectangle(5),
        Rectangle(8, 6)
    };

    cout << "Areas of rectangle array:\n";
    for (int i = 0; i < 3; i++) {
        cout << rArr[i].area() << endl;
    }
    delete pInt;
    delete pFloat;
    delete[] intArr;
    delete[] floatArr;
    delete r1;
    delete[] rArr;
    return 0;
}