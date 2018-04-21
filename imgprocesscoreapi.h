#ifndef IMGPROCESSCOREAPI_H
#define IMGPROCESSCOREAPI_H
/*image library API
 * it contain two kind of image lib, it can switch by uplayer user.
*/

// Manager form head file. which one can use.
#define HAVE_OPENCV
#define HAVE_MYIMGLIB

namespace et {

//This maybe change in the future
enum libName
{
#ifdef HAVE_OPENCV
    OPENCV,
#endif
#ifdef HAVE_MYIMGLIB
    MYLIB
#endif
};

//modifie the best Lib
void ThresholdValueProcess();
void ThresholdValueProcess(int libName);
}


#endif // IMGPROCESSCOREAPI_H
