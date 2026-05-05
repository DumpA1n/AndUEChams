
#pragma once

// Basic file containing function-implementations from Basic.hpp
#include "Basic.h"

#include "CoreUObject_classes.hpp"

namespace SDK
{

class UClass* BasicFilesImpleUtils::FindClassByName(const std::string& Name)
{
	return UObject::FindClassFast(Name);
}

class UClass* BasicFilesImpleUtils::FindClassByFullName(const std::string& Name)
{
	return UObject::FindClass(Name);
}

std::string BasicFilesImpleUtils::GetObjectName(class UClass* Class)
{
	return Class->GetName();
}

int32 BasicFilesImpleUtils::GetObjectIndex(class UClass* Class)
{
	return Class->InternalIndex;
}

uint64 BasicFilesImpleUtils::GetObjFNameAsUInt64(class UClass* Class)
{
	return *reinterpret_cast<uint64*>(&Class->NamePrivate);
}

class UObject* BasicFilesImpleUtils::GetObjectByIndex(int32 Index)
{
	return UObject::GObjects->GetByIndex(Index);
}

UFunction* BasicFilesImpleUtils::FindFunctionByFName(const FName* Name)
{
	for (int i = 0; i < UObject::GObjects->Num(); ++i)
	{
		UObject* Object = UObject::GObjects->GetByIndex(i);

		if (!Object)
			continue;

		if (Object->NamePrivate == *Name)
			return static_cast<UFunction*>(Object);
	}

	return nullptr;
}


// Predefined Function

class UObject* FWeakObjectPtr::Get() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}


// Predefined Function

class UObject* FWeakObjectPtr::operator->() const
{
	return UObject::GObjects->GetByIndex(ObjectIndex);
}


// Predefined Function

bool FWeakObjectPtr::operator==(const FWeakObjectPtr& Other) const
{
	return ObjectIndex == Other.ObjectIndex;
}


// Predefined Function

bool FWeakObjectPtr::operator!=(const FWeakObjectPtr& Other) const
{
	return ObjectIndex != Other.ObjectIndex;
}


// Predefined Function

bool FWeakObjectPtr::operator==(const class UObject* Other) const
{
	return ObjectIndex == Other->InternalIndex;
}


// Predefined Function

bool FWeakObjectPtr::operator!=(const class UObject* Other) const
{
	return ObjectIndex != Other->InternalIndex;
}

}

