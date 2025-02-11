// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov


#include "TrickyPropertiesLibrary.h"

#include "TrickyPropertyFloat.h"
#include "TrickyPropertyInt.h"

bool UTrickyPropertiesLibrary::IncreaseMinValueFloat(FTrickyPropertyFloat& Property, const float Amount)
{
	return Property.IncreaseMinValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseMinValueFloat(FTrickyPropertyFloat& Property, const float Amount)
{
	return Property.DecreaseMinValue(Amount);
}

bool UTrickyPropertiesLibrary::IncreaseValueFloat(FTrickyPropertyFloat& Property, const float Amount)
{
	return Property.IncreaseValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseValueFloat(FTrickyPropertyFloat& Property, const float Amount)
{
	return Property.DecreaseValue(Amount);
}

bool UTrickyPropertiesLibrary::IncreaseMaxValueFloat(FTrickyPropertyFloat& Property, const float Amount)
{
	return Property.IncreaseMaxValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseMaxValueFloat(FTrickyPropertyFloat& Property, const float Amount)
{
	return Property.DecreaseMaxValue(Amount);
}

void UTrickyPropertiesLibrary::ClampToMinFloat(FTrickyPropertyFloat& Property)
{
	Property.ClampToMin();
}

void UTrickyPropertiesLibrary::ClampToMaxFloat(FTrickyPropertyFloat& Property)
{
	Property.ClampToMax();
}

float UTrickyPropertiesLibrary::GetNormalizedValueFloat(const FTrickyPropertyFloat& Property)
{
	return Property.GetNormalizedValue();
}

bool UTrickyPropertiesLibrary::ReachedMinValueFloat(FTrickyPropertyFloat& Property)
{
	return Property.ReachedMinValue();
}

bool UTrickyPropertiesLibrary::ReachedMaxValueFloat(FTrickyPropertyFloat& Property)
{
	return Property.ReachedMaxValue();
}


bool UTrickyPropertiesLibrary::IncreaseMinValueInt(FTrickyPropertyInt& Property, const int32 Amount)
{
	return Property.IncreaseMinValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseMinValueInt(FTrickyPropertyInt& Property, const int32 Amount)
{
	return Property.DecreaseMinValue(Amount);
}

bool UTrickyPropertiesLibrary::IncreaseValueInt(FTrickyPropertyInt& Property, const int32 Amount)
{
	return Property.IncreaseValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseValueInt(FTrickyPropertyInt& Property, const int32 Amount)
{
	return Property.DecreaseValue(Amount);
}

bool UTrickyPropertiesLibrary::IncreaseMaxValueInt(FTrickyPropertyInt& Property, const int32 Amount)
{
	return Property.IncreaseMaxValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseMaxValueInt(FTrickyPropertyInt& Property, const int32 Amount)
{
	return Property.DecreaseMaxValue(Amount);
}

void UTrickyPropertiesLibrary::ClampToMinInt(FTrickyPropertyInt& Property)
{
	Property.ClampToMin();
}

void UTrickyPropertiesLibrary::ClampToMaxInt(FTrickyPropertyInt& Property)
{
	Property.ClampToMax();
}

float UTrickyPropertiesLibrary::GetNormalizedValueInt(const FTrickyPropertyInt& Property)
{
	return Property.GetNormalizedValue();
}

bool UTrickyPropertiesLibrary::ReachedMinValueInt(FTrickyPropertyInt& Property)
{
	return Property.ReachedMinValue();
}

bool UTrickyPropertiesLibrary::ReachedMaxValueInt(FTrickyPropertyInt& Property)
{
	return Property.ReachedMaxValue();
}
