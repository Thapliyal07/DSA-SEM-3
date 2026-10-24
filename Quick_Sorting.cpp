#include <iostream>
using namespace std;
int Partition(int*arr, int start, int end) {
    int i = start;
    int j = end;
    int pivot = arr[i];
    while (i<j) {
        while (arr[i]<pivot) {
            i++;
        }
        while (arr[j]>pivot) {
            j--;
        }
        swap(arr[i],arr[j]);
    }
    int pivot_index = 0;
    while (arr[pivot_index] != pivot) {
        pivot_index++;
    }
    return pivot_index;
}
void Quick_Sort(int* arr, int start, int end) {
    if (start<end) {
        int pivot_index = Partition(arr, start, end);
        Quick_Sort(arr, start, pivot_index - 1);
        Quick_Sort(arr, pivot_index+1, end);
    }
    
}
void Show(int* arr, int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
}
int main() {
    int n = 10;
    int arr[n] = {5, 4, 6, 2, 1, 22, 15, 10, 18, 3};
    Quick_Sort(arr, 0, n);
    Show(arr, n);
    return 0;
}