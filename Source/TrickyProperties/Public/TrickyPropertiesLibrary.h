// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov

#pragma once

#include "CoreMinimal.h"
#include "TrickyPropertiesLibrary.generated.h"

struct FTrickyPropertyFloat;
struct FTrickyPropertyInt;

/**
 * Library which contains blueprint wrapper functions for tricky properties
 */
UCLASS()
class TRICKYPROPERTIES_API UTrickyPropertiesLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	// TrickyPropertyFloat Functions
	
	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMinValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMinValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMaxValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMaxValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property, const float Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static void ClampToMinFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static void ClampToMaxFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static float GetNormalizedValueFloat(UPARAM(ref) const FTrickyPropertyFloat& Property);
	
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMinValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property);
	
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMaxValueFloat(UPARAM(ref) FTrickyPropertyFloat& Property);

	// TrickyPropertyInt Functions

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMinValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMinValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool IncreaseMaxValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties)
	static bool DecreaseMaxValueInt(UPARAM(ref) FTrickyPropertyInt& Property, const int32 Amount);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static void ClampToMinInt(UPARAM(ref) FTrickyPropertyInt& Property);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static void ClampToMaxInt(UPARAM(ref) FTrickyPropertyInt& Property);

	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static float GetNormalizedValueInt(UPARAM(ref) const FTrickyPropertyInt& Property);
	
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMinValueInt(UPARAM(ref) FTrickyPropertyInt& Property);
	
	UFUNCTION(BlueprintCallable, Category=TrickyProperties, BlueprintPure)
	static bool ReachedMaxValueInt(UPARAM(ref) FTrickyPropertyInt& Property);
};
