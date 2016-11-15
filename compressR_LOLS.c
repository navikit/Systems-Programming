#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv){
    if(argv[1] < 2){
      printf("Invalid number of arguements");
      return 0;
    }
    
    FILE *fp = 
