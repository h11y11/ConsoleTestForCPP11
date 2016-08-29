#pragma once
#include <wtypes.h>
const double PI = 3.14159265353846;
class PrjPoint
{
public:
    double L0; // 中央子午线经度
    double B, L; // 大地坐标
    double x, y; // 高斯投影平面坐标
public:
    BOOL BL2xy();
    BOOL xy2BL();
protected:
    double a, f, e2, e12; // 基本椭球参数
    double A1, A2, A3, A4; // 用于计算X的椭球参数
public:
    BOOL SetL0(double dL0);
    BOOL SetBL(double dB, double dL);
    BOOL GetBL(double *dB, double *dL);
    BOOL Setxy(double dx, double dy);
    BOOL Getxy(double *dx, double *dy);
};
class PrjPoint_Krasovsky : virtual public PrjPoint
{
public:
    PrjPoint_Krasovsky();
    ~PrjPoint_Krasovsky();
};
class PrjPoint_IUGG1975 : virtual public PrjPoint
{
public:
    PrjPoint_IUGG1975();
    ~PrjPoint_IUGG1975();
};