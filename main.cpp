#include<iostream>

#include<string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"


int main(){
	std::string pessoa_temp;

	
	std::cout << "\nCrie uma nova pessoa para se tornar o professor da disciplina\nNome pessoa 1: ";		
	std::cin >> pessoa_temp; 
	Pessoa* prof{new Pessoa{pessoa_temp}};
	
	std::cout << "Nova pessoa cadastrada: " << prof->getNome() << std::endl;

	std::cout << "\nCriando as pessoas para vincular como alunos(as)" << std::endl;
	std::cout << "\nCriando uma nova pessoa\nNome pessoa 2: " ;		
	std::cin >> pessoa_temp; 
	Pessoa* p1{new Pessoa{pessoa_temp}};
	
	std::cout << "Nova pessoa cadastrada: " << p1->getNome() << std::endl;

	
	std::cout << "\nCriando uma nova pessoa\nNome pessoa 3: " ;		
	std::cin >> pessoa_temp; 
	Pessoa* p2{new Pessoa{pessoa_temp}};	

	std::cout << "Nova pessoa cadastrada: " << p2->getNome() << std::endl;

	
	Disciplina* d1{new Disciplina{"Orientacao a Objetos"}};
	d1->setProfessor(prof);
	
	std::cout << "\nAtribuindo o professor " << d1->getNomeProfessor() << " para a disciplina " << d1->getNome() << std::endl;
	
	std::cout << "\nAdicionando alunos(as) na disciplina" << std::endl;

	
	if (d1->adicionarAluno(p1))
	{
		std::cout << "\nAluno(a) " << p1->getNome() << " adicionado com sucesso!" << std::endl;		
	}else{
		std::cout << "Falha ao adicionar o aluno(a)" << std::endl;		
	}
	
	if (d1->adicionarAluno(p2))
	{
		std::cout << "Aluno(a) " << p2->getNome() << " adicionado com sucesso!" << std::endl;		
	}else{
		std::cout << "Falha ao adicionar o aluno(a)" << std::endl;		
	}
	
	
	std::cout << "\nImpressao do vetor de alunos ANTES da atualizacao do nome do 2 aluno: " << std::endl;
	d1->printVetorAlunos();

	std::cout << "\nInsira um novo nome para o aluno 2: " ;
	std::cin >> pessoa_temp; 
	p2->setNome(pessoa_temp);

	std::cout << "\nImpressao do vetor de alunos APOS atualizacao do nome do 2 aluno: " << std::endl;
	d1->printVetorAlunos();

	delete prof;
	delete p1;
	delete p2;
	delete[] d1;
	
	return 0;
}
