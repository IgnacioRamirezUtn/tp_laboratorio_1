#include <stdio.h>
#include "tp.h"

//////////////////////////////////////////////
float sumar(float operador1, float operador2)
{
  float resultado;

  resultado=operador1+operador2;
  return resultado;

}
////////////////////////////////////////////
float restar (float operador1, float operador2)
{
	float resultado;

	resultado= operador1 - operador2;

	return resultado;
}
////////////////////////////////////////////

float multiplicar (float operador1, float operador2)
{
	float resultado;

	resultado= operador1 * operador2;

	return resultado;
}
///////////////////////////////////////////
float dividir (float operador1, float operador2)
{
float resultado;

resultado= (float)operador1 / operador2;

return resultado;
}
///////////////////////////////////////////////
int factorizar (float operador )
{
    int i;
    int resultado;

	resultado = 1;

    for(i = operador; i > 1; i--)
	{
    resultado = resultado * i;
    }

return resultado;
}

///////////////////////////////////////////


