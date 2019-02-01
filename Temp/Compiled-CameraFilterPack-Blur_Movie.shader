// Compiled shader for iPhone, iPod Touch and iPad

//////////////////////////////////////////////////////////////////////////
// 
// NOTE: This is *not* a valid shader file, the contents are provided just
// for information and for debugging purposes only.
// 
//////////////////////////////////////////////////////////////////////////
// Skipping shader variants that would not be included into build of current scene.

Shader "CameraFilterPack/Blur_Movie" {
Properties {
 _MainTex ("Base (RGB)", 2D) = "white" { }
 _TimeX ("Time", Range(0.000000,1.000000)) = 1.000000
 _Distortion ("_Distortion", Range(0.000000,1.000000)) = 0.300000
 _ScreenResolution ("_ScreenResolution", Vector) = (0.000000,0.000000,0.000000,0.000000)
 _Radius ("_Radius", Range(0.000000,1000.000000)) = 700.000000
 _Factor ("_Factor", Range(0.000000,1000.000000)) = 200.000000
}
SubShader { 
 Pass {
  ZTest Always
  //////////////////////////////////
  //                              //
  //      Compiled programs       //
  //                              //
  //////////////////////////////////
//////////////////////////////////////////////////////
No keywords set in this variant.
-- Hardware tier variant: Tier 1
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "TexCoord"

Constant Buffer "VGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_MatrixVP at 64
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 COLOR0 [[ attribute(1) ]] ;
    float2 TEXCOORD0 [[ attribute(2) ]] ;
};

struct Mtl_VertexOut
{
    half2 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 mtl_Position [[ position ]];
    half4 COLOR0 [[ user(COLOR0) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    output.TEXCOORD0.xy = half2(input.TEXCOORD0.xy);
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat0 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat0.zzzz, u_xlat1);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat0.wwww, u_xlat1);
    output.COLOR0 = half4(input.COLOR0);
    return output;
}


-- Hardware tier variant: Tier 1
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  Vector4 _ScreenResolution at 0
  Float _Radius at 16
  Float _Factor at 20
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float4 _ScreenResolution;
    float _Radius;
    float _Factor;
};

struct Mtl_FragmentIn
{
    half2 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
};

struct Mtl_FragmentOut
{
    float4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float2 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float u_xlat3;
    float4 u_xlat4;
    float4 u_xlat5;
    float2 u_xlat6;
    half4 u_xlat16_6;
    float4 u_xlat7;
    half4 u_xlat16_7;
    float u_xlat8;
    float u_xlat11;
    bool u_xlatb11;
    float2 u_xlat16;
    float2 u_xlat19;
    bool u_xlatb19;
    u_xlat0.xy = float2(FGlobals._Factor, FGlobals._Radius) / FGlobals._ScreenResolution.yx;
    u_xlat0.x = u_xlat0.x * 64.0;
    u_xlat8 = u_xlat0.y + u_xlat0.y;
    u_xlat16.xy = float2(1.0, 1.0) / FGlobals._ScreenResolution.xy;
    u_xlat1.x = float(0.0);
    u_xlat1.y = float(0.0);
    u_xlat1.z = float(0.0);
    u_xlat1.w = float(0.0);
    u_xlat2.x = float(0.0);
    u_xlat2.y = float(0.0);
    u_xlat2.z = float(0.0);
    u_xlat2.w = float(0.0);
    u_xlat3 = -5.0;
    while(true){
        u_xlatb11 = u_xlat3>=5.0;
        if(u_xlatb11){break;}
        u_xlat4 = u_xlat1;
        u_xlat5 = u_xlat2;
        u_xlat11 = -5.0;
        while(true){
            u_xlatb19 = u_xlat11>=5.0;
            if(u_xlatb19){break;}
            u_xlat6.x = u_xlat3 + u_xlat11;
            u_xlat6.y = (-u_xlat11) + u_xlat3;
            u_xlat19.xy = u_xlat16.xy * u_xlat6.xy;
            u_xlat19.xy = fma(u_xlat19.xy, float2(u_xlat8), float2(input.TEXCOORD0.xy));
            u_xlat16_6 = _MainTex.sample(sampler_MainTex, u_xlat19.xy, level(0.0));
            u_xlat16_7 = u_xlat16_6 * u_xlat16_6;
            u_xlat16_7 = u_xlat16_6 * u_xlat16_7;
            u_xlat7 = fma(float4(u_xlat16_7), u_xlat0.xxxx, float4(1.0, 1.0, 1.0, 1.0));
            u_xlat4 = fma(float4(u_xlat16_6), u_xlat7, u_xlat4);
            u_xlat5 = u_xlat5 + u_xlat7;
            u_xlat11 = u_xlat11 + 1.0;
        }
        u_xlat1 = u_xlat4;
        u_xlat2 = u_xlat5;
        u_xlat3 = u_xlat3 + 1.0;
    }
    output.SV_Target0 = u_xlat1 / u_xlat2;
    return output;
}


//////////////////////////////////////////////////////
No keywords set in this variant.
-- Hardware tier variant: Tier 2
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "TexCoord"

Constant Buffer "VGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_MatrixVP at 64
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 COLOR0 [[ attribute(1) ]] ;
    float2 TEXCOORD0 [[ attribute(2) ]] ;
};

struct Mtl_VertexOut
{
    half2 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 mtl_Position [[ position ]];
    half4 COLOR0 [[ user(COLOR0) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    output.TEXCOORD0.xy = half2(input.TEXCOORD0.xy);
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat0 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat0.zzzz, u_xlat1);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat0.wwww, u_xlat1);
    output.COLOR0 = half4(input.COLOR0);
    return output;
}


-- Hardware tier variant: Tier 2
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  Vector4 _ScreenResolution at 0
  Float _Radius at 16
  Float _Factor at 20
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float4 _ScreenResolution;
    float _Radius;
    float _Factor;
};

struct Mtl_FragmentIn
{
    half2 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
};

struct Mtl_FragmentOut
{
    float4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float2 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float u_xlat3;
    float4 u_xlat4;
    float4 u_xlat5;
    float2 u_xlat6;
    half4 u_xlat16_6;
    float4 u_xlat7;
    half4 u_xlat16_7;
    float u_xlat8;
    float u_xlat11;
    bool u_xlatb11;
    float2 u_xlat16;
    float2 u_xlat19;
    bool u_xlatb19;
    u_xlat0.xy = float2(FGlobals._Factor, FGlobals._Radius) / FGlobals._ScreenResolution.yx;
    u_xlat0.x = u_xlat0.x * 64.0;
    u_xlat8 = u_xlat0.y + u_xlat0.y;
    u_xlat16.xy = float2(1.0, 1.0) / FGlobals._ScreenResolution.xy;
    u_xlat1.x = float(0.0);
    u_xlat1.y = float(0.0);
    u_xlat1.z = float(0.0);
    u_xlat1.w = float(0.0);
    u_xlat2.x = float(0.0);
    u_xlat2.y = float(0.0);
    u_xlat2.z = float(0.0);
    u_xlat2.w = float(0.0);
    u_xlat3 = -5.0;
    while(true){
        u_xlatb11 = u_xlat3>=5.0;
        if(u_xlatb11){break;}
        u_xlat4 = u_xlat1;
        u_xlat5 = u_xlat2;
        u_xlat11 = -5.0;
        while(true){
            u_xlatb19 = u_xlat11>=5.0;
            if(u_xlatb19){break;}
            u_xlat6.x = u_xlat3 + u_xlat11;
            u_xlat6.y = (-u_xlat11) + u_xlat3;
            u_xlat19.xy = u_xlat16.xy * u_xlat6.xy;
            u_xlat19.xy = fma(u_xlat19.xy, float2(u_xlat8), float2(input.TEXCOORD0.xy));
            u_xlat16_6 = _MainTex.sample(sampler_MainTex, u_xlat19.xy, level(0.0));
            u_xlat16_7 = u_xlat16_6 * u_xlat16_6;
            u_xlat16_7 = u_xlat16_6 * u_xlat16_7;
            u_xlat7 = fma(float4(u_xlat16_7), u_xlat0.xxxx, float4(1.0, 1.0, 1.0, 1.0));
            u_xlat4 = fma(float4(u_xlat16_6), u_xlat7, u_xlat4);
            u_xlat5 = u_xlat5 + u_xlat7;
            u_xlat11 = u_xlat11 + 1.0;
        }
        u_xlat1 = u_xlat4;
        u_xlat2 = u_xlat5;
        u_xlat3 = u_xlat3 + 1.0;
    }
    output.SV_Target0 = u_xlat1 / u_xlat2;
    return output;
}


//////////////////////////////////////////////////////
No keywords set in this variant.
-- Hardware tier variant: Tier 3
-- Vertex shader for "metal":
Uses vertex data channel "Vertex"
Uses vertex data channel "Tangent"
Uses vertex data channel "TexCoord"

Constant Buffer "VGlobals" (128 bytes) on slot 0 {
  Matrix4x4 unity_ObjectToWorld at 0
  Matrix4x4 unity_MatrixVP at 64
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

struct VGlobals_Type
{
    float4 hlslcc_mtx4x4unity_ObjectToWorld[4];
    float4 hlslcc_mtx4x4unity_MatrixVP[4];
};

struct Mtl_VertexIn
{
    float4 POSITION0 [[ attribute(0) ]] ;
    float4 COLOR0 [[ attribute(1) ]] ;
    float2 TEXCOORD0 [[ attribute(2) ]] ;
};

struct Mtl_VertexOut
{
    half2 TEXCOORD0 [[ user(TEXCOORD0) ]];
    float4 mtl_Position [[ position ]];
    half4 COLOR0 [[ user(COLOR0) ]];
};

vertex Mtl_VertexOut xlatMtlMain(
    constant VGlobals_Type& VGlobals [[ buffer(0) ]],
    Mtl_VertexIn input [[ stage_in ]])
{
    Mtl_VertexOut output;
    float4 u_xlat0;
    float4 u_xlat1;
    output.TEXCOORD0.xy = half2(input.TEXCOORD0.xy);
    u_xlat0 = input.POSITION0.yyyy * VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[1];
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[0], input.POSITION0.xxxx, u_xlat0);
    u_xlat0 = fma(VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[2], input.POSITION0.zzzz, u_xlat0);
    u_xlat0 = u_xlat0 + VGlobals.hlslcc_mtx4x4unity_ObjectToWorld[3];
    u_xlat1 = u_xlat0.yyyy * VGlobals.hlslcc_mtx4x4unity_MatrixVP[1];
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[0], u_xlat0.xxxx, u_xlat1);
    u_xlat1 = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[2], u_xlat0.zzzz, u_xlat1);
    output.mtl_Position = fma(VGlobals.hlslcc_mtx4x4unity_MatrixVP[3], u_xlat0.wwww, u_xlat1);
    output.COLOR0 = half4(input.COLOR0);
    return output;
}


-- Hardware tier variant: Tier 3
-- Fragment shader for "metal":
Set 2D Texture "_MainTex" to slot 0

Constant Buffer "FGlobals" (24 bytes) on slot 0 {
  Vector4 _ScreenResolution at 0
  Float _Radius at 16
  Float _Factor at 20
}

Shader Disassembly:
#include <metal_stdlib>
#include <metal_texture>
using namespace metal;

#if !(__HAVE_FMA__)
#define fma(a,b,c) ((a) * (b) + (c))
#endif

#ifndef XLT_REMAP_O
	#define XLT_REMAP_O {0, 1, 2, 3, 4, 5, 6, 7}
#endif
constexpr constant uint xlt_remap_o[] = XLT_REMAP_O;
struct FGlobals_Type
{
    float4 _ScreenResolution;
    float _Radius;
    float _Factor;
};

struct Mtl_FragmentIn
{
    half2 TEXCOORD0 [[ user(TEXCOORD0) ]] ;
};

struct Mtl_FragmentOut
{
    float4 SV_Target0 [[ color(xlt_remap_o[0]) ]];
};

fragment Mtl_FragmentOut xlatMtlMain(
    constant FGlobals_Type& FGlobals [[ buffer(0) ]],
    sampler sampler_MainTex [[ sampler (0) ]],
    texture2d<half, access::sample > _MainTex [[ texture(0) ]] ,
    Mtl_FragmentIn input [[ stage_in ]])
{
    Mtl_FragmentOut output;
    float2 u_xlat0;
    float4 u_xlat1;
    float4 u_xlat2;
    float u_xlat3;
    float4 u_xlat4;
    float4 u_xlat5;
    float2 u_xlat6;
    half4 u_xlat16_6;
    float4 u_xlat7;
    half4 u_xlat16_7;
    float u_xlat8;
    float u_xlat11;
    bool u_xlatb11;
    float2 u_xlat16;
    float2 u_xlat19;
    bool u_xlatb19;
    u_xlat0.xy = float2(FGlobals._Factor, FGlobals._Radius) / FGlobals._ScreenResolution.yx;
    u_xlat0.x = u_xlat0.x * 64.0;
    u_xlat8 = u_xlat0.y + u_xlat0.y;
    u_xlat16.xy = float2(1.0, 1.0) / FGlobals._ScreenResolution.xy;
    u_xlat1.x = float(0.0);
    u_xlat1.y = float(0.0);
    u_xlat1.z = float(0.0);
    u_xlat1.w = float(0.0);
    u_xlat2.x = float(0.0);
    u_xlat2.y = float(0.0);
    u_xlat2.z = float(0.0);
    u_xlat2.w = float(0.0);
    u_xlat3 = -5.0;
    while(true){
        u_xlatb11 = u_xlat3>=5.0;
        if(u_xlatb11){break;}
        u_xlat4 = u_xlat1;
        u_xlat5 = u_xlat2;
        u_xlat11 = -5.0;
        while(true){
            u_xlatb19 = u_xlat11>=5.0;
            if(u_xlatb19){break;}
            u_xlat6.x = u_xlat3 + u_xlat11;
            u_xlat6.y = (-u_xlat11) + u_xlat3;
            u_xlat19.xy = u_xlat16.xy * u_xlat6.xy;
            u_xlat19.xy = fma(u_xlat19.xy, float2(u_xlat8), float2(input.TEXCOORD0.xy));
            u_xlat16_6 = _MainTex.sample(sampler_MainTex, u_xlat19.xy, level(0.0));
            u_xlat16_7 = u_xlat16_6 * u_xlat16_6;
            u_xlat16_7 = u_xlat16_6 * u_xlat16_7;
            u_xlat7 = fma(float4(u_xlat16_7), u_xlat0.xxxx, float4(1.0, 1.0, 1.0, 1.0));
            u_xlat4 = fma(float4(u_xlat16_6), u_xlat7, u_xlat4);
            u_xlat5 = u_xlat5 + u_xlat7;
            u_xlat11 = u_xlat11 + 1.0;
        }
        u_xlat1 = u_xlat4;
        u_xlat2 = u_xlat5;
        u_xlat3 = u_xlat3 + 1.0;
    }
    output.SV_Target0 = u_xlat1 / u_xlat2;
    return output;
}


 }
}
}