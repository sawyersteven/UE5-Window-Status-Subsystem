#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "WindowFocusSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFocusChanged, bool, IsFocused);

UCLASS()
class UWindowFocusSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UWindowFocusSubsystem();

	UPROPERTY(BlueprintAssignable)
	FOnFocusChanged OnFocusChanged;
	
	void OnWindowFocusChanged(const bool bIsFocused) const;
};
