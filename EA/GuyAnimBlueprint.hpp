#ifndef UE4SS_SDK_GuyAnimBlueprint_HPP
#define UE4SS_SDK_GuyAnimBlueprint_HPP

class UGuyAnimBlueprint_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_4;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool IsInAir?;
    float SpeedRight;
    float SpeedForward;
    float SpeedTurning;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GuyAnimBlueprint_AnimGraphNode_TransitionResult_E89C598047BFA81111DF678B66946343();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_GuyAnimBlueprint_AnimGraphNode_TransitionResult_94D16B954966B42AF8D1468198608E43();
    void BlueprintUpdateAnimation(float DeltaTimeX);
    void ExecuteUbergraph_GuyAnimBlueprint(int32 EntryPoint);
};

#endif
