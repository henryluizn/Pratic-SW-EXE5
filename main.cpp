#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

// int getProxIndiceLivre(Disciplina * d1)
// {
// 	Pessoa* vetor_alunos{d1->getVetorAlunos()};
// 	for (int i = 0; i < 50; i++)
// 	{
// 		if (vetor_alunos[i] == nullptr){
// 			std::cout << "Pessoa vazia" << std::endl;
// 		}
// 	}
	
	
// }



int main(){
	// Pessoa p1{"Joao", 11111111111, 20};

	// p1.setNome("Maria");
	// std::cout << p1.getNome() << '\t' << p1.getIdade() << '\t' <<  p1.getCpf() << std::endl;

	// std::cout << "Materia: " << d1.getNome() << std::endl;

	// std::cout << "Nome do professor: " << d1.getProfessor()->getNome() << std::endl;

	Pessoa* p1{new Pessoa{"Jonas"}};
	Pessoa* p2{new Pessoa};

	Disciplina* d1{new Disciplina{"Orientacao a Objetos"}};
	d1->setProfessor(p1);
	
	p2->setNome("Mariquinha");

	std::cout << "Nome p2: " << p2->getNome() << std::endl;

	std::cout << "Nome: " << p1->getNome() << std::endl;
	

	std::cout << "Nome professor antes da alteracao: " << d1->getNomeProfessor() << std::endl;

	p1->setNome("Marcos");
	std::cout << "Nome professor depois da alteracao: " << d1->getNomeProfessor() << std::endl;

	return 0;
}
