#include "functions.h"
#include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    //added the code here
    while(n<0){
        int temp;
        cin>>temp;
        n=temp;
    }

    if(n!=1){
	return(n * factorial(n-1));
    }
    else return 1;
}
