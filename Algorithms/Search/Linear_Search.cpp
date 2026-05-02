#include <iostream>
#include <vector>
using namespace std;

int Linear_Search (vector<int> a, int x){
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == x) return i;
    }
    return -1;
}

int main() {
    vector<int> a = {5, 6, 1, 7, 9, 4, 2, 10, 8, 3};
    cout << Linear_Search(a, 7) << endl;
    cout << Linear_Search(a, 11);
    return 0;
}