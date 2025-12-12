#include <stdio.h>
int main()
{
    int base,height;
    printf("Enter height of triangle:");
    scanf("%d",&height);
    printf("Enter base of triangle:");
    scanf("%d",&base);
    float tri;
    tri = 0.5*base*height;
    printf("The area of triangle is %.2f ",tri);
    return 0;
}