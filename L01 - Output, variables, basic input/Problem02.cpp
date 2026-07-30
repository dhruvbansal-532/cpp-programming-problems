#include<iostream>
int main(){
    /* Problem Statement: Write a program to read two numbers and print their sum. */
    
    int a,b,sum;
    std::cout<<"Enter first number: ";
    std::cin>>a;

    std::cout<<"Enter second number: ";
    std::cin>>b;

    sum=a+b;
    std::cout<<"Sum of "<<a<<" and "<<b<<" is: "<<sum;

    return 0;
}