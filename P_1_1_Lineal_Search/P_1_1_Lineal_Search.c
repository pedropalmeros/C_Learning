#include <stdio.h>

int main(int arc, char **argv){
    int i = 0; 
    int vector[1000];
    int number2search = 546;
    int numberFound = -1;

    for(i = 0; i < 1000; i++ ){
        vector[i] = i;
    }

    printf("Vector has been filled with numbers\n");
    
    i=0;

    while( numberFound < 0 )
    {
        if(vector[i] == number2search){
            printf("The number %d has been found.\n",number2search);
            numberFound = 1;
        }
        else{
            i += 1;
            }
    }
    return 0;
}