/******************************************************************************
* Author: 			Dler Hasan
* FILE: 			pthreads_condVar.c
* DESCRIPTION:		Using pthreads condition variables and timers.    
* LAST REVISED: 	04/18/2017
******************************************************************************/

// Include Library
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>

// Define Global Variables
#define NUM_THREADS 2


int main(int argc, char *argv[]){
	int setTimer;
	printf("Hello, please set timer limit\n");
	scanf("%d",&setTimer);
	printf("Timer limit is set too: %d\n", setTimer);
	return 0;  

}
