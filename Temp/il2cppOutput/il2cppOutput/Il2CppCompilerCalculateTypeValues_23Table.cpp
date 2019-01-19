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

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"


// System.Char[]
struct CharU5BU5D_t3528271667;
// System.String
struct String_t;
// System.Void
struct Void_t1185182177;




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
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::split_char
	CharU5BU5D_t3528271667* ___split_char_0;

public:
	inline static int32_t get_offset_of_split_char_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___split_char_0)); }
	inline CharU5BU5D_t3528271667* get_split_char_0() const { return ___split_char_0; }
	inline CharU5BU5D_t3528271667** get_address_of_split_char_0() { return &___split_char_0; }
	inline void set_split_char_0(CharU5BU5D_t3528271667* value)
	{
		___split_char_0 = value;
		Il2CppCodeGenWriteBarrier((&___split_char_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
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
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef MATRIX4X4_T1817901843_H
#define MATRIX4X4_T1817901843_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Matrix4x4
struct  Matrix4x4_t1817901843 
{
public:
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;

public:
	inline static int32_t get_offset_of_m00_0() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m00_0)); }
	inline float get_m00_0() const { return ___m00_0; }
	inline float* get_address_of_m00_0() { return &___m00_0; }
	inline void set_m00_0(float value)
	{
		___m00_0 = value;
	}

	inline static int32_t get_offset_of_m10_1() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m10_1)); }
	inline float get_m10_1() const { return ___m10_1; }
	inline float* get_address_of_m10_1() { return &___m10_1; }
	inline void set_m10_1(float value)
	{
		___m10_1 = value;
	}

	inline static int32_t get_offset_of_m20_2() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m20_2)); }
	inline float get_m20_2() const { return ___m20_2; }
	inline float* get_address_of_m20_2() { return &___m20_2; }
	inline void set_m20_2(float value)
	{
		___m20_2 = value;
	}

	inline static int32_t get_offset_of_m30_3() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m30_3)); }
	inline float get_m30_3() const { return ___m30_3; }
	inline float* get_address_of_m30_3() { return &___m30_3; }
	inline void set_m30_3(float value)
	{
		___m30_3 = value;
	}

	inline static int32_t get_offset_of_m01_4() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m01_4)); }
	inline float get_m01_4() const { return ___m01_4; }
	inline float* get_address_of_m01_4() { return &___m01_4; }
	inline void set_m01_4(float value)
	{
		___m01_4 = value;
	}

	inline static int32_t get_offset_of_m11_5() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m11_5)); }
	inline float get_m11_5() const { return ___m11_5; }
	inline float* get_address_of_m11_5() { return &___m11_5; }
	inline void set_m11_5(float value)
	{
		___m11_5 = value;
	}

	inline static int32_t get_offset_of_m21_6() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m21_6)); }
	inline float get_m21_6() const { return ___m21_6; }
	inline float* get_address_of_m21_6() { return &___m21_6; }
	inline void set_m21_6(float value)
	{
		___m21_6 = value;
	}

	inline static int32_t get_offset_of_m31_7() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m31_7)); }
	inline float get_m31_7() const { return ___m31_7; }
	inline float* get_address_of_m31_7() { return &___m31_7; }
	inline void set_m31_7(float value)
	{
		___m31_7 = value;
	}

	inline static int32_t get_offset_of_m02_8() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m02_8)); }
	inline float get_m02_8() const { return ___m02_8; }
	inline float* get_address_of_m02_8() { return &___m02_8; }
	inline void set_m02_8(float value)
	{
		___m02_8 = value;
	}

	inline static int32_t get_offset_of_m12_9() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m12_9)); }
	inline float get_m12_9() const { return ___m12_9; }
	inline float* get_address_of_m12_9() { return &___m12_9; }
	inline void set_m12_9(float value)
	{
		___m12_9 = value;
	}

	inline static int32_t get_offset_of_m22_10() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m22_10)); }
	inline float get_m22_10() const { return ___m22_10; }
	inline float* get_address_of_m22_10() { return &___m22_10; }
	inline void set_m22_10(float value)
	{
		___m22_10 = value;
	}

	inline static int32_t get_offset_of_m32_11() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m32_11)); }
	inline float get_m32_11() const { return ___m32_11; }
	inline float* get_address_of_m32_11() { return &___m32_11; }
	inline void set_m32_11(float value)
	{
		___m32_11 = value;
	}

	inline static int32_t get_offset_of_m03_12() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m03_12)); }
	inline float get_m03_12() const { return ___m03_12; }
	inline float* get_address_of_m03_12() { return &___m03_12; }
	inline void set_m03_12(float value)
	{
		___m03_12 = value;
	}

	inline static int32_t get_offset_of_m13_13() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m13_13)); }
	inline float get_m13_13() const { return ___m13_13; }
	inline float* get_address_of_m13_13() { return &___m13_13; }
	inline void set_m13_13(float value)
	{
		___m13_13 = value;
	}

	inline static int32_t get_offset_of_m23_14() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m23_14)); }
	inline float get_m23_14() const { return ___m23_14; }
	inline float* get_address_of_m23_14() { return &___m23_14; }
	inline void set_m23_14(float value)
	{
		___m23_14 = value;
	}

	inline static int32_t get_offset_of_m33_15() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843, ___m33_15)); }
	inline float get_m33_15() const { return ___m33_15; }
	inline float* get_address_of_m33_15() { return &___m33_15; }
	inline void set_m33_15(float value)
	{
		___m33_15 = value;
	}
};

struct Matrix4x4_t1817901843_StaticFields
{
public:
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_t1817901843  ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_t1817901843  ___identityMatrix_17;

public:
	inline static int32_t get_offset_of_zeroMatrix_16() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___zeroMatrix_16)); }
	inline Matrix4x4_t1817901843  get_zeroMatrix_16() const { return ___zeroMatrix_16; }
	inline Matrix4x4_t1817901843 * get_address_of_zeroMatrix_16() { return &___zeroMatrix_16; }
	inline void set_zeroMatrix_16(Matrix4x4_t1817901843  value)
	{
		___zeroMatrix_16 = value;
	}

	inline static int32_t get_offset_of_identityMatrix_17() { return static_cast<int32_t>(offsetof(Matrix4x4_t1817901843_StaticFields, ___identityMatrix_17)); }
	inline Matrix4x4_t1817901843  get_identityMatrix_17() const { return ___identityMatrix_17; }
	inline Matrix4x4_t1817901843 * get_address_of_identityMatrix_17() { return &___identityMatrix_17; }
	inline void set_identityMatrix_17(Matrix4x4_t1817901843  value)
	{
		___identityMatrix_17 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MATRIX4X4_T1817901843_H
#ifndef VECTOR4_T3319028937_H
#define VECTOR4_T3319028937_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Vector4
struct  Vector4_t3319028937 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_t3319028937, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_t3319028937_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t3319028937  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t3319028937  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t3319028937  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t3319028937  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___zeroVector_5)); }
	inline Vector4_t3319028937  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_t3319028937 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_t3319028937  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___oneVector_6)); }
	inline Vector4_t3319028937  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_t3319028937 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_t3319028937  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_t3319028937  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_t3319028937 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_t3319028937  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_t3319028937_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_t3319028937  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_t3319028937 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_t3319028937  value)
	{
		___negativeInfinityVector_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VECTOR4_T3319028937_H
#ifndef OBJECT_T631007953_H
#define OBJECT_T631007953_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.Object
struct  Object_t631007953  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_t631007953, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_t631007953_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_t631007953_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
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
struct Object_t631007953_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_t631007953_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};
#endif // OBJECT_T631007953_H
#ifndef ARHITTESTRESULTTYPE_T475323638_H
#define ARHITTESTRESULTTYPE_T475323638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARHitTestResultType
struct  ARHitTestResultType_t475323638 
{
public:
	// System.Int64 UnityEngine.XR.iOS.ARHitTestResultType::value__
	int64_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(ARHitTestResultType_t475323638, ___value___1)); }
	inline int64_t get_value___1() const { return ___value___1; }
	inline int64_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int64_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARHITTESTRESULTTYPE_T475323638_H
#ifndef UNITYARALIGNMENT_T3792119710_H
#define UNITYARALIGNMENT_T3792119710_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARAlignment
struct  UnityARAlignment_t3792119710 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARAlignment::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARAlignment_t3792119710, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARALIGNMENT_T3792119710_H
#ifndef UNITYARENVIRONMENTTEXTURING_T3781250847_H
#define UNITYARENVIRONMENTTEXTURING_T3781250847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityAREnvironmentTexturing
struct  UnityAREnvironmentTexturing_t3781250847 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityAREnvironmentTexturing::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityAREnvironmentTexturing_t3781250847, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARENVIRONMENTTEXTURING_T3781250847_H
#ifndef UNITYARMATRIX4X4_T4073345847_H
#define UNITYARMATRIX4X4_T4073345847_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARMatrix4x4
struct  UnityARMatrix4x4_t4073345847 
{
public:
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column0
	Vector4_t3319028937  ___column0_0;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column1
	Vector4_t3319028937  ___column1_1;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column2
	Vector4_t3319028937  ___column2_2;
	// UnityEngine.Vector4 UnityEngine.XR.iOS.UnityARMatrix4x4::column3
	Vector4_t3319028937  ___column3_3;

public:
	inline static int32_t get_offset_of_column0_0() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column0_0)); }
	inline Vector4_t3319028937  get_column0_0() const { return ___column0_0; }
	inline Vector4_t3319028937 * get_address_of_column0_0() { return &___column0_0; }
	inline void set_column0_0(Vector4_t3319028937  value)
	{
		___column0_0 = value;
	}

	inline static int32_t get_offset_of_column1_1() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column1_1)); }
	inline Vector4_t3319028937  get_column1_1() const { return ___column1_1; }
	inline Vector4_t3319028937 * get_address_of_column1_1() { return &___column1_1; }
	inline void set_column1_1(Vector4_t3319028937  value)
	{
		___column1_1 = value;
	}

	inline static int32_t get_offset_of_column2_2() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column2_2)); }
	inline Vector4_t3319028937  get_column2_2() const { return ___column2_2; }
	inline Vector4_t3319028937 * get_address_of_column2_2() { return &___column2_2; }
	inline void set_column2_2(Vector4_t3319028937  value)
	{
		___column2_2 = value;
	}

	inline static int32_t get_offset_of_column3_3() { return static_cast<int32_t>(offsetof(UnityARMatrix4x4_t4073345847, ___column3_3)); }
	inline Vector4_t3319028937  get_column3_3() const { return ___column3_3; }
	inline Vector4_t3319028937 * get_address_of_column3_3() { return &___column3_3; }
	inline void set_column3_3(Vector4_t3319028937  value)
	{
		___column3_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARMATRIX4X4_T4073345847_H
#ifndef UNITYARPLANEDETECTION_T1367733575_H
#define UNITYARPLANEDETECTION_T1367733575_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARPlaneDetection
struct  UnityARPlaneDetection_t1367733575 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARPlaneDetection::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARPlaneDetection_t1367733575, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARPLANEDETECTION_T1367733575_H
#ifndef UNITYARSESSIONRUNOPTION_T942967030_H
#define UNITYARSESSIONRUNOPTION_T942967030_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARSessionRunOption
struct  UnityARSessionRunOption_t942967030 
{
public:
	// System.Int32 UnityEngine.XR.iOS.UnityARSessionRunOption::value__
	int32_t ___value___1;

public:
	inline static int32_t get_offset_of_value___1() { return static_cast<int32_t>(offsetof(UnityARSessionRunOption_t942967030, ___value___1)); }
	inline int32_t get_value___1() const { return ___value___1; }
	inline int32_t* get_address_of_value___1() { return &___value___1; }
	inline void set_value___1(int32_t value)
	{
		___value___1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARSESSIONRUNOPTION_T942967030_H
#ifndef SCRIPTABLEOBJECT_T2528358522_H
#define SCRIPTABLEOBJECT_T2528358522_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.ScriptableObject
struct  ScriptableObject_t2528358522  : public Object_t631007953
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_pinvoke : public Object_t631007953_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t2528358522_marshaled_com : public Object_t631007953_marshaled_com
{
};
#endif // SCRIPTABLEOBJECT_T2528358522_H
#ifndef ARKITFACETRACKINGCONFIGURATION_T386387352_H
#define ARKITFACETRACKINGCONFIGURATION_T386387352_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct  ARKitFaceTrackingConfiguration_t386387352 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration::enableLightEstimation
	bool ___enableLightEstimation_1;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t386387352, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_1() { return static_cast<int32_t>(offsetof(ARKitFaceTrackingConfiguration_t386387352, ___enableLightEstimation_1)); }
	inline bool get_enableLightEstimation_1() const { return ___enableLightEstimation_1; }
	inline bool* get_address_of_enableLightEstimation_1() { return &___enableLightEstimation_1; }
	inline void set_enableLightEstimation_1(bool value)
	{
		___enableLightEstimation_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t386387352_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitFaceTrackingConfiguration
struct ARKitFaceTrackingConfiguration_t386387352_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___enableLightEstimation_1;
};
#endif // ARKITFACETRACKINGCONFIGURATION_T386387352_H
#ifndef ARKITSESSIONCONFIGURATION_T629136898_H
#define ARKITSESSIONCONFIGURATION_T629136898_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitSessionConfiguration
struct  ARKitSessionConfiguration_t629136898 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitSessionConfiguration::alignment
	int32_t ___alignment_0;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_2;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t629136898, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_1() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t629136898, ___getPointCloudData_1)); }
	inline bool get_getPointCloudData_1() const { return ___getPointCloudData_1; }
	inline bool* get_address_of_getPointCloudData_1() { return &___getPointCloudData_1; }
	inline void set_getPointCloudData_1(bool value)
	{
		___getPointCloudData_1 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_2() { return static_cast<int32_t>(offsetof(ARKitSessionConfiguration_t629136898, ___enableLightEstimation_2)); }
	inline bool get_enableLightEstimation_2() const { return ___enableLightEstimation_2; }
	inline bool* get_address_of_enableLightEstimation_2() { return &___enableLightEstimation_2; }
	inline void set_enableLightEstimation_2(bool value)
	{
		___enableLightEstimation_2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t629136898_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitSessionConfiguration
struct ARKitSessionConfiguration_t629136898_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___getPointCloudData_1;
	int32_t ___enableLightEstimation_2;
};
#endif // ARKITSESSIONCONFIGURATION_T629136898_H
#ifndef ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#define ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct  ARKitWorldTrackingSessionConfiguration_t273386347 
{
public:
	// UnityEngine.XR.iOS.UnityARAlignment UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::alignment
	int32_t ___alignment_0;
	// UnityEngine.XR.iOS.UnityARPlaneDetection UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::planeDetection
	int32_t ___planeDetection_1;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::getPointCloudData
	bool ___getPointCloudData_2;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableLightEstimation
	bool ___enableLightEstimation_3;
	// System.Boolean UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::enableAutoFocus
	bool ___enableAutoFocus_4;
	// UnityEngine.XR.iOS.UnityAREnvironmentTexturing UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::environmentTexturing
	int32_t ___environmentTexturing_5;
	// System.Int32 UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::maximumNumberOfTrackedImages
	int32_t ___maximumNumberOfTrackedImages_6;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::videoFormat
	intptr_t ___videoFormat_7;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::referenceImagesGroupName
	String_t* ___referenceImagesGroupName_8;
	// System.String UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::referenceObjectsGroupName
	String_t* ___referenceObjectsGroupName_9;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::dynamicReferenceObjectsPtr
	intptr_t ___dynamicReferenceObjectsPtr_10;
	// System.IntPtr UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration::m_worldMapPtr
	intptr_t ___m_worldMapPtr_11;

public:
	inline static int32_t get_offset_of_alignment_0() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___alignment_0)); }
	inline int32_t get_alignment_0() const { return ___alignment_0; }
	inline int32_t* get_address_of_alignment_0() { return &___alignment_0; }
	inline void set_alignment_0(int32_t value)
	{
		___alignment_0 = value;
	}

	inline static int32_t get_offset_of_planeDetection_1() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___planeDetection_1)); }
	inline int32_t get_planeDetection_1() const { return ___planeDetection_1; }
	inline int32_t* get_address_of_planeDetection_1() { return &___planeDetection_1; }
	inline void set_planeDetection_1(int32_t value)
	{
		___planeDetection_1 = value;
	}

	inline static int32_t get_offset_of_getPointCloudData_2() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___getPointCloudData_2)); }
	inline bool get_getPointCloudData_2() const { return ___getPointCloudData_2; }
	inline bool* get_address_of_getPointCloudData_2() { return &___getPointCloudData_2; }
	inline void set_getPointCloudData_2(bool value)
	{
		___getPointCloudData_2 = value;
	}

	inline static int32_t get_offset_of_enableLightEstimation_3() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableLightEstimation_3)); }
	inline bool get_enableLightEstimation_3() const { return ___enableLightEstimation_3; }
	inline bool* get_address_of_enableLightEstimation_3() { return &___enableLightEstimation_3; }
	inline void set_enableLightEstimation_3(bool value)
	{
		___enableLightEstimation_3 = value;
	}

	inline static int32_t get_offset_of_enableAutoFocus_4() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___enableAutoFocus_4)); }
	inline bool get_enableAutoFocus_4() const { return ___enableAutoFocus_4; }
	inline bool* get_address_of_enableAutoFocus_4() { return &___enableAutoFocus_4; }
	inline void set_enableAutoFocus_4(bool value)
	{
		___enableAutoFocus_4 = value;
	}

	inline static int32_t get_offset_of_environmentTexturing_5() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___environmentTexturing_5)); }
	inline int32_t get_environmentTexturing_5() const { return ___environmentTexturing_5; }
	inline int32_t* get_address_of_environmentTexturing_5() { return &___environmentTexturing_5; }
	inline void set_environmentTexturing_5(int32_t value)
	{
		___environmentTexturing_5 = value;
	}

	inline static int32_t get_offset_of_maximumNumberOfTrackedImages_6() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___maximumNumberOfTrackedImages_6)); }
	inline int32_t get_maximumNumberOfTrackedImages_6() const { return ___maximumNumberOfTrackedImages_6; }
	inline int32_t* get_address_of_maximumNumberOfTrackedImages_6() { return &___maximumNumberOfTrackedImages_6; }
	inline void set_maximumNumberOfTrackedImages_6(int32_t value)
	{
		___maximumNumberOfTrackedImages_6 = value;
	}

	inline static int32_t get_offset_of_videoFormat_7() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___videoFormat_7)); }
	inline intptr_t get_videoFormat_7() const { return ___videoFormat_7; }
	inline intptr_t* get_address_of_videoFormat_7() { return &___videoFormat_7; }
	inline void set_videoFormat_7(intptr_t value)
	{
		___videoFormat_7 = value;
	}

	inline static int32_t get_offset_of_referenceImagesGroupName_8() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___referenceImagesGroupName_8)); }
	inline String_t* get_referenceImagesGroupName_8() const { return ___referenceImagesGroupName_8; }
	inline String_t** get_address_of_referenceImagesGroupName_8() { return &___referenceImagesGroupName_8; }
	inline void set_referenceImagesGroupName_8(String_t* value)
	{
		___referenceImagesGroupName_8 = value;
		Il2CppCodeGenWriteBarrier((&___referenceImagesGroupName_8), value);
	}

	inline static int32_t get_offset_of_referenceObjectsGroupName_9() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___referenceObjectsGroupName_9)); }
	inline String_t* get_referenceObjectsGroupName_9() const { return ___referenceObjectsGroupName_9; }
	inline String_t** get_address_of_referenceObjectsGroupName_9() { return &___referenceObjectsGroupName_9; }
	inline void set_referenceObjectsGroupName_9(String_t* value)
	{
		___referenceObjectsGroupName_9 = value;
		Il2CppCodeGenWriteBarrier((&___referenceObjectsGroupName_9), value);
	}

	inline static int32_t get_offset_of_dynamicReferenceObjectsPtr_10() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___dynamicReferenceObjectsPtr_10)); }
	inline intptr_t get_dynamicReferenceObjectsPtr_10() const { return ___dynamicReferenceObjectsPtr_10; }
	inline intptr_t* get_address_of_dynamicReferenceObjectsPtr_10() { return &___dynamicReferenceObjectsPtr_10; }
	inline void set_dynamicReferenceObjectsPtr_10(intptr_t value)
	{
		___dynamicReferenceObjectsPtr_10 = value;
	}

	inline static int32_t get_offset_of_m_worldMapPtr_11() { return static_cast<int32_t>(offsetof(ARKitWorldTrackingSessionConfiguration_t273386347, ___m_worldMapPtr_11)); }
	inline intptr_t get_m_worldMapPtr_11() const { return ___m_worldMapPtr_11; }
	inline intptr_t* get_address_of_m_worldMapPtr_11() { return &___m_worldMapPtr_11; }
	inline void set_m_worldMapPtr_11(intptr_t value)
	{
		___m_worldMapPtr_11 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	int32_t ___environmentTexturing_5;
	int32_t ___maximumNumberOfTrackedImages_6;
	intptr_t ___videoFormat_7;
	char* ___referenceImagesGroupName_8;
	char* ___referenceObjectsGroupName_9;
	intptr_t ___dynamicReferenceObjectsPtr_10;
	intptr_t ___m_worldMapPtr_11;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.ARKitWorldTrackingSessionConfiguration
struct ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_com
{
	int32_t ___alignment_0;
	int32_t ___planeDetection_1;
	int32_t ___getPointCloudData_2;
	int32_t ___enableLightEstimation_3;
	int32_t ___enableAutoFocus_4;
	int32_t ___environmentTexturing_5;
	int32_t ___maximumNumberOfTrackedImages_6;
	intptr_t ___videoFormat_7;
	Il2CppChar* ___referenceImagesGroupName_8;
	Il2CppChar* ___referenceObjectsGroupName_9;
	intptr_t ___dynamicReferenceObjectsPtr_10;
	intptr_t ___m_worldMapPtr_11;
};
#endif // ARKITWORLDTRACKINGSESSIONCONFIGURATION_T273386347_H
#ifndef UNITYARHITTESTRESULT_T4176230866_H
#define UNITYARHITTESTRESULT_T4176230866_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARHitTestResult
struct  UnityARHitTestResult_t4176230866 
{
public:
	// UnityEngine.XR.iOS.ARHitTestResultType UnityEngine.XR.iOS.UnityARHitTestResult::type
	int64_t ___type_0;
	// System.Double UnityEngine.XR.iOS.UnityARHitTestResult::distance
	double ___distance_1;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::localTransform
	Matrix4x4_t1817901843  ___localTransform_2;
	// UnityEngine.Matrix4x4 UnityEngine.XR.iOS.UnityARHitTestResult::worldTransform
	Matrix4x4_t1817901843  ___worldTransform_3;
	// System.IntPtr UnityEngine.XR.iOS.UnityARHitTestResult::anchor
	intptr_t ___anchor_4;
	// System.Boolean UnityEngine.XR.iOS.UnityARHitTestResult::isValid
	bool ___isValid_5;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___type_0)); }
	inline int64_t get_type_0() const { return ___type_0; }
	inline int64_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int64_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_distance_1() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___distance_1)); }
	inline double get_distance_1() const { return ___distance_1; }
	inline double* get_address_of_distance_1() { return &___distance_1; }
	inline void set_distance_1(double value)
	{
		___distance_1 = value;
	}

	inline static int32_t get_offset_of_localTransform_2() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___localTransform_2)); }
	inline Matrix4x4_t1817901843  get_localTransform_2() const { return ___localTransform_2; }
	inline Matrix4x4_t1817901843 * get_address_of_localTransform_2() { return &___localTransform_2; }
	inline void set_localTransform_2(Matrix4x4_t1817901843  value)
	{
		___localTransform_2 = value;
	}

	inline static int32_t get_offset_of_worldTransform_3() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___worldTransform_3)); }
	inline Matrix4x4_t1817901843  get_worldTransform_3() const { return ___worldTransform_3; }
	inline Matrix4x4_t1817901843 * get_address_of_worldTransform_3() { return &___worldTransform_3; }
	inline void set_worldTransform_3(Matrix4x4_t1817901843  value)
	{
		___worldTransform_3 = value;
	}

	inline static int32_t get_offset_of_anchor_4() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___anchor_4)); }
	inline intptr_t get_anchor_4() const { return ___anchor_4; }
	inline intptr_t* get_address_of_anchor_4() { return &___anchor_4; }
	inline void set_anchor_4(intptr_t value)
	{
		___anchor_4 = value;
	}

	inline static int32_t get_offset_of_isValid_5() { return static_cast<int32_t>(offsetof(UnityARHitTestResult_t4176230866, ___isValid_5)); }
	inline bool get_isValid_5() const { return ___isValid_5; }
	inline bool* get_address_of_isValid_5() { return &___isValid_5; }
	inline void set_isValid_5(bool value)
	{
		___isValid_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t4176230866_marshaled_pinvoke
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
// Native definition for COM marshalling of UnityEngine.XR.iOS.UnityARHitTestResult
struct UnityARHitTestResult_t4176230866_marshaled_com
{
	int64_t ___type_0;
	double ___distance_1;
	Matrix4x4_t1817901843  ___localTransform_2;
	Matrix4x4_t1817901843  ___worldTransform_3;
	intptr_t ___anchor_4;
	int32_t ___isValid_5;
};
#endif // UNITYARHITTESTRESULT_T4176230866_H
#ifndef UNITYARUSERANCHORDATA_T1976826249_H
#define UNITYARUSERANCHORDATA_T1976826249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityEngine.XR.iOS.UnityARUserAnchorData
struct  UnityARUserAnchorData_t1976826249 
{
public:
	// System.IntPtr UnityEngine.XR.iOS.UnityARUserAnchorData::ptrIdentifier
	intptr_t ___ptrIdentifier_0;
	// UnityEngine.XR.iOS.UnityARMatrix4x4 UnityEngine.XR.iOS.UnityARUserAnchorData::transform
	UnityARMatrix4x4_t4073345847  ___transform_1;

public:
	inline static int32_t get_offset_of_ptrIdentifier_0() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1976826249, ___ptrIdentifier_0)); }
	inline intptr_t get_ptrIdentifier_0() const { return ___ptrIdentifier_0; }
	inline intptr_t* get_address_of_ptrIdentifier_0() { return &___ptrIdentifier_0; }
	inline void set_ptrIdentifier_0(intptr_t value)
	{
		___ptrIdentifier_0 = value;
	}

	inline static int32_t get_offset_of_transform_1() { return static_cast<int32_t>(offsetof(UnityARUserAnchorData_t1976826249, ___transform_1)); }
	inline UnityARMatrix4x4_t4073345847  get_transform_1() const { return ___transform_1; }
	inline UnityARMatrix4x4_t4073345847 * get_address_of_transform_1() { return &___transform_1; }
	inline void set_transform_1(UnityARMatrix4x4_t4073345847  value)
	{
		___transform_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARUSERANCHORDATA_T1976826249_H
#ifndef UNITYARKITPLUGINSETTINGS_T2201217663_H
#define UNITYARKITPLUGINSETTINGS_T2201217663_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityARKitPluginSettings
struct  UnityARKitPluginSettings_t2201217663  : public ScriptableObject_t2528358522
{
public:
	// System.Boolean UnityARKitPluginSettings::m_ARKitUsesFacetracking
	bool ___m_ARKitUsesFacetracking_4;
	// System.Boolean UnityARKitPluginSettings::AppRequiresARKit
	bool ___AppRequiresARKit_5;

public:
	inline static int32_t get_offset_of_m_ARKitUsesFacetracking_4() { return static_cast<int32_t>(offsetof(UnityARKitPluginSettings_t2201217663, ___m_ARKitUsesFacetracking_4)); }
	inline bool get_m_ARKitUsesFacetracking_4() const { return ___m_ARKitUsesFacetracking_4; }
	inline bool* get_address_of_m_ARKitUsesFacetracking_4() { return &___m_ARKitUsesFacetracking_4; }
	inline void set_m_ARKitUsesFacetracking_4(bool value)
	{
		___m_ARKitUsesFacetracking_4 = value;
	}

	inline static int32_t get_offset_of_AppRequiresARKit_5() { return static_cast<int32_t>(offsetof(UnityARKitPluginSettings_t2201217663, ___AppRequiresARKit_5)); }
	inline bool get_AppRequiresARKit_5() const { return ___AppRequiresARKit_5; }
	inline bool* get_address_of_AppRequiresARKit_5() { return &___AppRequiresARKit_5; }
	inline void set_AppRequiresARKit_5(bool value)
	{
		___AppRequiresARKit_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNITYARKITPLUGINSETTINGS_T2201217663_H





#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2300 = { sizeof (UnityARUserAnchorData_t1976826249)+ sizeof (RuntimeObject), sizeof(UnityARUserAnchorData_t1976826249 ), 0, 0 };
extern const int32_t g_FieldOffsetTable2300[2] = 
{
	UnityARUserAnchorData_t1976826249::get_offset_of_ptrIdentifier_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARUserAnchorData_t1976826249::get_offset_of_transform_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2301 = { sizeof (UnityARHitTestResult_t4176230866)+ sizeof (RuntimeObject), sizeof(UnityARHitTestResult_t4176230866_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2301[6] = 
{
	UnityARHitTestResult_t4176230866::get_offset_of_type_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4176230866::get_offset_of_distance_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4176230866::get_offset_of_localTransform_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4176230866::get_offset_of_worldTransform_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4176230866::get_offset_of_anchor_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	UnityARHitTestResult_t4176230866::get_offset_of_isValid_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2302 = { sizeof (UnityARAlignment_t3792119710)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2302[4] = 
{
	UnityARAlignment_t3792119710::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2303 = { sizeof (UnityARPlaneDetection_t1367733575)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2303[5] = 
{
	UnityARPlaneDetection_t1367733575::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2304 = { sizeof (ARKitSessionConfiguration_t629136898)+ sizeof (RuntimeObject), sizeof(ARKitSessionConfiguration_t629136898_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2304[3] = 
{
	ARKitSessionConfiguration_t629136898::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t629136898::get_offset_of_getPointCloudData_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitSessionConfiguration_t629136898::get_offset_of_enableLightEstimation_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2305 = { sizeof (ARKitWorldTrackingSessionConfiguration_t273386347)+ sizeof (RuntimeObject), sizeof(ARKitWorldTrackingSessionConfiguration_t273386347_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2305[12] = 
{
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_planeDetection_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_getPointCloudData_2() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_enableLightEstimation_3() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_enableAutoFocus_4() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_environmentTexturing_5() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_maximumNumberOfTrackedImages_6() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_videoFormat_7() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_referenceImagesGroupName_8() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_referenceObjectsGroupName_9() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_dynamicReferenceObjectsPtr_10() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitWorldTrackingSessionConfiguration_t273386347::get_offset_of_m_worldMapPtr_11() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2306 = { sizeof (ARKitFaceTrackingConfiguration_t386387352)+ sizeof (RuntimeObject), sizeof(ARKitFaceTrackingConfiguration_t386387352_marshaled_pinvoke), 0, 0 };
extern const int32_t g_FieldOffsetTable2306[2] = 
{
	ARKitFaceTrackingConfiguration_t386387352::get_offset_of_alignment_0() + static_cast<int32_t>(sizeof(RuntimeObject)),
	ARKitFaceTrackingConfiguration_t386387352::get_offset_of_enableLightEstimation_1() + static_cast<int32_t>(sizeof(RuntimeObject)),
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2307 = { sizeof (UnityARSessionRunOption_t942967030)+ sizeof (RuntimeObject), sizeof(int32_t), 0, 0 };
extern const int32_t g_FieldOffsetTable2307[3] = 
{
	UnityARSessionRunOption_t942967030::get_offset_of_value___1() + static_cast<int32_t>(sizeof(RuntimeObject)),
	0,
	0,
};
extern const Il2CppTypeDefinitionSizes g_typeDefinitionSize2308 = { sizeof (UnityARKitPluginSettings_t2201217663), -1, 0, 0 };
extern const int32_t g_FieldOffsetTable2308[2] = 
{
	UnityARKitPluginSettings_t2201217663::get_offset_of_m_ARKitUsesFacetracking_4(),
	UnityARKitPluginSettings_t2201217663::get_offset_of_AppRequiresARKit_5(),
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
