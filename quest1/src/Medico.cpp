#include "Medico.h"

void Medico::setNome(std::string nome){
    this->nome = nome;
}

void Medico::setAltura(double altura){
    this->altura= altura;
}

void Medico::setPeso(double peso){
    this->peso = peso;
}

std::string Medico::getNome(){
    return nome;
}

double Medico::getAltura(){
    return altura;
}
double Medico::getPeso(){
    return peso;
}
