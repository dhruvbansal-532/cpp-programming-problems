#include<iostream>
int main(){
    /* Problem Statement: Write a program to read the length and breadth of a rectangle and print its area and perimeter. */

    double len, wid, area, perimeter;
    std::cout<<"Enter the length of the rectangle: ";
    std::cin>>len;

    std::cout<<"Enter the breadth of the rectangle: ";
    std::cin>>wid;

    area=len*wid;
    perimeter=2*(len+wid);
    
    std::cout<<"Area of rectangle is: "<<area<<" units^2\n";
    std::cout<<"Perimeter of rectangle is: "<<perimeter<<" units\n";
    return 0;
}