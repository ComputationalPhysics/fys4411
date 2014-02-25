#include <iostream>
#include<solver/hartreefocksolver.h>

using namespace std;

int main()
{
    cout << "-----Hartree-Fock-----" << endl;


    HartreeFockSolver hfSolver(...);
    hfSolver.solve();


    return 0;
}

