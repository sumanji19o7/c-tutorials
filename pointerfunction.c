#include <stdio.h>
void square(int n);     //declaring the function which is called by value
void refsquare(int *n); //declaring the function which is called by the address of value (refrencing)

int main(){
    int number = 4;                 // variable number has value == 4
    square(number);
    printf("number= %d\n",number);  // printing number --> number is equal to 4 and the square of the number is printed 16
    refsquare(&number);
    printf("number= %d\n",number);  // printing number --> address of number is passed the value in address is squared in place
    return 0;
}

void square(int n){                 // passed argument is a value and the square is stored at another address and printed

    n=n*n;
    printf("number is %d\n",n);

}

void refsquare(int *n){             // passed argument is the value at address of n and the value is squared

    *n = (*n) * (*n);
    printf("number is %d\n",*n);    // value is squared in place

}