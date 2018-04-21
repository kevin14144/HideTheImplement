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
        for(size_t i=libNum-1;i > 0;i--)
        {
            delete _libArray[i];
            _libArray[i] = nullptr;
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
