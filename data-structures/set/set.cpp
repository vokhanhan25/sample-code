#include <iostream>
#include <set>

using namespace std;

int main() {
    set <int, greater<int> > s1;
    s1.insert(40);
    s1.insert(30);
    s1.insert(60);
    s1.insert(20);
    s1.insert(50);

    // Only one 50 will be added to the set
    s1.insert(50);
    s1.insert(10);

    // printing set s1
    for (auto it = s1.begin(); it != s1.end(); it++) 
        cout << *it << " ";
    cout << "\n";

    // assigning the elements from s1 to s2
    set<int> s2(s1.begin(), s1.end());

    // print all elements of the set s2
    for (auto it = s2.begin(); it != s2.end(); it++)
        cout << *it << " ";
    cout << "\n";

    cout << "s2 after removal of lements less than 30: \n";
    s2.erase(s2.begin(), s2.find(30));
    for (auto it = s2.begin(); it != s2.end(); it++)
        cout << *it << " ";
    cout << "\n"; 

    //remove element with value 50 in s2
    int num;
    num = s2.erase(50);
    cout << "s2.erase(50): ";
    cout << num << " removed\n";
    for (auto it = s2.begin(); it != s2.end(); it++)
        cout << *it << " ";
    cout << "\n";

    cout << "s1.lower_bound(40): \n" << *s1.lower_bound(40) << "\n";
    cout << "s1.upper_bound(40): \n" << *s1.upper_bound(40) << "\n";

    cout << "s2.lower_bound(40) :\n"
         << *s2.lower_bound(40)
         << endl;
    cout << "s2.upper_bound(40) : \n"
         << *s2.upper_bound(40)
         << endl;
}