#include "Semn.h"

bool validare_numar(std::string& numar)
{
	if (numar.empty())
		return false;

	if (!isdigit(numar[0]))
		if (numar[0] != '-')
			return false;

	for (int j = 1; j < numar.length(); j++)
		if (!isdigit(numar[j]))
			if (numar[j] != '.')
				return false;

	return true;
}


double citeste_numarul()
{
	std::string numar;

	std::cout << "Introdu numarul caruia doresti sa ii testezi semnul: ";
	std::cin >> numar;

	for (int j = 0; j < numar.length(); j++)

		if (!validare_numar(numar))
		{
			std::cout << "Nu ai introdus un numar! \n";
			std::cout << "Asteapta pana cand se actualizeaza ecranul! \n";
			std::cout << "Nu apasa nicio tasta in tot acest timp! \n";
			Sleep(3000);
			system("CLS");
			return citeste_numarul();
		}

	return std::stod(numar);

}


void testare_semn(double& x)
{
	std::cout << "Tipul numarului este: ";

	if (x >= 0)
	{
		std::cout << "fara semn \n";
		std::cout << "=========================================================== \n";
	}
	else if (x < 0)
	{
		std::cout << "cu semn \n";
		std::cout << "=========================================================== \n";
	}

	return;
}


bool programul_ruleaza()
{
	std::string validare_optiune;

	std::cout << "Pentru a verifica semnul altui numar apasa tasta 1. \n";
	std::cout << "Pentru a parasi aplicatia apasa tasta 2. \n";

	std::cout << "=========================================================== \n";

	std::cout << "Alege una dintre aceste optiuni: ";

	std::cin >> validare_optiune;

	if (validare_optiune.size() > 1)
	{
		system("CLS");
		std::cout << "Optiunea selectata de tine nu exista! \n";
		std::cout << "=========================================================== \n";
		Sleep(500);
		std::cout << "Optiunile posibile sunt: \n";
		return programul_ruleaza();
	}

	char optiune = validare_optiune[0];

	switch (optiune)
	{
	case '1':
		std::cout << "=========================================================== \n";
		std::cout << "Te rugam sa astepti cateva secunde si sa nu apesi nicio tasta in tot acest timp! ";
		Sleep(3000);
		system("CLS");
		return true;

	case '2':
		std::cout << "=========================================================== \n";
		std::cout << "Multumim te mai asteptam cand vei mai fi curios sa vezi semnele numerelor! \n";
		return false;

	default:
		system("CLS");
		std::cout << "Optiunea selectata de tine nu exista! \n";
		std::cout << "=========================================================== \n";
		Sleep(500);
		std::cout << "Optiunile posibile sunt: \n";
		return programul_ruleaza();
	}

}