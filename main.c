/*function*/
#include <stdio.h>
long area(long radius);
long input,answer;
int main(void)
{
    printf("enter an integer");
    scanf("%ld",&input);
    answer=area(input);
    printf("\n the area of %ld is %ld",input,answer);
    return 0;
}
long area(long radius)
{
    long area,pie;
    pie=3.142;
    area =pie*radius*radius;
    return area;
}
