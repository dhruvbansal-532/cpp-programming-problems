#include<iostream>
int main(){
    /* Problem Statement: Write a program to read three numbers and find the smallest among them. */
    int a, b, c;
    std::cout<<"Enter numbers a, b and c respectively: ";
    std::cin>>a;
    std::cin>>b;
    std::cin>>c;

    if(a<b){
        if(a<c){
            std::cout<<"The smallest number among a, b and c is a: "<<a<<'\n';
        }
        else{
            std::cout<<"The smallest number among a, b and c is c: "<<c<<'\n';
        }
    }
    else{
        if(b<c){
            std::cout<<"The smallest number among a, b and c is b: "<<b<<'\n';
        }
        else{
            std::cout<<"The smallest number among a, b and c is c: "<<c<<'\n';
        }
    }

    return 0;
}