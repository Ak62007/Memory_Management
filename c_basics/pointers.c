#include <stdio.h>
#include "structures.h"

void update_name(data adi, char *new_name){
    adi.name = new_name;
}

data update_name_return(data adi, char *new_name){
    adi.name = new_name;
    return adi;
}

int main(){
    // int x = 2;
    // int *y = &x;
    // int z = x;
    // // printf("Address of x: %p\n", y);
    // // printf("Address of x: %p", &x);
    // printf("Value of x: %d\n",x);
    // printf("Value of z: %d\n", z);
    // *y = 12;
    // printf("Value of x: %d\n",x);
    // printf("Value of z: %d", z);
    // return 0;

    // testing functions
    data test = {"Aditya", 7};
    update_name(test, "himanshu");
    printf("name: %s\n",test.name);
    printf("name: %s",update_name_return(test, "himanshu").name);
}