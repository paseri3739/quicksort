#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int N){

    int index[N];
    srand( time(NULL) );

    
    for(int i=1; i<=N; i++){
        index[i] = rand();
        printf("%d " , index[i]);
    }
}

void setpivot(int sorted[]){
    
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
	*b = temp;
}

void quicksort(int sorted[],int left, int right){
    int leftptr = left;
    int rightptr = right;
    int pivot = sorted[(leftptr + rightptr)/2];
    

    int i;
    int j;

    while (sorted[left]<= pivot)
    {
        leftptr++;
    }
    while(pivot <= sorted[right]){
        right--;
    }
    if(left >= right) break;
    
}

int main(int argc, char const *argv[])
{
    int N = 100;
    generate(N);


    return 0;
}
