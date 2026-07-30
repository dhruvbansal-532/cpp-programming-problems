#include<iostream>
int main(){
    /* Problem Statement: Write a program to read the marks of 5 subjects and print the total and average. */

    double sm1, sm2, sm3, sm4, sm5, total, avg;

    std::cout<<"Enter the marks of following 5 subjects respectively:\n 1. Maths\n 2. Science\n 3. English\n 4. Hindi\n 5. History\n";

    std::cin>>sm1;
    std::cin>>sm2;
    std::cin>>sm3;
    std::cin>>sm4;
    std::cin>>sm5;

    total=sm1+sm2+sm3+sm4+sm5;
    avg=total/5;

    std::cout<<"Total Marks are: "<<total<<'\n';
    std::cout<<"Average of 5 subjects: "<<avg<<'\n';

    return 0;
}