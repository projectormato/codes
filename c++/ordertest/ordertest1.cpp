#include <iostream>
using namespace std;

int main(){
	long long target = 100000000;
	bool flag = false;
	for (long long i = 1; i < target; ++i)
	{
		if (target % i == 0)
		{
			flag = true;
		}
	}
}