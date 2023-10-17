#include "classes.hpp"

int main(void){
    Aluno a1("Neymar", 2019, 1);
    Aluno a2("Messi", 2020, 1);
    Aluno a3("Arraxca", 2001, 2);
    Turma t1;
    t1.adicionarAluno(&a1);
    t1.adicionarAluno(&a2);
    t1.adicionarAluno(&a3);
    t1.listarAlunos();
    Aluno a4("Cristiano Ronaldo");
    t1.adicionarAluno(&a4);
    t1.listarAlunos();
    return 0;
}