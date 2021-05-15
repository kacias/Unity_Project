#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 UnityEngine.Collider UnityEngine.RaycastHit::get_collider()
extern void RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E (void);
// 0x00000002 UnityEngine.Vector3 UnityEngine.RaycastHit::get_point()
extern void RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E (void);
// 0x00000003 UnityEngine.Vector3 UnityEngine.RaycastHit::get_normal()
extern void RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674 (void);
// 0x00000004 System.Single UnityEngine.RaycastHit::get_distance()
extern void RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA (void);
static Il2CppMethodPointer s_methodPointers[4] = 
{
	RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E,
	RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E,
	RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674,
	RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA,
};
extern void RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E_AdjustorThunk (void);
extern void RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E_AdjustorThunk (void);
extern void RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674_AdjustorThunk (void);
extern void RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA_AdjustorThunk (void);
static Il2CppTokenAdjustorThunkPair s_adjustorThunks[4] = 
{
	{ 0x06000001, RaycastHit_get_collider_m13A3DE16FBC631E0A1F987E0B22CE70AF8AB539E_AdjustorThunk },
	{ 0x06000002, RaycastHit_get_point_m32F7282CBB2E13393A33BAD046BDA218E48DD21E_AdjustorThunk },
	{ 0x06000003, RaycastHit_get_normal_m2C813B25BAECD87FD9E9CB294278B291F4CC6674_AdjustorThunk },
	{ 0x06000004, RaycastHit_get_distance_m85FCA98D7957C3BF1D449CA1B48C116CCD6226FA_AdjustorThunk },
};
static const int32_t s_InvokerIndices[4] = 
{
	1396,
	1440,
	1440,
	1425,
};
extern const CustomAttributesCacheGenerator g_UnityEngine_PhysicsModule_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_UnityEngine_PhysicsModule_CodeGenModule;
const Il2CppCodeGenModule g_UnityEngine_PhysicsModule_CodeGenModule = 
{
	"UnityEngine.PhysicsModule.dll",
	4,
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
	g_UnityEngine_PhysicsModule_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
