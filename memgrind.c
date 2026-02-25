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

}
void task5(){

}

int main(int argc, char* argv[]){

    task1();
    task2();
    task3();
    task4();
    task5();
    
    return EXIT_SUCCESS;
}