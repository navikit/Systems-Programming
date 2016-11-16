#include <stdio.h>
#include <unistd.h>


int main(FILE * fp, int num_of_parts, int char_per_part){
  
  int n = num_of_parts
  if (n > 1){
    pid_t [num_of_parts];
  }
  
  for(int  i = 0; i < n; i++){
      if( (pid_t[i] = fork()) < 0){
        printf("ERROR IN CREATING CHILD");
        exit(1);
      }else if(pid_t[i] == 0){
        printf("this is the child");
        compressP(File *fp, i)
        exit(0);
  }  
  
  int status;
  pid_t pid;
  while (n >0){
    pid = wait(&status);
    n--;
  }
}

FILE *make_new_file (int file_counter){
  char file outputname[40];
  sprintf(fileoutputname, "%s_txt_LOLS%d, file_name, file_counter);
  return fopen(fileoutputname, "w");
}  
  
void compressP(FILE *fp, part_number){
  
