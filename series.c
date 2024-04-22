#include<stdio.h>
double pi(int k);
int main(){
    double pin=pi(10000);
    printf("%lf",pin);
    return 0;
}
double pi(int k){
    int signo;
    if(k%2)
        signo=-1;
    else 
        signo=1;
    if(k==0)
        return 4;
    else
        return (4*((double) signo)/(2*k+1))+pi(k-1);
}