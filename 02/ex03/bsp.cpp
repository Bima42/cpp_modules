#include "Point.hpp"

Fixed getTriangleArea ( Point const a, Point const b, Point const c)
{
	Fixed area;

	area = ((a.getValueX() * (b.getValueY() - c.getValueY())) + (b.getValueX() * (c.getValueY() - a.getValueY())) + (c.getValueX() * (a.getValueY() - c.getValueY()))) / 2;
	return (area);
}

bool bsp( Point const a, Point const b, Point const c, Point const p)
{
	Fixed mother_area;
	Fixed area1, area2, area3;

	mother_area = getTriangleArea( a, b, c );
	mother_area = mother_area < 0 ? (mother_area * - 1) : mother_area;

	area1 = getTriangleArea ( p, b, c);
	area1 = area1 < 0 ? (area1 * -1) : area1;

	area2 = getTriangleArea ( p, a, c);
	area2 = area2 < 0 ? (area2 * -1) : area2;

	area3 = getTriangleArea ( p, a, b);
	area3 = area3 < 0 ? (area3 * -1) : area3;

	//Exclude point from perimeter
	if (area1.toFloat() == 0 || area2.toFloat() == 0 || area3.toFloat() == 0)
		return false;

	if (area1.toFloat() + area2.toFloat() + area3.toFloat() == mother_area.toFloat())
		return true;

	return false;
}

