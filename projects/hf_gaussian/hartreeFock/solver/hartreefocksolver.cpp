#include "hartreefocksolver.h"

HartreeFockSolver::HartreeFockSolver(ElectronSystem *electronSystem):
    m_electronSystem(electronSystem)
{
    int dim = ... //given by the basis
    m_Q.set_size(dim, dim);
    for(int i = 0; i < dim; i++){
        for(int j = 0; j < dim; j++){
            m_Q(i,j) = zeros(dim, dim);
        }
    }
    //Usage: m_Q(p,q)(r,s)
}

void HartreeFockSolver::solve()
{
    setupS();
    setuph();
    setupQ();

    ...


    while(energyDiff > HFSOLVERTOLERANCE){
        ...
        calculateF();
        solveSingle();
        energyDiff = ...
        ...
    }

}

void HartreeFockSolver::solveSingle()
{
    //Solve the eigenvalue problem

}

void HartreeFockSolver::setupQ()
{

}

void HartreeFockSolver::setupS()
{

}

void HartreeFockSolver::setuph()
{

}

void HartreeFockSolver::normalizeC()
{

}

void HartreeFockSolver::calculateF()
{
    //calculate Fock matrix
}

void HartreeFockSolver::calculateP()
{
    //calculate density matrix

}

void HartreeFockSolver::calculateEnergy()
{

}
