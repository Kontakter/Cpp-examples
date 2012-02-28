#include <iostream>
#include <fstream>
#include <vector>
#include <boost/timer.hpp>
#include <boost/progress.hpp>
using namespace std;
#define all(c) c.begin(), c.end()

char str[100];

int main(int argc, char **argv) {
    if (argc < 2) {
        cerr << "Need file to output!" << endl;
        return 1;
    }
    vector<pair<double, int> > res;
    for (int i = 0; i < 10000; ++i) {
        if ((i + 1) % 100 == 0) cerr << i << "\n";
        boost::timer t;
        sprintf(str, "temp111/%d", i);
        ofstream f(str);
        f << i;
        res.push_back(make_pair(t.elapsed(), i));
    }

    sort(all(res));
    reverse(all(res));
    ofstream f(argv[1]);
    for (int i = 0; i < res.size(); ++i) {
        f << res[i].first << " " << res[i].second << "\n";
    }

    return 0;
}
