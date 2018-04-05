#include <iostream>
#include <vector>
#include <iomanip>
#include "empresa.h"

	Empresa::Empresa(){

	}

	Empresa::Empresa(string nome, long int cnpj): m_nome(nome), 
				m_CNPJ(cnpj) { }

	Empresa::~Empresa(){
		
	}

	string Empresa::getNomeEmpresa(){
		return m_nome;
	}


	long int Empresa::getCnpj(){
		return m_CNPJ;
	}

	void Empresa::addFuncionario(Funcionario &f){
		for (vector<Funcionario>::size_type n = 0; n < func.size(); ++n) {
			if(f.m_nome == func[n].m_nome){
				std::cerr << "O funcionário já existe!" << std::endl;
			}
		}

		func.push_back(f);

		//num_funcionarios++;
	}

	void Empresa::mostrarDadosEmpresa(){
		std::cout << "Nome: " << getNomeEmpresa() << std::endl;
		std::cout << "CNPJ: " << getCnpj() << std::endl;
	}

	void Empresa::listarFuncionarios(){
		std::cout << "---------------------------------" << std::endl;
		std::cout << "Lista de funcionários da Empresa" << std::endl;
		std::cout << "---------------------------------" << std::endl;

		for (vector<Funcionario>::size_type n = 0; n < func.size(); ++n) {
            std::cout << "Nome: " << setw( 6 ) << func[n].m_nome << "  " << setw( 6 ) << std::endl << 
            "Função: " << setw( 6 ) << func[n].m_funcao << std::endl << "CPF: " << setw( 6 ) << func[n].m_cpf << std::endl << "Data de Nascimento: " << setw( 6 ) << func[n].m_dataNascimento << std::endl << 
            "Salário: " << func[n].m_salario << std::endl << std::endl;
      	}
	}			