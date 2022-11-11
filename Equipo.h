#include <string>
using namespace std;

class Equipo {
    private:
    //Atributos
        string nombre_equipo;
        string entrenador;
        int puntos_anotados;
    public:
        //Constructor
        Equipo();
        //Metodos
        string getNombreEquipo();
        string getEntrenador();
        int getPuntosAnotados();
        void setNombreEquipo(string nuevo_nombre);    
        void setEntrenador(string nuevo_entrenador);    
        void setPuntosAnotados(int puntos_anotados);    
};

string Equipo::getNombreEquipo(){
    return nombre_equipo;
}
string Equipo::getEntrenador(){
    return entrenador;
}
int Equipo::getPuntosAnotados(){
    return puntos_anotados;
}
void Equipo::setNombreEquipo(string nuevo_nombre){
    nombre_equipo = nuevo_nombre;
}
void Equipo::setEntrenador(string nuevo_entrenador){
    entrenador = nuevo_entrenador;
}
void Equipo::setPuntosAnotados(int puntos){
    puntos_anotados = puntos;
}
