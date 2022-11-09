#ifndef UE4SS_SDK_CinematicAnimBP_HPP
#define UE4SS_SDK_CinematicAnimBP_HPP

class UCinematicAnimBP_C : public UAnimInstance
{
    FPointerToUberGraphFrame UberGraphFrame;
    FAnimNode_Root AnimGraphNode_Root;
    FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose;
    FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_1;
    FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose;
    FAnimNode_Slot AnimGraphNode_Slot;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult_1;
    FAnimNode_TransitionResult AnimGraphNode_TransitionResult;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3;
    FAnimNode_StateResult AnimGraphNode_StateResult_3;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2;
    FAnimNode_StateResult AnimGraphNode_StateResult_2;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_1;
    FAnimNode_StateResult AnimGraphNode_StateResult_1;
    FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer;
    FAnimNode_StateResult AnimGraphNode_StateResult;
    FAnimNode_StateMachine AnimGraphNode_StateMachine;
    bool IsStanding;
    class UAnimSequenceBase* SittingAnim;

    void AnimGraph(FPoseLink& AnimGraph);
    void EvaluateGraphExposedInputs_ExecuteUbergraph_CinematicAnimBP_AnimGraphNode_TransitionResult_A9AF3B0D4B9696A863FC8C98AEEC106D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_CinematicAnimBP_AnimGraphNode_TransitionResult_59C20B434F1E221C95C030985A7F3D6D();
    void EvaluateGraphExposedInputs_ExecuteUbergraph_CinematicAnimBP_AnimGraphNode_TransitionResult_EA3D3C8848671FA769E0EEB497841E95();
    void ExecuteUbergraph_CinematicAnimBP(int32 EntryPoint);
};

#endif
