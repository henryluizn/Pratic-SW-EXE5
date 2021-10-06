#include "Disciplina.hpp"
#include <iostream>

// construtor modificado
Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina}, qtd_alunos{0} {


}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string novoNome){
	nome = novoNome;
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int novaCarga){
	cargaHoraria = novaCarga;
}


Pessoa* Disciplina::getProfessor()
{
	return professor;
}


void Disciplina::setProfessor(Pessoa* novoProf)
{
	professor = novoProf;
}


// -------- novas implementacoes ------------	

std::string Disciplina::getNomeProfessor()
{
	return this->getProfessor()->getNome();
}
	
int Disciplina::getQtdAlunos(){
	return this-> qtd_alunos;
}

bool Disciplina::adicionarAluno(Pessoa* novoAluno)
{
	try
	{
		alunos[this->qtd_alunos] = novoAluno;
		this->qtd_alunos+=1;

		return true;
	}
	catch(const std::exception& e)
	{
		return false;
	}
}

Pessoa** Disciplina::getVetorAlunos()
{
	return alunos;
}


void Disciplina::printVetorAlunos(){
	try{
		Pessoa** aluno_atual{getVetorAlunos()};
		for (int i = 0; i < this->getQtdAlunos(); i++)
		{
			std::cout << "\t- Aluno: " << aluno_atual[i]->getNome() << std::endl;
		}
	}catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
}


// ------------------------------------------	
