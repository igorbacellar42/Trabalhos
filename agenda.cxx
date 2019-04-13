
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <stdio.h>

using namespace std;

struct agenda{
        int codigo;
        char nome[60];
        char telefone[9];
        char endereco[500];
};

int main()
{
        struct agenda a[20];
        int i,op,contador=0,codi,j,veri;

do{

    system("clear");
    cout<<"#############################\n";
    cout<<"           Agenda\n";
    cout<<"1-Incluir contato"<<endl;
    cout<<"2-Excluir contato"<<endl;
    cout<<"3-Buscar contato"<<endl;
    cout<<"4-Mostrar contatos"<<endl;
    cout<<"0-Fechar Agenda"<<endl;
    cout<<"#############################\n";
    cin>>op;

if(op==1){

    system("clear");

    cout<<"#############################\n";
    cout<<"      Incluir Contato\n";
    cout<<"#############################\n";
if(contador<20){
    a[contador].codigo=contador;
   
    cout<<"Nome: \n";
    cin.ignore();
    cin.getline(a[contador].nome,60);
    cout<<"Telefone: \n";
    cin.ignore();
    cin>>a[contador].telefone;
    cout<<"Endereço: \n";
    cin.ignore();
    cin.getline(a[contador].endereco,500);
    cin.ignore(-1);
    contador++;
}else{
          cout<<"#############################\n";
          cout<<"       Agenda Cheia\n";
          cout<<"#############################\n";
        }
        }
if(op==2){

        system("clear");

    cout<<"#############################\n";
    cout<<"      Excluir Contato\n";
    cout<<"#############################\n";

        veri=0;
        cin>>codi;
           for(i=0;i<contador;i++){
               if(a[i].codigo==codi){
               veri++;
               break;
            }
           }
           if(veri>0){
           for(j=i;j<contador;j++){
           a[j]=a[j+1];
           }
           contador--;
           }
           }
if(op==3){

system("clear");

    cout<<"#############################\n";
    cout<<"      Buscar Contatos\n";
    cout<<"#############################\n";

    codi=0;
    cout<<"Digite o Codigo do Contato: \n";
    cin>>codi;
    if(codi<contador){
       for(i=0;i<contador;i++){
           if(a[i].codigo=codi){
           cout<<"Codigo: "<<a[i].codigo<<endl;
           cout<<"Nome: "<<a[i].nome<<endl;
           cout<<"Telefone: "<<a[i].telefone<<endl;
           cout<<"Endereço: "<<a[i].endereco<<endl;
           break;
           }
           }
    }else{
          system("clear");
                 cout<<"#############################\n";
                 cout<<"     Contato Inexistente\n";
                 cout<<"#############################\n";
    }
  }
if(op==4){

   system("clear");

           cout<<"#############################\n";
           cout<<"          Contatos\n";
           cout<<"#############################\n";

           for(i=0;i<contador;i++){

           cout<<"Codigo: ";
           cout<<a[i].codigo<<endl;
           cout<<"Nome: ";
           cout<<a[i].nome<<endl;
           cout<<"Telefone: ";
           cout<<a[i].telefone<<endl;
           cout<<"Endereço: ";
           cout<<a[i].endereco<<endl;
}
        cin.ignore();
        getchar();
}

}
    while(op!=0);

return 0;
}
