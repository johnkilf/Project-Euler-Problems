//program to find the 10001 prime number

#include<iostream>
#include<math.h>
using namespace std;
bool isDivisible(long long primes[], int arraySize, long long input);

int main(int argc, char* argv[])
{
	int numPrimes = 1;
	long long primes[10001] = {2};

	//iterate over all odd numbers
	//check if number is divisible by a prime number already found
	//if so add to the list of found prime numbers
	//stop when 100001 primes found
	for(long long i = 3; numPrimes <10001; i+=2){
		if(!isDivisible(primes, numPrimes, i))
		{
			primes[numPrimes] = i;
			numPrimes++;
		}
	}

	cout<<"answer is"<<primes[10000]<<endl;

}

//checks if a number is divisible by the array of numbers supplied
bool isDivisible(long long primes[], int numPrimes, long long input)
{
	for(int i = 0; i<numPrimes; i++){
		if(input%primes[i] == 0)
			return true;			
	}
	return false;
}
	
