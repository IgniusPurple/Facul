#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<stdlib.h>
#include<pthread.h>


void *thread_func(void *arg){
	printf("Hello World!");
	return NULL;
}
void *thread_fuck(void *arg){
	printf("\nBoa Noite");
	return NULL;
}


int main(){
	pthread_t thread_id;
	pthread_create(&thread_id,NULL,thread_func,NULL);
	pthread_join(thread_id, NULL);
	pthread_create(&thread_id,NULL,thread_fuck,NULL);
	pthread_join(thread_id, NULL);
	return 0;
}
