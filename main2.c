#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Lista_Compra{
	float preco;
	float quantidade;
	float preco_total;
	
};

struct Lista_Compra banana;
struct Lista_Compra uva;
struct Lista_Compra pessego;

void Lista(){
	printf("Produto||Preco Unitario||Quantidade||Preco Total\nbanana");
	
}

void main(){
	
	float total;
	
	banana.preco = 2.50;
	banana.quantidade = 2;
	banana.preco_total = banana.preco * banana.quantidade;
	
	uva.preco = 6.50;
	uva.quantidade = 6;
	uva.preco_total = uva.preco * uva.quantidade;
	
	pessego.preco = 10.22;
	pessego.quantidade = 10;
	pessego.preco_total = pessego.preco * pessego.quantidade;
	
	total = banana.preco_total + uva.preco_total + pessego.preco_total;
	Lista();
	
	printf("%f",total);
	
	
	
}
