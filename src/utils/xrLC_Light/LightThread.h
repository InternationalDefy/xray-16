#ifndef __LIGHTTHREAD_H__
#define __LIGHTTHREAD_H__


#include "utils/xrLCUtil/xrThread.hpp"
#include "detail_slot_calculate.h"

class	LightThread : public CThread
{
	u32		Nstart, Nend;
	DWORDVec	box_result;
public:
	LightThread			(u32 ID, u32 _start, u32 _end) : CThread(ID, ProxyMsg)
	{
		Nstart	= _start;
		Nend	= _end;
	}
	virtual void		Execute();

};
#endif //__LIGHTTHREAD_H__