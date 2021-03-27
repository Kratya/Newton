#include "newton.h"

int main() 
{
	SLAU<double> slv = SLAU<double>("grid", "FistCondition", "time");
	//slv.do_smth();
	slv.do_smth_newton();
	system("pause");
	return 0;
}
