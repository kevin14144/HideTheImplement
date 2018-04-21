#ifndef IIMAGELIB_H
#define IIMAGELIB_H

class IImageLib
{
public:
    IImageLib();
    virtual void ThresholdValue(int typeID,float threshold,float upperLimit) = 0;
};

#endif // IIMAGELIB_H
