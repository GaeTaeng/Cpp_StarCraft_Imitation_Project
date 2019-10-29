#pragma once

#include "Obj.h"
#include "Unit.h"


class CBuilding : public CObj
{
public:
	CObj* CreateUnit(CObj* pUnit);
public:
	CBuilding(void);
	~CBuilding(void);
};

