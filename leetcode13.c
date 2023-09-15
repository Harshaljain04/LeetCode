//LeetCode Q13 Roman to Integer
//Given a roman numeral, convert it to an integer.
#include<stdio.h>
#include<stdlib.h>
int main(){
//int I= 1;
// int V =5;
// int X =10;
// int L =50;
// int C =100;
// int D =500;
// int M =1000;
char a[10];
int b[10];
int sum=0;
for ( int i=0; i<4 ;i++){
    scanf("%c",&a[i]);
    if (a[i]=='I'){
    a[i]=1;
    }
    else if (a[i]=='V'){
    a[i]=5;
    }
    else if (a[i]=='X'){
    a[i]=10;
    }
    else if (a[i]=='L'){
    a[i]=50;
    }
    else if (a[i]=='C'){
    a[i]=100;
    }
    else if (a[i]=='D'){
    a[i]=500;
    }
    else if (a[i]=='M'){
    a[i]=1000;
    }
    
}
for (int i = 0;i<4 ; i++)

{
    if(i==0){
        a[i]=a[i];
        sum=sum+a[i];
    }
    else if(i!=0){
        
        if (a[i]>a[i-1]){
        a[i]=-a[i];
     sum=sum+a[i];
    //  

    }
    }
    else{
        sum=sum+a[i];
    }


}
printf("%d",abs(sum));




}
