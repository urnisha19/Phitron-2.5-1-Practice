/**
একটা প্রোগ্রাম লিখ যেটা তোমার উচ্চতা ইনপুট নিবে ইঞ্চিতে , তারপর সে টাকে ফুট আর ইঞ্চি ফরম্যাট এ আউটপুট দিবে ।
Enter height is inches: 65
Your height is 5 feet 5 inches
Note:১ ফুট= ১২ ইঞ্চি
১ ইঞ্চি = ০.০৮৩৩৩৩ ফুট
**/

#include<stdio.h>

int main()
{
    int height;
    printf("Enter height is inches: ");
    scanf("%d", &height);

    int feet, inch;
    feet = height/12;
    inch = height%12;

    printf("Your height is %d feet %d inches",feet, inch);

    return 0;
}
