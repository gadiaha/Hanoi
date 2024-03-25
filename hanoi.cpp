#include <iostream>
using namespace std;

void disc_mov(int src, int dest)
{
	cout << "Moving disk from " << src << " to " << dest << endl;
}

void hanoi_mv(int num_discs, int src, int aux, int dest)
{
	if (num_discs == 1)
		disc_mov(src, dest);
	else {
		hanoi_mv(num_discs - 1, src, dest, aux);
		disc_mov(src, dest);
		hanoi_mv(num_discs - 1, aux, src, dest);
	}
}

int main()
{
	hanoi_mv(3, 1, 2, 3);
	
	return 0;
}
