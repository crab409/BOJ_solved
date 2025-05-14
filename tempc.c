#include <stdio.h>

void sort(int* arr, int left, int right) {
    int pr=right, pl=left, pivot=arr[letf+(right-left)/2],temp;
    
    while (left<=right) {
        while (arr[pl]<pivot) pl++;
        while (arr[pr]<pivot) pr++;
        
        if (pl>=pr) {
            temp=arr[pl];
            arr[pl]=arr[pr];
            arr[pr]=temp;
        }
    }
    
    if (left<pr) sort(arr, left, pr);
    if (pl>right) sort(arr, pl, right);
}

int main(void) {
    int i,n,m,inp;
    scanf("%d", &n);
    scanf("%d", &m);
    int* arr = (int*) malloc (n*sizeof(int))
    for(i=0;<n;i++)scanf("%d",&arr[i]);
    
    sort(arr, 0, n-1);
}
