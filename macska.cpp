#include <string>

using namespace std;

class Macska {
private:
   string nev;
   unsigned int eletkor;
   string szin;

public:
   Macska(string n, unsigned int e, string sz) {
       this->nev = n;
       this->eletkor = e;
       this->szin = sz;
   }
   Macska(string n, string sz) {
       this->nev = n;
       eletkor = 0;
       this->szin = sz;
   }


   const string& get_nev() const {
       return nev;
   }

   unsigned int get_eletkor() const {
       return eletkor;
   }

   const string& get_szin() const {
       return szin;
   }

};

/*
#include <string>

using namespace std;

class Macska {
private:
   string nev;
   unsigned int eletkor;
   string szin;

public:
   Macska(string& nev, string& szin) {
       this->nev = nev;
       this->eletkor = 0;
       this->szin = szin;
   }

   Macska(string& nev, unsigned int eletkor, string& szin) {
       this->nev = nev;
       this->eletkor = eletkor;
       this->szin = szin;
   }

   const string& get_nev() const {
       return nev;
   }

   unsigned int get_eletkor() const {
       return eletkor;
   }

   const string& get_szin() const {
       return szin;
   }

*/
