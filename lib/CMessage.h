#ifndef CMESSAGE_H
#define CMESSAGE_H
#include "EEvent.h"
#include "SContent.h"

class CMessage
{
public:
	EEvent getEvent();
	void   setContent(const SContent&);
	SContent getContent();
public:
	CMessage();
public:
	EEvent   mEvent;
	uint8_t  mData[64];
};


#endif
