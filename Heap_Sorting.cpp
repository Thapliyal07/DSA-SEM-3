#include <iostream>
using namespace std;
//1. building the heap
//2. repairing the heap
//3. swapping first and last elements and then using repairing function to repair the heap again
void max_heap(int* arr, int n, int i) {
    int left = (2*i)+1;
    int right = (2*i) + 2;
    int parent = i;
    int max = parent;
    if ((left<n)&&(arr[left]>arr[max])) max = left;
    if ((right<n)&&arr[right]>arr[max]) max = right;
    swap(arr[parent], arr[max]);
    if (max != parent) {
        max_heap(arr, n, max);
    }
}
void Build_Heap(int* arr, int n) {
    for (int i = n/2; i>=0; i--) {
        max_heap(arr, n, i);
    }
}
void Heap_Sort(int* arr, int n){
    Build_Heap(arr,n);
    int j = n-1;
    while (j>0) {
        swap(arr[0], arr[j]);
        max_heap(arr, j, 0);
        j--;
    }
}
void Show(int* arr, int n) {
    for (int i=0; i<n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
}
int main() {
    int n = 9;
    int arr[n] = {1, 9, 8, 6, 5, 4, 3, 2, 0};
    Heap_Sort(arr, n);
    Show(arr, n);
    return 0;
}