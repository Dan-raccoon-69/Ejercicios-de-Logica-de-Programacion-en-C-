#include <iostream>
#include <windows.h>
using namespace std;

int main(){

    char soundfile[] = "C:/Users/Inpiron 5558/Documents/C++projects/Pruebas musicales/stefani.wav";
    cout<<PlaySound((LPCSTR)soundfile,NULL,SND_FILENAME | SND_ASYNC);

    system("pause");
 return 0;
}
