#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int *arr, int N) {
    srand(time(NULL));  // initialize random seed
    
    for (int i = 0; i < N; i++) {
        arr[i] = rand() ;  // generate a random number
    }
}

void printArray(int *arr, int N) {
    for (int i = 0; i < N; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void QuickSort(int* sorted, int left, int right){

    int leftptr = left;
    int rightptr = right;
    int pivot = sorted[(leftptr + rightptr)/2];
    
    while(1){
        while (sorted[leftptr] < pivot)
        {
            leftptr++;
        }
        while(sorted[rightptr] > pivot){
            rightptr--;
        }
        if(leftptr >= rightptr) break;
        swap(&sorted[leftptr], &sorted[rightptr]);
        leftptr++; rightptr--;
    }
    
    //左のデータ群を対象としてクイックソートを再帰
    if (left < leftptr - 1) QuickSort(sorted, left, leftptr - 1);

    //右のデータ群を対象としてクイックソートを再帰
    if (rightptr + 1 < right) QuickSort(sorted, rightptr + 1, right);
}

int main(int argc, char const *argv[])
{
    int N = 100;
    int arr[N];

    generate(arr, N);
    printArray(arr, N);
    printf("\n");

    QuickSort(arr,0,N-1);
    printArray(arr,N);
    return 0;
}
