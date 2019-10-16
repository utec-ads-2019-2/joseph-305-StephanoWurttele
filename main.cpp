#include <iostream>

using namespace std;

//int ans[13] = { 2, 7, 5, 30, 169, 441, 1872, 7632, 1740, 93313, 459901,1358657, 2504881 };
 int ans[13] = { 0, 0, 0,  0,   0,   0,    0,    0,    0,     0,      0,      0,       0 };


void calcular(int k){
	int saltos=k;
	int temp=1;
	while (true){
		int killed=0;
		int personas=2*k;
		while(personas!=k){
			killed=(killed+saltos)%personas;
			if(killed<k)
				break;
			personas--;
		}
		if(personas==k){
			ans[k-1]=saltos+1;
			return;
		}
		saltos++;
		while((saltos+1%(2*k))<=k)
			saltos++;
	}

}



int main() {
		int k;
		while (scanf("%d", &k), k) {
			if(ans[k-1]==0)
				calcular(k);
			printf("%d\n",ans[k-1]);
		}
		return 0;
}
