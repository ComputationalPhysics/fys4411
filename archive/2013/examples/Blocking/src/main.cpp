#include <iostream>
#include <armadillo>
#include <blocking.h>
#include <cstdlib>

using namespace std;
using namespace arma;
int main()
{
    string dataPath = "../DATA";
    Blocking block(dataPath);
    block.doBlocking();

    // Plotting result
    string pythonPath = "python " + dataPath
            + "/plotBlocking.py "
            + dataPath + "/blocking.mat";
    system(pythonPath.c_str());
    return 0;
}

