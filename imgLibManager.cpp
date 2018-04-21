#include "imgLibManager.h"

ImgLibManager::ImgLibManager()
{
    //lib manager by object.
#ifdef HAVE_OPENCV
    _libArray.push_back(new OpenCV());
#endif

#ifdef HAVE_MYIMGLIB
    _libArray.push_back(new myImageLib());
#endif
}

ImgLibManager::~ImgLibManager()
{
    if(!_libArray.empty())
    {
        size_t libNum = _libArray.size();
        for(size_t i=libNum;i > 0;i--)
        {
            delete _libArray[0];
            _libArray[0] = nullptr;
            _libArray.pop_back();
        }
    }
}

IImageLib *ImgLibManager::getLib(int libIndex)
{
    if(_libArray.empty())
    {
        throw;
    }
    return _libArray[libIndex];
}
