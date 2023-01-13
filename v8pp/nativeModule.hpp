#pragma once

#ifndef HV_NATIVE_MODULE
#define HV_NATIVE_MODULE

#include <string>
#include <memory>

namespace hv::v2 {

	class impl_nativeModule;
	class nativeModule
	{

	private:
		std::unique_ptr<hv::v2::impl_nativeModule> _instance;

			
	public:

		nativeModule(std::string name,
					 std::string path,
					 unsigned int version_major,
					 unsigned int version_minor,
					 unsigned int version_patch,
					 void* handle);

		~nativeModule();

		std::string name();
		std::string path();
		std::string version();
	};

};

#endif