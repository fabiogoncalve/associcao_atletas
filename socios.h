#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <functional>
#include <iostream>
#include <list>
#include <memory>
#include <utility>
#include <fstream> // bliblioteca de leitura de ficheiros
#include <sstream>
#include <istream>

class socios{

    public:

       void mostrarsocios(std::list<std::shared_ptr<socios>> name);

    private:
      std::shared_ptr<std::vector<std::string>> listnomesficheiro;

};
  class mostrarsociosadd:public socios{

  public:
     void mostrarsocios(std::vector<std::string>& veconteudo);

};


class basedadossocios {

public:

    std::string setnomeficheiro(std::string nomeficheiro);
    std::string getnomeficheiro();
    void addfilesocios();
   std::vector<std::string> & openfilesocios();

   
   
protected:

   std::string nomeficheiro;
   std::vector<std::string> vecnomesfile;
   std::ifstream output;
   std::vector<std::string> veconteudofile;
   std::vector<std::string> vecinsidefile;

  

};
