#ifndef OFTALMOLOGISTA_H
#define OFTALMOLOGISTA_H
#include "Medico.h"
#include <iostream>


class Oftalmologista : public Medico
{
    public:
       std::string getCursoesp();
       void setCursoesp(std::string cursoesp);
         void realizaatendimento();
    private:
         std::string cursoesp;
};

#endif // OFTALMOLOGISTA_H
