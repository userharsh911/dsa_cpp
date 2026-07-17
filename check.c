#include <stdio.h>

void fun(char* c){
    printf("%d",sizeof(c));
}

int main(){
    char c[] = "Harshdfdfd";
    fun(c); 
    return 0;
}