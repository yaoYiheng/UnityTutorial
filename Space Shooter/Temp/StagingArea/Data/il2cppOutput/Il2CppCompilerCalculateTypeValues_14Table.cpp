#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "object-internals.h"

// System.String
struct String_t;
// System.Void
struct Void_t3077348434;
// GameController
struct GameController_t1176934704;
// UnityEngine.Texture2D
struct Texture2D_t452064567;
// Readme/Section[]
struct SectionU5BU5D_t2315632818;
// UnityEngine.Rigidbody
struct Rigidbody_t4257253666;
// Boundary
struct Boundary_t2754761119;
// UnityEngine.GameObject
struct GameObject_t669497586;
// UnityEngine.Transform
struct Transform_t374683726;




#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
#ifndef VALUETYPE_T353062616_H
#define VALUETYPE_T353062616_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t353062616  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t353062616_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t353062616_marshaled_com
{
};
#endif // VALUETYPE_T353062616_H
#ifndef BOUNDARY_T2754761119_H
#define BOUNDARY_T2754761119_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Boundary
struct  Boundary_t2754761119  : public RuntimeObject
{
public:
	// System.Single Boundary::xMin
	float ___xMin_0;
	// System.Single Boundary::xMax
	float ___xMax_1;
	// System.Single Boundary::zMin
	float ___zMin_2;
	// System.Single Boundary::zMax
	float ___zMax_3;

public:
	inline static int32_t get_offset_of_xMin_0() { return static_cast<int32_t>(offsetof(Boundary_t2754761119, ___xMin_0)); }
	inline float get_xMin_0() const { return ___xMin_0; }
	inline float* get_address_of_xMin_0() { return &___xMin_0; }
	inline void set_xMin_0(float value)
	{
		___xMin_0 = value;
	}

	inline static int32_t get_offset_of_xMax_1() { return static_cast<int32_t>(offsetof(Boundary_t2754761119, ___xMax_1)); }
	inline float get_xMax_1() const { return ___xMax_1; }
	inline float* get_address_of_xMax_1() { return &___xMax_1; }
	inline void set_xMax_1(float value)
	{
		___xMax_1 = value;
	}

	inline static int32_t get_offset_of_zMin_2() { return static_cast<int32_t>(offsetof(Boundary_t2754761119, ___zMin_2)); }
	inline float get_zMin_2() const { return ___zMin_2; }
	inline float* get_address_of_zMin_2() { return &___zMin_2; }
	inline void set_zMin_2(float value)
	{
		___zMin_2 = value;
	}

	inline static int32_t get_offset_of_zMax_3() { return static_cast<int32_t>(offsetof(Boundary_t2754761119, ___zMax_3)); }
	inline float get_zMax_3() const { return ___zMax_3; }
	inline float* get_address_of_zMax_3() { return &___zMax_3; }
	inline void set_zMax_3(float value)
	{
		___zMax_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOUNDARY_T2754761119_H
#ifndef SECTION_T620638819_H
#define SECTION_T620638819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme/Section
struct  Section_t620638819  : public RuntimeObject
{
public:
	// System.String Readme/Section::heading
	String_t* ___heading_0;
	// System.String Readme/Section::text
	String_t* ___text_1;
	// System.String Readme/Section::linkText
	String_t* ___linkText_2;
	// System.String Readme/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_t620638819, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((&___heading_0), value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_t620638819, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((&___text_1), value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_t620638819, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((&___linkText_2), value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_t620638819, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((&___url_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SECTION_T620638819_H
#ifndef VECTOR3_T39429748_H
#define VECTOR3_T39429748_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector3
struct  Vector3_t39429748 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_1;
	// System.Single UnityEngine.Vector3::y
	float ___y_2;
	// System.Single UnityEngine.Vector3::z
	float ___z_3;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector3_t39429748, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector3_t39429748, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector3_t39429748, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}
};

struct Vector3_t39429748_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t39429748  ___zeroVector_4;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t39429748  ___oneVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t39429748  ___upVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t39429748  ___downVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t39429748  ___leftVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t39429748  ___rightVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t39429748  ___forwardVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t39429748  ___backVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t39429748  ___positiveInfinityVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t39429748  ___negativeInfinityVector_13;

public:
	inline static int32_t get_offset_of_zeroVector_4() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___zeroVector_4)); }
	inline Vector3_t39429748  get_zeroVector_4() const { return ___zeroVector_4; }
	inline Vector3_t39429748 * get_address_of_zeroVector_4() { return &___zeroVector_4; }
	inline void set_zeroVector_4(Vector3_t39429748  value)
	{
		___zeroVector_4 = value;
	}

	inline static int32_t get_offset_of_oneVector_5() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___oneVector_5)); }
	inline Vector3_t39429748  get_oneVector_5() const { return ___oneVector_5; }
	inline Vector3_t39429748 * get_address_of_oneVector_5() { return &___oneVector_5; }
	inline void set_oneVector_5(Vector3_t39429748  value)
	{
		___oneVector_5 = value;
	}

	inline static int32_t get_offset_of_upVector_6() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___upVector_6)); }
	inline Vector3_t39429748  get_upVector_6() const { return ___upVector_6; }
	inline Vector3_t39429748 * get_address_of_upVector_6() { return &___upVector_6; }
	inline void set_upVector_6(Vector3_t39429748  value)
	{
		___upVector_6 = value;
	}

	inline static int32_t get_offset_of_downVector_7() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___downVector_7)); }
	inline Vector3_t39429748  get_downVector_7() const { return ___downVector_7; }
	inline Vector3_t39429748 * get_address_of_downVector_7() { return &___downVector_7; }
	inline void set_downVector_7(Vector3_t39429748  value)
	{
		___downVector_7 = value;
	}

	inline static int32_t get_offset_of_leftVector_8() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___leftVector_8)); }
	inline Vector3_t39429748  get_leftVector_8() const { return ___leftVector_8; }
	inline Vector3_t39429748 * get_address_of_leftVector_8() { return &___leftVector_8; }
	inline void set_leftVector_8(Vector3_t39429748  value)
	{
		___leftVector_8 = value;
	}

	inline static int32_t get_offset_of_rightVector_9() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___rightVector_9)); }
	inline Vector3_t39429748  get_rightVector_9() const { return ___rightVector_9; }
	inline Vector3_t39429748 * get_address_of_rightVector_9() { return &___rightVector_9; }
	inline void set_rightVector_9(Vector3_t39429748  value)
	{
		___rightVector_9 = value;
	}

	inline static int32_t get_offset_of_forwardVector_10() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___forwardVector_10)); }
	inline Vector3_t39429748  get_forwardVector_10() const { return ___forwardVector_10; }
	inline Vector3_t39429748 * get_address_of_forwardVector_10() { return &___forwardVector_10; }
	inline void set_forwardVector_10(Vector3_t39429748  value)
	{
		___forwardVector_10 = value;
	}

	inline static int32_t get_offset_of_backVector_11() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___backVector_11)); }
	inline Vector3_t39429748  get_backVector_11() const { return ___backVector_11; }
	inline Vector3_t39429748 * get_address_of_backVector_11() { return &___backVector_11; }
	inline void set_backVector_11(Vector3_t39429748  value)
	{
		___backVector_11 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_12() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___positiveInfinityVector_12)); }
	inline Vector3_t39429748  get_positiveInfinityVector_12() const { return ___positiveInfinityVector_12; }
	inline Vector3_t39429748 * get_address_of_positiveInfinityVector_12() { return &___positiveInfinityVector_12; }
	inline void set_positiveInfinityVector_12(Vector3_t39429748  value)
	{
		___positiveInfinityVector_12 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t39429748_StaticFields, ___negativeInfinityVector_13)); }
	inline Vector3_t39429748  get_negativeInfinityVector_13() const { return ___negativeInfinityVector_13; }
	inline Vector3_t39429748 * get_address_of_negativeInfinityVector_13() { return &___negativeInfinityVector_13; }
	inline void set_negativeInfinityVector_13(Vector3_t39429748  value)
	{
		___negativeInfinityVector_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR3_T39429748_H
#ifndef QUATERNION_T1144424023_H
#define QUATERNION_T1144424023_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Quaternion
struct  Quaternion_t1144424023 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t1144424023, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t1144424023, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t1144424023, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t1144424023, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t1144424023_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t1144424023  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t1144424023_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t1144424023  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t1144424023 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t1144424023  value)
	{
		___identityQuaternion_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // QUATERNION_T1144424023_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	IntPtr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline IntPtr_t get_Zero_1() const { return ___Zero_1; }
	inline IntPtr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(IntPtr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef OBJECT_T4191337601_H
#define OBJECT_T4191337601_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t4191337601  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	IntPtr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t4191337601, ___m_CachedPtr_0)); }
	inline IntPtr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline IntPtr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(IntPtr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t4191337601_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t4191337601_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_t4191337601_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t4191337601_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T4191337601_H
#ifndef U3CSPAWNWAVEU3EC__ITERATOR0_T3774491296_H
#define U3CSPAWNWAVEU3EC__ITERATOR0_T3774491296_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameController/<spawnWave>c__Iterator0
struct  U3CspawnWaveU3Ec__Iterator0_t3774491296  : public RuntimeObject
{
public:
	// System.Int32 GameController/<spawnWave>c__Iterator0::<i>__1
	int32_t ___U3CiU3E__1_0;
	// UnityEngine.Vector3 GameController/<spawnWave>c__Iterator0::<spawnPosition>__2
	Vector3_t39429748  ___U3CspawnPositionU3E__2_1;
	// UnityEngine.Quaternion GameController/<spawnWave>c__Iterator0::<rotation>__2
	Quaternion_t1144424023  ___U3CrotationU3E__2_2;
	// GameController GameController/<spawnWave>c__Iterator0::$this
	GameController_t1176934704 * ___U24this_3;
	// System.Object GameController/<spawnWave>c__Iterator0::$current
	RuntimeObject * ___U24current_4;
	// System.Boolean GameController/<spawnWave>c__Iterator0::$disposing
	bool ___U24disposing_5;
	// System.Int32 GameController/<spawnWave>c__Iterator0::$PC
	int32_t ___U24PC_6;

public:
	inline static int32_t get_offset_of_U3CiU3E__1_0() { return static_cast<int32_t>(offsetof(U3CspawnWaveU3Ec__Iterator0_t3774491296, ___U3CiU3E__1_0)); }
	inline int32_t get_U3CiU3E__1_0() const { return ___U3CiU3E__1_0; }
	inline int32_t* get_address_of_U3CiU3E__1_0() { return &___U3CiU3E__1_0; }
	inline void set_U3CiU3E__1_0(int32_t value)
	{
		___U3CiU3E__1_0 = value;
	}

	inline static int32_t get_offset_of_U3CspawnPositionU3E__2_1() { return static_cast<int32_t>(offsetof(U3CspawnWaveU3Ec__Iterator0_t3774491296, ___U3CspawnPositionU3E__2_1)); }
	inline Vector3_t39429748  get_U3CspawnPositionU3E__2_1() const { return ___U3CspawnPositionU3E__2_1; }
	inline Vector3_t39429748 * get_address_of_U3CspawnPositionU3E__2_1() { return &___U3CspawnPositionU3E__2_1; }
	inline void set_U3CspawnPositionU3E__2_1(Vector3_t39429748  value)
	{
		___U3CspawnPositionU3E__2_1 = value;
	}

	inline static int32_t get_offset_of_U3CrotationU3E__2_2() { return static_cast<int32_t>(offsetof(U3CspawnWaveU3Ec__Iterator0_t3774491296, ___U3CrotationU3E__2_2)); }
	inline Quaternion_t1144424023  get_U3CrotationU3E__2_2() const { return ___U3CrotationU3E__2_2; }
	inline Quaternion_t1144424023 * get_address_of_U3CrotationU3E__2_2() { return &___U3CrotationU3E__2_2; }
	inline void set_U3CrotationU3E__2_2(Quaternion_t1144424023  value)
	{
		___U3CrotationU3E__2_2 = value;
	}

	inline static int32_t get_offset_of_U24this_3() { return static_cast<int32_t>(offsetof(U3CspawnWaveU3Ec__Iterator0_t3774491296, ___U24this_3)); }
	inline GameController_t1176934704 * get_U24this_3() const { return ___U24this_3; }
	inline GameController_t1176934704 ** get_address_of_U24this_3() { return &___U24this_3; }
	inline void set_U24this_3(GameController_t1176934704 * value)
	{
		___U24this_3 = value;
		Il2CppCodeGenWriteBarrier((&___U24this_3), value);
	}

	inline static int32_t get_offset_of_U24current_4() { return static_cast<int32_t>(offsetof(U3CspawnWaveU3Ec__Iterator0_t3774491296, ___U24current_4)); }
	inline RuntimeObject * get_U24current_4() const { return ___U24current_4; }
	inline RuntimeObject ** get_address_of_U24current_4() { return &___U24current_4; }
	inline void set_U24current_4(RuntimeObject * value)
	{
		___U24current_4 = value;
		Il2CppCodeGenWriteBarrier((&___U24current_4), value);
	}

	inline static int32_t get_offset_of_U24disposing_5() { return static_cast<int32_t>(offsetof(U3CspawnWaveU3Ec__Iterator0_t3774491296, ___U24disposing_5)); }
	inline bool get_U24disposing_5() const { return ___U24disposing_5; }
	inline bool* get_address_of_U24disposing_5() { return &___U24disposing_5; }
	inline void set_U24disposing_5(bool value)
	{
		___U24disposing_5 = value;
	}

	inline static int32_t get_offset_of_U24PC_6() { return static_cast<int32_t>(offsetof(U3CspawnWaveU3Ec__Iterator0_t3774491296, ___U24PC_6)); }
	inline int32_t get_U24PC_6() const { return ___U24PC_6; }
	inline int32_t* get_address_of_U24PC_6() { return &___U24PC_6; }
	inline void set_U24PC_6(int32_t value)
	{
		___U24PC_6 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // U3CSPAWNWAVEU3EC__ITERATOR0_T3774491296_H
#ifndef COMPONENT_T1141329010_H
#define COMPONENT_T1141329010_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Component
struct  Component_t1141329010  : public Object_t4191337601
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPONENT_T1141329010_H
#ifndef SCRIPTABLEOBJECT_T3651661334_H
#define SCRIPTABLEOBJECT_T3651661334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t3651661334  : public Object_t4191337601
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3651661334_marshaled_pinvoke : public Object_t4191337601_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t3651661334_marshaled_com : public Object_t4191337601_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T3651661334_H
#ifndef BEHAVIOUR_T627235359_H
#define BEHAVIOUR_T627235359_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Behaviour
struct  Behaviour_t627235359  : public Component_t1141329010
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BEHAVIOUR_T627235359_H
#ifndef README_T1193505894_H
#define README_T1193505894_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Readme
struct  Readme_t1193505894  : public ScriptableObject_t3651661334
{
public:
	// UnityEngine.Texture2D Readme::icon
	Texture2D_t452064567 * ___icon_2;
	// System.String Readme::title
	String_t* ___title_3;
	// Readme/Section[] Readme::sections
	SectionU5BU5D_t2315632818* ___sections_4;
	// System.Boolean Readme::loadedLayout
	bool ___loadedLayout_5;

public:
	inline static int32_t get_offset_of_icon_2() { return static_cast<int32_t>(offsetof(Readme_t1193505894, ___icon_2)); }
	inline Texture2D_t452064567 * get_icon_2() const { return ___icon_2; }
	inline Texture2D_t452064567 ** get_address_of_icon_2() { return &___icon_2; }
	inline void set_icon_2(Texture2D_t452064567 * value)
	{
		___icon_2 = value;
		Il2CppCodeGenWriteBarrier((&___icon_2), value);
	}

	inline static int32_t get_offset_of_title_3() { return static_cast<int32_t>(offsetof(Readme_t1193505894, ___title_3)); }
	inline String_t* get_title_3() const { return ___title_3; }
	inline String_t** get_address_of_title_3() { return &___title_3; }
	inline void set_title_3(String_t* value)
	{
		___title_3 = value;
		Il2CppCodeGenWriteBarrier((&___title_3), value);
	}

	inline static int32_t get_offset_of_sections_4() { return static_cast<int32_t>(offsetof(Readme_t1193505894, ___sections_4)); }
	inline SectionU5BU5D_t2315632818* get_sections_4() const { return ___sections_4; }
	inline SectionU5BU5D_t2315632818** get_address_of_sections_4() { return &___sections_4; }
	inline void set_sections_4(SectionU5BU5D_t2315632818* value)
	{
		___sections_4 = value;
		Il2CppCodeGenWriteBarrier((&___sections_4), value);
	}

	inline static int32_t get_offset_of_loadedLayout_5() { return static_cast<int32_t>(offsetof(Readme_t1193505894, ___loadedLayout_5)); }
	inline bool get_loadedLayout_5() const { return ___loadedLayout_5; }
	inline bool* get_address_of_loadedLayout_5() { return &___loadedLayout_5; }
	inline void set_loadedLayout_5(bool value)
	{
		___loadedLayout_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // README_T1193505894_H
#ifndef MONOBEHAVIOUR_T1332527433_H
#define MONOBEHAVIOUR_T1332527433_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t1332527433  : public Behaviour_t627235359
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MONOBEHAVIOUR_T1332527433_H
#ifndef RANDOMROTATOR_T1812312703_H
#define RANDOMROTATOR_T1812312703_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// RandomRotator
struct  RandomRotator_t1812312703  : public MonoBehaviour_t1332527433
{
public:
	// System.Single RandomRotator::tumble
	float ___tumble_2;
	// UnityEngine.Rigidbody RandomRotator::rigidBody
	Rigidbody_t4257253666 * ___rigidBody_3;

public:
	inline static int32_t get_offset_of_tumble_2() { return static_cast<int32_t>(offsetof(RandomRotator_t1812312703, ___tumble_2)); }
	inline float get_tumble_2() const { return ___tumble_2; }
	inline float* get_address_of_tumble_2() { return &___tumble_2; }
	inline void set_tumble_2(float value)
	{
		___tumble_2 = value;
	}

	inline static int32_t get_offset_of_rigidBody_3() { return static_cast<int32_t>(offsetof(RandomRotator_t1812312703, ___rigidBody_3)); }
	inline Rigidbody_t4257253666 * get_rigidBody_3() const { return ___rigidBody_3; }
	inline Rigidbody_t4257253666 ** get_address_of_rigidBody_3() { return &___rigidBody_3; }
	inline void set_rigidBody_3(Rigidbody_t4257253666 * value)
	{
		___rigidBody_3 = value;
		Il2CppCodeGenWriteBarrier((&___rigidBody_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RANDOMROTATOR_T1812312703_H
#ifndef PLAYERCONTROLLER_T4239427262_H
#define PLAYERCONTROLLER_T4239427262_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerController
struct  PlayerController_t4239427262  : public MonoBehaviour_t1332527433
{
public:
	// UnityEngine.Rigidbody PlayerController::rigidBody
	Rigidbody_t4257253666 * ___rigidBody_2;
	// System.Single PlayerController::speed
	float ___speed_3;
	// Boundary PlayerController::boundary
	Boundary_t2754761119 * ___boundary_4;
	// UnityEngine.GameObject PlayerController::shot
	GameObject_t669497586 * ___shot_5;
	// UnityEngine.Transform PlayerController::shotSpawn
	Transform_t374683726 * ___shotSpawn_6;
	// System.Single PlayerController::tilt
	float ___tilt_7;
	// System.Single PlayerController::fireRate
	float ___fireRate_8;
	// System.Single PlayerController::nextFire
	float ___nextFire_9;

public:
	inline static int32_t get_offset_of_rigidBody_2() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___rigidBody_2)); }
	inline Rigidbody_t4257253666 * get_rigidBody_2() const { return ___rigidBody_2; }
	inline Rigidbody_t4257253666 ** get_address_of_rigidBody_2() { return &___rigidBody_2; }
	inline void set_rigidBody_2(Rigidbody_t4257253666 * value)
	{
		___rigidBody_2 = value;
		Il2CppCodeGenWriteBarrier((&___rigidBody_2), value);
	}

	inline static int32_t get_offset_of_speed_3() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___speed_3)); }
	inline float get_speed_3() const { return ___speed_3; }
	inline float* get_address_of_speed_3() { return &___speed_3; }
	inline void set_speed_3(float value)
	{
		___speed_3 = value;
	}

	inline static int32_t get_offset_of_boundary_4() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___boundary_4)); }
	inline Boundary_t2754761119 * get_boundary_4() const { return ___boundary_4; }
	inline Boundary_t2754761119 ** get_address_of_boundary_4() { return &___boundary_4; }
	inline void set_boundary_4(Boundary_t2754761119 * value)
	{
		___boundary_4 = value;
		Il2CppCodeGenWriteBarrier((&___boundary_4), value);
	}

	inline static int32_t get_offset_of_shot_5() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___shot_5)); }
	inline GameObject_t669497586 * get_shot_5() const { return ___shot_5; }
	inline GameObject_t669497586 ** get_address_of_shot_5() { return &___shot_5; }
	inline void set_shot_5(GameObject_t669497586 * value)
	{
		___shot_5 = value;
		Il2CppCodeGenWriteBarrier((&___shot_5), value);
	}

	inline static int32_t get_offset_of_shotSpawn_6() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___shotSpawn_6)); }
	inline Transform_t374683726 * get_shotSpawn_6() const { return ___shotSpawn_6; }
	inline Transform_t374683726 ** get_address_of_shotSpawn_6() { return &___shotSpawn_6; }
	inline void set_shotSpawn_6(Transform_t374683726 * value)
	{
		___shotSpawn_6 = value;
		Il2CppCodeGenWriteBarrier((&___shotSpawn_6), value);
	}

	inline static int32_t get_offset_of_tilt_7() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___tilt_7)); }
	inline float get_tilt_7() const { return ___tilt_7; }
	inline float* get_address_of_tilt_7() { return &___tilt_7; }
	inline void set_tilt_7(float value)
	{
		___tilt_7 = value;
	}

	inline static int32_t get_offset_of_fireRate_8() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___fireRate_8)); }
	inline float get_fireRate_8() const { return ___fireRate_8; }
	inline float* get_address_of_fireRate_8() { return &___fireRate_8; }
	inline void set_fireRate_8(float value)
	{
		___fireRate_8 = value;
	}

	inline static int32_t get_offset_of_nextFire_9() { return static_cast<int32_t>(offsetof(PlayerController_t4239427262, ___nextFire_9)); }
	inline float get_nextFire_9() const { return ___nextFire_9; }
	inline float* get_address_of_nextFire_9() { return &___nextFire_9; }
	inline void set_nextFire_9(float value)
	{
		___nextFire_9 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PLAYERCONTROLLER_T4239427262_H
#ifndef MOVER_T3908833809_H
#define MOVER_T3908833809_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Mover
struct  Mover_t3908833809  : public MonoBehaviour_t1332527433
{
public:
	// System.Single Mover::speed
	float ___speed_2;
	// UnityEngine.Rigidbody Mover::rigidBody
	Rigidbody_t4257253666 * ___rigidBody_3;

public:
	inline static int32_t get_offset_of_speed_2() { return static_cast<int32_t>(offsetof(Mover_t3908833809, ___speed_2)); }
	inline float get_speed_2() const { return ___speed_2; }
	inline float* get_address_of_speed_2() { return &___speed_2; }
	inline void set_speed_2(float value)
	{
		___speed_2 = value;
	}

	inline static int32_t get_offset_of_rigidBody_3() { return static_cast<int32_t>(offsetof(Mover_t3908833809, ___rigidBody_3)); }
	inline Rigidbody_t4257253666 * get_rigidBody_3() const { return ___rigidBody_3; }
	inline Rigidbody_t4257253666 ** get_address_of_rigidBody_3() { return &___rigidBody_3; }
	inline void set_rigidBody_3(Rigidbody_t4257253666 * value)
	{
		___rigidBody_3 = value;
		Il2CppCodeGenWriteBarrier((&___rigidBody_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MOVER_T3908833809_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1400 = { sizeof (U3CspawnWaveU3Ec__Iterator0_t3774491296), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1400[7] = 
{
	U3CspawnWaveU3Ec__Iterator0_t3774491296::get_offset_of_U3CiU3E__1_0(),
	U3CspawnWaveU3Ec__Iterator0_t3774491296::get_offset_of_U3CspawnPositionU3E__2_1(),
	U3CspawnWaveU3Ec__Iterator0_t3774491296::get_offset_of_U3CrotationU3E__2_2(),
	U3CspawnWaveU3Ec__Iterator0_t3774491296::get_offset_of_U24this_3(),
	U3CspawnWaveU3Ec__Iterator0_t3774491296::get_offset_of_U24current_4(),
	U3CspawnWaveU3Ec__Iterator0_t3774491296::get_offset_of_U24disposing_5(),
	U3CspawnWaveU3Ec__Iterator0_t3774491296::get_offset_of_U24PC_6(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1401 = { sizeof (Mover_t3908833809), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1401[2] = 
{
	Mover_t3908833809::get_offset_of_speed_2(),
	Mover_t3908833809::get_offset_of_rigidBody_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1402 = { sizeof (Boundary_t2754761119), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1402[4] = 
{
	Boundary_t2754761119::get_offset_of_xMin_0(),
	Boundary_t2754761119::get_offset_of_xMax_1(),
	Boundary_t2754761119::get_offset_of_zMin_2(),
	Boundary_t2754761119::get_offset_of_zMax_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1403 = { sizeof (PlayerController_t4239427262), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1403[8] = 
{
	PlayerController_t4239427262::get_offset_of_rigidBody_2(),
	PlayerController_t4239427262::get_offset_of_speed_3(),
	PlayerController_t4239427262::get_offset_of_boundary_4(),
	PlayerController_t4239427262::get_offset_of_shot_5(),
	PlayerController_t4239427262::get_offset_of_shotSpawn_6(),
	PlayerController_t4239427262::get_offset_of_tilt_7(),
	PlayerController_t4239427262::get_offset_of_fireRate_8(),
	PlayerController_t4239427262::get_offset_of_nextFire_9(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1404 = { sizeof (RandomRotator_t1812312703), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1404[2] = 
{
	RandomRotator_t1812312703::get_offset_of_tumble_2(),
	RandomRotator_t1812312703::get_offset_of_rigidBody_3(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1405 = { sizeof (Readme_t1193505894), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1405[4] = 
{
	Readme_t1193505894::get_offset_of_icon_2(),
	Readme_t1193505894::get_offset_of_title_3(),
	Readme_t1193505894::get_offset_of_sections_4(),
	Readme_t1193505894::get_offset_of_loadedLayout_5(),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize1406 = { sizeof (Section_t620638819), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable1406[4] = 
{
	Section_t620638819::get_offset_of_heading_0(),
	Section_t620638819::get_offset_of_text_1(),
	Section_t620638819::get_offset_of_linkText_2(),
	Section_t620638819::get_offset_of_url_3(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
