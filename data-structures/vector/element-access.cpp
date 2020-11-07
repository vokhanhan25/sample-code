#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;
    for (int i = 1; i <= 10; i++)
        v.push_back(i * 10);
    
    cout << "Reference operator [v]: v[2] = " << v[2] << "\n";
    
    cout << "at: v.at(4) = " << v.at(4) << "\n";

    cout << "front(): v.front() = " << v.front() << "\n"; 

    cout << "back(): v.back() = " << v.back() << "\n";

    //pointer to the first element
    int* pos = v.data();
    cout << "The first element is " << *pos;
}