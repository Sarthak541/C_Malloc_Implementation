#include <stdio.h>
#include <stdlib.h>
#include <sys/time.h> 

// Compile with -DREALMALLOC to use the real malloc() instead of mymalloc()
#ifndef REALMALLOC
#include "mymalloc.h"
#endif

void task1(){
        for (size_t i = 0; i < 120 ; i++){
        char* my_obj = malloc(1);
        free(my_obj);
    }
}
void task2(){
    char *ptrs[120];
    for(int i =0; i < 120; i++){
        ptrs[i] = malloc(1);
    }
    for(int i = 0; i < 120; i++){
        free(ptrs[i]);
    }
}
void task3(){

}
void task4(){
/*
Get rid of every even element in a linked list.
In order to do this first typedef a struct, then use this struct for the linked list
To remove the third element, first connect the second element to the fourth element
temporarily store the third element
then free the third element
*/
}
void task5(){
/*
Remove the second largest element in a binary tree. Do this by removing the parent of
the rightmost child
*/
}

int main(int argc, char* argv[]){

    task1();
    task2();
    task3();
    task4();
    task5();
    
    return EXIT_SUCCESS;
}