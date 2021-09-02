#include <stdlib.h>
#include <stdio.h>
#include <string>
#include <functional>
#include <iostream>
#include <list>
#include <memory>
#include <utility>
#include "socios.h"
#include <fstream> // bliblioteca de leitura de ficheiros
#include <sstream>
#include <istream>


void mostrarsociosadd::mostrarsocios( std::vector<std::string> &vecfile){

  for(auto &i : vecfile )
  {
  std::cout<<i<<std::endl;
  }

};

std::string basedadossocios::setnomeficheiro(std::string  nomeficheiro){

return this ->nomeficheiro=nomeficheiro;

  }

std::string basedadossocios::getnomeficheiro(){

return nomeficheiro;

};

void basedadossocios::addfilesocios()
{
	   char condicao;
	   int tam=1;
	
  
		do{	
		std::cout << ("Introduza o nome do ") << tam << ("º ficheiro que deseja armazenar: ");
		std::cin>>nomeficheiro;
    vecnomesfile.push_back(setnomeficheiro(nomeficheiro));
		std::cout << ("Pretende continuar a armazenar ficheiros[S/N]? ");
    std::cin >> condicao;
		tam++;
	
		} while(condicao == 'S' || condicao == 's');

};


std::vector<std::string> & basedadossocios::openfilesocios(){

std::string line;
for(auto &iterator : vecnomesfile)
  {

output.open(iterator);
 if (output.is_open())
    {
    while(getline(output,line)){
    veconteudofile.push_back(line);
    }
      output.close();
  }

  else
  {
    std::cout<<"Ficheiro Corrompido ou enixistente"<<std::endl;
  }
}

for(auto &j : veconteudofile)
  {
  std::string input = j;
	std::istringstream ss(input);
	std::string token;

	while(std::getline(ss, token, ',' )) {
	vecinsidefile.push_back(token);

	}
  }
  
return vecinsidefile;


};



