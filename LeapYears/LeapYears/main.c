//
//  main.c
//  LeapYears
//
//  Created by Sylwia Fijołek on 24/10/2020.
//

#include <stdio.h>
#include <time.h>

int main(int argc, const char * argv[]) {
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    int currentYear = tm.tm_year + 1900;
    int amountOfLeapYears = 0;
    while (amountOfLeapYears < 20) {
        if (currentYear % 400 == 0 || (currentYear % 4 == 0 && currentYear % 100 != 0))  {
            amountOfLeapYears++;
            printf("%i\n", currentYear);
        }
        currentYear++;
    }
}
