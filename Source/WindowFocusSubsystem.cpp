#include "WindowFocusSubsystem.h"
#include "Framework/Application/SlateApplication.h"

UWindowFocusSubsystem::UWindowFocusSubsystem() {
	FSlateApplication::Get().OnApplicationActivationStateChanged().AddUObject(this, &UWindowFocusSubsystem::OnWindowFocusChanged);
}

void UWindowFocusSubsystem::OnWindowFocusChanged(const bool bIsFocused) const
{
	OnFocusChanged.Broadcast(bIsFocused);
}
