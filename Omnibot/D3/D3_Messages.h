////////////////////////////////////////////////////////////////////////////////
//
// $LastChangedBy$
// $LastChangedDate$
// $LastChangedRevision$
//
// Title: D3 Message Structure Definitions
//
////////////////////////////////////////////////////////////////////////////////

#pragma once

#ifndef __D3_MESSAGES_H__
#define __D3_MESSAGES_H__

#include "Base_Messages.h"
#include "D3_Config.h"

#pragma pack(push)
#pragma pack(4)

//////////////////////////////////////////////////////////////////////////

struct D3_Location
{
	float	mPosition[3];
	char	mLocationName[64];
};

//////////////////////////////////////////////////////////////////////////

#pragma pack(pop)

#endif
