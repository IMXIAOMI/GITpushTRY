#pragma once
#include <iostream>
using namespace std;


class Point {
  public:
    void setPoint(int x, int y); //�����ڶԳ�Ա������������
    void printPoint();
  private:
    int xPos;
    int yPos;
};