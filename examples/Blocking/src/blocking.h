#ifndef BLOCKING_H
#define BLOCKING_H

#include <armadillo>
#include <iostream>

using namespace std;
using namespace arma;

class Blocking
{
public:
    Blocking(string dataPath);
    void doBlocking();
protected:
    vec readDataFromFile();
    vec computeBlock(const vec &data, int blockSize);
    string dataPath;
    int deltaBlockSize;
    int nNodes;
    int maxBlockSizeTreshold;
    int stepLength;
    string outFilename;
    string dataName;
};

#endif // BLOCKING_H
