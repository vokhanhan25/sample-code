#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector <int> v;

    for (int i = 1; i < 10; i++)
        v.push_back(i);
    
    cout << "Size: " << v.size() << "\n";
    cout << "Capacity: " << v.capacity() << "\n";
    cout << "Max_Size: " << v.max_size() << "\n";

    // changes the size of the Vector 
    // but does not destroys the elements
    v.resize(5);

    //print the vector size after resize()
    cout << "Size: " << v.size() << "\n";

    //checks if the vector is empty or not
    if (v.empty())
        cout << "Vector is empty\n";
    else 
        cout << "Vector is not empty\n";

    // Shrinks to the size 
    // till which elements are 
    // destroys the elements after 5 
    v.shrink_to_fit();
    cout << "\nVector elements after shrink_to_fit() are: "; 
    for (int i = 0; i < 10; i++) 
        cout << v[i] << " "; 
    cout << "\n";

    cout << "Vector elements are: ";
    for (auto i = v.begin(); i != v.end(); i++)
        cout << *i << " ";
}