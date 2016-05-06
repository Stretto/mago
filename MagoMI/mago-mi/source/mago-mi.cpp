// mago-mi.cpp: entry point

#include "cmdline.h"
#include "debugger.h"

int wmain(int argc, wchar_t* argv[])
{
	parseCommandLine(argc, argv);
	executableInfo.dumpParams();

	Debugger debugger;
	int res = debugger.enterCommandLoop();

	return res;
}
