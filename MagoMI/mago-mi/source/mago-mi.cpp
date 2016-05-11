// mago-mi.cpp: entry point


#include <windows.h>
#include "cmdline.h"
#include "debugger.h"
#include <fcntl.h>
#include <io.h>

int wmain(int argc, wchar_t* argv[])
{
	parseCommandLine(argc, argv);
	executableInfo.dumpParams();

	testEngine();

	Debugger debugger;
	int res = debugger.enterCommandLoop();

	executableInfo.clear();
	return res;
}

