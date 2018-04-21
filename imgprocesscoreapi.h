#ifndef IMGPROCESSCOREAPI_H
#define IMGPROCESSCOREAPI_H
#include <libdefinecanuuse.h>
/*image library API
 * it contain two kind of image lib, it can switch by uplayer user.
*/

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
