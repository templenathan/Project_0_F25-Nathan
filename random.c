#include <stdio.h>
#include <stdlib.h>

void rand_string(char *s, size_t size){
    for(int i = 0; i < size; i++){
        char randomLetter = rand() % 26 + 'a';
        s[i] = randomLetter;
    }
}