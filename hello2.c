/**
 * @file hello2.c
 * 
 * @author Kassidy Maberry
 * 
 * @date 2023/01/26
 * 
 * Assignment: hello world
 * 
 * @brief A simple hello name program.
 * 
 * @detail None
 * 
 * @bugs none
 * 
 * @todo none
 */

#include <stdio.h>

int main (int argc, char *argv[]){
    printf("Hello %s\n", argv[1]);
    return 1;
}