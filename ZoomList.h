/*
 * ZoomList.h
 *
 *  Created on: Jun 25, 2018
 *      Author: reda
 */

#ifndef ZOOMLIST_H_
#define ZOOMLIST_H_
#include <vector>
#include <utility>
#include "Zoom.h"
namespace caveofprogramming {

class ZoomList {
private:
	double m_xCenter{0};
	double m_yCenter{0};
	double m_scale{1};
	int m_width{0};
	int m_height{0};
	std::vector<Zoom> zooms;
public:
	ZoomList(int width,int height);
	void add(const Zoom & zoom);
	std::pair<double,double> doZoom(int x,int y);
};

} /* namespace caveofprogramming */

#endif /* ZOOMLIST_H_ */
