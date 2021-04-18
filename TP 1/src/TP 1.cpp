//============================================================================

//============================================================================
#include <stdio.h>
#include <iostream>
#include "tp.h"
using namespace std;

int main()
	{
	    int opcion;
	    float operador1;
	    float operador2;
	    float resultadosuma;
	    float resultadoresta;
	    float resultadodivision;
	    float resultadomultiplicacion;
	    float resultadofactorizacion1;
	    float resultadofactorizacion2;

	    operador1= 0;
	    operador2= 0;

	    setbuf(stdout,NULL);


	    do{

	    printf("MENU PRINICIPAL\n");
	    printf("1. Ingresar 1er operando: %f\n", operador1);

	    printf("2. Ingresar 2do operando: %f\n", operador2);

	    printf("3. Calcular todas las operaciones\n");
	    printf("4. Informar resultados\n");
	    printf("5. Salir\n");
	    printf("Ingrese una opcion (1-5):\n" );
	    fflush(stdin);
	    scanf("%d" , &opcion);

	    switch(opcion)
	    {
	        case 1:
	        printf("Ingrese el primer numero");
		scanf("%f", &operador1);

		break;
		    case 2:
		    printf("Ingrese el segundo numero");
		scanf("%f", &operador2);

		break;
	        case 3:

		resultadosuma = sumar(operador1,operador2);

		resultadoresta= restar(operador1,operador2);

		resultadodivision= dividir(operador1,operador2);

		resultadomultiplicacion= multiplicar (operador1,operador2);

		resultadofactorizacion1= factorizar(operador1);

		resultadofactorizacion2= factorizar(operador2);

	    break;
	      case 4:

	     	printf("El resultado de la suma de %f + %f es %f\n",operador1,operador2, resultadosuma);

	     	printf("El resultado de la resta de %f - %f es %f\n",operador1,operador2, resultadoresta);

	    if (operador2 == 0)
	    {
		    printf("No se pudo realizar la division porque no se puede divir por el numero 0\n");
		}
		else
		{
			printf("El resultado de la division de %f / %f es %f\n",operador1,operador2, resultadodivision);
		}
		    printf("El resultado de la multiplicacion de %f * %f es %f\n",operador1,operador2, resultadomultiplicacion);

		if (operador1 < 0){
	       printf("No se puede realizar el factorial de un numero negativo ");
		}
		else
		{
		    printf("El factorial del primer numero %f es %f\n",operador1, resultadofactorizacion1);
		}
		if (operador2 < 0){
	       printf("No se puede realizar el factorial de un numero negativo ");
		}
		else
		{
		    printf("El factorial del segundo numero %f es %f\n",operador2, resultadofactorizacion2);
		}

	     break;




	    }
	    } while (opcion != 5);

	    return 0;
	}




