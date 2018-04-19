#pragma once
#pragma warning( disable : 4251 )
#pragma warning( disable : 4275 )

#ifdef WIN32
#   define ALGORYTMY_API __declspec(dllexport)
#else
#   define ALGORYTMY_API 
#endif