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

int timer; 
pthread_mutex_t mutex_thread; 
pthread_cond_t timer_expired_cv;


// Function: Print timer has expired 
// Function: Create two threads


int main(int argc, char *argv[]){

	// Prompt User to select timer limit. 
	printf("Hello, please set timer limit\n");
	scanf("%d",&timer);
	printf("Timer limit is set too: %d\n", timer);


	// Initialize Mutex
	// Create pthreads 
	// Wait for all threads to complete?
	// Clean up and exit 


	return 0;  
}
