#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv){
    //checks if there is a valid number of arguements
    if(argc != 2){
      printf("Invalid number of arguements");
      return 0;
    }
    //Creates Parameters for the file itself
    FILE *fd 
    fd = fopen( argv[1], "r");
    
    //File doesn't exist
    if( fd == NULL ){
      printf("This file doesn't exist");
      return 0;
    }
    
