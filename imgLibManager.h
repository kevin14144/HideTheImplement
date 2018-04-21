#ifndef IMGLIBMANAGER_H
#define IMGLIBMANAGER_H

#include <libdefinecanuuse.h>
#include <iimagelib.h>
#include <vector>

#ifdef HAVE_OPENCV
#include <opencv.h>
static OpenCV __opencv;
#endif

#ifdef HAVE_MYIMGLIB
#include <myimagelib.h>
static myImageLib __myLib;
#endif

class ImgLibManager
{
public:
    ImgLibManager();
    ~ImgLibManager();
    IImageLib* getLib(int libIndex);
private:
    std::vector<IImageLib*> _libArray;
};

#endif // IMGLIBMANAGER_H
