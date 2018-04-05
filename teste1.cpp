#include <iostream>
#include <string>
#include "funcionario.h"
#include "empresa.h"
#include "data.h"
	

	int main(int argc, char* argv[]) {

		Funcionario f("Italo", "Cientista da Computação", 1122338875, "15/08/1994", 8450.50);
		Data d(2, 4, 2018);
		

		Funcionario f2("Maria", "Engenheira de Software", 1421338577, "12/05/2001", 10450.50);
		Data d2(5, 4, 2018);
		

		Funcionario f3("Bill", "Cientista da Computação", 1242335878, "20/02/1988", 4150.50);
		Data d3(2, 4, 2018);
		

		Empresa emp("Nordestão", 1200475812);

		std::cout << "Deseja adicionar um novo funcionário? " << std::endl;
		emp.addFuncionario(f);
		emp.addFuncionario(f2);
		emp.listarFuncionarios();

		return 0;
	}