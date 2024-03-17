#include "Translator.h"

int main(int argc, char** argv) {
    Translator *translator = new Translator();
    translator->translateGene("A12B13");
    delete translator;
    return 0;
}