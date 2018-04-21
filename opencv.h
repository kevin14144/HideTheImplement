#ifndef OPENCV_H
#define OPENCV_H

#include <iimagelib.h>
#include <iostream>

class OpenCV : public IImageLib
{
public:
    OpenCV();
    ~OpenCV();
    // IImageLib interface
public:
    void ThresholdValue(int /*typeID*/, float /*threshold*/, float /*upperLimit*/);

};

#endif // OPENCV_H
