#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int N){

    int index[N];
    srand( time(NULL) );

    int i;
    for(i=1; i<=N; i++){
        index[i] = rand();
        printf("%d " , index[i]);
    }
}

void quicksort(int sorted[]){
    int left;
    int middle;
    int right;
    int pivot;

    int i;
    for(i; i<=100; i++){
        
    }
}

int main(int argc, char const *argv[])
{
    generate(100);


    return 0;
}
