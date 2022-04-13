/**
একটা প্রোগ্রাম লিখ যেটা একটা আয়তক্ষেত্রের দৈ র্ঘ্য আর প্রস্থ ইনপুট নি বে আর তারপর টার ক্ষে ত্রফল আর পরি সীমা বের করে দিবে ।
Enter height of rectangle: 10
Enter width of rectangle: 30
Area is 300
Perimeter is 80
**/

#include<stdio.h>

int main()
{
    int height, width, area, perimeter;

    printf("Enter height of rectangle: ");
    scanf("%d", &height);
    printf("Enter width of rectangle: ");
    scanf("%d", &width);

    area= height * width;
    perimeter = 2 * (height + width);

    printf("Area is %d\n", area);
    printf("Perimeter is %d\n", perimeter);

    return 0;
}
