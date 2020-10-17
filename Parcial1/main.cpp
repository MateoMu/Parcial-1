#include <iostream>
#include "function.h"

using namespace std;

int main()
{
    int opcion=1;

        while(opcion !=0)
        {
        cout<<"******* Ejercicios de la practica 2 ********"<<endl;
        cout<<"Presione 1 para generar disparo ofensivo "<<endl;
        cout<<"Presione 2 para generar disparo defensivo "<<endl;
        cout<<"Presione 3 para generar disparo defensivo sin importar cañon enemigo"<<endl;
        cout<<"Presione 4 para generar disparo ofensivo e impidan ser destruidos los cañones "<<endl;
        cout<<"Presione 0 para salir"<<endl;
        cin>>opcion;

       switch(opcion)
        {
          case 1:



          break;


         case 2:




           break;

         case 3:


           break;

         case 4:



           break;



       default:
               cout<<"Opcion no es valida"<<endl;
               break;
       }
    }
    return 0;
}
