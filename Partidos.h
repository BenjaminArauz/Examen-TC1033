#ifndef PARTIDOS_H
#define PARTIDOS_H
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include <vector>
#include "EquipoNuevo.h"

class Partidos {
    private:
        EquipoNuevo informacion_equipo;
        vector<EquipoNuevo> equipos;
    public:
        Partidos(){}
        EquipoNuevo getInformacionEquipo();
        void agregarEquipos(EquipoNuevo);
        EquipoNuevo* buscarEquipo(string);
        void crearHorario();
};

EquipoNuevo Partidos::getInformacionEquipo(){
    return informacion_equipo;
}
void Partidos::agregarEquipos(EquipoNuevo equipo){
    equipos.push_back(equipo);
}
EquipoNuevo* Partidos::buscarEquipo(string equipo_buscar){
    for (int i=0;i<equipos.size();i++){
        if (equipos[i].getNombreEquipo() == equipo_buscar){
            informacion_equipo = equipos[i];
            return &equipos[i];
        }
    }
    return new EquipoNuevo ();
}
void Partidos::crearHorario(){
    srand(time(NULL));
    cout << equipos[(1 + rand() % (equipos.size())) - 1].getNombreEquipo() << endl;
    cout << equipos[(1 + rand() % (equipos.size())) - 1].getNombreEquipo() << endl;
}
#endif