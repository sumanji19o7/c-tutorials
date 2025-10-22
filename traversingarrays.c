#include <stdio.h>
/*
int main(){
    int marks[5];
    int *ptr = &marks[0];

    for (int i=0;i<5;i++) {
        printf("%d index: ",i);
        scanf("%d",&marks[i]);
    }


    for (int i =0 ; i<5;i++){
        printf("%d index = %d\n",i,marks[i]);
    }
    return 0;
}*/

void printnumbers(int[],int n);//initialisation of function array as parameter
int main(){
    int arr[]={1,2,3,4};
    printnumbers(arr,4);// name and array size in function call
}

void printnumbers(int arr[],int n){//array and size of array as n
    for (int i=0;i<n;i++){
        printf("%d\t",arr[i]);

    }
    printf("\n");
}
    
