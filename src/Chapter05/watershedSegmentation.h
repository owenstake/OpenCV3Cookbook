/*------------------------------------------------------------------------------------------*\
This file contains material supporting chapter 5 of the book:
OpenCV3 Computer Vision Application Programming Cookbook
Third Edition
by Robert Laganiere, Packt Publishing, 2016.

This program is free software; permission is hereby granted to use, copy, modify,
and distribute this source code, or portions thereof, for any purpose, without fee,
subject to the restriction that the copyright notice may not be removed
or altered from any source or altered source distribution.
The software is released on an as-is basis and without any warranties of any kind.
In particular, the software is not guaranteed to be fault-tolerant or free from failure.
The author disclaims all warranties with regard to this software, any use,
and any consequent failure, is purely the responsibility of the user.

Copyright (C) 2016 Robert Laganiere, www.laganiere.name
\*------------------------------------------------------------------------------------------*/

#if !defined WATERSHS
#define WATERSHS

#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>

class WatershedSegmenter {

  private:

	  cv::Mat markers;

  public:

	  void setMarkers(const cv::Mat& markerImage) {

		// Convert to image of ints
		markerImage.convertTo(markers,CV_32S);
	  }

	  cv::Mat process(const cv::Mat &image) {

		// Apply watershed
		cv::watershed(image,markers);

		return markers;
	  }

	  // Return result in the form of an image
	  cv::Mat getSegmentation() {
		  
		cv::Mat tmp;
		// all segment with label higher than 255
		// will be assigned value 255
		markers.convertTo(tmp,CV_8U);

		return tmp;
	  }

	  // Return watershed in the form of an image
	  cv::Mat getWatersheds() {
	
		cv::Mat tmp;
		// markers.convertTo(tmp,CV_8U,255,255);
		markers.convertTo(tmp,CV_8U);

		return tmp;
	  }
};


#endif
