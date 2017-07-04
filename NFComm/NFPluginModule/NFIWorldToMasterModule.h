// -------------------------------------------------------------------------




//
// -------------------------------------------------------------------------

#ifndef NFI_WORLDNET_CLIENTMODULE_H
#define NFI_WORLDNET_CLIENTMODULE_H

#include <iostream>
#include "NFIModule.h"
#include "NFINetModule.h"
#include "NFINetClientModule.h"

class NFIWorldToMasterModule
	: public  NFIModule
{
public:
	virtual void AddServerInfoExt(const std::string& key, const std::string& value) = 0;
};

#endif