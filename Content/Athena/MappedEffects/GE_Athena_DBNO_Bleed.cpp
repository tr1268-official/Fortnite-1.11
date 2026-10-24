class UGE_Athena_DBNO_Bleed_C : public UGET_PeriodicEnergyDamage_C
{
public:
    enum DurationPolicy = EGameplayEffectDurationType::Infinite;
    struct FScalableFloat Period = {
        "Value": 1,
        "Curve": {
            "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
            "RowName": FName("Default.DBNO.BleedTick")
        }
    };
    TArray<struct FGameplayEffectExecutionDefinition> Executions = {
        {
            "CalculationClass": "Class'/Script/FortniteGame.FortDamageFormulaExecutionCalculation'",
            "PassedInTags": FGameplayTagContainer({}),
            "CalculationModifiers": {
                {
                    "CapturedAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "OutgoingAbilityDamage",
                            "Attribute": "StructProperty'/Script/FortniteGame.FortDamageSet:OutgoingAbilityDamage'",
                            "AttributeOwner": "Class'/Script/FortniteGame.FortDamageSet'"
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": true
                    },
                    "ModifierOp": EGameplayModOp::Override,
                    "ModifierMagnitude": {
                        "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                        "ScalableFloatMagnitude": {
                            "Value": 1,
                            "Curve": {
                                "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                                "RowName": FName("Default.DBNO.BleedDamage")
                            }
                        },
                        "AttributeBasedMagnitude": {
                            "Coefficient": {
                                "Value": 1,
                                "Curve": {
                                    "CurveTable": "CurveTable'FortniteGame/Content/Athena/Balance/DataTables/AthenaGameData.AthenaGameData'",
                                    "RowName": FName("Default.SafeZone.Damage")
                                }
                            },
                            "PreMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "PostMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "BackingAttribute": {
                                "AttributeToCapture": {
                                    "AttributeName": "MaxHealth",
                                    "Attribute": "StructProperty'/Script/FortniteGame.FortHealthSet:MaxHealth'",
                                    "AttributeOwner": "Class'/Script/FortniteGame.FortHealthSet'"
                                },
                                "AttributeSource": EGameplayEffectAttributeCaptureSource::Target,
                                "bSnapshot": true
                            },
                            "AttributeCurve": {
                                "CurveTable": nullptr,
                                "RowName": FName("None")
                            },
                            "AttributeCalculationType": EAttributeBasedFloatCalculationType::AttributeMagnitude,
                            "FinalChannel": EGameplayModEvaluationChannel::Channel0,
                            "SourceTagFilter": FGameplayTagContainer({}),
                            "TargetTagFilter": FGameplayTagContainer({})
                        },
                        "CustomMagnitude": {
                            "CalculationClassMagnitude": nullptr,
                            "Coefficient": {
                                "Value": 1,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "PreMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "PostMultiplyAdditiveValue": {
                                "Value": 0,
                                "Curve": {
                                    "CurveTable": nullptr,
                                    "RowName": FName("None")
                                }
                            },
                            "FinalLookupCurve": {
                                "CurveTable": nullptr,
                                "RowName": FName("None")
                            }
                        },
                        "SetByCallerMagnitude": {
                            "DataName": FName("None"),
                            "DataTag": {
                                "TagName": FName("None")
                            }
                        }
                    },
                    "EvaluationChannelSettings": {
                        "Channel": EGameplayModEvaluationChannel::Channel0
                    },
                    "SourceTags": {
                        "RequireTags": FGameplayTagContainer({}),
                        "IgnoreTags": FGameplayTagContainer({})
                    },
                    "TargetTags": {
                        "RequireTags": FGameplayTagContainer({}),
                        "IgnoreTags": FGameplayTagContainer({})
                    }
                }
            },
            "ConditionalGameplayEffects": {}
        }
    };
    TArray<struct FGameplayEffectCue> GameplayCues = {
        {
            "MagnitudeAttribute": {
                "AttributeName": "Damage",
                "Attribute": "StructProperty'/Script/FortniteGame.FortHealthSet:Damage'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortHealthSet'"
            },
            "MinLevel": 0,
            "MaxLevel": 0,
            "GameplayCueTags": FGameplayTagContainer({
                FGameplayTag::RequestGameplayTag(FName("GameplayCue.Athena.DBNOBleed"))
            })
        }
    };
    struct FInheritedTagContainer InheritableGameplayEffectTags = {
        "CombinedTags": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Damage")),
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Effect.Periodic")),
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Effect.Negative")),
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Damage.Physical")),
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Damage.Physical.Energy")),
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Damage.DBNOBleedOut"))
        }),
        "Added": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Damage.DBNOBleedOut"))
        }),
        "Removed": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Status.Afflicted"))
        })
    };
    struct FInheritedTagContainer InheritableOwnedTagsContainer = {
        "CombinedTags": FGameplayTagContainer({}),
        "Removed": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Status.Afflicted"))
        })
    };
    struct FGameplayTagRequirements OngoingTagRequirements = {
        "IgnoreTags": FGameplayTagContainer({
            FGameplayTag::RequestGameplayTag(FName("Gameplay.Status.DBNOBeingRevived"))
        })
    };
    struct FGameplayTagRequirements ApplicationTagRequirements = {
        "IgnoreTags": FGameplayTagContainer({})
    };
    enum StackingType = EGameplayEffectStackingType::None;
    int32 StackLimitCount = 0;
};