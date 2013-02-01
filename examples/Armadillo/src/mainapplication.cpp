#include "mainapplication.h"

//------------------------------------------------------------------------------
MainApplication::MainApplication()
{
}
//------------------------------------------------------------------------------
void MainApplication::runApplication()
{
    cout << "MainApplication::runApplication()" << endl;

    // Testing Armadillo and classes
    testVectors();
    testMatrices();
    testOperations();
    testAtoms();

}
//------------------------------------------------------------------------------
void MainApplication::testVectors()
{
    cout << "MainApplication::testVectors()" << endl;

    // Vectors
    vec3 r;
    r = zeros(3);
    cout << r << endl;

    r(1) = 2;
    cout << r << endl;

    r << 1 << 3 << 1;
    cout << r << endl;

    vec v;
    v << 1 << 10;
    cout << v << endl;

    vec9 t;
    t = zeros(9);
    cout << t << endl;
}
//------------------------------------------------------------------------------
void MainApplication::testMatrices()
{
    cout << "MainApplication::testMatrices()" << endl;

    // Matrix
    mat h = zeros(3,3);
    cout << h << endl;
    h << 1 << 2 << 3 << endr
      << 4 << 5 << 6 << endr
      << 7 << 8 << 9 << endr;
    cout << h << endl;

    imat iMat;
    cout << h << endl;
    iMat << 1 << 2 << 3 << endr
         << 4 << 5 << 6 << endr
         << 7 << 8 << 9 << endr;
    cout << iMat << endl;
    iMat.print("iMat = ");

}
//------------------------------------------------------------------------------
void MainApplication::testOperations()
{
    cout << "MainApplication::testOperations()" << endl;

    // Testing vector operations
    vec r;
    r << 1 << 2 << 3;
    vec p;
    p << 1 << 2 << 0;
    cout << "dot(r,p) \t= " << dot(r,p) << endl;
    cout << "r.t()*p \t=" << r.t()*p << endl;
    cout << "norm(p,2) \t= " << norm(p,2) << endl;
    cout << "r.n_elem \t= " << r.n_elem << endl;

    // Testing matrix operations
    mat A = randu(3,3);
    cout << "A \t= " << endl << A << endl;
    cout << "A*r \t= " << endl << A*r << endl;
    cout << "A^-1 \t= " << endl << inv(A) << endl;
    cout << "det(A) \t= " << det(A) << endl;
    cout << "A.col(0) \t= " << endl << A.col(0) << endl;

    mat B = randn(2,3);
    cout << "B.n_rows \t = " << B.n_rows << " \tB.n_cols \t= " << B.n_cols << endl;
}
//------------------------------------------------------------------------------
void MainApplication::testAtoms()
{
    // Create one atom
    int dim = 3;
    vec3 r = randu(dim);
    vec3 v = randn(dim);
    Atom one(r, v);

    cout << one.getPosition() << endl;
    cout << one.getVelocity() << endl;

    // Creating 10 atoms and storing them in a STD vector
    int nAtoms = 10;
    std::vector<Atom*> atoms;

    for(int i=0; i<nAtoms; i++){
        r = randu(dim);
        v = randn(dim);
        Atom* tmpAtom = new Atom(r,v);
        atoms.push_back(tmpAtom);
    }

    for(int i=0; i<atoms.size(); i++){
        cout << "I'm atom " << i << endl;
        cout << atoms[i]->getPosition() << endl;
        cout << atoms[i]->getVelocity() << endl;
    }

    // Using an array to store the atoms. More efficient,
    // but has less flexibility.
    Atom* at[nAtoms];
    for(int i=0; i<nAtoms; i++){
        r = randu(dim);
        v = randn(dim);
        Atom* tmpAtom = new Atom(r,v);
        at[i] = tmpAtom;
    }

    for(int i=0; i<nAtoms; i++){
        cout << "I'm atom " << i << endl;
        cout << at[i]->getPosition() << endl;
        cout << at[i]->getVelocity() << endl;
    }
}
//------------------------------------------------------------------------------

