#include<iostream>
using namespace std;

int main(){
    double x=6,y=19,sum;
    while(x<=y){
    	sum +=1/x;
    	x=x+1;
	}
	cout << "sum is "<<sum;
	
    return 0;
}