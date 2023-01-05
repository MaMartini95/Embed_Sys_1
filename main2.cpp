#include "CContainer.h"
#include "AComponentBase.h"
#include "CBBBHardware.h"
#include "CThread.h"
#include "CControlComp.h"
#include "CCommComp.h"
#include "CCalibration.h"
#include "SCalibData.h"
#include <iostream>
using namespace std;
CContainer container;


int main(){

	CControlComp control(container);
	CCommComp communication(container);

	CThread thread_controlcomp(&control, CThread::PRIORITY_ABOVE_HIGH);
	CThread thread_commComp(&communication, CThread::PRIORITY_ABOVE_HIGH);

	thread_controlcomp.start();
	thread_commComp.start();

	thread_controlcomp.join();
	thread_commComp.join();
	return 0;
}
