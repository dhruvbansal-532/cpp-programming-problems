#include<iostream>
int main(){
    /* Problem Statement: Write a program to read the radius of a circle and print its area and circumference. */

    double radius, area, cirfer;
    const double pi=3.1416;

    std::cout<<"Enter the radius of the circle(in cm):\n";
    std::cin>>radius;

     area=pi*radius*radius;
     cirfer=2*pi*radius;

     std::cout<<"Area of circle is: "<<area<<" cm^2\n";
     std::cout<<"Circumference of circle is: "<<cirfer<<" cm\n";

     

    return 0;
}