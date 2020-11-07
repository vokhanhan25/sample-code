#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v;

    //fill the array with 10 five times
    v.assign(5, 10);

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    //inserts 15 to the last position
    v.push_back(15);
    int n = v.size();
    cout << "The last element is: " << v[n - 1] << "\n";

    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    //removes last element
    v.pop_back();

    //prints the vector
    cout << "The vector elements are: ";
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n";

    //inserts 5 at the beginning
    v.insert(v.begin(), 5);
    cout << "The first element is: " << v[0] << "\n";

    //removes the first element
    v.erase(v.begin());
    cout << "The first element is: " << v[0] << "\n";

    //inserts at the beginning
    v.emplace(v.begin(), 5);
    cout << "The first element is: " << v[0] << "\n";

    //inserts 20 at the end
    v.emplace_back(20);
    n = v.size();
    cout << "The last element is: " << v[n - 1] << "\n";

    //erases the vector
    v.clear();
    cout << "Vector size after erase(): " << v.size() << "\n";

    cout << "\n";
    //two vector to perform swap
    vector<int> v1, v2;
    v1.push_back(1);
    v1.push_back(2);
    v2.push_back(3);
    v2.push_back(4);

    cout << "Vector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << "\n";

    cout << "Vector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";

    //swaps v1 and v2
    v1.swap(v2);
    cout << "\n\nAfter swap\n";

    cout << "Vector 1: ";
    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << " ";
    cout << "\n";

    cout << "Vector 2: ";
    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << " ";
}