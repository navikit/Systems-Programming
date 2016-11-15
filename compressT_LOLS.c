#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void main(int argc, char** argv){  
  int n = argv[2]
  pthread_t tid[n];
  for ( i = 0; i < n; i++){
    pthread_create(&tid[i], NULL, compressT, argements);
  }
  for ( i = 0; i < n; i++){
    pthread_join(tid[n], NULL);
  }
  
  reuturn;
}

FILE *make_new_file (int file_counter){
  char file outputname[15];
  sprintf(fileoutputname, "file....%d, file counter);
  return fopen(fileoutputname, "w");
          }

void *compressT (FILE *fp , int num_of_parts){
  FILE *ptr_read;
  FILE *ptr_write;
  char line [128];
  
  ptr_read = fopen(fp, "r");
  ptr_write = make_new_file(part_number);
  
  while( fgets(line, sizeof(line), ptr_read) != NULL){
      if(linecounter = 5){
        fclose(ptr_write);
        linecounter = 1; filecounter ++; 
        if (! ptr_writefile){
          return 1;
        }
      }
  }
} 
