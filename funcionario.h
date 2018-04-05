#ifndef _FUNCIONARIO_H_
#define _FUNCIONARIO_H_

#include <string>
#include "data.h"

using namespace std;

	class Funcionario {
	//private:	
	public:	
		string m_nome;
		string m_funcao;
		long int m_cpf;
		string m_dataNascimento;
		float m_salario;
		Data m_dataAdmissao;

	public:
		Funcionario();
		Funcionario(string nome, string funcao, long int cpf, string dataNascimento, float salario);
		~Funcionario();

		void setNomeFuncionario(std::string nome);
		string getNomeFuncionario();

		void setFuncao(std::string funcao);
		string getFuncao();

		void setCpf(long int cpf);
		long int getCpf();

		void setDataNascimento(string dataNascimento);
		string getDataNascimento();

		void setSalario(float salario);
		float getSalario();

		void setDataAdmissao(Data data);
		Data getDataAdmissao();

		void mostrarDados();
	};


#endif
