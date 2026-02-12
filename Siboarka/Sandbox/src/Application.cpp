#include "Application.h"

namespace Siboarka {
	__declspec(dllimport) void Print();
}


void main() {
	Siboarka::Print();
}