#include <iostream>
using namespace std;
void merge_step(int* arr, int start, int mid, int end) {
    //here, arr[start1]->arr[end1] and arr[start2]->arr[end2] are sorted. we want to merge them.
    int i = start;
    int j = mid+1;
    int size = (end-start) + 1;
    int arr1[size];
    int k = 0;
    while (i<=mid && j<=end) {
            if (arr[i]<arr[j]) {
                arr1[k] = arr[i];
                i++;
                k++;
            };
            if (arr[j]<arr[i]) {
                arr1[k] = arr[j];
                j++;
                k++;
            }
    }
    if (i>mid) {
        while (j<=end) {
            arr1[k] = arr[j];
            k++;
            j++;
        }
    }
    
    if (j>end) {
        while (i<=mid) {
            arr1[k] = arr[i];
            k++;
            i++;
        }
    }
    i = start;
    for (int k = 0; k<size; k++) {
        arr[i] = arr1[k];
        i++;
    }
}
void Merge_Sort(int* arr, int start, int end){
    if (start>=end) {
        return;
    }
    int mid = (start+end)/2;
    Merge_Sort(arr, start, mid);
    Merge_Sort(arr, mid+1, end);
    merge_step(arr, start, mid, end);
}
void Show(int* arr, int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
}
int main() {
    int n = 5;
    int arr[n] = {5, 4, 6, 2, 1};
    Merge_Sort(arr, 0, n-1);
    Show(arr, n);
    return 0;
}