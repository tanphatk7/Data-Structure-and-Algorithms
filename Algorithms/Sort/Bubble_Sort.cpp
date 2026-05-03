#include <iostream>
#include <vector>
using namespace std;

void Bubble_Sort (vector<int>& a) {
    // Increasing sort
    for (int i = 0; i < a.size() - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < a.size() - 1 - i; j++) {
            if (a[j] > a[j+1]){
                swap(a[j], a[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

int main() {
    vector<int> a = {5, 6, 1, 7, 9, 4, 2, 10, 8, 3};
    Bubble_Sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}