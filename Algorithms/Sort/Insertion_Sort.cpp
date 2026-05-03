#include <iostream>
#include <vector>
using namespace std;

void Insertion_Sort (vector<int>& a){
    // Increasing sort
    for (int i = 1; i < a.size(); i++) {
        int key = a[i], j = i - 1;
        while (j >= 0 && a[j] > key){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
}

int main() {
    vector<int> a = {5, 6, 1, 7, 9, 4, 2, 10, 8, 3};
    Insertion_Sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}