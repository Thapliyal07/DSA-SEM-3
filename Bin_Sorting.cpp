//BIN SORT
#include <iostream>
using namespace std;

void bin_sort(int arr[], int n) {
    int max_val = arr[0];

    //Finding maximum element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }

    //Creating bins
    int bin[max_val + 1] = {0};

    //Placing elements into bins
    for (int i = 0; i < n; i++) {
        bin[arr[i]]++;
    }

    //Collecting elements in sorted order
    int k = 0;
    for (int i = 0; i <= max_val; i++) {
        while (bin[i] > 0) {
            arr[k++] = i;
            bin[i]--;
        }
    }
}

int main() {
    int arr[] = {4, 2, 7, 1, 4, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bin_sort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}