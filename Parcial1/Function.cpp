#include "function.h"
#include <iostream>
#include <math.h>


#define g 9.81

using namespace std;

void MovParabolico(float xf, float yf,float xi,float yi,float alpha,float t,float dt){
    int vox, voy;

    vox=(xf-xi)/(cos(alpha)*t);
    voy=(yf-yi+1.5*g*pow(t,2))/(t*sin(alpha));

}
