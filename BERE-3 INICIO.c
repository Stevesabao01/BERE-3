//Inclusao de Bibliotecas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct {
     char* titulo;
     char* opcoes[10];
     int numOpcoes;
     struct Menu* submenu[10];
     int numSubmenu;
} Menu;

typedef struct {
    Menu* Menu;
    int Opcaoselecionada;
} ItemMenu;

Menu Principal = {
    .titulo = "BEM-VINDA BERE",
    .opcoes = {"Limpeza", "Padaria", "Alimentos" , "Pagamento" , "Sair"},
    .numOpcoes = 5,
    .submenu = {&Limpeza, &Alimentos, &Padaria, &PagamentoLimpeza, &PagamentoAlimentos, &PagamentoPadaria},
    .numSubmenu = 6
};

Menu Limpeza = {
    .titulo = "Submenu Limpeza",
    .opcoes = {"Detergente", "Sabao em Po(1kg)", "Esponja", "Amaciante(1Lt)", "Bucha de Pia(kit c/ 3)", "Desinfetante(1Lt)", "Sabao em Barra", "Voltar ao Menu Principal"},
    .numOpcoes = 8,
    .submenu = {&Limpeza},
    .numSubmenu = 3
};

Menu Alimentos = {
    .titulo = "Submenu Alimentos",
    .opcoes = {"Cafe", "Leite(cx)", "Arroz(1kg)", "Feijao Preto(1kg)", "Acucar", "Sal(1kg)", "Farinha de Trigo(1kg)", "Voltar ao Menu Principal"},
    .numOpcoes = 8,
    .submenu = {&Alimentos},
    .numSubmenu = 2
};

Menu Padaria = {
    .titulo = "Submenu Padaria",
    .opcoes = {"Pao de forma", "Pao Integral", "Pao Frances", "Sonho", "Biscoito", "Pao doce", "Salgado", "Voltar ao Menu Principal"},
    .numOpcoes = 8,
    .submenu = {&Padaria},
    .numSubmenu = 1
};

Menu PagamentoLimpeza = {
    .titulo = "Pagamento de Limpeza",
    .opcoes = {"1.99", "8.99", "0", "15.00", "4.99", "7.99", "1.00"},
    .numOpcoes = 7,
    .submenu = {&PagamentoLimpeza},
    .numSubmenu = 0
};

Menu PagamentoAlimentos = {
    .titulo = "Pagamento de Alimentos",
    .opcoes = {"19.99", "5.90", "4.50", "8.00", "5.00", "2.00", "5.00"},
    .numOpcoes = 7,
    .submenu = {&PagamentoAlimentos},
    .numSubmenu = 0
};

Menu PagamentoPadaria = {
    .titulo = "Pagamento da Padaria",
    .opcoes = {"9.50", "0", "1.90", "8.50", "12.50", "2.50", "17.50"},
    .numOpcoes = 7,
    .submenu = {&PagamentoPadaria},
    .numSubmenu = 0 
};
