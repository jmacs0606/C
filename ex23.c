#include <stdio.h>

int main(){
    
    for(int i = 1; i <= 101; i++){
        if(i%5==0){
            printf("%c",i);
            printf("%s","  ");
        }
    }
    
    return 0;
}

// Go back to my C directory to see my other files
