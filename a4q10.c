

/*Write function to check whether given year is leap or not. Write another function to print
number of days in given month.*/

#include<stdio.h>
void year_leap_or_not(int);
void no_of_days(int ,int);
int main()
{
	int year,month;
	printf("Enter year and month:");
	scanf("%d %d",&year,&month);
	year_leap_or_not(year);
	no_of_days(month,year);
	return 0;
}
void year_leap_or_not(int year)
{
	int i;
	if(year%4==0&&(year%4==0||year%100!=0))
	{
	   printf("Year is leap.\n");
	}
	else
	{
	   printf("Year is not leap\n");
    }
}
void no_of_days(int month,int year)
{
       int Days;
       switch(month)
       {
          case 1:
	  case 3:
	  case 5:
	  case 7:
	  case 8:
	  case 10:
	  case 12:
	          Days=31;
		      break;
      case 4:
      case 6:
      case 9:
      case 11:
     		  Days=30;
	     	  break;
      default:
		   if(year%4==0&&(year%4==0&&year%100!=0))
		   {
		      printf("It is a leap year\n");
		      Days=29;

		   }
		   else
		   {
		      printf("It is non leap year\n");
		      Days=28;
		   }
		   break;
       }

	   }
