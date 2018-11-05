#include <iostream>
#include "Medico.h"
#include "Oftalmologista.h"
#include "Cirurgiao.h"
#include "Otorrino.h"
#include "Ginecologista.h"


using namespace std;

int main()
{
   Medico m = Medico();
   Oftalmologista o = Oftalmologista();
   Otorrino ot = Otorrino();
   Cirurgiao ci = Cirurgiao();
   Ginecologista gi = Ginecologista();

    cout << "Medico" << endl << endl;
    cout << "Nome:" << m.getNome() << endl;
    cout << "Altura :" << m.getAltura() << endl;
    cout << "peso:" << m.getPeso() << endl;




}
