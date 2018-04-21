#include "imgprocesscoreapi.h"
//Hide the implement
#include <iimagelib.h>
#include <imglibmanager.h>

//object life cycle follow process.
static ImgLibManager __imgAPI;

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

