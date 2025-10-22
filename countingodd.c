//function to check odd numbers in array
//count the odd numbers
#include <stdio.h>
int checkingodd(int numbers[],int no);

int main(){
    int numbers[]={1,2,3,4,5,6};
    
    printf("%d",checkingodd(numbers,6));


    return 0;
}

int checkingodd(int numbers[], int no){
    int oddnum=0;
    for (int i=0; i< no; i++){
        if (numbers[i] % 2 != 0){
            oddnum++;
        

        }
    }
    return oddnum;
}

int reversing