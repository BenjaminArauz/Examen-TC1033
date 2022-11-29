#ifndef ARMADOR_H
#define ARMADOR_H

#include <iostream>
#include <string>
using namespace std;

#include "JugadorNuevo.h"

class Armador : public JugadorNuevo {
    private:
        int robos_hechos;
    public:
        Armador(int robos_hechos):JugadorNuevo(){
            this->robos_hechos = robos_hechos;
        }
        int getRobosHechos();
        void setRobosHechos(int);

};

int Armador::getRobosHechos(){
    return robos_hechos;
}
void Armador::setRobosHechos(int nuevo_robos){
    robos_hechos = nuevo_robos;
}


#endif