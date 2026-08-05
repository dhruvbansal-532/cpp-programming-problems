#include<iostream>
int main(){
    /* Problem Statement: Write a program to read a number and check whether it is even or odd. */
    int num;
    std::cout<<"Enter a number: ";
    std::cin>>num;

     if(num%2==0){
        std::cout<<"The number entered is even\n";
    }
    else{
        std::cout<<"The number entered is odd\n";
    }

    /* Alternate method: */
    // num%2 != 0 ? std::cout<<"The entered number is odd\n" : std::cout<<"The entered number is even\n";
    
    return 0;
}