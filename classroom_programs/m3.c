#include <stdio.h>

int main() {
    int arr[50];
    int i;
    int val=25;
    int upper_bound=4;
    for(i=0;i<upper_bound;i++){
arr[i]=i*10;
printf("Array before adding %d\n",arr[i]);
    }
    upper_bound=upper_bound+1;
    arr[upper_bound]=val;
    for(i=0;i<upper_bound;i++){
arr[i]=i*10;
printf("Array after adding %d\n",arr[i]);
    }
    return 0;
}
