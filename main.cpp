#include <iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;





int main() {

    int i;


    const int positiveLen = 2000;
    const int negativeLen = 2000;
    float positive[positiveLen][4] = {0};
    float negative[negativeLen][4] = {0};
    float dm[positiveLen + negativeLen] = {0.0};


    //生成正样本
    int n = 0;
    while (1) {
        int a = rand() % 100;
        int b = rand() % 100;
        int c = rand() % 100;

        if (5* a  + 4 * b + 3 * c < 5*4*3) {
            cout << a << " " << b << " " << c << endl;
            positive[n][0] = 1;
            positive[n][1] = a;
            positive[n][2] = b;
            positive[n][3] = c;
            n++;
        }
        if (n == positiveLen) {
            break;
        }
    }


    printf("**********************************\n");

    // //生成负样本
    n = 0;
    while (1) {
        int a = rand() % 100;
        int b = rand() % 100;
        int c = rand() % 100;

        if (5* a  + 4 * b + 3 * c > 5*4*3) {
            cout << a << " " << b << " " << c << endl;
            negative[n][0] = -1;
            negative[n][1] = a;
            negative[n][2] = b;
            negative[n][3] = c;
            n++;

        }
        if (n == negativeLen) {
            break;
        }
    }

    for (int i = 0; i <positiveLen + negativeLen  ; ++i) {
        dm[i] = 1.0/(positiveLen + negativeLen);
    }























    cout << "Hello, World!" << std::endl;
    return 0;
}