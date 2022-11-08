#include "delaunator.hpp"
#include <cstdio>


int main() {
	
	/* X0, Y0, X1, Y1, X2, Y2 ... */

	std::vector<double> innerConesPositions = {6.49447171658257,41.7389113024907, 8.49189149682204,41.8037451937836, 10.4848751821667,41.8690573815958};

	std::vector<double> outerConesPositions = {8.29483356036796,47.8005083348189, 10.2903642978411,47.8659036790991};


	int m = innerConesPositions.size();
	const int nc = 2;
	int mo = outerConesPositions.size();

	int max = std::max(m, mo);
	printf("total: %i \n", max);

	/* Inicializado de esta manera ya que la libreria delaunator.hpp recoge los valores de un array y no de una matriz*/

	std::vector<double> P(max*2);

	for(int i = 0; i < max*2; i++) {
	
		if(delaunator::fast_mod(i, 2) == 0) {
			P[i] = innerConesPositions[i];
			P[i + 1] = innerConesPositions[i + 1];
		}else{
			P[i - 1] = outerConesPositions[i - 1];
			P[i] = outerConesPositions[i];
		}
	}

	/* Vectores numericos */

	std::vector<double> xp;
	std::vector<double> yp;


	int interv = 20;
	
	for (int i = interv; i <= max*2; i+=interv) {
	
		

		std::vector<double>::const_iterator first = P.begin() + (i-20);
		std::vector<double>::const_iterator last = P.begin() + (i+3);
		std::vector<double> points(first, last); 
		delaunator::Delaunator d(points);
			
	}
	

}
