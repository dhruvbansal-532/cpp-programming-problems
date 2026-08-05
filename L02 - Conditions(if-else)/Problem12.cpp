#include<iostream>
int main(){
    /* Problem Statement: Write a program to read a number and check whether it is positive, negative or zero. */
    double num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

    if(num>0){
        std::cout<<"The number entered is a positive number\n";
    }
    else if(num<0){
        std::cout<<"The number entered is a negative number\n";
    }
    else{
        std::cout<<"The number entered is zero(0)\n";
    }

    /* Alternate approach: */
    // num==0 ? std::cout<<"The number entered is zero\n" : (num>0 ? std::cout<<"The number entered is positive\n" : std::cout<<"The number entered is negative\n");
    return 0;
}