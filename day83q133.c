/* Create an enum for months and print how many days each month has. */

#include <stdio.h>
#include <string.h>

enum Month { JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC };

int main() {
    char s[10];
    scanf("%s", s);

    if(strcmp(s, "JAN") == 0) printf("31 days");
    else if(strcmp(s, "FEB") == 0) printf("28 or 29 days");
    else if(strcmp(s, "MAR") == 0) printf("31 days");
    else if(strcmp(s, "APR") == 0) printf("30 days");
    else if(strcmp(s, "MAY") == 0) printf("31 days");
    else if(strcmp(s, "Jun") == 0) printf("30 days");
    else if(strcmp(s, "JUL") == 0) printf("31 days");
    else if(strcmp(s, "AUG") == 0) printf("31 days");
    else if(strcmp(s, "SEP") == 0) printf("30 days");
    else if(strcmp(s, "OCT") == 0) printf("31 days");
    else if(strcmp(s, "NOV") == 0) printf("30 days");
    else if(strcmp(s, "DEC") == 0) printf("31 days");

    return 0;
}
