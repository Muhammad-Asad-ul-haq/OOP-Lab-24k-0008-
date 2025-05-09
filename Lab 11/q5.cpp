#include <iostream>
#include <string>
using namespace std;

template <typename T>
T findMax(T arr[], int size) {
    T max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max) max = arr[i];
    return max;
}

int main() {
    int nums[] = {10, 20, 5, 30, 25};
    cout << "Maximum: " << findMax(nums, 5) << endl;

    string fruits[] = {"Apple", "Mango", "Banana", "Peach"};
    cout << "Maximum: " << findMax(fruits, 4) << endl;

    return 0;
}
