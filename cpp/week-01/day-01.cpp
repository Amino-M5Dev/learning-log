#include <iostream>
#include <cmath>

using namespace std;

int main() {

  cout << "===== C++ FUNDAMENTALS =====\n\n";

  // ============================
  // 1) DATA TYPES
  // ============================

  cout << "--- Data Types ---\n";

  int idade = 20;
  float altura = 1.75f;
  double peso = 87.6;
  char grade = 'A';
  string nome = "Amino Muhamad";
  bool estudante = true;

  cout << "Idade: " << idade << endl;
  cout << "Altura: " << altura << endl;
  cout << "Peso: " << peso << endl;
  cout << "Grade: " << grade << endl;
  cout << "Nome: " << nome << endl;
  cout << "Estudante: " << estudante << endl;

  cout << endl;

  // ============================
  // 2) NAMESPACES
  // ============================

  cout << "--- Namespaces ---\n";

  // std::cout e std::endl vêm do namespace std
  std::cout << "Usando std::cout explicitamente.\n";

  cout << endl;

  // ============================
  // 3) TYPEDEF (alias de tipo)
  // ============================

  cout << "--- Typedef ---\n";

  typedef unsigned long int uli;

  uli populacao = 1000000;

  cout << "Populacao: " << populacao << endl;

  cout << endl;

  // ============================
  // 4) ARITHMETIC OPERATIONS
  // ============================

  cout << "--- Arithmetic Operations ---\n";

  double a = 10;
  double b = 3;

  cout << a << " + " << b << " = " << a + b << endl;
  cout << a << " - " << b << " = " << a - b << endl;
  cout << a << " * " << b << " = " << a * b << endl;
  cout << a << " / " << b << " = " << a / b << endl;

  int x = 10;
  int y = 3;

  cout << x << " % " << y << " = " << x % y << endl;

  cout << endl;

  // ============================
  // 5) TYPE CONVERSION
  // ============================

  cout << "--- Type Conversion ---\n";

  int correct = 8;
  int questions = 10;
  double score = correct/(double)questions * 100;

  cout << score << "%" << endl;

  cout << endl;

  // ============================
  // 6) Cin - User Input
  // ============================

  cout << "--- Cin - User Input ---\n";

  string meuNome;
  string sobrenome;

  cout << "Digite seu nome: ";
  //getline(cin, meuNome);

  cout << "Digite seu sobrenome: ";
  //getline(cin, sobrenome);

  cout << endl;

  //cout << "Nome: " << meuNome << endl;
  //cout << "Sobrenome: " << sobrenome << endl;

  cout << endl;

  // ============================
  // 7) Math Functions
  // ============================

  cout << "--- Math Fuctions ---\n";

  //always use: #include <cmath>

  cout << max(1,2) << endl;
  cout << min(2,1) << endl;
  cout << pow(2,2) << endl;
  cout << sqrt(9) << endl;
  cout << abs(-2) << endl;
  cout << round(2.356) << endl;
  cout << ceil(2.653) << endl;
  cout << floor(2.564) << endl;

  cout << endl;

  return 0;
}
