//program to find the find the largest palindromic number that's
//the product of two three digit numbers

#include<iostream>
#include<math.h>
using namespace std;

bool checkPalindromic(long input);

int main(int argc, char* argv[])
{
	bool found = false;
	long largest = 0;
	long min = 100;

	for(long i = 999; i>= min; i--){
		for(long j = i; j>= min; j--){
			if(i*j > largest && checkPalindromic(i*j))
			{
				largest = i*j;
				min = j;
			}
		}
	}
	std::cout<<"Answer is:"<<largest<<std::endl;
}

bool checkPalindromic(long input)
{
	//create reverse of number
	long temp = input;
	long reverse = 0;

	while(temp > 0){
		reverse *= 10;
		reverse += (temp%10);
		temp = temp / 10;
	}

	//if number is same in reverse return true
	if(reverse == input)
		return true;
	else
		return false;
}
