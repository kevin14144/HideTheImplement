#ifndef MYIMAGELIB_H
#define MYIMAGELIB_H

#include <iimagelib.h>
#include <iostream>
#include <vector>

class myImageLib :public IImageLib
{

public:
    myImageLib();   
    // IImageLib interface
public:
    void ThresholdValue(int typeID, float threshold, float upperLimit);

private:
    std::vector<float> image;
};

#endif // MYIMAGELIB_H
