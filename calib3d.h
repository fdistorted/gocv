#ifndef _OPENCV3_CALIB_H_
#define _OPENCV3_CALIB_H_

#ifdef __cplusplus
#include <opencv2/opencv.hpp>
#include <opencv2/calib3d.hpp>

extern "C"
{
#endif

#include "core.h"

    //Calib
    void Fisheye_UndistortImage(Mat distorted, Mat undistorted, Mat k, Mat d);
    void Fisheye_UndistortImageWithParams(Mat distorted, Mat undistorted, Mat k, Mat d, Mat knew, Size size);

    void InitUndistortRectifyMap(Mat cameraMatrix, Mat distCoeffs, Mat r, Mat newCameraMatrix, Size size, int m1type, Mat map1, Mat map2);
    Mat GetOptimalNewCameraMatrixWithParams(Mat cameraMatrix, Mat distCoeffs, Size size, double alpha, Size newImgSize, Rect *validPixROI, bool centerPrincipalPoint);
    void Undistort(Mat src, Mat dst, Mat cameraMatrix, Mat distCoeffs, Mat newCameraMatrix);
    bool SolvePnP(Mat objectPoints, Mat imagePoints, Mat cameraMatrix, Mat distCoeffs, Mat rvec, Mat tvec, bool useExtrinsicGuess, int flags);

#ifdef __cplusplus
}
#endif

#endif //_OPENCV3_CALIB_H
