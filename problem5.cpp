//program to find the lowest common multiple of all the digits from 1 to 20

#include<iostream>
#include<math.h>
using namespace std;

int main(int argc, char* argv[])
{
	//primes < 20 = 2,3,5,7,11,13,17,19
	//primes with powers < 20 = 16(2^4), 9(3^2)

	long long answer = 9 * 16 * 5 * 7 * 11 * 13 * 17 * 19;
	std::cout<<"Answer is:"<<answer<<std::endl;
}

