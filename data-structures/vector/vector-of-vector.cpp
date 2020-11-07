#include <iostream>
#include <vector>

#define ROW 4
#define COL 5

using namespace std;

int main() {
    vector<vector<int> > v;
    int num = 10;

    for (int i = 0; i < ROW; i++) {
        vector<int> v1;
        for (int j = 0; j < COL; j++) {
            v1.push_back(num);
            num += 5;
        }

        // Pushing back above 1D vector
        // to create the 2D vector
        v.push_back(v1);
    }

    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++)
            cout << v[i][j] << " ";
        cout << "\n";
    }

    cout << "\n";
    vector<vector<int> > vec { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8 , 9} };
    
    vec[2].pop_back();
    vec[1].pop_back();

    for (int i = 0; i < 3; i++) {
        for (auto it = vec[i].begin(); it != vec[i].end(); it++)
            cout << *it << " ";
        cout << "\n";
    }
}