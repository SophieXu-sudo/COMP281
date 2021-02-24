/*
* Student ID: 201448703
* Student Name: Zongyan Xu
* Email: Z.Xu59@student.liverpool.ac.uk 
* User: sgzxu22
* Problem ID: 1014
* RunID: 8258
* Result: Wrong Answer */

#include<stdio.h>
 
int main() {
 
   int r1;
   int r2;
   int totalSum=0;
   int i;
   int sumSquare;
   float PI = 3.14, areaSum, cirSum;
 
   printf("\nr1: ");
    scanf("%d", &r1);
    
   printf("\nr2: ");
    scanf("%d", &r2);
    
    if (r1>r2) {                           //if r1>r2, swap two numbers
           int temp = r1;
           r1 = r2;
           r2 = temp;
       }
    
    while (r1<=r2) {                       //use while loop to calculate the sum
            totalSum += r1;                //calculate the sum between r1 and r2
            r1++;
            i = r1;                        //calculate the sum of square between r1 and r2
            sumSquare = 0;
            sumSquare = sumSquare + i * i;
            ++i;
        }
    
    //use the formula: the area of a circle equals Pi*r^2
    areaSum = PI * sumSquare ;
   printf("\n%0.3f ", areaSum);
   
    //use the formula: the circumference equals 2Pi*r
    cirSum = 2 * PI * totalSum;
   printf("\n%0.3f ", cirSum);
 
    return (0);
    
}
