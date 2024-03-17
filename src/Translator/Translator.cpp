#include "Translator.h"

Translator::Translator() {}

Translator::~Translator() {}

string Translator::translate(string genestr) {
    // TODO: implment this
    return "translated";
}

void Translator::translateGene(string genestr) {
    if (genestr.length() != 6) {
        throw invalid_argument("Gene string must be 6 characters long");
    }
    char sensingNeuron = genestr[0];
    int weight = stoi(genestr.substr(1, 2)); 
    char motorNeuron = genestr[3];
    int threshold = stoi(genestr.substr(4, 2));

    cout << "Sensing Neuron: " << sensingNeuron << endl;
    cout << "Weight: " << weight << endl;
    cout << "Motor Neuron: " << motorNeuron << endl;
    cout << "Threshold: " << threshold << endl;
}

void Translator::getSensingNeuron(char sensingNeuron) {
    if (sensingNeuronsTypes.find(sensingNeuron) == sensingNeuronsTypes.end()) {
        throw invalid_argument("Invalid sensing neuron character");
    }
    return sensingNeuronsTypes[sensingNeuron];
}

