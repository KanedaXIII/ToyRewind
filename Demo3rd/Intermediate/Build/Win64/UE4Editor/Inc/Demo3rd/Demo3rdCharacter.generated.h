// Copyright 1998-2016 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectBase.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEMO3RD_Demo3rdCharacter_generated_h
#error "Demo3rdCharacter.generated.h already included, missing '#pragma once' in Demo3rdCharacter.h"
#endif
#define DEMO3RD_Demo3rdCharacter_generated_h

#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_RPC_WRAPPERS
#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesADemo3rdCharacter(); \
	friend DEMO3RD_API class UClass* Z_Construct_UClass_ADemo3rdCharacter(); \
	public: \
	DECLARE_CLASS(ADemo3rdCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Demo3rd"), NO_API) \
	DECLARE_SERIALIZER(ADemo3rdCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesADemo3rdCharacter(); \
	friend DEMO3RD_API class UClass* Z_Construct_UClass_ADemo3rdCharacter(); \
	public: \
	DECLARE_CLASS(ADemo3rdCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Demo3rd"), NO_API) \
	DECLARE_SERIALIZER(ADemo3rdCharacter) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemo3rdCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemo3rdCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemo3rdCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemo3rdCharacter); \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ADemo3rdCharacter(const ADemo3rdCharacter& InCopy); \
public:


#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private copy-constructor, should never be used */ \
	NO_API ADemo3rdCharacter(const ADemo3rdCharacter& InCopy); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemo3rdCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemo3rdCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemo3rdCharacter)


#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_6_PROLOG
#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_RPC_WRAPPERS \
	Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_INCLASS \
	Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_INCLASS_NO_PURE_DECLS \
	Demo3rd_Source_Demo3rd_Demo3rdCharacter_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Demo3rd_Source_Demo3rd_Demo3rdCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
