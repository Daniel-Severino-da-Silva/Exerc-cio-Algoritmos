#include <iostream>
#include <vector>

using namespace std;


int main()
{

	std::string situacao; // Váriavel que ve se foi reprovado ou aprovado
	
    // 5 vetores das 5 variáveis
	vector<string> nome(5);
	vector<float> nota1(5);
	vector<float> nota2(5);
	vector<float> nota3(5);
	vector<float> media(5);

	// Pega informações 5x de 5 alunos e guarda nos vetores
	for (int i = 0; i < 5; i++)
	{
		cout << "Digite o nome do aluno: ";
		cin >> nome[i];

		cout << "Digite a nota 1: ";
		cin >> nota1[i];

		cout << "Digite a nota 2: ";
		cin >> nota2[i];

		cout << "Digite a nota 3: ";
		cin >> nota3[i];

		// calcula a média de cada iteração
		media[i] = (nota1[i] + nota2[i] + nota3[i]) / 3;

		cout << endl;
	}

	cout << "\nRESULTADOS\n";

	// cabeçalho da tabela
	cout << "\nAluno: " << " N1 " << " N2 " << " N3 " << " MÉDIA " << " SITUAÇÃO " << endl;

    // saída de todas informações dos 5 alunos da tabela
	for (int i = 0; i < 5; i++)
	{

	    // verifica média e decide se foi aprovado ou reprovado
		if (media[i] >= 7) {
			situacao = " aprovado ";
		}

		else
		{
			situacao = " Reprovado ";

		}


		cout <<  nome[i] << ' ' << nota1[i] << ' ' << nota2[i] << ' ' << nota3[i] << ' ' << media[i] << ' ' << situacao << endl;

	}
	
	int maior = 0;

	// comparar todas as médias para verificar qual a maior
	for (int i = 1; i < 5; i++)
	{
		if (media[i] > media[maior])
		{
			maior = i;
		}
	}

	cout << "\nAluno com maior media: " << nome[maior] << endl;
	cout << "Maior media: " << media[maior] << endl;

	return 0;
}