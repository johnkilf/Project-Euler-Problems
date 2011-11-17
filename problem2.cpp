#include<iostream>

int main(int argc, char* argv[])
{
	int sum = 0;
	int current = 1;
	int last = 1;

	while(current<4000000)
	{
		if(current%2 == 0)
			sum += current;

		int temp = current;
		current = current + last;
		last = temp;
	}

	std::cout<<"Answer is:"<<sum<<std::endl;
}
