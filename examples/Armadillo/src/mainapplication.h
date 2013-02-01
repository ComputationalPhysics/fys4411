#ifndef MAINAPPLICATION_H
#define MAINAPPLICATION_H

#include <iostream>
#include <armadillo>
#include <vector>
#include "atom.h"

#define ARMA_NO_DEBUG

using namespace arma;

class MainApplication
{
public:
    MainApplication();
    void runApplication();
private:
    void testVectors();
    void testMatrices();
    void testOperations();
    void testAtoms();
//    void ref(const &mat);
};

#endif // MAINAPPLICATION_H
