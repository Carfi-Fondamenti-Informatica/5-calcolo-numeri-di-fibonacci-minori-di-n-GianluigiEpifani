#include <iostream>
using namespace std;

int main (){
    int a=0, b=1, g=0, n=0;
    cout << "inserire un numero intero \n";
    cin >> n;
    if(n<=2){
        for (int i=0;i<n;i++){
            g=a+b;
            b=a;
            a=g;
            cout << g << endl;
        }
    }

    return 0;
}
