//program to find the difference between the sum of the squares
//and the square of the sum of first 100 natural numbers

#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char* argv[])
{

	long sum = 0;
	long sumSquares = 0;
	//brute force solution - could also be solved using forumla for sums of series
	for(int i = 1; i <= 100; i++){
		sum += i;
		sumSquares += (i*i);		
	}
	sum = sum*sum;

	cout<<"answer is"<<sum-sumSquares<<endl;

}

