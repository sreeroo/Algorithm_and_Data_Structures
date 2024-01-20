//
// Created by Sreeroop on 20/01/2024.
//

#include <iostream>
using namespace std;


// Bubble Sort Implementation
void bubbleSort(int *a, int n) {
    bool swapped;
    do{
        swapped = false;
        for (int i = 0; i < n-1; i++){
            if (a[i+1] < a[i]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i + 1] = temp;
                swapped = true;
            }
        }
    }while(swapped);
}

// Selection Sort implementation
// int array[] = {5,3,4,6,7,8,1,9,5,0};

void selectionSort(int *a, int n){
    for (int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j<n; j++){
            if(a[j] < a[min]){
                min = j;
            }
        }
        int t = a[min];
        a[min] = a[i];
        a[i] = t;
    }
}

// int array[] = {5,3,4,6,7,8,1,9,5,0};
void insertionSort(int *a, int n){
    for (int i = 1; i < n ; i++) {
        int j = i;
        int t = a[i];
        while(j > 0  && a[j-1] > t ){
            a[j] = a[j -1];
            j--;
        }
        a[j] = t;
    }
}


int main(){

    int array[] = {5,3,4,6,7,8,1,9,5,0};

    //bubbleSort(array, 10);
    //selectionSort(array,10);
    insertionSort(array, 10);

    for( int i: array ){
        cout<<i<<" ";
    }

}

