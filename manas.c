#include<stdio.h>
#include<math.h>
int main()
{
    int total_days ,months ,years;
    printf("enter the total number of days");
    sacnf("%d",&total_days);
    years = total_days/365;

months = (total_days%365)/30;
days = (total_days%365)%30;
orintf("\n%d days is equivalent to\n",total days)
    }
    return 0;
}