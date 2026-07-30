#include<iostream>
int main(){
    /* Problem Statement: Write a program to swap two numbers using a third variable. */

    int a,b, temp;

    std::cout<<"Enter the first number a: ";
    std::cin>>a;

    std::cout<<"Enter the second number b: ";
    std::cin>>b;

    temp=a;
    a=b;
    b=temp;

    std::cout<<"Now first number a is: "<<a<<'\n';
    std::cout<<"Now second number b is: "<<b<<'\n';

    return 0;
}