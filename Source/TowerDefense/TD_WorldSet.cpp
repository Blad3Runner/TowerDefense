#include "TD_WorldSet.h"
#include "AbilitySystemGlobals.h"
#include "Net/UnrealNetwork.h"
void UTD_WorldSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_WorldSet, Level, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_WorldSet, CastleDamage, COND_None, REPNOTIFY_Always);
}
void UTD_WorldSet::OnRep_Level(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_WorldSet, Level, OldValue);
}
void UTD_WorldSet::OnRep_CastleDamage(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_WorldSet, CastleDamage, OldValue);
}