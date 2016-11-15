#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

void main(int argc, char** argv){
  
  pthread_t tid;
  pthread_create(&tid, NULL, compression, NULL);
  pthread_join(tid, NULL);
  exit(0);

}

void *compressT (char *fp , int num_of_parts){
  fp = fopen(
}
