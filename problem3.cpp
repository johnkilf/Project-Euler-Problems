//program to find the largest prime factor of a number
#include<iostream>
#include<math.h>

int main(int argc, char* argv[])
{
	long long input = 600851475143;
	
	for(long long i = 2; i<=(sqrt(input)+1); i++){
		if(input % i == 0){
			input = input / i;
			i--;//test if same value will divide in again
		}
	}

	std::cout<<"Answer is:"<<input<<std::endl;
}
