#include "classes.hpp"

int Aluno::cont = 1;

Aluno::Aluno(){
    this->nome = "Padrao";
    this->ano = 1000;
    this->semestre = 0;
    this->num_matricula = getMatricula();
    cont++;
}
Aluno::Aluno(string nome){
    this->nome = nome;
    this->ano = 1000;
    this->semestre = 0;
    this->num_matricula = getMatricula();
    cont++;
}
Aluno::Aluno(string nome, int ano, int semestre){
    this->nome = nome;
    this->ano = ano;
    this->semestre = semestre;
    this->num_matricula = getMatricula();
    cont++;
}
string Aluno::getNome(){
    return nome;
}
void Aluno::setNome(string nome){
    this->nome = nome;
}
int Aluno::getAno(){
    return ano;
}
void Aluno::setAno(int ano){
    this->ano = ano;
}
int Aluno::getSemestre(){
    return semestre;
}
void Aluno::setSemestre(int semestre){
    this->semestre = semestre;
}
int Aluno::getMatricula(){
    return ano*pow(10,6) + semestre*pow(10,4) + cont;
}
void Aluno::exibirDetalhe(){
    cout<<"Aluno: "<<nome<<"\nNumero de Matricula: "<<num_matricula<<endl;
}
