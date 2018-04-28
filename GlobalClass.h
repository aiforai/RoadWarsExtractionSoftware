#pragma once 

namespace Globals 
{ 
	using namespace System; 
	public ref class GlobalClass
	{
	public: 
		static int index = 0;
		static int counter = 0;
		static array<String^> ^TextureFiles;
	};
}