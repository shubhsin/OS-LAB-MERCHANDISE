#include <stdio.h>
#include <pthread.h>

#define MAX 5                                  
int number;                                     
pthread_mutex_t mu= PTHREAD_MUTEX_INITIALIZER;  

pthread_cond_t sig_consumer= PTHREAD_COND_INITIALIZER;

pthread_cond_t sig_producer= PTHREAD_COND_INITIALIZER;


void *consumer(void *dummy)
{
  int printed= 0;

  printf("Consumer : \"#%ld. Ready to consume numbers"
         " \"\n", pthread_self());

  while (1)
  {
    pthread_mutex_lock(&mu);
    
    pthread_cond_signal(&sig_producer);
    
    pthread_cond_wait(&sig_consumer, &mu);
    
    printf("Consumer Consumes %d\n", number);
   
    pthread_mutex_unlock(&mu);

   
    if (number == MAX)
    {
      printf("Consumer Completed Consuming\n");
      break;
    }
  }
}


void *producer(void *dummy)
{
  printf("Producer : \"#%ld. Ready to produce numbers"
         " \"\n", pthread_self());

  while (1)
  {
    pthread_mutex_lock(&mu);
    number ++;
    printf("Producer Produces %d\n", number);
   
    pthread_cond_signal(&sig_consumer);
   
    if (number != MAX)
      pthread_cond_wait(&sig_producer, &mu);

    
    pthread_mutex_unlock(&mu);

    
    if (number == MAX)
    {
      printf("Producer Completed Production\n");
      break;
    }
  }
}

void main()
{
  int rc, i;
  pthread_t t[2];

  number= 0;

 
  if ((rc= pthread_create(&t[0], NULL, consumer, NULL)))
    printf("Error creating the consumer thread..\n");
  if ((rc= pthread_create(&t[1], NULL, producer, NULL)))
    printf("Error creating the producer thread..\n");

 
  for (i= 0; i < 2; i ++)
    pthread_join(t[i], NULL);

  printf("Completed\n");
}


