#include <string>
using namespace std;

class AtrasCancha{
    private:
        //Atributos
        string coliseo, tipo_balon, tipo_aro;
        int personas_limpieza;
    public:
        AtrasCancha(){}
        //Métodos
        string getColiseo();
        string getTipoBalon();
        string getTipoAro();
        int getPersonasLimpieza();
        void setColiseo(string nombre_coliseo);
        void setTipoBalon(string nueva_marca);
        void setTipoAro(string nuevo_aro);
        void setPersonasLimpieza(int nueva_persona);
         
};

string AtrasCancha::getColiseo(){
    return coliseo;
}
string AtrasCancha::getTipoBalon(){
    return tipo_balon;
}
string AtrasCancha::getTipoAro(){
    return tipo_aro;
}
int AtrasCancha::getPersonasLimpieza(){
    return personas_limpieza;
}
void AtrasCancha::setColiseo(string nombre_coliseo){
    coliseo = nombre_coliseo;
}
void AtrasCancha::setTipoBalon(string nueva_marca){
   tipo_balon = nueva_marca;
}
void AtrasCancha::setTipoAro(string nuevo_aro){
    tipo_aro = nuevo_aro;
}
void AtrasCancha::setPersonasLimpieza(int nueva_persona){
    personas_limpieza = nueva_persona;
}

