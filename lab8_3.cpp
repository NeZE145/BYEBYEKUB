#include<iostream>
using namespace std;

char before(char x){
	char A=x;
	char b ='Z',c='A';
	if((c<x&&b>x)||x==b||x==c){
		if(x==c){
			A=b;
		}else{
			A=x-1;
		}
	}else{
		A=48;

	}

	return A;
}



int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
