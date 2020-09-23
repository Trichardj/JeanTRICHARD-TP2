#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main() {
	int bag = 0; //si =0 c'est validé sinon =1 pas validé
	int choixutil;
	float valutil[3];
	float valmax[3];
	float tps = 0;

	valmax[0] = 25;
	valmax[1] = 35;
	valmax[2] = 55;

	do {
		valutil[0] = 151;
		valutil[1] = 151;
		valutil[2] = 151;
		choixutil = 2;
		
		while (valutil[0] > 150) {
			printf("Quelle est la premiere dimension de votre bagage ?\n");
			scanf_s("%f", &valutil[0]);
		}
		while (valutil[1] > 150) {
			printf("Quelle est la deuxieme dimension de votre bagage ?\n");
			scanf_s("%f", &valutil[1]);
		}

		while (valutil[2] > 150) {
			printf("Quelle est la troisieme dimension de votre bagage ?\n");
			scanf_s("%f", &valutil[2]);
		}
		while (valutil[0] > valutil[1] || valutil[1] > valutil[2] || valutil[0] > valutil[2]) {
			if (valutil[0] > [1]) {
				tps = valutil[0];
				valutil[0] = valutil[1];
				valutil[1] = tps;
			}
			if (valutil[1] > valutil[2]) {
				tps = valutil[1];
				valutil[1] = valutil[2];
				valutil[2] = tps;
			}
			if (valutil[0] > valutil[2]) {
				tps = valutil[2];
				valutil[2] = valutil[0];
				valutil[0] = tps;
			}
		}



	}

	
}