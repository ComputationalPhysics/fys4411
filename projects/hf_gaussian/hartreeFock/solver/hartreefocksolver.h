#ifndef HARTREEFOCKSOLVER_H
#define HARTREEFOCKSOLVER_H

#include <iostream>
#include <armadillo>

//#Include the electronSystem
#include<...>

using namespace arma;
using namespace std;

class HartreeFockSolver
{
public:
    HartreeFockSolver(ElectronSystem* electronSystem);

    void solve();


private:
    //It is common to use "m_" in front of every member variable
    double m_energy;
    mat m_S;
    mat m_h;
    mat m_F;
    mat m_P;
    mat m_C;
    field<mat> m_Q;

    ElectronSystem* m_electronSystem;

    void solveSingle();
    void setupQ();
    void setupS();
    void setuph();
    void normalizeC();
    void calculateF();
    void calculateP();
    void calculateEnergy();

};

#endif // HARTREEFOCKSOLVER_H
