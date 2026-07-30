#include<iostream>
int main(){
    /* Problem Statement: Write a program to read seconds and convert them into hours, minutes and seconds. */

    int seconds, remSec, remMin;
    int hours, minutes;
    
    std::cout<<"Enter the time in seconds: "<<'\n';
    std::cin>>seconds;

    minutes=seconds/60;
    remSec=seconds%60;
    hours=minutes/60;
    remMin=minutes%60;

    std::cout<<"Time is "<<hours<<" hours "<<remMin<<" minutes "<<remSec<<" seconds"<<'\n';
    return 0;
}