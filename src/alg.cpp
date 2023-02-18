// Copyright 2021 NNTU-CS

int gcd(int a, int b) {
    int del;
    if(a > b) { 
        del = b;
    }
    else { 
        del = a;
    }
    while(a % del == 0 && b % del == 0) {
        del--;
    }
    return del;
}

