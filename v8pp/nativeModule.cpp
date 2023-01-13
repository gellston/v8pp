

#include "nativeModule.hpp"

namespace hv::v2 {
	class impl_nativeModule
	{
	public:


		std::string name;
		std::string path;
		void* handle;

		unsigned int version_major; 
		unsigned int version_minor;
		unsigned int version_patch;


		impl_nativeModule() {

			this->name = "";
			this->path = "";
			this->handle = nullptr;

			this->version_major = 0;
			this->version_minor = 0;
			this->version_patch = 0;
		}

		~impl_nativeModule() {

		}


	};

}




hv::v2::nativeModule::nativeModule(std::string name, std::string path, unsigned int version_major, unsigned int version_minor, unsigned int version_patch, void* handle)
	: _instance(new impl_nativeModule())
{

	this->_instance->name = name;
	this->_instance->path = path;
	this->_instance->version_major = version_major;
	this->_instance->version_minor = version_minor;
	this->_instance->version_patch = version_patch;

	this->_instance->handle = handle;

}

hv::v2::nativeModule::~nativeModule()
{

}

std::string hv::v2::nativeModule::name()
{
	return this->_instance->name;
}
std::string hv::v2::nativeModule::path()
{
	return this->_instance->path;
}
std::string hv::v2::nativeModule::version()
{
	std::string version_name = "";
	
	version_name += std::to_string(this->_instance->version_major);
	version_name += ".";
	version_name += std::to_string(this->_instance->version_minor);
	version_name += ".";
	version_name += std::to_string(this->_instance->version_patch);


	return version_name;

}