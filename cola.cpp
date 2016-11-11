#include <iostream>
using namespace std;


class cola{
private:
	int lista[10];
public:
	cola(){
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
		for(i=10;i>=1;i--){
			lista[i]=lista[i-1];
		}
	}
};


int main(int argc, char *argv[]) {
	cola micola;
	micola.push(6);
	micola.push(7);
	micola.push(6);
	micola.push(7);
	micola.push(6);
	micola.push(7);
	micola.pull();
	micola.printlista();
	return 0;
}

