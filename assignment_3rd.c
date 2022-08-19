Assignmnet = 3 
  
Question = 1
/*
#include <stdio.h>
int main() {
    double num;
    printf("Enter a number: ");
    scanf("%lf", &num);
    if (num <= 0.0) {
        if (num == 0.0)
            printf("You entered 0.");
        else
            printf("You entered a negative number.");
    }
    else
        printf("You entered a positive number.");
    return 0;
}
*\

Question = 2
/*
#include<stdio.h>
void main()
{
         int a;
         clrscr();
         printf ("Enter the no.");
         scanf("%d",&a);
         if(a%5==0)
          {
             printf("No.is Divisible by 5");
          }
         else
         {
               printf("No is not Divisible by 5");
         }
               getch();
}
*\

Question = 3
/*
#include <stdio.h>
int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("%d is even.", num);
    else
        printf("%d is odd.", num);
    return 0;
}
*\

Question =4
/*
#include<stdio.h>
void main()
{
int num,var;
printf(“\tEnter any number”);
scanf(“\n%d”,&num);
var = num/2;
if(num==var*2)
printf(“ \nThe given number is even”);
else
printf(“\nThe given number is odd”);
}
*\

Questiom = 5
/*
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a number:");
	scanf("%d"&num);
	if(num>99 && num<1000)
	{
		printf("%d is a 3 digit number",num);
	}
	else
	{
		printf("%d is not a 3 digit number",num);
	}
	return 0;
}
*\

Question = 6
/*
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Please Enter Two different values\n");
    scanf("%d %d", &num1, &num2);
    if(num1 > num2)
    {
        printf("%d is Largest\n", num1);
    }
    else if (num2 > num1)
    {
        printf("%d is Largest\n", num2);
    }
    else
    {
        printf("Both are Equal\n");
    }
    return 0;
}

Question = 8
/*
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d", &year);
   if (year % 400 == 0) {
      printf("%d is a leap year.", year);
   }
   else if (year % 100 == 0) {
      printf("%d is not a leap year.", year);
   }
   else if (year % 4 == 0) {
      printf("%d is a leap year.", year);
   }
   else {
      printf("%d is not a leap year.", year);
   }
   return 0;
}
*\

Question = 9
/*
#include <stdio.h>
int main() {
  double n1, n2, n3;
  printf("Enter three different numbers: ");
  scanf("%lf %lf %lf", &n1, &n2, &n3);
  // if n1 is greater than both n2 and n3, n1 is the largest
  if (n1 >= n2 && n1 >= n3)
    printf("%.2f is the largest number.", n1);
  // if n2 is greater than both n1 and n3, n2 is the largest
  if (n2 >= n1 && n2 >= n3)
    printf("%.2f is the largest number.", n2);
  // if n3 is greater than both n1 and n2, n3 is the largest
  if (n3 >= n1 && n3 >= n2)
    printf("%.2f is the largest number.", n3);
  return 0;
}
*\

Question = 10
/*
#include <stdio.h>
int main()
{
    int costPrice, sellingPrice;
    printf("Enter Cost Price and Selling Price\n");
    scanf("%d %d", &costPrice, &sellingPrice);
    if(costPrice > sellingPrice) {
        printf("Loss = %d\n", costPrice - sellingPrice);
    }
    else if(sellingPrice > costPrice)
    {
        printf("Profit = %d\n", sellingPrice - costPrice);
    }
    else
    {
        printf("No Profit and No Loss\n");
    }
    return 0;
}
*\

Question = 11
/*
#include<stdio.h>
int main()
{
     int m1, m2, m3, m4, m5, tot;
     float per;
     printf("Enter Marks of Five Subjects:\n");
     scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);
     tot = m1+m2+m3+m4+m5;
     printf("\nTotal Marks of Student = %d\n",tot);
     /*condition for checking student is pass or not.*/
     if(m1>=40 && m2>=40 && m3>=40 && m4>=40 && m5>=40)
     {
          printf("\nStudent is PASS\n");
          per= tot/5.0;
          printf("\nPercentage of a Student = %.2f",per);
     }
     else
          printf("\nStudent is FAIL");
     return 0;
}

*\

Question = 12
/*
#include<stdio.h>
int main()
{
   char ch;
   printf("\nEnter The Character : ");
   scanf("%c", &ch);
   if (ch >= 'A' && ch <= 'Z')
   {
      printf("Character is Upper Case Letters");
      }
   else
   {
      printf("Character is Not Upper Case Letters");
 }
   return (0);
}
*\

Question = 13
/*
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%3==0 && num%2==0)
	{
		printf("%d is divisible by 3 and 2",num);
	}
	else
	{
		printf("%d is not divisible by 3 and 2",num);
	}
	return 0;
}
*\

Question = 14
/*
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num%7==0 || num%3==0)
	{
		printf("%d is divisible by 7 or 3 ",num);
	}
	else
	{
		printf("%d is not divisible by 7 or 3",num);
	}
	return 0;
}
*\

Question = 15
/*
#include <stdio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	if(num > 0)
	{
		printf("number is positive");
	}
	else if(num < 0)
	{
		printf("number is negative");
	}
	else
	{
	    printf("number is zero");
}
}
*\

Question = 16
/*
#include <stdio.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
        printf("%c is an alphabet.", c);
    else
        printf("%c is not an alphabet.", c);
    return 0;
}
*\

Question = 17
/*
/*
#include <stdio.h>
int main() {
    int side1, side2, side3;
    /*
     * Take length of three sides of triangle as input
     * from user using scanf
     */
    printf("Enter Length of Three Sides of a Triangle\n");
    scanf("%d %d %d", &side1, &side2, &side3);

    if((side1 + side2 > side3)&&(side2 + side3 > side1)
            &&(side3 + side1 > side2)) {
        printf("It is a Valid Triangle\n");
    } else {
        printf("It is an invalid Triangle");
    }

    return 0;
}

 *\
 
 Question = 18
 /*
#include <stdio.h>
int main()
{
    int month;
    /* Input month number from user */
    printf("Enter month number (1-12): ");
    scanf("%d", &month);


    if(month == 1)
    {
        printf("31 days");
    }
    else if(month == 2)
    {
        printf("28 or 29 days");
    }
    else if(month == 3)
    {
        printf("31 days");
    }
    else if(month == 4)
    {
        printf("30 days");
    }
    else if(month == 5)
    {
        printf("31 days");
    }
    else if(month == 6)
    {
        printf("30 days");
    }
    else if(month == 7)
    {
        printf("31 days");
    }
    else if(month == 8)
    {
        printf("31 days");
    }
    else if(month == 9)
    {
        printf("30 days");
    }
    else if(month == 10)
    {
        printf("31 days");
    }
    else if(month == 11)
    {
        printf("30 days");
    }
    else if(month == 12)
    {
        printf("31 days");
    }
    else
    {
        printf("Invalid input! Please enter month number between (1-12).");
    }

    return 0;
}
*\
