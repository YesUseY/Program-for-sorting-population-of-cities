#include <iostream>
#include <fstream>

using namespace std;

struct statistika{
    string miestas;
    int vdu;
    int gyv;
};

int main()
{
    ifstream fin("data.txt");
    int a;
    fin >> a;
    statistika data[a];
    for (int i=0; i<a; i++) {
        fin >> data[i].miestas >> data[i].vdu >> data[i].gyv;
        cout << data[i].miestas << " " << data[i].vdu << " " << data[i].gyv << endl;
    }
   for (int i=0; i<a; i++) {

           for (int j = i; j < a; j++) {
            if (data[i].gyv > data[j].gyv) {
                swap(data[i], data[j]);
            }
            else if (data[i].gyv==data[j].gyv){
                if(data[i].miestas < data[j].miestas) {
                    swap(data[i], data[j]);
                }
             }
           }
    }
    cout << endl;
    for (int i = 0; i < a; i++) {
        cout << data[i].miestas <<" " << data[i].vdu << " " << data[i].gyv << endl;
    }

    return 0;
}
