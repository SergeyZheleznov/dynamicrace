#pragma once
#ifdef RACELIBRARYDYNAMIC_EXPORTS
#define RACELIBRARY_API __declspec(dllexport)
#else
#define RACELIBRARY_API __declspec(dllimport)
#endif
#include <iostream>

namespace RaceLibraryDynamic
{
	class Eagle : public Air_vehicles
	{
	public:
		RACELIBRARY_API Eagle();
		RACELIBRARY_API Eagle(int speed,int k_lim, int k_k_lim, int k_lim_2);
	};
}