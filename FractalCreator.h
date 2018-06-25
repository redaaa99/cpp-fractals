/*
 * FractalCreator.h
 *
 *  Created on: Jun 25, 2018
 *      Author: reda
 */

#ifndef FRACTALCREATOR_H_
#define FRACTALCREATOR_H_

#include <string>
#include <cstdint>
#include <memory>
#include <math.h>
#include <vector>
#include "Zoom.h"
#include "Bitmap.h"
#include "Mandelbrot.h"
#include "ZoomList.h"
#include "RGB.h"
namespace caveofprogramming {

class FractalCreator {
private:

	int m_width;
	int m_height;
	std::unique_ptr<int[]> m_histogram;
	std::unique_ptr<int[]> m_fractal;
	Bitmap m_bitmap;
	ZoomList m_zoomList;
	int m_total{0};

	vector<int> m_ranges;
	vector<RGB> m_colors;
	vector<int> m_rangeTotals;

	bool m_bGotFirstRange{false};
private:
	void calculateIteration();
	void calculateTotalIterations();
	void calculateRangeTotals();
	void drawFractal();
	void writeBitmap(std::string filname);
	int getRange(int iterations) const;
public:
	void addRange(double rangeEnd,const RGB & rgb);
	void addZoom(const Zoom & zoom);
	FractalCreator(int width,int height);
	virtual ~FractalCreator();
	void run(string filename);
};

} /* namespace caveofprogramming */

#endif /* FRACTALCREATOR_H_ */
