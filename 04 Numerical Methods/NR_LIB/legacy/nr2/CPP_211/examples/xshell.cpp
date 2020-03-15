#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include "nr.h"
#include "print_array.h"
using namespace std;

// Driver for routine shell

int main(void)
{
        const int NP=100;
        string txt;
        int i;
        Vec_DP a(NP);
        ifstream fp("tarray.dat");

        if (fp.fail())
          NR::nrerror("Data file tarray.dat not found");
        getline(fp,txt);
        for (i=0;i<NP;i++) fp >> a[i];
        cout << endl << "Original array:" << endl;
        cout << fixed << setprecision(2);
        print_array(a,10,7);
        NR::shell(NP,a);
        cout << endl << "Sorted array:" << endl;
        print_array(a,10,7);
        return 0;
}
