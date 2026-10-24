class UGE_Map_Athena_Vitality_Health_C : public UGE_Map_Fortitude_To_Health_C
{
public:
    TArray<struct FGameplayModifierInfo> Modifiers = {
        {
            "Attribute": {
                "AttributeName": "MaxHealth",
                "Attribute": "StructProperty'/Script/FortniteGame.FortHealthSet:MaxHealth'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortHealthSet'"
            },
            "ModifierOp": EGameplayModOp::Override,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 100,
                    "Curve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
                    }
                },
                "AttributeBasedMagnitude": {
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
                    "BackingAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "Fortitude",
                            "Attribute": "StructProperty'/Script/FortniteGame.FortCharacterAttrSet:Fortitude'",
                            "AttributeOwner": "Class'/Script/FortniteGame.FortCharacterAttrSet'"
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
                    },
                    "AttributeCurve": {
                        "CurveTable": "CurveTable'FortniteGame/Content/Balance/DataTables/CombatEffects.CombatEffects'",
                        "RowName": FName("Abilities.Generic.1PercentScalar")
                    },
                    "AttributeCalculationType": EAttributeBasedFloatCalculationType::AttributeMagnitude,
                    "FinalChannel": EGameplayModEvaluationChannel::Channel0,
                    "SourceTagFilter": FGameplayTagContainer({}),
                    "TargetTagFilter": FGameplayTagContainer({})
                },
                "CustomMagnitude": {
                    "CalculationClassMagnitude": "Class'/Script/FortniteGame.FromFortitudeModMagnitudeCalculation'",
                    "Coefficient": {
                        "Value": 0.01,
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
                        "Value": 1,
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
        },
        {
            "Attribute": {
                "AttributeName": "HealthRegenRate",
                "Attribute": "StructProperty'/Script/FortniteGame.FortRegenHealthSet:HealthRegenRate'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortRegenHealthSet'"
            },
            "ModifierOp": EGameplayModOp::Override,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 0,
                    "Curve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
                    }
                },
                "AttributeBasedMagnitude": {
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
                    "BackingAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "",
                            "Attribute": nullptr,
                            "AttributeOwner": nullptr
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
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
        },
        {
            "Attribute": {
                "AttributeName": "Shield",
                "Attribute": "StructProperty'/Script/FortniteGame.FortHealthSet:Shield'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortHealthSet'"
            },
            "ModifierOp": EGameplayModOp::Override,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 100,
                    "Curve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
                    }
                },
                "AttributeBasedMagnitude": {
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
                    "BackingAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "",
                            "Attribute": nullptr,
                            "AttributeOwner": nullptr
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
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
        },
        {
            "Attribute": {
                "AttributeName": "ShieldRegenRate",
                "Attribute": "StructProperty'/Script/FortniteGame.FortRegenHealthSet:ShieldRegenRate'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortRegenHealthSet'"
            },
            "ModifierOp": EGameplayModOp::Override,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 0,
                    "Curve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
                    }
                },
                "AttributeBasedMagnitude": {
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
                    "BackingAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "",
                            "Attribute": nullptr,
                            "AttributeOwner": nullptr
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
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
        },
        {
            "Attribute": {
                "AttributeName": "HealthRegenThreshold",
                "Attribute": "StructProperty'/Script/FortniteGame.FortRegenHealthSet:HealthRegenThreshold'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortRegenHealthSet'"
            },
            "ModifierOp": EGameplayModOp::Override,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 0,
                    "Curve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
                    }
                },
                "AttributeBasedMagnitude": {
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
                    "BackingAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "",
                            "Attribute": nullptr,
                            "AttributeOwner": nullptr
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
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
        },
        {
            "Attribute": {
                "AttributeName": "ShieldRegenThreshold",
                "Attribute": "StructProperty'/Script/FortniteGame.FortRegenHealthSet:ShieldRegenThreshold'",
                "AttributeOwner": "Class'/Script/FortniteGame.FortRegenHealthSet'"
            },
            "ModifierOp": EGameplayModOp::Override,
            "Magnitude": {
                "Value": 0,
                "Curve": {
                    "CurveTable": nullptr,
                    "RowName": FName("None")
                }
            },
            "ModifierMagnitude": {
                "MagnitudeCalculationType": EGameplayEffectMagnitudeCalculation::ScalableFloat,
                "ScalableFloatMagnitude": {
                    "Value": 0,
                    "Curve": {
                        "CurveTable": nullptr,
                        "RowName": FName("None")
                    }
                },
                "AttributeBasedMagnitude": {
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
                    "BackingAttribute": {
                        "AttributeToCapture": {
                            "AttributeName": "",
                            "Attribute": nullptr,
                            "AttributeOwner": nullptr
                        },
                        "AttributeSource": EGameplayEffectAttributeCaptureSource::Source,
                        "bSnapshot": false
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
    };
};