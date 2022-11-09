#ifndef UE4SS_SDK_AnimBP_Rover_HPP
#define UE4SS_SDK_AnimBP_Rover_HPP

class UAnimBP_Rover_C : public UVehicleAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_3;
    FAnimNode_LookAt AnimGraphNode_LookAt_13;
    FAnimNode_LookAt AnimGraphNode_LookAt_12;
    FAnimNode_LookAt AnimGraphNode_LookAt_11;
    FAnimNode_LookAt AnimGraphNode_LookAt_10;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_15;
    FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_2;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_14;
    FAnimNode_LookAt AnimGraphNode_LookAt_9;
    FAnimNode_LookAt AnimGraphNode_LookAt_8;
    FAnimNode_LookAt AnimGraphNode_LookAt_7;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_13;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_12;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_11;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_10;
    FAnimNode_LookAt AnimGraphNode_LookAt_6;
    FAnimNode_LookAt AnimGraphNode_LookAt_5;
    FAnimNode_LookAt AnimGraphNode_LookAt_4;
    FAnimNode_LookAt AnimGraphNode_LookAt_3;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_9;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_8;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_7;
    FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier_1;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_6;
    FAnimNode_LookAt AnimGraphNode_LookAt_2;
    FAnimNode_LookAt AnimGraphNode_LookAt_1;
    FAnimNode_LookAt AnimGraphNode_LookAt;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_5;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_4;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_3;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_2;
    FAnimNode_CopyBone AnimGraphNode_CopyBone_1;
    FAnimNode_RotationMultiplier AnimGraphNode_RotationMultiplier;
    FAnimNode_CopyBone AnimGraphNode_CopyBone;
    FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;
    FAnimNode_WheelHandler AnimGraphNode_WheelHandler;
    FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone_1;
    FAnimNode_ModifyBone AnimGraphNode_ModifyBone;
    FVector FLWheelLocation;
    float FLWheelAngle;
    FVector FLWheelScale;
    FVector FRWheelLocation;
    float FRWheelAngle;
    FVector FRWheelScale;
    FVector RLWheelLocation;
    FVector RLWheelScale;
    FVector RRWheelLocation;
    FVector RRWheelScale;
    float WheelAlpha;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Rover_AnimGraphNode_ModifyBone_F5C544D84FC5A326E61DF68F63997D98();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Rover_AnimGraphNode_ModifyBone_DEDB7F0E47549564CCABE4AF821DC50F();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Rover_AnimGraphNode_ModifyBone_E42C7BF646D3339939DA7DBF569BAF5D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_AnimBP_Rover_AnimGraphNode_ModifyBone_35BF5C1E48EF9B02AA7644BD80288284();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_AnimBP_Rover(int32 EntryPoint);
};

#endif
