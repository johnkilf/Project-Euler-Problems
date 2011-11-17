#include<iostream>

int main(int argc, char* argv[])
{
	int total = 0;
	for(int i = 0; i<1000; i++)	{
		if(i%3 == 0 || i%5 == 0)
			total+= i;
	}	
	std::cout<<"Answer is:"<<total<<std::endl;
}
