#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int radius;
    //char str[10];
    int choice;
    printf("Enter Your choice :\n 1.Area of a Circle \n 2.Volume of a Cylinder\n ");
    scanf("%d",&choice);
    printf("Your choice is %d:\n", choice);
    if (choice==1){
        printf("Enter the radius of the circle\n");
        scanf("%d",&radius);
        printf("The area of the circle is : %f square units", 3.14*radius*radius);
    }
    else  {
        int length;
        printf("Enter the radius of the cylinder\n");
        scanf("%d",&radius);
        printf("Enter the length of the cylinder :\n");
        scanf("%d",&length);
        printf("The volume of the cylinder is : %2f cubic units",3.14*radius*radius*length);

    }
    return 0;

}