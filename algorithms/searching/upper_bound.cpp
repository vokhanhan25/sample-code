#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> arr1 = {10, 15, 20, 25, 30, 35};
    
    vector<int> arr2 = {10, 15, 20, 20, 25, 30, 35};

    vector<int> arr3 = {10, 15, 25, 30, 35};

    cout << "The position of 20 using lower_bound (in single occurrence case) : ";
    cout << lower_bound(arr1.begin(), arr1.end(), 20) - arr1.begin() << "\n";

    cout << "The position of 20 using lower_bound(in multiple occurrence case) : ";
    cout << lower_bound(arr2.begin(), arr2.end(), 20) - arr2.begin() << "\n";

    cout << "The position of 20 using lower_bound (in no occurrence case) : ";
    cout << lower_bound(arr3.begin(), arr3.end(), 20) - arr3.begin() << "\n";

    if (binary_search(arr1.begin(), arr1.end(), 15))
        cout << "15 exists in vector";
    else 
        cout << "15 does not exist";
    cout << "\n";

    cout << &arr1[0] << "\n";
    cout << &arr1[1] << "\n";
    cout << &arr1[2] << "\n";
}