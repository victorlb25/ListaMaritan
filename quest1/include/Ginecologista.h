#ifndef GINECOLOGISTA_H
#define GINECOLOGISTA_H
#include "Medico.h"
#include <iostream>

class Ginecologista : public Medico
{
    public:
       std::string getCursoesp();
       void setCursoesp(std::string cursoesp);
        void realizaatendimento();


    private:
         std::string cursoesp;
};


#endif // GINECOLOGISTA_H
