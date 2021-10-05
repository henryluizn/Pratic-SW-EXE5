#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include "Pessoa.hpp"




class Disciplina{
	public:
		Disciplina(std::string nomeDisciplina);

		std::string getNome();
		void setNome(std::string novoNome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int novaCarga);

		Pessoa* getProfessor();
		void setProfessor(Pessoa* novoProf);
		
	// novas implementacoes
		std::string getNomeProfessor();
		bool adicionarAluno(Pessoa* novoAluno);
		Pessoa * getVetorAlunos();
		void inicializaArray();
		
	private:
		Pessoa* professor;
		std::string nome;
		unsigned short int cargaHoraria;
	// novas implementacoes		
		Pessoa* alunos;
};
#endif
