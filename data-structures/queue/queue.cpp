#include <iostream>
#include <queue>

using namespace std;

void showQueue(queue <int> q) {
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << '\n';
}

int main() {
    queue <int> q1, q2;
    q1.push(10);
    q1.push(20);
    q1.push(30);

    q2.push(55);
    q2.push(66);
    q2.push(77);
    q2.push(17);

    cout << "The queue 1 is: ";
    showQueue(q1);

    cout << "The queue 2 is: ";
    showQueue(q2);

    cout << "q1.size(): " << q1.size() << '\n';
    cout << "q1.front(): " << q1.front() << '\n';
    cout << "q1.back(): " << q1.back() << '\n';
    cout << "q1.pop(): ";
    q1.pop();
    showQueue(q1);

    // We can also use front and back as 
    // iterators to traverse through the queue
    cout << "Using iterators: ";
    for (auto i = q1.front(); i != q1.back(); i++) {
        cout << i << " ";
    }
    cout << '\n';

    // Swap elements of queues 
    q1.swap(q2); 

    cout << "The queue 1 after swap is: ";
    showQueue(q1);

    cout << "The queue 2 after swap is: ";
    showQueue(q2);

    q2.emplace(15);
    cout << "q2.emplace(): ";
    showQueue(q2);
}