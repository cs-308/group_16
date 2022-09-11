#include "functions.h"
#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    //added the code here
    if(n<0){
        return -1;
    }

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
