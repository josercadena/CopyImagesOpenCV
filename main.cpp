/*
 * main.cpp
 *
 *  Created on: May 24, 2017
 *  Author: jose
 */

#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

/* This code reads image L_image0.png and creates several copies of it with different names*/
int main() {

	Mat input = imread("L_image0.png", 1);
	for(int i = 1; i < 324; i++){
		string s;
		stringstream out;
		out << i;
		std::string output = "L_image" + out.str() + ".png";
		imwrite(output, input);
	};

	for(int i = 1; i < 324; i++){
		string s;
		stringstream out;
		out << i;
		std::string output = "R_image" + out.str() + ".png";
		imwrite(output, input);
	};
	return 0;
}
