#include "Semn.h"

int main()
{
	double x = 0;

	std::cout << "=============================== Salut aici o sa vezi daca un numar are sau nu semn! =============================== \n";
	std::cout << "Apasa orice tasta doresti pentru a continua! ";

	system("pause>nul");
	do
	{
		system("CLS");
		x = citeste_numarul();
		testare_semn(x);

	} while (programul_ruleaza());

	return 0;
}