#ifndef _EMPRESA_H_
#define _EMPRESA_H_

#include "funcionario.h"
#include <vector>
	
	class Empresa{
	private:
		string m_nome;
		long int m_CNPJ;
		vector<Funcionario> func;

	public:
		static int num_funcionarios;

		/*
		@brief Construtor padrão
		@details não recebe parâmetros
		*/
		Empresa();
		
		/*
		@brief Construtor parametrizado
		@param1 recebe o nome da empresa
		@param2 recebe o cnpj da empresa
		@details não recebe parâmetros
		*/
		Empresa(string nome, long int cnpj);
		
		/*
		@brief declaração do destrutor
		@details não recebe parâmetros
		*/	
		~Empresa();


		string getNomeEmpresa();

		long int getCnpj();

		/*
			@brief função que adiciona um novo funcionário à empresa
			@details não recebe parâmetros
		*/
		void addFuncionario(Funcionario &f);

		/*
			@brief função que lista os funcionários vinculados à empresa
			@details não recebe parâmetros
		*/
		void listarFuncionarios();

		void mostrarDadosEmpresa();	

	};

#endif