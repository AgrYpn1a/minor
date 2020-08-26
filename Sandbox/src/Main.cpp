#include <iostream>

namespace Minor
{
	__declspec(dllimport) void Print();
}

int main()
{
	Minor::Print();
	return std::cin.get();
}