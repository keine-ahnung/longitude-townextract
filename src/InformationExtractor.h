#ifndef INFORMATIONEXTRACTOR_H
#define INFORMATIONEXTRACTOR_H
#include <osmpbf/osmpbf.h>

class InformationExtractor
{
public:
    InformationExtractor();

    void init();
    void primBlockCallback(OSMPBF::PrimitiveBlock primblock);
    void nextPass();
    void finish();

private:
    int pass;
    void primBlockCallbackPass1(OSMPBF::PrimitiveBlock primblock);
    void primBlockCallbackPass2(OSMPBF::PrimitiveBlock primblock);
    void primBlockCallbackPass3(OSMPBF::PrimitiveBlock primblock);
};

#endif // INFORMATIONEXTRACTOR_H