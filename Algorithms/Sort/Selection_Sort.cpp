#include <iostream>
#include <vector>
using namespace std;

void Selection_Sort(vector<int>& a){
    // Increasing sort
    int min, n = a.size();
    for (int i = 0; i < n - 1; i++){
        min = i;
        for (int j = i + 1; j < n; j++){
            if (a[min] > a[j]) min = j;
        }
        swap(a[min], a[i]);
    }
}

int main(){
    vector<int> a = {5, 6, 1, 7, 9, 4, 2, 10, 8, 3};
    Selection_Sort(a);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}