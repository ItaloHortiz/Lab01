#ifndef _DATA_H_
#define _DATA_H_

	class Data {
	private:
		int m_dia;
		int m_mes;
		int m_ano;

	public:
		Data();
		Data(int dia, int mes, int ano);
		~Data();

		int getDia();
		int getMes();
		int getAno();
		
		void mostrarDataAdmissao();

	};

#endif	