#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

void findAllSubsets(vector<int>& set, vector< vector<int> >& subsets, int size);
void findUnion(vector< vector<int> >& v, int i);

int main (void) {
    vector< vector<int> > subsets;
    vector<int> set;
    for (int i = 0; i < 6; i++) {
        set.push_back(i);
    }

    findAllSubsets(set, subsets, set.size());
    return 0;
}

void findAllSubsets(vector<int>& set, vector< vector<int> >& subsets, int size) {
    if (size == 0)
        return;

    else {
        findAllSubsets(set, subsets, size - 1);
    }

    findUnion(subsets, set[size - 1]);

    return;
}

void findUnion(vector< vector<int> >& v, int i) {
    cout << "This is round " << i << endl;
    vector< vector<int> > temp = v;
    for (vector< vector<int> >::iterator it = temp.begin(); it != temp.end(); it++) {
        (*it).push_back(i);
    }
    vector<int> lastItem;
    lastItem.push_back(i);
    temp.push_back(lastItem);

    for (vector< vector<int> >::iterator it = temp.begin(); it != temp.end(); it++) {
        v.push_back(*it);
    }

    // VERIFACTION PURPOSES
    for (vector< vector<int> >::iterator it = v.begin(); it != v.end(); it++) {
        cout << "{ ";
        for (vector<int>::iterator it2 = (*it).begin(); it2 != (*it).end(); it2++) {
            cout << *it2 << " ";
        }
        cout << "}" << endl;
    }
    cout << endl << endl << endl << endl;

    return;
}
