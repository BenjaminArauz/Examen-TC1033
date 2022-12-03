/*
- Benjamín Iván Arauz Córdova
- A00836936
- 02/12/2022

Clase Partidos: Representa a la unión de equipos, principalmente para crear al partido.
*/

#ifndef PARTIDOS_H //Si no esta definido PARTIDO_H 
#define PARTIDOS_H //Definir procesador PARTIDO_H 

//Librerias
#include <string>
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#include <vector>

//Clase incluida
#include "Equipo.h"

class Partidos {
    private:
        //Atributos
        Equipo informacion_equipo;
        vector<Equipo> equipos;
    public:
        //Constructor
        Partidos(){}
        //Getter
        Equipo getInformacionEquipo();
        //Otros métodos
        void agregarEquipos(Equipo);
        Equipo* buscarEquipo(string);
        void crearHorario();
        void agregarPrimeraDivision(Equipo);
        void agregarSegundaDivision(Equipo);

};
//Getter
Equipo Partidos::getInformacionEquipo(){
    return informacion_equipo;
}
//Otros métodos
void Partidos::agregarEquipos(Equipo equipo){
    equipos.push_back(equipo);
}
Equipo* Partidos::buscarEquipo(string equipo_buscar){
    for (int i=0;i<equipos.size();i++){
        if (equipos[i].getNombreEquipo() == equipo_buscar){
            informacion_equipo = equipos[i];
            return &equipos[i];
        }
    }
    return new Equipo ();
}
void Partidos::crearHorario(){
    srand(time(NULL));
    cout << equipos[(1 + rand() % (equipos.size())) - 1].getNombreEquipo() << endl;
    cout << equipos[(1 + rand() % (equipos.size())) - 1].getNombreEquipo() << endl;
}
#endif