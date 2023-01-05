#include "CMessage.h"

CMessage::CMessage() : mEvent{EEvent::Default}, mData{0U}
{

}
EEvent CMessage::getEvent()
{
	return mEvent;
}
void CMessage::setContent(const SContent& data)
{
	*reinterpret_cast<SContent*>(mData) = data;
}
SContent CMessage::getContent()
{
	return *reinterpret_cast<SContent*>(mData);
}
