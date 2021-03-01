#include <bits/stdc++.h>
/*
 *Title:Single Layer Neural Network
 *Author: Natsu Dragneel 
 */
using namespace std;

float x[4][2] = {{0, 0}, {0, 1}, {1,0}, {1, 1}};//input x and y
//float y[4] = {0, 0, 0, 1}; //output for each pair and gate
float y[4] =  {0, 1, 1, 1};

float lr = 0.3;
float bias = 0.5;
float biasw = -1.5;

float w[2] = {1, 1};

int main(int argc, char ** argv){
	for(int i =0; i < 10; i++){
	for(int i = 0; i < 4; i++){
		float result = x[i][0] * w[0] + x[i][1] * w[1] + bias * biasw;
		if(result >0){
			if(1 != y[i]){
				float err = y[0] - result;
				float nw1 = lr * err * x[i][0];
				float nw2 = lr * err * x[i][1];
				w[0] += nw1;
				w[1] += nw2;
				biasw += lr * err * bias;
			}

		}else{
			if(0 != y[i]){
				float err = y[0] - result;
				float nw1 = lr * err * x[i][0];
				float nw2 = lr * err * x[i][1];
				w[0] += nw1;
				w[1] += nw2;

				biasw += lr * err * bias;
			}
		};
		
	};
	};
	float arr[2] = {0, 0};
	float nre = w[0] * arr[0] + w[1] * arr[1] + bias * biasw;
	cout << nre << endl;
   if(nre > 0.01) cout << "1"<<endl;
	else cout << "0" << endl;	

};

