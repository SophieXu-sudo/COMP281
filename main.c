/*
* Student ID: 201448703
* Student Name: Zongyan Xu
* Email: Z.Xu59@student.liverpool.ac.uk
* User: sgzxu22
* Problem ID: 1013
* RunID: 7796
* Result: Accepted */

#include <stdio.h>

int main() {
    int mark;
    int morethan85 = 0;
    int between60and84 = 0;
    int lessthan60 = 0;

    while (1) {                            //Use while loop to test each input number
        scanf("%d", &mark);                //Use scanf to obtain input
        if (mark != 0) {                   //When mark=0, break the loop
            if (mark >= 85)
                morethan85 ++;             //Count the number of numbers>=85
            else if (mark < 85 && mark >= 60)
                between60and84 ++;         //Count the number of numbers between 60 and 84
            else
                lessthan60 ++;             //Count the number of numbers<60
        } else
            break;                         //Break the loop
    }

    //Show the result
    printf(">=85:%d\n", morethan85);
    printf("60-84:%d\n", between60and84);
    printf("<60:%d\n", lessthan60);

}
