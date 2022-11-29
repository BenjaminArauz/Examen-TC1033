#ifndef POSTE_H
#define POSTE_H

#include <iostream>
#include <string>
using namespace std;

#include "JugadorNuevo.h"

class Poste : public JugadorNuevo {
    private:
        int rebotes;
    public:
        Poste(int rebotes):JugadorNuevo(){
            this->rebotes = rebotes;
        }
        int getBuenasJugadas();
        void setBuenasJugadas(int);

};

int Poste::getBuenasJugadas(){
    return rebotes;
}
void Poste::setBuenasJugadas(int nuevo_rebotes){
    rebotes = nuevo_rebotes;
}

#endif
