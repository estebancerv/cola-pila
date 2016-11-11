#include <iostream>
using namespace std;

class pila{
private:
	int lista[10];
public:
	pila(){
		int i;
		for(i=0;i<=10;i++){
			lista[i]=0;
		}
		cout << "constructor" << endl;
	}
	void printlista(){
		int i;
		cout << "(" << lista[0];
		for(i=1;i<=10;i++){
			cout << ", " << lista[i];
		}
		cout << ")" << endl;
	}
	void push(int x){
		int i;
		for(i=10;lista[i]!=0;i--){
			;
		}
		lista[i]=x;
	}
	void pull(){
		int i;
		for(i=10;lista[i]!=0;i--){
			;
		}
		lista[i+1]=0;
	}
};

int main(int argc, char *argv[]) {
	pila mipila;
	mipila.push(3);
	mipila.push(2);
	mipila.push(5);
	mipila.push(45);
	mipila.push(65);
	mipila.push(34);
	mipila.pull();
	mipila.printlista();
	return 0;
}

