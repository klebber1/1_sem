//DESAFIO 01
//PROFESSOR NAVA
//COLOQUE SEU NOME AQUI

	#include <stdio.h>

	int main ()

	{
		float idade, peso, ml, mg, gotas, x, y, aux;
        Inicio:
		printf("Digite a Idade do Paciente: ");
		scanf("%f", &idade);

		printf("\nDigite o peso do Paciente: ");
		scanf("%f", &peso);

		ml = 1;
		mg = 500;
		gotas = 20;
    {
        if (peso < 5)
        {
            printf("\n\nO medicamento e vetado para pacientes com menos de 5 Quilos!\n\n");
        }
        else
		if ((idade >= 12) && (peso >=60))
		{
        		aux = 1000;
			x = (gotas * aux)/mg;
			y = (ml * x)/gotas;
			printf("\n\nRECEITA: O paciente devera tomar %.0f gotas (%.2f ml) por dose!\n\n", x, y);
		}

        	else

		if ((idade >= 12) && (peso < 60))
		{
        		aux = 875;
        		x = (gotas * aux)/mg;
			y = (ml * x)/gotas;
			printf("\n\nRECEITA: O paciente devera tomar %.0f gotas (%.2f ml) por dose!\n\n", x, y);
		}

		else

		if (idade < 12)

		if((peso >= 5) && (peso <= 9))
		{
			aux = 125;
        		x = (gotas * aux)/mg;
			y = (ml * x)/gotas;
			printf("\n\nRECEITA: O paciente devera tomar %.0f gotas (%.2f ml) por dose!\n\n", x, y);
		}

		else

		if(peso <= 16)
		{
			aux = 250;
        		x = (gotas * aux)/mg;
			y = (ml * x)/gotas;
			printf("\n\nRECEITA: O paciente devera tomar %.0f gotas (%.2f ml) por dose!\n\n", x, y);
		}

		else

		if(peso <= 24)
		{
			aux = 375;
        		x = (gotas * aux)/mg;
			y = (ml * x)/gotas;
			printf("\n\nRECEITA: O paciente devera tomar %.0f gotas (%.2f ml) por dose!\n\n", x, y);
		}

		else

		if(peso <= 30)
		{
			aux = 500;
        		x = (gotas * aux)/mg;
			y = (ml * x)/gotas;
			printf("\n\nRECEITA: O paciente devera tomar %.0f gotas (%.2f ml) por dose!\n\n", x, y);
		}

		else

		if(peso > 30)
		{
			aux = 750;
        		x = (gotas * aux)/mg;
			y = (ml * x)/gotas;
			printf("\n\nRECEITA: O paciente devera tomar %.0f gotas (%.2f ml) por dose!\n\n", x, y);
		}

    }

	return 0;
	}