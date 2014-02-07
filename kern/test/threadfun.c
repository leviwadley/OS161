#include <types.h>

#include <lib.h>

#include <thread.h>

#include <synch.h>

#include <test.h>





void print_number (void *, unsigned long);



int test_thread_fork(int argc, char ** args) {

    int numThread = atoi(args[1]);



    //create threads

    int i;

    for(i=0;i<numThread;i++) {

        thread_fork("", NULL, print_number, NULL, (unsigned long) i);

    }

}



void print_number(void *data1, unsigned long data2){

    kprintf("This is thread_%d", (int) data2);

}
