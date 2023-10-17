#include "classes.hpp"

Turma::Turma(){
    this->nome = "Turma Padrao";
}
Turma::Turma(string nome){
    this->nome = nome;
}
void Turma::adicionarAluno(Aluno * a){
    alunos.push_back(a);
}
void Turma::listarAlunos(){
    cout<<"Alunos da turma: "<<nome<<endl;
    for(Aluno* a: alunos){
        a->exibirDetalhe();
    }
}
