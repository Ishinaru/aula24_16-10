#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

class Aluno{
    private:
        static int cont;
        string nome;
        int ano, semestre, num_matricula;
    public:
        Aluno();
        Aluno(string nome);
        Aluno(string nome, int ano, int semestre);
        string getNome();
        void setNome(string nome);
        int getAno();
        void setAno(int ano);
        int getSemestre();
        void setSemestre(int semestre);
        int getMatricula();
        void exibirDetalhe();
};

class Turma{
    private:
        string nome;
        vector <Aluno *> alunos;
    public:
        Turma();
        Turma(string nome);
        void adicionarAluno(Aluno * a);
        void listarAlunos();
};