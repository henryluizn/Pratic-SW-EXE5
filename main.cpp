#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"


int main(){

	Pessoa* p1{new Pessoa{"Jonas"}};
	std::cout << "Nova pessoa cadastrada: " << p1->getNome() << std::endl;

	Pessoa* p2{new Pessoa};
	p2->setNome("Mariquinha");
	std::cout << "Nova pessoa cadastrada: " << p2->getNome() << std::endl;

	Disciplina* d1{new Disciplina{"Orientacao a Objetos"}};
	d1->setProfessor(p1);
	

	if (d1->adicionarAluno(p1))
	{
		std::cout << "Aluno(a) " << p1->getNome() << " adicionado com sucesso!" << std::endl;		
	}else{
		std::cout << "Falha ao adicionar o aluno(a)" << std::endl;		
	}
	
	if (d1->adicionarAluno(p2))
	{
		std::cout << "Aluno(a) " << p2->getNome() << " adicionado com sucesso!" << std::endl;		
	}else{
		std::cout << "Falha ao adicionar o aluno(a)" << std::endl;		
	}
	std::cout << "Impressao do vetor de alunos ANTES da atualizacao do nome do 2 aluno: " << std::endl;
	d1->printVetorAlunos();

	std::cout << "Troca de nome do aluno 2 para Jose" << std::endl;
	p2->setNome("Jose");
	std::cout << "Impressao do vetor de alunos APOS atualizacao do nome dp 2 aluno: " << std::endl;

	d1->printVetorAlunos();

	
	return 0;
}
