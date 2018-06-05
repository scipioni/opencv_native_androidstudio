#include <jni.h>
#include <string>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/features2d/features2d.hpp>

using namespace std;
using namespace cv;

extern "C"
{
void JNICALL Java_ch_hepia_iti_opencvnativeandroidstudio_MainActivity_salt(JNIEnv *env, jobject instance,
                                                                           jlong frame,
                                                                           jint nbrElem) {
    Mat &img = *(Mat *) frame;
    /*
    for (int k = 0; k < nbrElem; k++) {
        int i = rand() % img.cols;
        int j = rand() % img.rows;
        img.at<uchar>(j, i) = 255;
    }
     */

    ostringstream ss;
    ss << "hello world";
    putText(img, ss.str(), Point(10, img.rows-20), FONT_HERSHEY_SIMPLEX, 0.6, Scalar(255,255,0),1);
}
}
