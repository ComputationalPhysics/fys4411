#ifndef ATOM_H
#define ATOM_H

#include <armadillo>

using namespace arma;

class Atom
{
public:
    Atom(vec position, vec velocity);

    void setPosition(const vec3 &r);
    void setVelocity(const vec3 &v);
    vec3 getPosition();
    vec3 getVelocity();
protected:
    vec3 position;
    vec3 velocity;
};

#endif // ATOM_H
