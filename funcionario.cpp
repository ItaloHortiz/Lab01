#include <iostream>
#include "funcionario.h"
#include "data.h"


	Funcionario::Funcionario(){

	}

	Funcionario::Funcionario(string nome, string funcao, long int cpf, string dataNascimento, float salario){
		m_nome = nome;
		m_funcao = funcao;
		m_cpf = cpf;
		m_dataNascimento = dataNascimento;
		m_salario = salario; 
	}

	Funcionario::~Funcionario(){

	}

	string Funcionario::getNomeFuncionario(){
		return m_nome;
	}

	string Funcionario::getFuncao(){
		return m_funcao;
	}

	long int Funcionario::getCpf(){
		return m_cpf;
	}

	string Funcionario::getDataNascimento(){
		return m_dataNascimento;
	}

	float Funcionario::getSalario(){
		return m_salario;
	}
	
	
	void Funcionario::mostrarDados(){
		std::cout << "Nome: " << getNomeFuncionario() << std::endl;
		std::cout << "Função: " << getFuncao() << std::endl;
		std::cout << "CPF: " << getCpf() << std::endl;
		std::cout << "Salário: " << getSalario() << std::endl;
	}