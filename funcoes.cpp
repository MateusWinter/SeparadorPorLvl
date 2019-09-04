#include <iostream>

using namespace std;

struct jogador{
    string nome;
    int nivel;
    char dupla = 'b';
};

jogador jogadores[4];

void cadastraJogador(){
    for(int i = 0; i < 4;i++){
        cout << "Insira o nome do Jogador "<<i+1<<": ";
        cin >> jogadores[i].nome;
        cout << "Insira o nivel do jogador "<<i+1<<": ";
        cin >> jogadores[i].nivel;
    }
}

void formaDuplas(){
    int maior = jogadores[0].nivel, menor = jogadores[0].nivel;

    for(int i=1;i<4;i++){

        if(maior<jogadores[i].nivel){
            maior = jogadores[i].nivel;
        }
        if(menor>jogadores[i].nivel){
            menor = jogadores[i].nivel;
        }
    }

    for(int i=0;i<4;i++){

        if(jogadores[i].nivel == maior){

            jogadores[i].dupla = 'a';
        }
        if(jogadores[i].nivel == menor){

            jogadores[i].dupla = 'a';
        }
    }
}

void exibeDuplas(){
    int a = 0, b = 0;

    cout << "Dupla A" << endl;
    for(int i = 0; i < 4;i++){
      if(jogadores[i].dupla == 'a'){
            cout << jogadores[i].nome << "(" << jogadores[i].nivel <<")"<<endl;
            a = a + jogadores[i].nivel;
        }
    }
    cout << "Total: " << a <<"."<<endl<<endl;

    cout << "Dupla B" << endl;
    for(int i = 0; i < 4;i++){
        if(jogadores[i].dupla == 'b'){
            cout << jogadores[i].nome << "(" << jogadores[i].nivel <<")"<<endl;
            b = b + jogadores[i].nivel;
        }
    }
    cout << "Total: " << b <<"."<<endl;
}
