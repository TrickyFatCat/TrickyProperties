// MIT License Copyright (c) Artyom "Tricky Fat Cat" Volkov

#pragma once

#include "CoreMinimal.h"
#include "TrickyProperty.h"
#include "TrickyPropertiesLibrary.generated.h"

struct FTrickyProperty;

/**
 * 
 */
UCLASS()
class TRICKYPROPERTIES_API UTrickyPropertiesLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm=Property))
	static bool IncreaseMinValue(UPARAM(ref) FTrickyProperty& Property, const float Amount);
	
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm=Property))
	static bool DecreaseMinValue(UPARAM(ref) FTrickyProperty& Property, const float Amount);
	
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm=Property))
	static bool IncreaseValue(UPARAM(ref) FTrickyProperty& Property, const float Amount);
	
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm=Property))
	static bool DecreaseValue(UPARAM(ref) FTrickyProperty& Property, const float Amount);
	
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm=Property))
	static bool IncreaseMaxValue(UPARAM(ref) FTrickyProperty& Property, const float Amount);
	
	UFUNCTION(BlueprintCallable, meta=(AutoCreateRefTerm=Property))
	static bool DecreaseMaxValue(UPARAM(ref) FTrickyProperty& Property, const float Amount);

	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(AutoCreateRefTerm=Property))
	static void ClampToMin(UPARAM(ref) FTrickyProperty& Property);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(AutoCreateRefTerm=Property))
	static void ClampToMax(UPARAM(ref) FTrickyProperty& Property);
	
	UFUNCTION(BlueprintCallable, BlueprintPure, meta=(AutoCreateRefTerm=Property))
	static float GetNormalizedValue(UPARAM(ref) const FTrickyProperty& Property);
};
