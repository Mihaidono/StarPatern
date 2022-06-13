#include <iostream>
#include <vector>

using namespace std;

std::ostream& operator<<(std::ostream& os, vector<char> ob)
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

    vector<char> line;
    for (int i = 0; i < vSize; i++) {
        line.push_back(' ');
    }
    line.at(line.size() / 2) = '*';

    //algoritmul in sine
    cout << line << endl;

    while (rows <= vSize - 1) {
        if (rows < vMid) {
            lLimit--;
            rLimit++;
            line.at(lLimit) = '*';
            line.at(rLimit) = '*';
            cout << line << endl;
        }

        if (rows > vMid) {
            line.at(lLimit) = ' ';
            line.at(rLimit) = ' ';
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
