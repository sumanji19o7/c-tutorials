#include <stdio.h>

//reversig array
// traverse half or array interchange first and last elements, first to last second to second last and so on
//interchanging i and n-i-1 element


void reversing(int numbers[],int no);
void printing(int numbers[],int no);


int main(){
    int numbers[] = {1,2,3,4,5,6};
    reversing(numbers,6);
    printing(numbers,6);
}


void reversing(int numbers[],int no){
    for (int i=0;i<(no/2);i++){
        int first=numbers[i];
        int second=numbers[no-i-1];
        numbers[i]=second;
        numbers[no-i-1]=first;

    }
}

void printing(int numbers[],int no){
    for (int i=0;i<no;i++){
        printf("%d\t",numbers[i]);

    }
}