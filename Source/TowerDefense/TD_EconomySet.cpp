#include "TD_EconomySet.h"
#include "AbilitySystemGlobals.h"
#include "Net/UnrealNetwork.h"
void UTD_EconomySet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_EconomySet, Reward, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_EconomySet, Cost, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_EconomySet, SellValue, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_EconomySet, Currency, COND_None, REPNOTIFY_Always);
    DOREPLIFETIME_CONDITION_NOTIFY(UTD_EconomySet, StealAmount, COND_None, REPNOTIFY_Always);
}
void UTD_EconomySet::OnRep_Reward(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_EconomySet, Reward, OldValue);
}
void UTD_EconomySet::OnRep_Cost(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_EconomySet, Cost, OldValue);
}
void UTD_EconomySet::OnRep_SellValue(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_EconomySet, SellValue, OldValue);
}
void UTD_EconomySet::OnRep_Currency(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_EconomySet, Currency, OldValue);
}
void UTD_EconomySet::OnRep_StealAmount(const FGameplayAttributeData& OldValue)
{
    GAMEPLAYATTRIBUTE_REPNOTIFY(UTD_EconomySet, StealAmount, OldValue);
}