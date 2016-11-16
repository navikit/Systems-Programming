#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

pthread_mutex_t m = PTHREAD_MUTEX_INITIALIZER;

void main(int argc, char**argv){  
  int n = (int) argv[1];
  
  if( n == 1){
    pthread_t tid;
    pthread_create(&tid, NULL, compressT, arguements);
  }else{
    pthread_t tid[n];
    for ( i = 0; i < n; i++){
      pthread_create(&tid[i], NULL, compressT, arguements);
    }
    for ( i = 0; i < n; i++){
      pthread_join(tid[n], NULL);
    }
  }
  return;
}

//makes the new file in regards to the file number
FILE * make_new_file (int file_number){
  char file_new_name[40];
  sprintf(file_new_name, "%s_txt_LOLS%d, file_name, file_number);
  return fopen(fileoutputname, "w");
}

void *compressT (char * argv , int partnum){
  FILE *ptr_read;
  FILE *ptr_write;
  
  //ready file to be read, and ready new file to write
  ptr_read = fopen(fp, "r");
  ptr_write = make_new_file(part_number);
  
  //start at this location
  fseek ( ptr_read, partnum*char_per_parts, fp );
  
  //Dynamically allocate the desired part
  char * line;
  line = malloc( sizeof(char) * char_per_parts); 
    
  while( fgets(line, char_per_parts, ptr_read) != NULL){
        
        fclose(ptr_write);
        linecounter = 1; filecounter ++; 
        if (! ptr_writefile){
          return 1;
        }
      }
  }
  free (line);
} 
