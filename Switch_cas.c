#include<stdio.h>
int main()
{
    int day;
     printf("enter your day");
     scanf("%d",&day);
     switch(day)
     {
     case 1:
        printf("saturday\n");
        break;
     case 2:
        printf("Sunday\n");
        break;
     case 3:
        printf("Monday\n");
        break;
     case 4 :
        printf("thesday\n");
        break;
     case 5 :
        printf("wednesday\n");
        break;
     case 6  :
        printf("thuesday\n");
        break;
     case 7 :
        printf("Friday\n");
        break;

     default:
        printf("wrong day\n");
        break;

     return 0;
}





}
