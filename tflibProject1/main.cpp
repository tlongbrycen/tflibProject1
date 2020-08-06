#include <iostream>
#include "tflib.h"

using namespace std;
using namespace TFL;

#define FRAME_SIZE 288850

int main()
{
	TFL_PointXYZ* cloud = new TFL_PointXYZ[FRAME_SIZE];
	uint64_t cld_size;
	TFL_RESULT rst = LoadPLY((wchar_t*)L"C:/Users/tlong/source/repos/raw2ply_thi/PCL_001-01.ply", cloud, &cld_size);
	cout << "Load rst " << (int)rst << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << cloud[i].x << "\t" << cloud[i].y << "\t" << cloud[i].z << endl;
	}
	rst = SavePLY(cloud, cld_size, (wchar_t*)L"C:/Users/tlong/source/repos/raw2ply_thi/PCL_001-01_saveTFLIB.ply");
	cout << "Save rst " << (int)rst << endl;
	return 0;
}