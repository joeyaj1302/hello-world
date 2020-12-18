#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int choice;
    //Since pi is going to be used multiple times for calculations we declare and define it as a constant first
    const float pi = 3.141;
    //Initializing the global vairable side as it is going to be used in both square and cube calculations
    float side;
    float length;
    float breadth;
    float height;
    float radius;
    float area;
    float perimeter;
    float surface_area;
    float c_surface_area;
    float volume;
    float base;

    printf("Enter the shape Number from the list given below :\n 1.Square\n 2.Rectangle\n 3.Circle\n 4.Triangle\n 5.Cube\n 6.Cuboid\n 7.Cone\n\ 
 8.Cylinder\n 9.Sphere\n");
    scanf("%d", &choice);

    if (1<=choice && choice <10) { //If statement to check if the user entered a valid number
    //A switch case block is used to execute the chosen calculations
    switch (choice)
    {
    case 1:
        printf("Enter the side of the square :\n");
        // float side;
        scanf("%f",&side);
        area = side*side;
        perimeter = 4*side;
        printf("The perimeter and area of the square is :\nArea = %.2f square units\nPerimeter = %.2f units\n",area,perimeter);
        break;
    case 2:
        printf("Enter the length and breadth of the rectangle :\n");
        scanf("%f %f",&length,&breadth);
        area = length*breadth;
        perimeter = 2*(length+breadth);
        printf("The area and perimeter of the rectangle is :\nArea = %.2f square units \nPerimeter = %.2f units\n",area,perimeter);
        break;
    case 3:
        printf("Enter the radius of the circle:\n");
        scanf("%f",&radius);
        area =  pi*radius*radius;
        perimeter =  2*pi*radius;
        printf("The area and circumference of the circle is :\nArea = %.2f square units \nCircumference = %.2f units",area,perimeter);
        break;
    case 4:
        printf("Enter the height and base of the triangle for calcultaing its area and the length of three sides for perimeter:\n");
        float a, b,c;
        scanf("%f %f %f %f %f",&height,&base,&a,&b,&c);
        area =  0.5*base*height;
        perimeter =  a+b+c ;
        printf("The area and perimeter of the triangle is :\nArea = %.2f square units \nPerimeter = %.2f units",area,perimeter);
        break;
    case 5:
        printf("Enter the side of the cube :\n");
        // float side;
        scanf("%f",&side);
        surface_area =  6*side*side;
        volume =  side*side*side;
        printf("The Surface area and Volume of the cube is :\nSurface area = %.2f square units \nVolume = %.2f cubic units",surface_area,volume);
        break;
    case 6:
        printf("Enter the length breadth and height of the cuboid :\n");
        scanf("%f %f %f", &length, &breadth, &height);
        surface_area = 2*(length*breadth + breadth*height + length*height);
        volume = length*breadth*height;
        printf("The Surfacea area and volume of the cuboid are :\nSurface area = %.2f Square units \nVolume = %.2f Cubic units",surface_area,volume);
        break;
    case 7:
        printf("Enter the base radius, height and slant height of the cone :\n");
        float sl_height;
        scanf("%f %f %f",&radius, &sl_height, &height);
        surface_area = pi*radius*(radius + sqrt(pow(radius,2)+pow(height,2))); //The square root expression is slant height
        c_surface_area= pi*radius*sl_height;
        volume = pi*radius*radius*(height/3);
        printf("The Total surface area, curved surface area and Volume of the cone is :\nTotal surface area = %.2f Square units \n\
Curved surface area = %.2f Square units \nVolume = %.2f Cubic units\n",surface_area, c_surface_area, volume);
        break;
    case 8:
        printf("Enter the base radius and height of the cylinder :\n");
        scanf("%f %f", &radius, &height);
        surface_area = 2 *(pi*radius*height + pi*radius*radius);
        c_surface_area = 2*pi*radius*height;
        volume = pi*radius*radius*height;
        printf("The Surface area, Curved surface area and volume of the cylinder is : \nSurface area = %.2f Square units \n\
Curved surface area = %.2f square units \nVolume = %.2f cubic units\n",surface_area,c_surface_area,volume);
        break;
    case 9:
        printf("Enter the radius of the sphere :\n");
        scanf("%f", &radius);
        surface_area = 4*pi*radius*radius;
        volume = (4/3)*pi*pow(radius,3);
        printf("The Surface area, Curved surface area and volume of the sphere is : \nSurface area = %.2f Square units \n\
Volume = %.2f cubic units\n",surface_area,volume);
        break;
    
    // default:
    //     printf("Enter a valid Number from 1 to 9");

    //     break;
    } //The end of switch statement
    
    } //end of if statement 

    else
    {
        printf("Enter a Number between 1 and 9 and run again :)\n");
    }
    
    return 0;
}