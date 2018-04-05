#include <iostream>
#include "data.h"


	Data::Data(){ //Construtor sem parâmetros

	}

	Data::Data(int dia, int mes, int ano): m_dia(dia), m_mes(mes), m_ano(ano) { } //Construtor parametrizado

	Data::~Data(){ //Destrutor

	}

	int Data::getDia(){ //Método que retorna o dia da classe Data
		return m_dia;
	}

	int Data::getMes(){ //Método que retorna o mês da classe Data
		return m_mes;
	}

	int Data::getAno(){ //Método que retorna o ano da classe Data
		return m_ano;
	}

	void Data::mostrarDataAdmissao(){ //Mostra a data de admissão do funcionário
		std::cout << "Data de admissão: " << getDia() << "/" << getMes() << "/" << getAno() << std::endl;
		
	}