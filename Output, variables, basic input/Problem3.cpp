#include<iostream>
int main(){
    /* Problem Statement: Write a program to read two numbers and print their sum, difference, product and quotient. */

    int a,b;
    int sum, product, diff, quotient;

    std::cout<<"Enter first number: ";
    std::cin>>a;

    std::cout<<"Enter second number: ";
    std::cin>>b;

    sum=a+b;
    diff=a-b;
    product=a*b;
    quotient=a/b;

    std::cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum<<'\n';
    std::cout<<"Product of "<<a<<" and "<<b<<" is: "<<product<<'\n';
    std::cout<<"Difference of "<<a<<" and "<<b<<" is: "<<diff<<'\n';
    std::cout<<"Quotient of "<<a<<" divided by "<<b<<" is: "<<quotient<<'\n';

    return 0;
}