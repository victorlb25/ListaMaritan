#ifndef MEDICO_H
#define MEDICO_H
#include <iostream>

class Medico
{

    private:
        std::string nome;
        double altura;
        double peso;
    public:
        void setNome(std::string nome);
        void setAltura(double altura);
        void setPeso(double peso);

        std::string getNome();
        double getAltura();
        double getPeso();


};

#endif // MEDICO_H
