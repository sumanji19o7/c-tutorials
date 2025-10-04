#include <stdio.h>

int main(){
    int age=22;         // integer age variable declared
    int *ptr = &age;    //pointer stores the location of age
    int _age = *ptr;    // new variable _age receives the value in the address which is stored in the pointer
    printf("%d",_age);

    return 0;
}


