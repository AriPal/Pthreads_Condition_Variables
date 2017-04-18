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
#include <unistd.h>

// Define Global Variables
#define NUM_THREADS 2

int timer; 
pthread_mutex_t mutex_timer; 
pthread_cond_t timer_expired_cv;

// thread waits for timer
void *watch_timer(void *timer){

	// Declare variable holding waiting time
	int waiting_time = *((int*)timer);

	print("Starting watch_timer(): Thread %d:" waiting_time);

	while(waiting_time > 0){
		sleep(waiting_time);
	}

	// Critical Section
	pthread_mutex_lock(&mutex_timer); 

	//return 0; 
}

// Function: Print timer has expired 
void *timer_has_expired(void *t){

	return 0; 
}



int main(int argc, char *argv[]){

	// Ask user to select timer limit. 
	printf("Hello, please set timer limit\n");
	scanf("%d",&timer);
	printf("Timer limit is set too: %d\n", timer);


	// Initialize Mutex
	// Create pthreads 
	// Wait for all threads to complete?
	// Clean up and exit 

	return 0;  
}
