//#include <bits/stdc++.h>
#include "Validator.h"
#include "Dataset.h"
#include "Classifier.h"
#include <iostream>

using namespace std;

int main() {

    Dataset* data = new Dataset();
    data->RowsandColumns("../Part2/cs_170_small90.txt");
    data->Parser("../Part2/cs_170_small90.txt");
    cout << "\ndata set size: " << data->data_size << endl;

    Classifier *classifier = new Classifier;
    vector<int> feats;
    feats.push_back(1);
    feats.push_back(3);
    feats.push_back(5);
    classifier->Train(data, 100, feats);
    classifier->Test(0);



//    int nfeatures;

//    cout << endl << "Enter the number of features used: " << endl;
//    cin >> nfeatures;
//
//    vector<int> feature_subset;

//    for(int i = 0; i < nfeatures; i++) {
//        cout << endl << "Input feature #" << i << ": ";
//        cin >> feature_subset[i];
//
//        cout << endl;
//    }
//
//    cout << "\n\nTotal accuracy score using subset {";
//    for(int i = 0; i < nfeatures; i++) {
//        cout << feature_subset[i];
//        if(i != nfeatures-1)
//            cout << ", ";
//    }
//    cout << "} is " << leave_one_out_validation(feature_subset) << "%" << endl << endl;

}