#pragma once

#ifdef MATHLIBRARY_EXPORTS
#define	MATHLIBRARY_API __declspec(dllexport)
#else
#define	MATHLIBRARY_API __declspec(dllimport)
#endif // MATHLIBRARY_EXPORTS

namespace MathLibrary
{
	class MATHLIBRARY_API Functions
	{
	public:
		double Add(double a, double b);
		double Multiply(double a, double b);
		double AddMultiply(double a, double b);
	};

	extern "C" MATHLIBRARY_API void CreateInstance();
	extern "C" MATHLIBRARY_API void ReleaseInstance();
	extern "C" MATHLIBRARY_API double Add(double a, double b);
	extern "C" MATHLIBRARY_API double Multiply(double a, double b);
	extern "C" MATHLIBRARY_API double AddMultiply(double a, double b);
}