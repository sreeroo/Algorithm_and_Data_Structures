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

int main(){

    int array[] = {5,3,4,6,7,8,1,9,5};

    bubbleSort(array, 9);

    for( int i: array ){
        cout<<i<<" ";
    }

}

