//
//  main.c
//  MultiplicationTable
//
//  Created by Sylwia Fijołek on 24/10/2020.
//

#include <stdio.h>
int size = 0;

void printLine (const char *firstChar, const char *joiningChar, const char *endChar) {
    printf("%s", firstChar);
    for (int i = 1; i <= 4 * size - 1; i++) {
        
        if (i % 4 == 0) {
            printf("%s", joiningChar);
        }
        else {
            printf("─");
        }
    }
    printf("%s", endChar);
    printf("\n");
}

int main(int argc, const char *argv[]) {
    printf("What size?\n");
    scanf("%i", &size);
    
    printLine("┌" , "┬", "┐");
    for (int x = 1; x <= size; x++) {
        printf("│");
        for (int y = 1; y <= size; y++) {
            printf("%3i", x * y);
            printf("│");
        }
        
        printf("\n");
        if (x < size) {
            printLine("├", "┼", "┤");
            
        }
    }
    
    printLine("└", "┴", "┘");
}
