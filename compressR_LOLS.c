#include <stdio.h>
#include <stdlib.h>

//project source code (process manager/parent)
int main(int argc, char *argv[]){
    //checks if there is a valid number of arguements
    if(argc != 2){
      printf("Invalid number of arguements");
      return 0;
    }
    
    //Initialize variables and ready file for reading
    FILE * fd;
    num_of_parts = atoi(argv[1]);      
    fd = fopen( argv[0], "r");    
    
    //File doesn't exist
    if( fd == NULL ){
      printf("This file doesn't exist");
      return 0;
    }
    
    int counter = 0;
    while( fgetc(fp) != EOF){
        counter++;
    }
    fclose(fp);
    char_per_part = counter/num_of_parts;
    
    
