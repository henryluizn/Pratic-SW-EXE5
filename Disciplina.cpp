#include "Disciplina.hpp"

Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina}, alunos{new Pessoa[50]{nullptr}} {


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

std::string Disciplina::getNomeProfessor()
{
	return this->getProfessor()->getNome();
}


// bool adicionarAluno(Pessoa * novoAluno)
// {

Pessoa* Disciplina::getVetorAlunos()
{
	return this->alunos;
}

// void Disciplina::inicializaArray(){
// 	for (int i = 0; i < 50; i++)
// 	{
// 		alunos[i] = nullptr;
// 	}
	
// }