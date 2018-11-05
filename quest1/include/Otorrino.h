#ifndef OTORRINO_H
#define OTORRINO_H
#include "Medico.h"
#include <iostream>

class Otorrino : public Medico
{
    public:
       std::string getCursoesp();
       void setCursoesp(std::string cursoesp);
                 void realizaatendimento();

    private:
         std::string cursoesp;
};


#endif // OTORRINO_H
