//
//  main.c
//  BubbleSort
//
//  Created by Sylwia Fijołek on 10/10/2020.
//

#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char * argv[])
{
    printf("Hello, World!\n");
    printf("How many numbers do you want to add?\n");
    int numberOfElements;
    scanf("%i", &numberOfElements);
    int array[numberOfElements];
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("Add number %i: ", i + 1);
        scanf("%i", &array[i]);
        printf("\n");
    }
    
    for (int i = 0; i < numberOfElements; i++)
    {
        for (int n = 0; n < numberOfElements - i - 1; n++)
        {
            if (array[n] > array[n + 1])
            {
                int tempNumber = array[n];
                array[n] = array[n + 1];
                array[n + 1] = tempNumber;
            }
        }
    }
    for (int i = 0; i < numberOfElements; i++)
    {
        printf("%i ", array[i]);
    }
}
