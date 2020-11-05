#include <iostream>
#include <stack>

using namespace std;

void showStack(stack <int> s) {
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << "\n";
}

int main() {
    stack <int> s1, s2;
    s1.push(1);
    s1.push(3);
    s1.push(5);
    s1.push(7);
    s1.push(9);

    s2.push(0);
    s2.push(2);
    s2.push(6);
    s2.push(8);
    s2.push(10);

    cout << "The stack 1 is: ";
    showStack(s1);

    cout << "s1.size(): " << s1.size() << "\n";
    cout << "s1.top(): " << s1.top() << "\n";
    cout << "s1.pop(): "; 
    s1.pop();
    showStack(s1);

    cout << "The stack 2 is: ";
    showStack(s2);

    s1.swap(s2);

    cout << "The stack 1 after swap is: ";
    showStack(s1);

    cout << "The stack 2 after swap is: ";
    showStack(s2);

    s2.emplace(25); //  The parameter is added to the stack at the top position.
    cout << "s2.emplace(): ";
    showStack(s2); 
}