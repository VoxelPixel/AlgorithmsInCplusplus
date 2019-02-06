#include <iostream>
using namespace std;

void BubbleSortAlgorithm(){
    int unsortedArr[] = {8, 1, 6, 9, 5, 4, 2, 7, 0, 3};
    int arrLength = sizeof(unsortedArr)/sizeof(unsortedArr[0]);

    int temp = 0;
    for (int i = 0; i < arrLength; i++) {
        for (int j = 1; j < arrLength-i; j++) {
            if(unsortedArr[j-1] > unsortedArr[j]){
                //swap elements
                temp = unsortedArr[j-1];
                unsortedArr[j-1] = unsortedArr[j];
                unsortedArr[j] = temp;
            }
        } // inner for
    } // for

    for (int i = 0; i < arrLength; i++) {
        cout << unsortedArr[i] << " ";
    }


}