#include<iostream>
int main(){
    /* Problem Statement: Write a program to read a temperature in Celsius and convert it to Fahrenheit. */

    double tempCel, tempF;

    std::cout<<"Enter temperature in Celsius: ";
    std::cin>>tempCel;

    tempF= (1.8*tempCel) + 32;

    std::cout<<"Temperature in Fahrenheit is: "<<tempF<<"F\n";
    return 0;
}