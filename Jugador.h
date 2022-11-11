#include <string>
using namespace std;

class Jugador {
    private:
        //Atributos
        string nombre;
        int tam, numero, id, minutos_jugados, puntos_anotados, sueldo_base;
    public:
        //Constructor
        Jugador (){}
        Jugador(int tamanio){
            tam = tamanio;
            //numero = new int[tam-1];
        }
        //Métodos
        string getNombre();
        int getNumero();
        int getId();
        int getMinutosJugados();
        int getPuntosAnotados();
        int getSueldoBase();
        void setNombre(string new_nombre);
        void setNumero(int new_numero);
        void setId(int new_id);
        void setMinutosJugados(int new_minutos_jugados);
        void setPuntosAnotados(int new_puntos_anotados);
        void setSueldoBase(int new_sueldo);


} ;
string Jugador::getNombre(){
    return nombre;
}
int Jugador::getNumero(){
    return numero;
}
int Jugador::getId(){
    return id;
}
int Jugador::getMinutosJugados(){
    return minutos_jugados;
}
int Jugador::getPuntosAnotados(){
    return puntos_anotados;
}
int Jugador::getSueldoBase(){
    return sueldo_base;
}
void Jugador::setNombre(string new_nombre){
    nombre = new_nombre;
}
void Jugador::setNumero(int new_numero){
    numero = new_numero;
}
void Jugador::setId(int new_id){
    id = new_id;
}
void Jugador::setMinutosJugados(int new_minutos_jugados){
    minutos_jugados = new_minutos_jugados;
}
void Jugador::setPuntosAnotados(int new_puntos_anotados){
    puntos_anotados = new_puntos_anotados;
}
void Jugador::setSueldoBase(int new_sueldo){
    sueldo_base = new_sueldo;
}