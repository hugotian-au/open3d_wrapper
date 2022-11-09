#include "pch.h" // use stdafx.h in Visual Studio 2017 and earlier

#include <limits>
#include <windows.h>
#include "open3d/Open3D.h"

#include "open3d_wrapper.h"

using namespace open3d;

int MyAddFunction(int a, int b)
{

    return utility::CPUInfo::GetInstance().NumCores();

    // return a + b;
}
