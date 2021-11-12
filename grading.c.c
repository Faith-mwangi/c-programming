/*grading system*/
#include <stdio.h>

int main()
{
    int math,eng,kisw,physics,biology,computer;
    int average;
    printf("enter scores for math,eng,kisw,physics,biology,computer");
    scanf("%d,%d,%d,%d,%d,%d"),&math,&eng,&kisw,&physics,&biology,&computer;
    average=(math+eng+kisw+physics+biology+computer)/6;
    printf("\n average marks is %d",average);
    if (average>=90&&average<=100)
     {
       printf("n grade is A");
     }

    else if (average>=80&&average<90)
    {
        printf("\n grade is B");
    }
    else if (average>=70&&average<80)
    {
        printf("\n grade is C");
    }
    else if(average>=60&&average<70)
    {
        printf("\n grade is D");
    }
    else if (average>=50&&average<60)
    {
        printf("\n grade is E");

    }
    return 0;
}
