#pragma once
#include "Chess.h"

class Man
{
public:
	void init(Chess *chess); //��ʼ������
	void go(); //����
private:
	Chess* chess;
};

