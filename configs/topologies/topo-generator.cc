#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include <cstring>

using namespace std;
FILE *fdtempa, *fdoutput;
void forward(int n,bool fw)
{
	int i;
	string tmp;
	for (i=0;i<n;i++)
	{
		getline(cin,tmp);
		if (fw)
		{
			cou<<tmp;
		}
	}
}

int main()
{
    std::ifstream in("TEMPLATE.PY");
    std::streambuf *cinbuf = std::cin.rdbuf(); //save old buf
    std::cin.rdbuf(in.rdbuf()); //redirect std::cin to in.txt!
    std::ofstream out("Mesh_XY(genenrated).py");
    std::streambuf *coutbuf = std::cout.rdbuf(); //save old buf
    std::cout.rdbuf(out.rdbuf()); //redirect std::cout to out.txt!


    std::cin.rdbuf(cinbuf);   //reset to standard input again
    std::cout.rdbuf(coutbuf); //reset to standard output again

	return 0;
}
