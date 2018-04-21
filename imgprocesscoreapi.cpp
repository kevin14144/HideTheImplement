#include "imgprocesscoreapi.h"
//Hide the implement
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

class ImgProcessCoreAPI
{
public :
    ImgProcessCoreAPI();
    ~ImgProcessCoreAPI();
    IImageLib* getLib(int libIndex);
private:
    std::vector<IImageLib*> _libArray;

};

ImgProcessCoreAPI::ImgProcessCoreAPI()
{
    //lib manager by object.
#ifdef HAVE_OPENCV
    _libArray.push_back(new OpenCV());
#endif

#ifdef HAVE_MYIMGLIB
    _libArray.push_back(new myImageLib());
#endif

}

ImgProcessCoreAPI::~ImgProcessCoreAPI()
{

    if(!_libArray.empty())
    {
        int libNum = _libArray.size();
        for(int i=libNum-1;i > 0;i--)
        {
            delete _libArray[i];
            _libArray[i] = nullptr;
            _libArray.pop_back();
        }
    }

}

IImageLib* ImgProcessCoreAPI::getLib(int libIndex)
{
    if(_libArray.empty())
    {
        throw;
    }
    return _libArray[libIndex];
}


//object life cycle follow process.
static ImgProcessCoreAPI __imgAPI;

void et::ThresholdValueProcess()
{
    //switch lib
    IImageLib* lib;
#ifdef HAVE_OPENCV
    lib = __imgAPI.getLib(et::libName::OPENCV);
    lib->ThresholdValue(0,10,255);
#endif
#ifdef HAVE_MYIMGLIB
    lib = __imgAPI.getLib(et::libName::MYLIB);
    lib->ThresholdValue(0,10,255);
#endif
}

void et::ThresholdValueProcess(int libName)
{
   IImageLib* libs = __imgAPI.getLib(libName);
   libs->ThresholdValue(0,10,255);
}

