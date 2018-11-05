#ifndef CIRURGIAO_H
#define CIRURGIAO_H
#include "Medico.h"
#include <iostream>

class Cirurgiao : public Medico
{
    public:
       std::string getCursoesp();
       void setCursoesp(std::string cursoesp);
        void realizacirurgia();
    private:
         std::string cursoesp;
};


#endif // CIRURGIAO_H
