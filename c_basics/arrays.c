#include <stdio.h>
#include "structures.h"

int main(){
    // int nums[5] = {1,2,4,3,5};
    // // iterating the array
    // for (int i = 0; i < 5; i++){
    //     printf("%d ", nums[i]);
    // }
    // printf("\n");
    // return 0;

    // // arrays and pointers

    // // name of the array is actually a pointer to the head of the array.
    // int *head = nums;
    // printf("Address of head: %p\n", head);
    // printf("Address of head: %p\n", nums);

    // // accessing an element of the array using the pointer.
    // printf("4th element of the nums using ptr: %d\n",*(head + 3));
    // printf("4th element of the nums uding normal indexing: %d\n", nums[3]);

    // // Multibyte Arrays
    // data employees[3] = {
    //     {"Aditya", 7},
    //     {"Himanshu", 8},
    //     {"kshitij", 12}
    // };

    // printf("Name of 2nd employee: %s\nRoll no : %d\n", employees[1].name, employees[1].roll_no);
    // printf("name using pointer: %s\n", (*(employees+1)).name);
    // // simpler way
    // printf("using -> name: %s\n", (employees + 1)->name);

    // // Casting array of structs to array of integers (if the struct contains only one datatype)
    // coord points[3] = {
    //     {2,3,4},
    //     {5,6,1},
    //     {8,9,0}
    // };

    // // casting
    // int *points_start = (int *)points;

    // for (int i = 0; i < sizeof(points)/sizeof(int); i++){
    //     printf("%d element : %d\n", i+1, points_start[i]);
    // }

    int nums[5] = {1,2,4,3,5};
    printf("Address of array: %p\n", &nums);
    printf("Address of first element: %p\n", &nums[0]);
    printf("Just array name: %p\n", nums);

    printf("%p\n", nums + 1);
    printf("%p\n", &nums + 1);
}