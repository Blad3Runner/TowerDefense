#include "TD_MovementSet.h"
#include "AbilitySystemGlobals.h"
#include "Net/UnrealNetwork.h"
void UTD_MovementSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_MovementSet, Speed, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_MovementSet, Size, COND_None, REPNOTIFY_Always);
}
void UTD_MovementSet::OnRep_Speed(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_MovementSet, Speed, OldValue);
}
void UTD_MovementSet::OnRep_Size(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_MovementSet, Size, OldValue);
}