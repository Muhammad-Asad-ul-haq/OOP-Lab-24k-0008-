#include <iostream>
#include <stdexcept>
using namespace std;

class OutOfBoundsException : public runtime_error {
public:
    OutOfBoundsException() : runtime_error("Invalid index access attempted!") {}
};

template <typename T>
class SmartArray {
    T* arr;
    int size;
public:
    SmartArray(int n) : size(n) { arr = new T[size]; }
    ~SmartArray() { delete[] arr; }
    
    T& operator[](int i) {
        if (i < 0 || i >= size) throw OutOfBoundsException();
        return arr[i];
    }
};

int main() {
    SmartArray<int> a(3);
    a[0] = 10; a[1] = 20; a[2] = 30;
    
    try {
        cout << a[1] << endl;  // Works (20)
        cout << a[3] << endl;  // Throws
    } catch (const OutOfBoundsException& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}
