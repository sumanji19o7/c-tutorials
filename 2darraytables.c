#include <stdio.h>

void makingtables (int table[][10], int nolists,int elements,int number);

int main(){
    int table [2][10]; //2 lists in the main list and 10 elements in each list
    makingtables(table,0,10,2);
    makingtables(table,1,10,3);

    for (int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    }

    for (int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }


}

void makingtables(int table[][10],int nolists,int elements,int number){
    for (int i=0; i<elements;i++){
        table[nolists][i]= (i+1)*number;

    }
}