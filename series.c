#include<stdio.h>
double pi(int k);
float inverse(int n ,int x);
int factorial(int n);
double sinF(int n, int k);
float power(int n ,int x);
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
float inverse(int n ,int x){
    if(n==0)
        return 1;
    else 
        return inverse(n-1,x)/(x);
}
float power(int n ,int x){
    if(n==0)
        return 1;
    else 
        return x*power(n-1,x);
}
int factorial(int n){
    if(n==0)
        return 1;
    else
        return n*factorial(n-1);
}
double sinF(int n,int x){
    if (n==0)
        return x;
    else
        return (power(2*n+1,x)/factorial(2*n+1))+sinF(n-1,x);
}
