﻿#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Void UnityEngine.Physics2D::.cctor()
extern void Physics2D__cctor_m2C742CE7156A78480229016DEEF403B45E4DAFEE (void);
// 0x00000002 UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_point()
extern void RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE (void);
// 0x00000003 UnityEngine.Vector2 UnityEngine.RaycastHit2D::get_normal()
extern void RaycastHit2D_get_normal_m6F8B9F4018EFA126CC33126E8E42B09BB5A82637 (void);
// 0x00000004 System.Single UnityEngine.RaycastHit2D::get_distance()
extern void RaycastHit2D_get_distance_mA910B45BD349A8F70139F6BC1E686F47F40A1662 (void);
// 0x00000005 UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
extern void RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (void);
static Il2CppMethodPointer s_methodPointers[5] = 
{
	Physics2D__cctor_m2C742CE7156A78480229016DEEF403B45E4DAFEE,
	RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE,
	RaycastHit2D_get_normal_m6F8B9F4018EFA126CC33126E8E42B09BB5A82637,
	RaycastHit2D_get_distance_mA910B45BD349A8F70139F6BC1E686F47F40A1662,
	RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563,
};
extern void RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE_AdjustorThunk (void);
extern void RaycastHit2D_get_normal_m6F8B9F4018EFA126CC33126E8E42B09BB5A82637_AdjustorThunk (void);
extern void RaycastHit2D_get_distance_mA910B45BD349A8F70139F6BC1E686F47F40A1662_AdjustorThunk (void);
extern void RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x06000002, RaycastHit2D_get_point_m10D5AB3B26EAE62583BE35CFA13A3E40BDAF30AE_AdjustorThunk },
	{ 0x06000003, RaycastHit2D_get_normal_m6F8B9F4018EFA126CC33126E8E42B09BB5A82637_AdjustorThunk },
	{ 0x06000004, RaycastHit2D_get_distance_mA910B45BD349A8F70139F6BC1E686F47F40A1662_AdjustorThunk },
	{ 0x06000005, RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563_AdjustorThunk },
};
static const int32_t s_InvokerIndices[5] = 
{
	2380,
	1438,
	1438,
	1425,
	1396,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_Physics2DModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_Physics2DModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_Physics2DModule_CodeGenModule = 
{
	"UnityEngine.Physics2DModule.dll",
	5,
	s_methodPointers,
	4,
	s_adjustorThunks,
	s_InvokerIndices,
	0,
	NULL,
	0,
	NULL,
	0,
	NULL,
	NULL,
	g_UnityEngine_Physics2DModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
