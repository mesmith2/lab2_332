#include <stdio.h>
int main(){

    int arr[10];
    printf("Enter 10 array elements:\t");
    for(int i = 0; i < 10; i++){
        // scanf uses &arr[] to store input at memory address
    scanf("%d", &arr[i]);
    }
    
//insertion sort
    int k, temp;
    for(int i = 1; i < 10; i ++){
        int k = i;
        while(k > 0 && arr[k-1] > arr[k]){
           temp = arr[k-1];
           arr[k-1] = arr[k];
           arr[k] = temp;
           k --; 
        }
    }

    for(int i = 0; i < 10; i ++){
        printf("%d", arr[i]);;
    }
    
    return 0;
}