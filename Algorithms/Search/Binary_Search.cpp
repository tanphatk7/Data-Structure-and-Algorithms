#include <iostream>
#include <vector>
using namespace std;

int Binary_Search (vector<int> a, int x){
    int left = 0, right = a.size() - 1, mid;
    while (left <= right){
        mid = left + (right - left)/2;
        if (a[mid] > x) right = mid - 1;
        else if (a[mid] < x) left = mid + 1;
        else return mid;
    } 
    return -1;
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << Binary_Search(a, 5) << endl;
    cout << Binary_Search(a, 12);
    return 0;
}