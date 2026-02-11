#include <stdio.h>
#include "structures.h"

void swap_strings(char **a, char **b) {
        char *temp = *a;
        *a = *b;
        *b = temp;
}

int main(){
    // data emp_data = {
    //     .name = "Aditya",
    //     .roll_no = 7
    // };

    // // let's create a pointer to this struct.
    // data *ptr_emp_data = &emp_data;
    
    // // Let's see what the pointer stores.
    // // printf("Address to the emp_data: %zu\n", ptr_emp_data);

    // // Let's see more.
    // printf("Address to the first index: %zu\n", &ptr_emp_data[0]);
    // printf("Address to the first index: %zu\n", &ptr_emp_data[1]);
    // printf("Address to the first index: %zu\n", &ptr_emp_data[2]);
    // // printf("Address to the first index: %d\n", *(ptr_emp_data + 1));

    char *name = "Aditya";
    char *name_2 = "gaurav";

    printf("before name: %s\n",name);
    swap_strings(&name, &name_2);
    printf("After name: %s",name);

    return 0;
}