//ALGO:- STEP 1: ARRANGE ELEMENTS IN THE ARRAY IN A 2D ARRAY ACCORDING TO THE ONE'S PLACES. CREATE AN ARRAY TO COUNT THE POSITION OF EACH ELEMENT IN THE 2D MATRIX. TRAVERSE THE 2D MATRIX AND REFILL THE MAIN ARRAY ACCORDINGLY. REPEAT THE STEP BY TAKING TEN'S PLACE AND HUNDRED'S PLACE
#include <iostream>
#include <climits>
#include <cmath>
using namespace std;
void Show(int* arr, int n) {
    for (int i = 0; i<n; i++) {
        cout<<arr[i]<<"\n";
    }
}
int count_digits(int n) {
    if (n==0) {
        return 0;
    }
    return 1 + count_digits(n/10);
}
void Radix_Sorting(int* arr, int n) {
    //creating count array for elements 0-100;
    int size = 10;
    int count[size];
    
    int matrix[size][n];

    
    //finding the no. of digits of the max element
    int max_element = INT_MIN;
    for (int k=0; k<n; k++) {
        if (arr[k]>max_element) max_element = arr[k];
    }
    int digits = count_digits(max_element);
    //filling the matrix and rearranging the array
    for (int i = 0; i<digits; i++) {
        //resetting count array to zero
        for (int i =0; i<size; i++) {
          count[i] = 0;
        }
        //resetting matrix to -1
        for (int i = 0; i<size; i++) {
         for (int j=0; j<n; j++) {
            matrix[i][j] = -1;
         }
        }
        for (int j =0; j<n; j++) {
            int remainder = (arr[j]/(int)pow(10,i))%10;
            matrix[remainder][count[remainder]] = arr[j];
            count[remainder]++;
        }
        //now that matrix is filled for the first time we rearrange the main array
        int index = 0;
        for (int l = 0; l<size; l++) {
            for (int m = 0; m<n; m++){
                if (matrix[l][m]>=0) {
                    arr[index] = matrix[l][m];
                    index++;
                }
            }
        }
    }
    //the array is sorted. time to print it
    Show(arr, n);
}
int main() {
    int n = 17;
    int arr[n] = {124, 345, 98, 541, 665, 908, 412, 734, 176, 941, 880, 806, 583, 627, 325, 15, 53};
    Radix_Sorting(arr, n);
    return 0;
}