#include <iostream>
#include <vector>

using namespace std;

std::ostream& operator<<(std::ostream& os, vector<int> ob)
{
    for (int i = 0; i < ob.size(); i++) {
        os << " " << ob.at(i);
    }
    return os;
}

int main()
{
    int n=1,limit;
    cout << "Al catelea il caut sefule?\nnumarul-> "; cin >> limit;
    while (n <= limit) {
    puts("");
    int rows = 0;
    int vSize = 2 * n - 1;
    int vMid = vSize / 2;

    int lLimit = vMid;
    int rLimit = vMid;

    vector<int> line;
    for (int i = 0; i < vSize; i++) {
        line.push_back(0);
    }
    line.at(line.size() / 2) = 1;

    //algoritmul in sine
    cout << line << endl;

    while (rows <= vSize - 1) {
        if (rows < vMid) {
            lLimit--;
            rLimit++;
            line.at(lLimit) = 1;
            line.at(rLimit) = 1;
            cout << line << endl;
        }

        if (rows > vMid) {
            line.at(lLimit) = 0;
            line.at(rLimit) = 0;
            cout << line << endl;
            lLimit++;
            rLimit--;
        }
        rows++;
    }
    cout << endl;
    n++;
    }
}