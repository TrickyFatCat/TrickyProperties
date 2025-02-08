// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov


#include "TrickyPropertiesLibrary.h"

bool UTrickyPropertiesLibrary::IncreaseMinValue(FTrickyProperty& Property, const float Amount)
{
	return Property.IncreaseMinValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseMinValue(FTrickyProperty& Property, const float Amount)
{
	return Property.DecreaseMinValue(Amount);
}

bool UTrickyPropertiesLibrary::IncreaseValue(FTrickyProperty& Property, const float Amount)
{
	return Property.IncreaseValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseValue(FTrickyProperty& Property, const float Amount)
{
	return Property.DecreaseValue(Amount);
}

bool UTrickyPropertiesLibrary::IncreaseMaxValue(FTrickyProperty& Property, const float Amount)
{
	return Property.IncreaseMaxValue(Amount);
}

bool UTrickyPropertiesLibrary::DecreaseMaxValue(FTrickyProperty& Property, const float Amount)
{
	return Property.DecreaseMaxValue(Amount);
}

void UTrickyPropertiesLibrary::ClampToMin(FTrickyProperty& Property)
{
	Property.ClampToMin();
}

void UTrickyPropertiesLibrary::ClampToMax(FTrickyProperty& Property)
{
	Property.ClampToMax();
}

float UTrickyPropertiesLibrary::GetNormalizedValue(const FTrickyProperty& Property)
{
	return Property.GetNormalizedValue();
}
