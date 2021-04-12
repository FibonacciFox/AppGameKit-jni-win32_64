#define WIN32_LEAN_AND_MEAN    
#include <iostream>
#include "org_fibonaccifox_appgamekit_classes_AppGameKitEngine.h"
#include "agk.h"
#include <windows.h>
#include "AppGameKitWin.h"
// Namespace
using namespace AGK;

AppGameKitWin app;


JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Init
(JNIEnv* jenv, jobject jobj, jint deviceWidth, jint deviceHeight, jboolean fullscreen) {   
   app.Init(jenv, jobj, deviceWidth, deviceHeight, fullscreen); 
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InitGL
(JNIEnv* jenv, jobject jobj ,jint val1) {   
    agk::InitGL((void*)val1); 
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARCreateAnchorFromHitTest
(JNIEnv* jenv, jobject jobj, jint val1) {
    return agk::ARCreateAnchorFromHitTest(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARCreateAnchorFromPlane
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARCreateAnchorFromPlane(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ACosRad
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ACosRad(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ACos
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ACos(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARControlCamera
(JNIEnv* jenv, jobject jobj) {

    agk::ARControlCamera();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WriteString2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::WriteString2(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WriteString
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::WriteString(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WriteInteger
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::WriteInteger(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WriteFloat
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::WriteFloat(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WriteByte
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::WriteByte(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WorldToScreenY
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::WorldToScreenY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WorldToScreenX
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::WorldToScreenX(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ViewFile
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::ViewFile(jstring_str1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ValFloat
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::ValFloat(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_VibrateDevice
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::VibrateDevice(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Val__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::Val(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Val__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::Val(jstring_str1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UseNewDefaultFonts
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::UseNewDefaultFonts(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateTweenSprite
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::UpdateTweenSprite(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateTweenText
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::UpdateTweenText(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateTweenObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::UpdateTweenObject(val1, val2, val3);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Upper
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Upper(jstring_str1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateTweenCamera
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::UpdateTweenCamera(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateTweenCustom
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::UpdateTweenCustom(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateTweenChar
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::UpdateTweenChar(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_WriteLine
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::WriteLine(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateAllTweens
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::UpdateAllTweens(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Update3DPhysicsPickJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Update3DPhysicsPickJoint(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Update3DParticles
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Update3DParticles(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Update3D
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::Update3D(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Update
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::Update(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateTweenChain
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::UpdateTweenChain(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateDeviceSize
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::UpdateDeviceSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_UpdateParticles
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::UpdateParticles(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenSmooth1
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenSmooth1();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Update2D
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::Update2D(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenLinear
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenLinear();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenEaseOut2
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenEaseOut2();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenSmooth2
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenSmooth2();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenEaseIn1
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenEaseIn1();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenBounce
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenBounce();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TruncateString
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::TruncateString(jstring_str1, jstring_str2));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Trunc
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Trunc(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenOvershoot
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenOvershoot();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TextToSpeechSetup
(JNIEnv* jenv, jobject jobj) {

    agk::TextToSpeechSetup();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenEaseOut1
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenEaseOut1();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TweenEaseIn2
(JNIEnv* jenv, jobject jobj) {

    return agk::TweenEaseIn2();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TanRad
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::TanRad(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Tan
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Tan(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Swap
(JNIEnv* jenv, jobject jobj) {

    agk::Swap();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TrimString
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::TrimString(jstring_str1, jstring_str2));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Timer
(JNIEnv* jenv, jobject jobj) {

    return agk::Timer();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StringToBase64
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::StringToBase64(jstring_str1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_TerminateApp
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::TerminateApp(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Str__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return jenv->NewStringUTF(agk::Str(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Str__FI
(JNIEnv* jenv, jobject jobj, jfloat val1, jint val2) {

    return jenv->NewStringUTF(agk::Str(val1, val2));
}
/*
JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Str__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::Str(val1));
}*/

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopVideo
(JNIEnv* jenv, jobject jobj) {

    agk::StopVideo();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTweenSprite
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::StopTweenSprite(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTweenText
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::StopTweenText(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTweenObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::StopTweenObject(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Sync
(JNIEnv* jenv, jobject jobj) {

    agk::Sync();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTweenChar
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::StopTweenChar(val1, val2, val3);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StripString
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::StripString(jstring_str1, jstring_str2));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTweenCamera
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::StopTweenCamera(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopSprite
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopSprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopSpeaking
(JNIEnv* jenv, jobject jobj) {

    agk::StopSpeaking();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTweenCustom
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopTweenCustom(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopSoundInstance
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopSoundInstance(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTweenChain
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopTweenChain(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopTextInput
(JNIEnv* jenv, jobject jobj) {

    agk::StopTextInput();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopSkeleton2DAnimation
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopSkeleton2DAnimation(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopScreenRecording
(JNIEnv* jenv, jobject jobj) {

    agk::StopScreenRecording();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopObjectAnimation
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopObjectAnimation(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopSoundRecording
(JNIEnv* jenv, jobject jobj) {

    agk::StopSoundRecording();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopMusicOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopMusicOGG(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopSound
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::StopSound(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopGPSTracking
(JNIEnv* jenv, jobject jobj) {

    agk::StopGPSTracking();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StopMusic
(JNIEnv* jenv, jobject jobj) {

    agk::StopMusic();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StepPhysics
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::StepPhysics(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Step3DPhysicsWorld
(JNIEnv* jenv, jobject jobj) {

    agk::Step3DPhysicsWorld();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StartTextInput__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::StartTextInput(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StartTextInput__
(JNIEnv* jenv, jobject jobj) {

    agk::StartTextInput();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StartScreenRecording
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::StartScreenRecording(jstring_str1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_StartGPSTracking
(JNIEnv* jenv, jobject jobj) {

    agk::StartGPSTracking();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Stand3DPhysicsCharacterController
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Stand3DPhysicsCharacterController(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Sqrt
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Sqrt(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SpriteRayCastSingle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    return agk::SpriteRayCastSingle(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SpriteRayCastGroup
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    return agk::SpriteRayCastGroup(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SpriteRayCast
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4) {

    return agk::SpriteRayCast(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SphereCast3DPhysicsObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jfloat val5) {

    return agk::SphereCast3DPhysicsObject(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SphereCast3DPhysics
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::SphereCast3DPhysics(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Speak__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::Speak(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Speak__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::Speak(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SpriteRayCastCategory
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    return agk::SpriteRayCastCategory(val1, val2, val3, val4, val5);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Spaces
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::Spaces(val1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Sleep
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Sleep(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SinRad
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::SinRad(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Sin
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Sin(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SimplifyPath
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::SimplifyPath(jstring_str1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShowRewardAdChartboost
(JNIEnv* jenv, jobject jobj) {

    agk::ShowRewardAdChartboost();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShowRewardAdAdMob
(JNIEnv* jenv, jobject jobj) {

    agk::ShowRewardAdAdMob();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShowFullscreenAdvertChartboost
(JNIEnv* jenv, jobject jobj) {

    agk::ShowFullscreenAdvertChartboost();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShowFullscreenAdvertAmazon
(JNIEnv* jenv, jobject jobj) {

    agk::ShowFullscreenAdvertAmazon();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShowImageCaptureScreen
(JNIEnv* jenv, jobject jobj) {

    return agk::ShowImageCaptureScreen();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShowFullscreenAdvertAdMob
(JNIEnv* jenv, jobject jobj) {

    agk::ShowFullscreenAdvertAdMob();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShowChooseImageScreen
(JNIEnv* jenv, jobject jobj) {

    return agk::ShowChooseImageScreen();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShareText
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::ShareText(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShareImage
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::ShareImage(jstring_str1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Sha256
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Sha256(jstring_str1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShareSnapChatImage
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jstring str3, jstring str4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    const char* jstring_str4 = jenv->GetStringUTFChars(str4, 0);
    agk::ShareSnapChatImage(jstring_str1, jstring_str2, jstring_str3, jstring_str4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShareImageAndText
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::ShareImageAndText(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ShareFile
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::ShareFile(jstring_str1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Sha1
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Sha1(jstring_str1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Sha512
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Sha512(jstring_str1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetupCloudData
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetupCloudData(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetWindowTitle
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetWindowTitle(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetWindowSize__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetWindowSize(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetWindowSize__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetWindowSize(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetWindowPosition
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetWindowPosition(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualResolution
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualResolution(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetWindowAllowResize
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetWindowAllowResize(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualJoystickVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetVirtualJoystickSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetVirtualJoystickPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickImageOuter
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualJoystickImageOuter(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickImageInner
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualJoystickImageInner(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickActive
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualJoystickActive(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetVirtualJoystickAlpha(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualButtonVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonText
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetVirtualButtonText(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonSize__IFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetVirtualButtonSize(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonSize__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetVirtualButtonSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetVirtualButtonPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonImageUp
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualButtonImageUp(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonImageDown
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualButtonImageDown(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualJoystickDeadZone
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetVirtualJoystickDeadZone(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetVirtualButtonColor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonActive
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualButtonActive(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetViewZoomMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetViewZoomMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetViewZoom
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetViewZoom(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetViewOffset
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::SetViewOffset(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVideoVolume
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetVideoVolume(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVideoDimensions
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetVideoDimensions(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVirtualButtonAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetVirtualButtonAlpha(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVSync
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetVSync(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenTextX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextSpacing
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenTextSpacing(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVideoPosition
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetVideoPosition(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenTextSize(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenTextRed(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetVector3
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetVector3(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextLineSpacing
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenTextLineSpacing(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenTextGreen(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenTextBlue(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextAngle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenTextAngle(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenTextY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenSpriteY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteXByOffset
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenSpriteXByOffset(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenSpriteX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteSizeX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenSpriteSizeX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteSizeY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenSpriteSizeY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenSpriteRed(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenSpriteGreen(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenTextAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenTextAlpha(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteYByOffset
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenSpriteYByOffset(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenSpriteAlpha(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectZ(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenSpriteBlue(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectScaleZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectScaleZ(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenSpriteAngle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenSpriteAngle(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectScaleX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectScaleX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenObjectRed(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenObjectGreen(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenObjectBlue(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectScaleY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectScaleY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectAngleZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectAngleZ(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectAngleY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectAngleY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectAngleX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenObjectAngleX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomInteger2
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCustomInteger2(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomInteger3
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCustomInteger3(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenDuration
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTweenDuration(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenObjectAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenObjectAlpha(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomInteger1
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCustomInteger1(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomFloat4
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCustomFloat4(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomInteger4
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCustomInteger4(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomFloat3
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCustomFloat3(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomFloat1
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCustomFloat1(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCharY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCharY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCustomFloat2
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCustomFloat2(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCharX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCharX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCharRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCharRed(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCharBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCharBlue(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCharGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCharGreen(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCharAngle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCharAngle(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCharAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetTweenCharAlpha(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCameraY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCameraY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCameraZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCameraZ(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCameraX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCameraX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCameraFOV
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCameraFOV(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCameraAngleY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCameraAngleY(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCameraAngleZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCameraAngleZ(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTransitionMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetTransitionMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenCameraAngleX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::SetTweenCameraAngleX(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTweenChainTime
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTweenChainTime(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextTransparency
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextTransparency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextSpacing
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextSpacing(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextString
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetTextString(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextX(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetTextPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextMaxWidth
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextMaxWidth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextInputMaxChars
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetTextInputMaxChars(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextFontImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextFontImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextScissor
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetTextScissor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextLineSpacing
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextLineSpacing(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextDefaultMinFilter
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetTextDefaultMinFilter(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextFont
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextFont(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextDefaultMagFilter
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetTextDefaultMagFilter(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextDefaultFontImage
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetTextDefaultFontImage(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextExtendedFontImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextExtendedFontImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextDepth
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextDepth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextDefaultExtendedFontImage
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetTextDefaultExtendedFontImage(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextColorRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextColorRed(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextColorGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextColorGreen(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetTextCharY(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::SetTextColor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetTextCharX(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharPosition
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetTextCharPosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharColorGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetTextCharColorGreen(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharColorRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetTextCharColorRed(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextColorBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextColorBlue(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5, jint val6) {

    agk::SetTextCharColor(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharColorBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetTextCharColorBlue(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharColorAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetTextCharColorAlpha(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextColorAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextColorAlpha(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharAngleRad
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetTextCharAngleRad(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextBold
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextBold(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharAngle
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetTextCharAngle(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextAngleRad
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextAngleRad(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextAngle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetTextAngle(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextAlignment
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetTextAlignment(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSunDirection
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    agk::SetSunDirection(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSyncRate
(JNIEnv* jenv, jobject jobj, jfloat val1, jint val2) {

    agk::SetSyncRate(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSunColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSunColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetTextCharBold
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetTextCharBold(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpriteX(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpriteY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteUVScale
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpriteUVScale(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteUVOffset
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpriteUVOffset(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteUVBorder
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpriteUVBorder(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteUV
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jfloat val8, jfloat val9) {

    agk::SetSpriteUV(val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteTransparency
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteTransparency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteSpeed
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpriteSpeed(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteSnap
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteSnap(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpriteSize(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShapeCircle__IFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetSpriteShapeCircle(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShapeCircle__IFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jint val5) {

    agk::SetSpriteShapeCircle(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShapePolygon__IIIFF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5) {

    agk::SetSpriteShapePolygon(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShapePolygon__IIIFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jint val6) {

    agk::SetSpriteShapePolygon(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShapeChain
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jfloat val5, jfloat val6, jint val7) {

    agk::SetSpriteShapeChain(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShapeBox__IFFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jint val7) {

    agk::SetSpriteShapeBox(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShapeBox__IFFFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6) {

    agk::SetSpriteShapeBox(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShader
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteShader(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShape__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteShape(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteShape__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteShape(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSunActive
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSunActive(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteScaleByOffset
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpriteScaleByOffset(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePositionByOffset
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpritePositionByOffset(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsVelocity
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpritePhysicsVelocity(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpritePosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsRestitution__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsRestitution(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsRestitution__IFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3) {

    agk::SetSpritePhysicsRestitution(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsOn
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpritePhysicsOn(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteScissor
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetSpriteScissor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsOff
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSpritePhysicsOff(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsMass
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsMass(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteScale
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpriteScale(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsIsBullet
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpritePhysicsIsBullet(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsIsSensor__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpritePhysicsIsSensor(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsIsSensor__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpritePhysicsIsSensor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsImpulse
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetSpritePhysicsImpulse(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsTorque
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsTorque(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsForce
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetSpritePhysicsForce(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsDamping
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsDamping(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsFriction__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsFriction(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsFriction__IFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3) {

    agk::SetSpritePhysicsFriction(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsCanRotate
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpritePhysicsCanRotate(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsCOM
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpritePhysicsCOM(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsDensity
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3) {

    agk::SetSpritePhysicsDensity(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsDelete
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSpritePhysicsDelete(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsAngularVelocity
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsAngularVelocity(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsAngularImpulse
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsAngularImpulse(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpritePhysicsAngularDamping
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpritePhysicsAngularDamping(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteOffset
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSpriteOffset(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteGroup__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteGroup(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteGroup__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteGroup(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteFrame
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteFrame(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteFlip
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteFlip(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteDepth
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteDepth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteColorRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteColorRed(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteColorAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteColorAlpha(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteImage__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteImage(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteImage__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::SetSpriteColor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCollideBit__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetSpriteCollideBit(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCollideBit__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteCollideBit(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCategoryBits__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteCategoryBits(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCategoryBits__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteCategoryBits(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCategoryBit__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteCategoryBit(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCategoryBit__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetSpriteCategoryBit(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteAnimation
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetSpriteAnimation(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteColorGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteColorGreen(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteColorBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteColorBlue(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteAngle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpriteAngle(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteAdditionalImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteAdditionalImage(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCollideBits__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteCollideBits(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteCollideBits__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSpriteCollideBits(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpeechLanguageByID
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetSpeechLanguageByID(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpeechRate
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetSpeechRate(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpeechLanguage
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetSpeechLanguage(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSoundSystemVolume
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSoundSystemVolume(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSoundInstanceVolume
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSoundInstanceVolume(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSoundInstanceRate
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSoundInstanceRate(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSortTransparentDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSortTransparentDepth(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteAngleRad
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSpriteAngleRad(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSpriteActive
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSpriteActive(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSortTextures
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSortTextures(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSortDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSortDepth(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSleepMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSleepMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkyBoxVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSkyBoxVisible(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSoundDeviceMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSoundDeviceMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSoundInstanceBalance
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSoundInstanceBalance(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkyBoxSunSize
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::SetSkyBoxSunSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkyBoxSkyColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSkyBoxSkyColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSortCreated
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSortCreated(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSnapChatStickerSettings
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jint val3, jint val4, jfloat val5) {

    agk::SetSnapChatStickerSettings(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkyBoxHorizonSize
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::SetSkyBoxHorizonSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkyBoxHorizonColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSkyBoxHorizonColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkyBoxSunVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetSkyBoxSunVisible(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkyBoxSunColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSkyBoxSunColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetSkeleton2DPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DFlip
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSkeleton2DFlip(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DDepth
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSkeleton2DDepth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DBoneScale
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetSkeleton2DBoneScale(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DBonePosition
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetSkeleton2DBonePosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DBoneMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetSkeleton2DBoneMode(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetSkeleton2DVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DBoneAngle
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetSkeleton2DBoneAngle(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DRotation
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSkeleton2DRotation(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DAnimationFrame
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetSkeleton2DAnimationFrame(val1, jstring_str2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSharedVariableAppGroup
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetSharedVariableAppGroup(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShadowSmoothing
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetShadowSmoothing(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShadowRange
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetShadowRange(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShadowMapSize
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetShadowMapSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShadowMappingMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetShadowMappingMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShadowLightStepSize
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetShadowLightStepSize(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShaderConstantByName
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4, jfloat val5, jfloat val6) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetShaderConstantByName(val1, jstring_str2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShadowBias
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetShadowBias(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShaderConstantArrayByName
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetShaderConstantArrayByName(val1, jstring_str2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetSkeleton2DAnimationSpeed
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetSkeleton2DAnimationSpeed(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetScreenResolution
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetScreenResolution(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetScissor
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetScissor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRenderToImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetRenderToImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRawWritePath
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetRawWritePath(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetShadowCascadeValues
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    agk::SetShadowCascadeValues(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRawMouseVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetRawMouseVisible(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRawMousePosition
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::SetRawMousePosition(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRawJoystickDeadZone
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetRawJoystickDeadZone(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetResolutionMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetResolutionMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRandomSeed
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetRandomSeed(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRenderToScreen
(JNIEnv* jenv, jobject jobj) {

    agk::SetRenderToScreen();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPushNotificationKeys
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetPushNotificationKeys(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPrintSpacing
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetPrintSpacing(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPrintSize
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetPrintSize(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPrintFont
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPrintFont(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRandomSeed2
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetRandomSeed2(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPrintColor__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetPrintColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPrintColor__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetPrintColor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPointLightRadius
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetPointLightRadius(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPointLightPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetPointLightPosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRawTouchMoveSensitivity
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetRawTouchMoveSensitivity(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetRawTouchValue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetRawTouchValue(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPointLightColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetPointLightColor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsWallTop
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsWallTop(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsWallRight
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsWallRight(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsThreading
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsThreading(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsSleeping
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsSleeping(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsScale
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetPhysicsScale(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsMaxPolygonPoints
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsMaxPolygonPoints(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsForceRange
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetPhysicsForceRange(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsGravity
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::SetPhysicsGravity(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsWallLeft
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsWallLeft(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsForcePower
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetPhysicsForcePower(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsDebugOn
(JNIEnv* jenv, jobject jobj) {

    agk::SetPhysicsDebugOn();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsCCD
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsCCD(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPointLightMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetPointLightMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsWallBottom
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetPhysicsWallBottom(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesStartZone
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetParticlesStartZone(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetParticlesSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsForcePosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetPhysicsForcePosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetPhysicsDebugOff
(JNIEnv* jenv, jobject jobj) {

    agk::SetPhysicsDebugOff();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesRotationRange
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetParticlesRotationRange(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetParticlesPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesMax
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesMax(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesTransparency
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesTransparency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesFaceDirection
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesFaceDirection(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesDirection
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetParticlesDirection(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesVelocityRange
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetParticlesVelocityRange(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesRotationRangeRad
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetParticlesRotationRangeRad(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesDepth
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesDepth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesAngleRad
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetParticlesAngleRad(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesColorInterpolation
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesColorInterpolation(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesAngle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetParticlesAngle(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesActive
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetParticlesActive(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetOrientationAllowed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetOrientationAllowed(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectUVOffset
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetObjectUVOffset(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesLife
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetParticlesLife(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeStaticPolygon
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetObjectShapeStaticPolygon(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeSphere__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetObjectShapeSphere(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeSphere__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObjectShapeSphere(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetParticlesFrequency
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetParticlesFrequency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCylinder__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectShapeCylinder(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCylinder__IIFF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetObjectShapeCylinder(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCompound
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetObjectShapeCompound(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCone__IIFF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetObjectShapeCone(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCone__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectShapeCone(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCapsule__IIFFF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetObjectShapeCapsule(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCapsule__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectShapeCapsule(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeCapsule__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectShapeCapsule(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeBox__IFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetObjectShapeBox(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeBox__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectShapeBox(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeBox__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetObjectShapeBox(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShaderConstantDefault
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetObjectShaderConstantDefault(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShaderConstantArrayByName
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetObjectShaderConstantArrayByName(val1, jstring_str2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShader
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectShader(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectUVScale
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetObjectUVScale(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectScreenCulling
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectScreenCulling(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectTransparency
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectTransparency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectScalePermanent
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetObjectScalePermanent(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectRotation
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetObjectRotation(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectRotationQuat
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetObjectRotationQuat(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectScale
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetObjectScale(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectReceiveShadow
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectReceiveShadow(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetObjectPosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectNormalMapScale
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetObjectNormalMapScale(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshUVScale
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5) {

    agk::SetObjectMeshUVScale(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectNormalMap
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectNormalMap(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshShader
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectMeshShader(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShapeConvexHull
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetObjectShapeConvexHull(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshNormalMapScale
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetObjectMeshNormalMapScale(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshNormalMap
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectMeshNormalMap(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshLightMap
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectMeshLightMap(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetObjectMeshImage(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshFromMemblock
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectMeshFromMemblock(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshCollisionMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectMeshCollisionMode(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectLookAt
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetObjectLookAt(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectShaderConstantByName
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4, jfloat val5, jfloat val6) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetObjectShaderConstantByName(val1, jstring_str2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectLightMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectLightMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectLightMap
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectLightMap(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectDepthWrite
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectDepthWrite(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectMeshVisible(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectDepthReadMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectDepthReadMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectMeshUVOffset
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5) {

    agk::SetObjectMeshUVOffset(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectDepthBias
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObjectDepthBias(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectCullMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectCullMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectColorEmissive
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetObjectColorEmissive(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::SetObjectColor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectCollisionMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectCollisionMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectCastShadow
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectCastShadow(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectBoneRotation
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetObjectBoneRotation(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectBonePosition
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetObjectBonePosition(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectFogMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectFogMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectImage(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectBoneLookAt
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6) {

    agk::SetObjectBoneLookAt(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectBoneCanAnimate
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectBoneCanAnimate(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectAnimationSpeed
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObjectAnimationSpeed(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectBlendModes
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObjectBlendModes(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectDepthRange
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetObjectDepthRange(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectAnimationFrame
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetObjectAnimationFrame(val1, jstring_str2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectAlphaMask
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectAlphaMask(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObjectAlpha(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsSleepingThreshold
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetObject3DPhysicsSleepingThreshold(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsRestitution
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObject3DPhysicsRestitution(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsMaxLinearVelocity
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObject3DPhysicsMaxLinearVelocity(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsMass
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObject3DPhysicsMass(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsGroupAndMask
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetObject3DPhysicsGroupAndMask(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsLinearVelocity__IIF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetObject3DPhysicsLinearVelocity(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsLinearVelocity__IFFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetObject3DPhysicsLinearVelocity(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsFriction
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObject3DPhysicsFriction(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsDamping
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetObject3DPhysicsDamping(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsDeactivationTime
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObject3DPhysicsDeactivationTime(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObjectBoneRotationQuat
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6) {

    agk::SetObjectBoneRotationQuat(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsCanSleep
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObject3DPhysicsCanSleep(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsAnisotropicFriction
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetObject3DPhysicsAnisotropicFriction(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkNoMoreClients
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetNetworkNoMoreClients(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkLocalInteger__ILjava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3, jint val4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetNetworkLocalInteger(val1, jstring_str2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkLocalInteger__ILjava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetNetworkLocalInteger(val1, jstring_str2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkLocalFloat__ILjava_lang_String_2F
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetNetworkLocalFloat(val1, jstring_str2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkLocalFloat__ILjava_lang_String_2FI
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jint val4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetNetworkLocalFloat(val1, jstring_str2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkLatency
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetNetworkLatency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkClientUserData
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetNetworkClientUserData(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetNetworkAllowClients
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetNetworkAllowClients(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMusicVolumeOGG
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetMusicVolumeOGG(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMusicSystemVolumeOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetMusicSystemVolumeOGG(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMusicSystemVolume
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetMusicSystemVolume(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMusicLoopTimesOGG
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetMusicLoopTimesOGG(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMusicLoopCountOGG
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetMusicLoopCountOGG(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMusicFileVolume
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetMusicFileVolume(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMeshMemblockVertexUV
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4) {

    agk::SetMeshMemblockVertexUV(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMeshMemblockVertexPosition
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetMeshMemblockVertexPosition(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsRollingFriction
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetObject3DPhysicsRollingFriction(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMeshMemblockVertexNormal
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetMeshMemblockVertexNormal(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMeshMemblockVertexColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5, jint val6) {

    agk::SetMeshMemblockVertexColor(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMemblockString
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jstring str3) {
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::SetMemblockString(val1, val2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMemblockShort
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetMemblockShort(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMemblockInt
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetMemblockInt(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMemblockFloat
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetMemblockFloat(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMemblockByteSigned
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetMemblockByteSigned(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetMemblockByte
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetMemblockByte(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetLocalNotification__IILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jstring str3) {
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::SetLocalNotification(val1, val2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetLocalNotification__IILjava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jstring str3, jstring str4) {
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    const char* jstring_str4 = jenv->GetStringUTFChars(str4, 0);
    agk::SetLocalNotification(val1, val2, jstring_str3, jstring_str4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJoystickScreenPosition
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    agk::SetJoystickScreenPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJoystickDeadZone
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetJoystickDeadZone(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJointMouseTarget
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetJointMouseTarget(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsAngularVelocity__IFFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetObject3DPhysicsAngularVelocity(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetObject3DPhysicsAngularVelocity__IIF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetObject3DPhysicsAngularVelocity(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJointMotorOn
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetJointMotorOn(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJointMouseMaxForce
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetJointMouseMaxForce(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJointLimitOff
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetJointLimitOff(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetIntendedDeviceSize
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetIntendedDeviceSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJointDamping
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetJointDamping(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImmersiveMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetImmersiveMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetInneractiveDetails
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetInneractiveDetails(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImageWrapV
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetImageWrapV(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImageWrapU
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetImageWrapU(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImageSubImages
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetImageSubImages(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImageTransparentColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetImageTransparentColor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImageMask
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5, jint val6) {

    agk::SetImageMask(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImageMinFilter
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetImageMinFilter(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetImageMagFilter
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetImageMagFilter(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetHTTPVerifyCertificate
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetHTTPVerifyCertificate(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetHTTPTimeout
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetHTTPTimeout(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetGlobal3DDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetGlobal3DDepth(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetFolder
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::SetFolder(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJointMotorOff
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetJointMotorOff(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetJointLimitOn
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetJointLimitOn(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetFogSunColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetFogSunColor(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetHTTPHost__ILjava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::SetHTTPHost(val1, jstring_str2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetHTTPHost__ILjava_lang_String_2ILjava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3, jstring str4, jstring str5) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str4 = jenv->GetStringUTFChars(str4, 0);
    const char* jstring_str5 = jenv->GetStringUTFChars(str5, 0);
    return agk::SetHTTPHost(val1, jstring_str2, val3, jstring_str4, jstring_str5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetFogColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetFogColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetFogMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetFogMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetFilePos
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetFilePos(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetFogRange
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::SetFogRange(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetExpansionFileVersion
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetExpansionFileVersion(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetErrorMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetErrorMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetExpansionFileKey
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetExpansionFileKey(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxWrapMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxWrapMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxTextSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetEditBoxTextSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxUseAlternateInput
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxUseAlternateInput(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxTextColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetEditBoxTextColor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxText
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetEditBoxText(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxScissor
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetEditBoxScissor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxPasswordMode
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxPasswordMode(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxMultiLine
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxMultiLine(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxMaxLines
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxMaxLines(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetGenerateMipmaps
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetGenerateMipmaps(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxMaxChars
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxMaxChars(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxInputType
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxInputType(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxFontImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxFontImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetEditBoxPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxExtendedFontImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxExtendedFontImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxFocus
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxFocus(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxDepth
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxDepth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxCursorPosition
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxCursorPosition(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxCursorColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::SetEditBoxCursorColor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetEditBoxSize(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxCursorBlinkTime
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetEditBoxCursorBlinkTime(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxBorderSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetEditBoxBorderSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxBorderImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxBorderImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxBackgroundImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxBackgroundImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxBackgroundColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::SetEditBoxBackgroundColor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetDisplayAspect
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetDisplayAspect(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxFont
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxFont(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetDeviceCameraToImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::SetDeviceCameraToImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetDefaultWrapV
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetDefaultWrapV(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxCursorWidth
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetEditBoxCursorWidth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetDefaultWrapU
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetDefaultWrapU(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetDefaultMinFilter
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetDefaultMinFilter(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetDefaultMagFilter
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetDefaultMagFilter(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCursorBlinkTime
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::SetCursorBlinkTime(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCloudDataVariable
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetCloudDataVariable(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxBorderColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::SetEditBoxBorderColor(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetChartboostDetails
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SetChartboostDetails(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetEditBoxActive
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetEditBoxActive(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraRotation
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetCameraRotation(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraRange
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::SetCameraRange(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetClearColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetClearColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetCameraPosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraRotationQuat
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetCameraRotationQuat(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCurrentDir
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::SetCurrentDir(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraLookAt
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetCameraLookAt(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetClipboardText
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetClipboardText(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraBounds
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetCameraBounds(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetButtonScreenPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::SetButtonScreenPosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraOffCenter
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::SetCameraOffCenter(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetBorderColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetBorderColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAmbientColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SetAmbientColor(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraFOV
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetCameraFOV(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAmazonAdDetails
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetAmazonAdDetails(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAmazonAdTesting
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetAmazonAdTesting(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraOrthoWidth
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetCameraOrthoWidth(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdvertPosition
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    agk::SetAdvertPosition(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdvertLocation
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::SetAdvertLocation(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdvertLocationEx
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::SetAdvertLocationEx(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetCameraAspect
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::SetCameraAspect(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAntialiasMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetAntialiasMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdMobDetails
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetAdMobDetails(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdvertVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetAdvertVisible(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsTwistJointMotorRotationTarget
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DPhysicsTwistJointMotorRotationTarget(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdMobChildRating
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetAdMobChildRating(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdMobTesting
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::SetAdMobTesting(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsTwistJointMotorIsEnabled
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DPhysicsTwistJointMotorIsEnabled(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsTwistJointMaxMotorImpulse
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsTwistJointMaxMotorImpulse(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsStaticPlaneRotation
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Set3DPhysicsStaticPlaneRotation(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsStaticPlanePosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Set3DPhysicsStaticPlanePosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsSliderJointTargetLinearMotorVelocity
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsSliderJointTargetLinearMotorVelocity(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DphysicsRagdollStatic
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DphysicsRagdollStatic(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsSliderJointMaxLinearMotorForce
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsSliderJointMaxLinearMotorForce(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsSliderJointPoweredLinearMotorIsEnabled
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DPhysicsSliderJointPoweredLinearMotorIsEnabled(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsRagdollDeactivationTime
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::Set3DPhysicsRagdollDeactivationTime(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SetAdMobRewardAdDetails
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SetAdMobRewardAdDetails(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsRagdollDeactivation
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DPhysicsRagdollDeactivation(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsRagdollDamping
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::Set3DPhysicsRagdollDamping(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsJointSliderLinearLimits
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::Set3DPhysicsJointSliderLinearLimits(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsJointSliderAngularLimits
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::Set3DPhysicsJointSliderAngularLimits(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsJointHingeLimits
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::Set3DPhysicsJointHingeLimits(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsJointBreakingThreshold
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsJointBreakingThreshold(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsRagdollBonesVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DPhysicsRagdollBonesVisible(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsHingeJointMotorIsEnabled
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DPhysicsHingeJointMotorIsEnabled(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsJointEnabled
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DPhysicsJointEnabled(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsRagdollSleepingThresholds
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    agk::Set3DPhysicsRagdollSleepingThresholds(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsHingeJointMotorVelocity
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsHingeJointMotorVelocity(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsJointConeTwistLimits
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Set3DPhysicsJointConeTwistLimits(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsCharacterControllerPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Set3DPhysicsCharacterControllerPosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsCharacterControllerMaxSlope
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsCharacterControllerMaxSlope(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsCharacterControllerJumpSpeed
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsCharacterControllerJumpSpeed(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsGravity__FFF
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    agk::Set3DPhysicsGravity(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsGravity__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Set3DPhysicsGravity(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsCharacterControllerGravity
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsCharacterControllerGravity(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsCharacterControllerStepHeight
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsCharacterControllerStepHeight(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesTransparency
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DParticlesTransparency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsCharacterControllerFallSpeed
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsCharacterControllerFallSpeed(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesVelocityRange
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::Set3DParticlesVelocityRange(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesSize
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DParticlesSize(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Set3DParticlesPosition(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesStartZone
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7) {

    agk::Set3DParticlesStartZone(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesMax
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DParticlesMax(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DParticlesImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesFrequency
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DParticlesFrequency(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DPhysicsHingeJointMaxMotorImpulse
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DPhysicsHingeJointMaxMotorImpulse(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesDirection
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::Set3DParticlesDirection(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesColorInterpolation
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DParticlesColorInterpolation(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendUDPNetworkMessage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jstring str3, jint val4) {
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::SendUDPNetworkMessage(val1, val2, jstring_str3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesLife
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Set3DParticlesLife(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesActive
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DParticlesActive(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesDirectionRange
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::Set3DParticlesDirectionRange(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Set3DParticlesVisible
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Set3DParticlesVisible(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendSocketFloat
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    return agk::SendSocketFloat(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendSocketString
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::SendSocketString(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendSocketInteger
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::SendSocketInteger(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendSocketByte
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::SendSocketByte(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendHTTPRequest__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::SendHTTPRequest(val1, jstring_str2));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendHTTPRequest__ILjava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    return jenv->NewStringUTF(agk::SendHTTPRequest(val1, jstring_str2, jstring_str3));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendNetworkMessage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::SendNetworkMessage(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SeekMusicOGG
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3) {

    agk::SeekMusicOGG(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendHTTPFile
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3, jstring str4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    const char* jstring_str4 = jenv->GetStringUTFChars(str4, 0);
    return agk::SendHTTPFile(val1, jstring_str2, jstring_str3, jstring_str4);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ScreenToWorldX
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ScreenToWorldX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendHTTPRequestASync__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::SendHTTPRequestASync(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendHTTPRequestASync__ILjava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    return agk::SendHTTPRequestASync(val1, jstring_str2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SendSmartWatchData
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::SendSmartWatchData(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SeekMusic
(JNIEnv* jenv, jobject jobj, jfloat val1, jint val2) {

    agk::SeekMusic(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SaveSharedVariable
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SaveSharedVariable(jstring_str1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SaveObjectShape
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::SaveObjectShape(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SaveObject
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SaveObject(val1, jstring_str2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ScreenFPS
(JNIEnv* jenv, jobject jobj) {

    return agk::ScreenFPS();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SaveImage
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SaveImage(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RunApp
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::RunApp(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_SaveSound
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::SaveSound(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Round
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Round(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectLocalZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateObjectLocalZ(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectLocalX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateObjectLocalX(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectGlobalZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateObjectGlobalZ(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectGlobalY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateObjectGlobalY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectBoneLocalY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::RotateObjectBoneLocalY(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectBoneLocalX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::RotateObjectBoneLocalX(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectLocalY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateObjectLocalY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateCameraLocalY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateCameraLocalY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateCameraLocalX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateCameraLocalX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ScreenToWorldY
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ScreenToWorldY(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateCameraGlobalZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateCameraGlobalZ(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateCameraGlobalY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateCameraGlobalY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateCameraGlobalX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateCameraGlobalX(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Right
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Right(jstring_str1, val2));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectGlobalX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateObjectGlobalX(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateObjectBoneLocalZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::RotateObjectBoneLocalZ(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RotateCameraLocalZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::RotateCameraLocalZ(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeTweenSprite
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::ResumeTweenSprite(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeTweenText
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::ResumeTweenText(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeTweenObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::ResumeTweenObject(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeTweenCustom
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ResumeTweenCustom(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeTweenCamera
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::ResumeTweenCamera(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeTweenChar
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::ResumeTweenChar(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeSprite
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ResumeSprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Rotate3DPhysicsCharacterController
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Rotate3DPhysicsCharacterController(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeMusicOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ResumeMusicOGG(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResumeMusic
(JNIEnv* jenv, jobject jobj) {

    agk::ResumeMusic();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResetSpriteUV
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ResetSpriteUV(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResetRewardChartboost
(JNIEnv* jenv, jobject jobj) {

    agk::ResetRewardChartboost();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResetRewardAdMob
(JNIEnv* jenv, jobject jobj) {

    agk::ResetRewardAdMob();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResetParticleCount
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ResetParticleCount(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResetTimer
(JNIEnv* jenv, jobject jobj) {

    agk::ResetTimer();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Reset3DParticleCount
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Reset3DParticleCount(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RequestPermission
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::RequestPermission(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Reset3DPhysicsWorld
(JNIEnv* jenv, jobject jobj) {

    agk::Reset3DPhysicsWorld();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RestoreApp
(JNIEnv* jenv, jobject jobj) {

    agk::RestoreApp();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RequestAdvertRefresh
(JNIEnv* jenv, jobject jobj) {

    agk::RequestAdvertRefresh();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReplaceString
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jstring str3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    return jenv->NewStringUTF(agk::ReplaceString(jstring_str1, jstring_str2, jstring_str3, val4));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResetObjectAnimation
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ResetObjectAnimation(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Render3D
(JNIEnv* jenv, jobject jobj) {

    agk::Render3D();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RenderShadowMap
(JNIEnv* jenv, jobject jobj) {

    agk::RenderShadowMap();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ResizeImage
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::ResizeImage(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Render2DBack
(JNIEnv* jenv, jobject jobj) {

    agk::Render2DBack();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RemoveHTTPHeader
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::RemoveHTTPHeader(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RecordSound
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::RecordSound(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RequestConsentAdMob
(JNIEnv* jenv, jobject jobj) {

    agk::RequestConsentAdMob();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Render2DFront
(JNIEnv* jenv, jobject jobj) {

    agk::Render2DFront();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Render
(JNIEnv* jenv, jobject jobj) {

    agk::Render();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReadString
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::ReadString(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReadLine
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::ReadLine(val1));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReadFloat
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ReadFloat(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReceiveSmartWatchData
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::ReceiveSmartWatchData());
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RequestAppReview
(JNIEnv* jenv, jobject jobj) {

    agk::RequestAppReview();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReadString2
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::ReadString2(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReadByte
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ReadByte(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RayCast3DPhysicsObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    return agk::RayCast3DPhysicsObject(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RayCast3DPhysics
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::RayCast3DPhysics(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Ray3DPhysicsExist
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Ray3DPhysicsExist(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RandomSign
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::RandomSign(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Random__
(JNIEnv* jenv, jobject jobj) {

    return agk::Random();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Random__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::Random(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PushNotificationSetup
(JNIEnv* jenv, jobject jobj) {

    return agk::PushNotificationSetup();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PrintC__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::PrintC(jstring_str1);
}
/*
JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PrintC__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PrintC(val1);
}*/

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PrintC__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::PrintC(val1);
}
/*
JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Print__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Print(val1);
}*/

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Print__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::Print(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Print__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::Print(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ReadInteger
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ReadInteger(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayYoutubeVideo
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jfloat val3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::PlayYoutubeVideo(jstring_str1, jstring_str2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PrintImage
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::PrintImage(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RateApp__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::RateApp(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RateApp__Ljava_lang_String_2Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jstring str3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::RateApp(jstring_str1, jstring_str2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_RateApp__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::RateApp(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Random2__
(JNIEnv* jenv, jobject jobj) {

    return agk::Random2();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Random2__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::Random2(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayVideoToImage
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PlayVideoToImage(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayTweenObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::PlayTweenObject(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayTweenCustom
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::PlayTweenCustom(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Pow
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::Pow(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayTweenChar
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::PlayTweenChar(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayTweenChain
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PlayTweenChain(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayTweenCamera
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::PlayTweenCamera(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySound__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::PlaySound(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySound__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::PlaySound(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySound__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    return agk::PlaySound(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySound__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::PlaySound(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySkeleton2DAnimation
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jint val4, jfloat val5) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::PlaySkeleton2DAnimation(val1, jstring_str2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayObjectAnimation
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4, jint val5, jfloat val6) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::PlayObjectAnimation(val1, jstring_str2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayMusicOGG__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::PlayMusicOGG(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayMusicOGG__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PlayMusicOGG(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayMusic__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::PlayMusic(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayMusic__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PlayMusic(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayMusic__
(JNIEnv* jenv, jobject jobj) {

    agk::PlayMusic();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayMusic__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::PlayMusic(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayVideo
(JNIEnv* jenv, jobject jobj) {

    agk::PlayVideo();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayTweenSprite
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::PlayTweenSprite(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlayTweenText
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::PlayTweenText(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PhysicsRayCastGroup
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    return agk::PhysicsRayCastGroup(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseVideo
(JNIEnv* jenv, jobject jobj) {

    agk::PauseVideo();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PhysicsRayCast
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4) {

    return agk::PhysicsRayCast(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PhysicsRayCastCategory
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    return agk::PhysicsRayCastCategory(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseTweenText
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::PauseTweenText(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseTweenObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::PauseTweenObject(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseTweenChar
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::PauseTweenChar(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseTweenChain
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PauseTweenChain(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseTweenCamera
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::PauseTweenCamera(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseMusicOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PauseMusicOGG(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseMusic
(JNIEnv* jenv, jobject jobj) {

    agk::PauseMusic();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OverrideConsentChartboost
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::OverrideConsentChartboost(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OverrideConsentAdMob
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::OverrideConsentAdMob(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySprite__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PlaySprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySprite__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::PlaySprite(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySprite__IFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3) {

    agk::PlaySprite(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PlaySprite__IFIII
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3, jint val4, jint val5) {

    agk::PlaySprite(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenRawFolder
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::OpenRawFolder(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenBrowser
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::OpenBrowser(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseTweenSprite
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::PauseTweenSprite(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_PauseTweenCustom
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::PauseTweenCustom(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Offset3DParticles
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Offset3DParticles(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ObjectSphereSlide
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jfloat val8) {

    return agk::ObjectSphereSlide(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ObjectSphereCast
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jfloat val8) {

    return agk::ObjectSphereCast(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ObjectRayCast
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7) {

    return agk::ObjectRayCast(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MoveObjectLocalY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::MoveObjectLocalY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MoveObjectLocalX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::MoveObjectLocalX(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenToWrite__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::OpenToWrite(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenToWrite__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::OpenToWrite(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenToWrite__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::OpenToWrite(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenToWrite__ILjava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::OpenToWrite(val1, jstring_str2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MoveCameraLocalY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::MoveCameraLocalY(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MoveObjectLocalZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::MoveObjectLocalZ(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MoveCameraLocalX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::MoveCameraLocalX(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Move3DPhysicsCharacterController__IFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Move3DPhysicsCharacterController(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Move3DPhysicsCharacterController__IIF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::Move3DPhysicsCharacterController(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenToRead__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::OpenToRead(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OpenToRead__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::OpenToRead(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Mod
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::Mod(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MinimizeApp
(JNIEnv* jenv, jobject jobj) {

    agk::MinimizeApp();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Mid
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2, jint val3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Mid(jstring_str1, val2, val3));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MoveCameraLocalZ
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::MoveCameraLocalZ(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Message
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::Message(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MaximizeWindow
(JNIEnv* jenv, jobject jobj) {

    agk::MaximizeWindow();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MakeFolder
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::MakeFolder(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_OffsetParticles
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::OffsetParticles(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_MakeColor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::MakeColor(val1, val2, val3);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Lower
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Lower(jstring_str1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Log__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::Log(jstring_str1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Log__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Log(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadVideo
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadVideo(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSpriteShader__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadSpriteShader(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSpriteShader__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadSpriteShader(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSprite__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadSprite(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSprite__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadSprite(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSoundOGG__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadSoundOGG(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSoundOGG__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadSoundOGG(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSound__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadSound(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSound__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadSound(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSkeleton2DFromSpriterFile__Ljava_lang_String_2FI
(JNIEnv* jenv, jobject jobj, jstring str1, jfloat val2, jint val3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadSkeleton2DFromSpriterFile(jstring_str1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSkeleton2DFromSpriterFile__ILjava_lang_String_2FI
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jint val4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadSkeleton2DFromSpriterFile(val1, jstring_str2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSkeleton2DFromSpineFile__Ljava_lang_String_2FII
(JNIEnv* jenv, jobject jobj, jstring str1, jfloat val2, jint val3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadSkeleton2DFromSpineFile(jstring_str1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSkeleton2DFromSpineFile__ILjava_lang_String_2FII
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jint val4, jint val5) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadSkeleton2DFromSpineFile(val1, jstring_str2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadShaderFromString__ILjava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::LoadShaderFromString(val1, jstring_str2, jstring_str3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadShaderFromString__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::LoadShaderFromString(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadShader__ILjava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::LoadShader(val1, jstring_str2, jstring_str3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadShader__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::LoadShader(jstring_str1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadObjectWithChildren__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadObjectWithChildren(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadObjectWithChildren__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadObjectWithChildren(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadObjectShape
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::LoadObjectShape(val1, jstring_str2);
}

/*#######################################LoadObject######################################################*/

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadObjectJPHP__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadObject(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadObjectJPHP__Ljava_lang_String_2F
(JNIEnv* jenv, jobject jobj, jstring str1, jfloat val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadObject(jstring_str1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadObjectJPHP__ILjava_lang_String_2F
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadObject(val1, jstring_str2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadObjectJPHP__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadObject(jstring_str1);
}

/*#######################################################################################################*/

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadMusicOGG__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadMusicOGG(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadMusicOGG__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadMusicOGG(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadImageResized__Ljava_lang_String_2FFI
(JNIEnv* jenv, jobject jobj, jstring str1, jfloat val2, jfloat val3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadImageResized(jstring_str1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadImageResized__ILjava_lang_String_2FFI
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4, jint val5) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadImageResized(val1, jstring_str2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadFullScreenShader__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadFullScreenShader(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadFullScreenShader__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadFullScreenShader(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadFont__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadFont(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadFont__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadFont(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadConsentStatusAdMob
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadConsentStatusAdMob(jstring_str1, jstring_str2);
}
/*######################################################################################################*/

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadImageJPHP__ILjava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadImage(val1, jstring_str2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadImageJPHP__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadImage(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadImageJPHP__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadImage(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadImageJPHP__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadImage(val1, jstring_str2);
}

/*######################################################################################################*/
JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSubImage__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::LoadSubImage(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSubImage__IILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jstring str3) {
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::LoadSubImage(val1, val2, jstring_str3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Len
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::Len(jstring_str1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Left
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::Left(jstring_str1, val2));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_KickNetworkClient
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::KickNetworkClient(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadSharedVariable
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::LoadSharedVariable(jstring_str1, jstring_str2));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_JoinPaths
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::JoinPaths(jstring_str1, jstring_str2));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_JoinNetwork__Ljava_lang_String_2ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2, jstring str3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    return agk::JoinNetwork(jstring_str1, val2, jstring_str3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_JoinNetwork__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::JoinNetwork(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadMusic__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::LoadMusic(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_LoadMusic__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::LoadMusic(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsSupportedDepthTexture
(JNIEnv* jenv, jobject jobj) {

    return agk::IsSupportedDepthTexture();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsSpeaking
(JNIEnv* jenv, jobject jobj) {

    return agk::IsSpeaking();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsSoundRecording
(JNIEnv* jenv, jobject jobj) {

    return agk::IsSoundRecording();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsNetworkActive
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::IsNetworkActive(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsScreenRecording
(JNIEnv* jenv, jobject jobj) {

    return agk::IsScreenRecording();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsCapturingImage
(JNIEnv* jenv, jobject jobj) {

    return agk::IsCapturingImage();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsAbsolutePath
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::IsAbsolutePath(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Is3dPhysicsRagdollStatic
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Is3dPhysicsRagdollStatic(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InstanceObject__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::InstanceObject(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InstanceObject__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::InstanceObject(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InAppPurchaseSetKeys
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::InAppPurchaseSetKeys(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InAppPurchaseRestore
(JNIEnv* jenv, jobject jobj) {

    agk::InAppPurchaseRestore();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InAppPurchaseSetup
(JNIEnv* jenv, jobject jobj) {

    agk::InAppPurchaseSetup();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InAppPurchaseSetTitle
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::InAppPurchaseSetTitle(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InAppPurchaseActivate
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::InAppPurchaseActivate(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_HostNetwork__Ljava_lang_String_2Ljava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::HostNetwork(jstring_str1, jstring_str2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_HostNetwork__Ljava_lang_String_2Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::HostNetwork(jstring_str1, jstring_str2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Jump3DPhysicsCharacterController
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Jump3DPhysicsCharacterController(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_HexToBase64
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::HexToBase64(jstring_str1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Hex
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::Hex(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_HTTPEncode
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::HTTPEncode(jstring_str1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_HTTPDecode
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::HTTPDecode(jstring_str1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetYearFromUnix
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetYearFromUnix(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetWritePath
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetWritePath());
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetZipExtractProgress
(JNIEnv* jenv, jobject jobj) {

    return agk::GetZipExtractProgress();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetZipExtractComplete
(JNIEnv* jenv, jobject jobj) {

    return agk::GetZipExtractComplete();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_IsChoosingImage
(JNIEnv* jenv, jobject jobj) {

    return agk::IsChoosingImage();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetWindowsDrive
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetWindowsDrive(val1));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetWorldXFromSprite
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetWorldXFromSprite(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_InAppPurchaseAddProductID
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::InAppPurchaseAddProductID(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetWindowWidth
(JNIEnv* jenv, jobject jobj) {

    return agk::GetWindowWidth();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetWindowHeight
(JNIEnv* jenv, jobject jobj) {

    return agk::GetWindowHeight();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualWidth
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVirtualWidth();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualJoystickY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVirtualJoystickY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetWorldYFromSprite
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetWorldYFromSprite(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualHeight
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVirtualHeight();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualJoystickExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVirtualJoystickExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualButtonState
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVirtualButtonState(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualButtonReleased
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVirtualButtonReleased(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualButtonExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVirtualButtonExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetViewZoom
(JNIEnv* jenv, jobject jobj) {

    return agk::GetViewZoom();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetViewOffsetY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetViewOffsetY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetViewOffsetX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetViewOffsetX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVideoWidth
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVideoWidth();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVideoPosition
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVideoPosition();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualJoystickX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVirtualJoystickX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVideoPlaying
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVideoPlaying();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVideoHeight
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVideoHeight();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVideoDuration
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVideoDuration();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVerticesProcessed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetVerticesProcessed();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Y
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVector3Y(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Z
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVector3Z(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Multiply
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::GetVector3Multiply(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Length
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVector3Length(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Cross
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::GetVector3Cross(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3X
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVector3X(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Add
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::GetVector3Add(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetUpdateTime
(JNIEnv* jenv, jobject jobj) {

    return agk::GetUpdateTime();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Distance
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetVector3Distance(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetUnixFromDate
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5, jint val6) {

    return agk::GetUnixFromDate(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetUnassignedImages
(JNIEnv* jenv, jobject jobj) {

    return agk::GetUnassignedImages();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetUnassignedImageFileName
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetUnassignedImageFileName(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetURLSchemeText
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetURLSchemeText());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetUDPNetworkMessage
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetUDPNetworkMessage(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetUnixTime
(JNIEnv* jenv, jobject jobj) {

    return agk::GetUnixTime();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenTextExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenTextExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVirtualButtonPressed
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetVirtualButtonPressed(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetVector3Dot
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetVector3Dot(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenObjectExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenObjectExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenObjectPlaying
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTweenObjectPlaying(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenTextPlaying
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTweenTextPlaying(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomInteger4
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomInteger4(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomInteger3
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomInteger3(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenSpritePlaying
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTweenSpritePlaying(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenSpriteExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenSpriteExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomInteger1
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomInteger1(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomFloat4
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomFloat4(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomFloat1
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomFloat1(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomFloat2
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomFloat2(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomPlaying
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomPlaying(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCharExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCharExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenChainEndTime
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenChainEndTime(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomInteger2
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomInteger2(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCustomFloat3
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCustomFloat3(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCameraExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenCameraExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextVisible(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCharPlaying
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::GetTweenCharPlaying(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextTotalWidth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextTotalWidth(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextTotalHeight
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextTotalHeight(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextToSpeechReady
(JNIEnv* jenv, jobject jobj) {

    return agk::GetTextToSpeechReady();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextString
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetTextString(val1));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextSpacing
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextSpacing(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextSize
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextSize(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextLineSpacing
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextLineSpacing(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextLength
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextLength(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextInputState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetTextInputState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextInputCompleted
(JNIEnv* jenv, jobject jobj) {

    return agk::GetTextInputCompleted();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextHitTest
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetTextHitTest(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenChainPlaying
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTweenChainPlaying(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextColorRed
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextColorRed(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTweenCameraPlaying
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTweenCameraPlaying(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextDepth(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextInputCancelled
(JNIEnv* jenv, jobject jobj) {

    return agk::GetTextInputCancelled();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextColorBlue
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextColorBlue(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextColorGreen
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextColorGreen(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextColorAlpha
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextColorAlpha(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharColorRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharColorRed(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharColorGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharColorGreen(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharColorAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharColorAlpha(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharAngleRad
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharAngleRad(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharAngle
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharAngle(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextInput
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetTextInput());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextAlignment
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetTextAlignment(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharColorBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharColorBlue(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetStringToken2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::GetStringToken2(jstring_str1, jstring_str2, val3));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetTextCharX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetTextCharX(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetStorageTotal
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::GetStorageTotal(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetStorageRemaining
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::GetStorageRemaining(jstring_str1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteYFromWorld
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetSpriteYFromWorld(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteYFromPixel
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSpriteYFromPixel(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteYByOffset
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteYByOffset(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteXFromWorld
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetSpriteXFromWorld(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteXFromPixel
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSpriteXFromPixel(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteXByOffset
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteXByOffset(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteWidth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteWidth(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteVisible(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSystemFontExists
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::GetSystemFontExists(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteTransparency
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteTransparency(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteShapeVertexY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::GetSpriteShapeVertexY(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteShapeVertexX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::GetSpriteShapeVertexX(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteShapeNumVertices
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSpriteShapeNumVertices(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteScaleY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteScaleY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSupportedShaderVaryings
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSupportedShaderVaryings();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteScaleX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteScaleX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePlaying
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpritePlaying(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePixelFromY
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    return agk::GetSpritePixelFromY(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetStringToken
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::GetStringToken(jstring_str1, jstring_str2, val3));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePixelFromX
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    return agk::GetSpritePixelFromX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePhysicsVelocityY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpritePhysicsVelocityY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePhysicsVelocityX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpritePhysicsVelocityX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePhysicsCOMY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpritePhysicsCOMY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePhysicsMass
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpritePhysicsMass(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePhysicsCOMX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpritePhysicsCOMX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteOffsetY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteOffsetY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteNumShapes
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteNumShapes(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpritePhysicsAngularVelocity
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpritePhysicsAngularVelocity(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteNextContact
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteNextContact();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteInScreen
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteInScreen(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteOffsetX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteOffsetX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteInBox
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    return agk::GetSpriteInBox(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteInCircle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    return agk::GetSpriteInCircle(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteHitTest
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetSpriteHitTest(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteHitGroup
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetSpriteHitGroup(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteGroup
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteGroup(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteImageID
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteImageID(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteFrameCount
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteFrameCount(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteHit
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::GetSpriteHit(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteHeight
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteHeight(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteHitCategory
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetSpriteHitCategory(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteFirstContact
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteFirstContact(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteDistancePoint2Y
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteDistancePoint2Y();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteFlippedH
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteFlippedH(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteFlippedV
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteFlippedV(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteDistancePoint2X
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteDistancePoint2X();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteDistancePoint1X
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteDistancePoint1X();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteDistance
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSpriteDistance(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteDepth(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteDistancePoint1Y
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteDistancePoint1Y();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteCurrentFrame
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteCurrentFrame(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteContactWorldY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteContactWorldY();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteContactSpriteID2
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteContactSpriteID2();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteContactWorldX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpriteContactWorldX();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteColorRed
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteColorRed(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteColorGreen
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteColorGreen(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteColorAlpha
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteColorAlpha(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteCollision
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSpriteCollision(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteColorBlue
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteColorBlue(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteActive
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteActive(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteAngleRad
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteAngleRad(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpeechVoiceName
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetSpeechVoiceName(val1));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpriteAngle
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSpriteAngle(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpeechVoiceLanguage
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetSpeechVoiceLanguage(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpeechVoiceID
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetSpeechVoiceID(val1));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundMinRate
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSoundMinRate();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSpeechNumVoices
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSpeechNumVoices();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundsPlaying
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSoundsPlaying(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundMaxRate
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSoundMaxRate();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundInstances
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSoundInstances(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundInstanceVolume
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSoundInstanceVolume(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundInstanceRate
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSoundInstanceRate(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundInstancePlaying
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSoundInstancePlaying(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundInstanceLoopCount
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSoundInstanceLoopCount(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSoundExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSoundExists(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketString
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetSocketString(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketRemoteIP
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetSocketRemoteIP(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketListenerConnection
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSocketListenerConnection(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketInteger
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSocketInteger(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketFloat
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSocketFloat(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSocketExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketConnected
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSocketConnected(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketByte
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSocketByte(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSocketBytesAvailable
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSocketBytesAvailable(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSmartWatchState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSmartWatchState();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DIsTweening
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DIsTweening(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DIsAnimating
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DIsAnimating(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DCurrentTime
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DCurrentTime(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DDepth(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBoneY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSkeleton2DBoneY(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBoneParent
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSkeleton2DBoneParent(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBoneX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSkeleton2DBoneX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBoneCurrY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSkeleton2DBoneCurrY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBoneCurrAngle
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSkeleton2DBoneCurrAngle(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBoneCurrX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSkeleton2DBoneCurrX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBoneAngle
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetSkeleton2DBoneAngle(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DBone
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::GetSkeleton2DBone(val1, jstring_str2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DAnimationTime
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::GetSkeleton2DAnimationTime(val1, jstring_str2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSkeleton2DAngle
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSkeleton2DAngle(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetShadowPolygonsDrawn
(JNIEnv* jenv, jobject jobj) {

    return agk::GetShadowPolygonsDrawn();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetShadowMappingSupported
(JNIEnv* jenv, jobject jobj) {

    return agk::GetShadowMappingSupported();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetShadowMappingMode
(JNIEnv* jenv, jobject jobj) {

    return agk::GetShadowMappingMode();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetShaderExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetShaderExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSecondsFromUnix
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetSecondsFromUnix(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetSeconds
(JNIEnv* jenv, jobject jobj) {

    return agk::GetSeconds();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetScreenYFrom3D
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    return agk::GetScreenYFrom3D(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetScreenXFrom3D
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    return agk::GetScreenXFrom3D(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetScreenBoundsTop
(JNIEnv* jenv, jobject jobj) {

    return agk::GetScreenBoundsTop();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetScreenBoundsRight
(JNIEnv* jenv, jobject jobj) {

    return agk::GetScreenBoundsRight();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetScreenBoundsBottom
(JNIEnv* jenv, jobject jobj) {

    return agk::GetScreenBoundsBottom();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetScreenBoundsLeft
(JNIEnv* jenv, jobject jobj) {

    return agk::GetScreenBoundsLeft();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRotationVectorSensorExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRotationVectorSensorExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRewardAdValueAdMob
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRewardAdValueAdMob();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRewardAdRewardedChartboost
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRewardAdRewardedChartboost();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRewardAdRewardedAdMob
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRewardAdRewardedAdMob();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRewardAdLoadedChartboost
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRewardAdLoadedChartboost();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRewardAdLoadedAdMob
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRewardAdLoadedAdMob();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetResumed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetResumed();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetReadPath
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetReadPath());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRendererName
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetRendererName());
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRayCastY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRayCastY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRayCastX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRayCastX();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRayCastSpriteID
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRayCastSpriteID();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRayCastNormalX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRayCastNormalX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRayCastNormalY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRayCastNormalY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRayCastFraction
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRayCastFraction();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchType
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchType(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchValue
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchValue(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchTime
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchTime(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchStartY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchStartY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchStartX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchStartX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchReleased
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchReleased(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchLastY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchLastY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchLastX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchLastX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchCurrentY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchCurrentY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchCount
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchCount(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorZ2
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorZ2();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawTouchCurrentX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawTouchCurrentX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorZ
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorZ();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorY2
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorY2();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorX2
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorX2();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorW2
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorW2();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawRotationVectorW
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawRotationVectorW();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawProximityDistance
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawProximityDistance();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawNextTouchEvent
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawNextTouchEvent();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseWheelDelta
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseWheelDelta();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseWheel
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseWheel();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseRightState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseRightState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseRightReleased
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseRightReleased();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseRightPressed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseRightPressed();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseMiddleState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseMiddleState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseMiddleReleased
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseMiddleReleased();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseMiddlePressed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseMiddlePressed();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseLeftState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseLeftState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseLeftReleased
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseLeftReleased();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseLeftPressed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseLeftPressed();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseFourthState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseFourthState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseFourthReleased
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseFourthReleased();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseFourthPressed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseFourthPressed();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseFifthReleased
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseFifthReleased();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseFifthState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseFifthState();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMagneticZ
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMagneticZ();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMouseFifthPressed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMouseFifthPressed();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMagneticY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMagneticY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawMagneticX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawMagneticX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawLightLevel
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawLightLevel();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawLastKey
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawLastKey();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawKeyState
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawKeyState(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawKeyReleased
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawKeyReleased(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawKeyPressed
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawKeyPressed(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickSlider
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetRawJoystickSlider(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickRZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickRZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickRX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickRX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickRY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickRY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickPOV
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetRawJoystickPOV(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickName
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetRawJoystickName(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickButtonState
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetRawJoystickButtonState(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickConnected
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawJoystickConnected(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickButtonReleased
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetRawJoystickButtonReleased(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawJoystickButtonPressed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetRawJoystickButtonPressed(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawGyroVelocityZ
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawGyroVelocityZ();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawGyroVelocityY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawGyroVelocityY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawGPSLongitude
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawGPSLongitude();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawGyroVelocityX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawGyroVelocityX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawGPSLatitude
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawGPSLatitude();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawGPSAltitude
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawGPSAltitude();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawFolderNumFolders
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawFolderNumFolders(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawFolderNumFiles
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawFolderNumFiles(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawFolderFolderName
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetRawFolderFolderName(val1, val2));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawFolderFileName
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetRawFolderFileName(val1, val2));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawAccelZ
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawAccelZ();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawFirstTouchEvent
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetRawFirstTouchEvent(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawAccelX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawAccelX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetRawAccelY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetRawAccelY();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPushNotificationToken
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetPushNotificationToken());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetProximitySensorExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetProximitySensorExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPolygonsDrawn
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPolygonsDrawn();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPointerY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPointerY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPointerX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPointerX();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPointerState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPointerState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPointerReleased
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPointerReleased();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPointerPressed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPointerPressed();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPointLightExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetPointLightExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPixelsDrawn
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPixelsDrawn();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsTime
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPhysicsTime();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsSolveTime
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPhysicsSolveTime();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsIslandCount
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPhysicsIslandCount();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsCollisionY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPhysicsCollisionY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsCollisionX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPhysicsCollisionX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsCollisionWorldX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPhysicsCollisionWorldX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsCollisionWorldY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPhysicsCollisionWorldY();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPaused
(JNIEnv* jenv, jobject jobj) {

    return agk::GetPaused();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetPhysicsCollision
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetPhysicsCollision(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesVisible(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesMaxReached
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesMaxReached(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesSize
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesSize(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesLife
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesLife(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesFrequency
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesFrequency(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesDirectionX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesDirectionX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesDirectionY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesDirectionY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesDepth(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesAngle
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesAngle(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesAngleRad
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesAngleRad(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticlesActive
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetParticlesActive(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticleDrawnQuadCount
(JNIEnv* jenv, jobject jobj) {

    return agk::GetParticleDrawnQuadCount();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetParticleDrawnPointCount
(JNIEnv* jenv, jobject jobj) {

    return agk::GetParticleDrawnPointCount();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetOrientation
(JNIEnv* jenv, jobject jobj) {

    return agk::GetOrientation();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjects3DPhysicsContactPositionVector
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::GetObjects3DPhysicsContactPositionVector(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldQuatY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldQuatY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldQuatZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldQuatZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldQuatX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldQuatX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldQuatW
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldQuatW(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldAngleY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldAngleY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldAngleX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldAngleX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectWorldAngleZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectWorldAngleZ(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectVisible(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectTextureName
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetObjectTextureName(val1, val2));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectSizeMinZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectSizeMinZ(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectTransparency
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectTransparency(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectSizeMinY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectSizeMinY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectSizeMaxY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectSizeMaxY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectSizeMinX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectSizeMinX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectSizeMaxZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectSizeMaxZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectSizeMaxX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectSizeMaxX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectReceiveShadowMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectReceiveShadowMode(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastSlideY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastSlideY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastSlideX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastSlideX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastNumHits
(JNIEnv* jenv, jobject jobj) {

    return agk::GetObjectRayCastNumHits();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastNormalZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastNormalZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastSlideZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastSlideZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastNormalY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastNormalY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastNormalX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastNormalX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastHitID
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastHitID(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastDistance
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastDistance(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastBounceY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastBounceY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastBounceZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastBounceZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectRayCastBounceX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectRayCastBounceX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectQuatZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectQuatZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectQuatY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectQuatY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectQuatX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectQuatX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectNumTextures
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectNumTextures(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectQuatW
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectQuatW(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectNumMeshes
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectNumMeshes(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectNumChildren
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectNumChildren(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectNumAnimations
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectNumAnimations(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectNumBones
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectNumBones(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectName
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetObjectName(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshVSSource
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetObjectMeshVSSource(val1, val2));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshSizeMinZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectMeshSizeMinZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshSizeMaxZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectMeshSizeMaxZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshSizeMinX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectMeshSizeMinX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshSizeMinY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectMeshSizeMinY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshSizeMaxY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectMeshSizeMaxY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshSizeMaxX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectMeshSizeMaxX(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshPSSource
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetObjectMeshPSSource(val1, val2));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectMeshName
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetObjectMeshName(val1, val2));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectIsTweening
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectIsTweening(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectIsAnimating
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectIsAnimating(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectInScreen
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectInScreen(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectDepthWrite
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectDepthWrite(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectHeightMapHeight
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    return agk::GetObjectHeightMapHeight(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectDepthReadMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectDepthReadMode(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectDepthBias
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectDepthBias(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectCullMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectCullMode(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectColorRed
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectColorRed(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectColorGreen
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectColorGreen(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectColorBlue
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectColorBlue(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectChildID
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectChildID(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneY(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectCastShadowMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectCastShadowMode(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldQuatZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldQuatZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldQuatY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldQuatY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldAngleZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldAngleZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldQuatX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldQuatX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldQuatW
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldQuatW(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldAngleY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldAngleY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneWorldAngleX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneWorldAngleX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneQuatZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneQuatZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneQuatW
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneQuatW(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneQuatX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneQuatX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneQuatY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneQuatY(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneByName
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::GetObjectBoneByName(val1, jstring_str2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneName
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetObjectBoneName(val1, val2));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneAngleY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneAngleY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneAngleZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneAngleZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectBoneAngleX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetObjectBoneAngleX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectAnimationTime
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectAnimationTime(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectAnimationDuration
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::GetObjectAnimationDuration(val1, jstring_str2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectAnimationName
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetObjectAnimationName(val1, val2));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectAngleZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectAngleZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectAngleY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectAngleY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectAngleX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectAngleX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsRestitution
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsRestitution(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsNextContact
(JNIEnv* jenv, jobject jobj) {

    return agk::GetObject3DPhysicsNextContact();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsRollingFriction
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsRollingFriction(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObjectAlpha
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObjectAlpha(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsMaxLinearVelocity
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsMaxLinearVelocity(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsMass
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsMass(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsMask
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsMask(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsLinearVelocityZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsLinearVelocityZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsLinearVelocityY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsLinearVelocityY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsLinearVelocityX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsLinearVelocityX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsLinearDamp
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsLinearDamp(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsLinearSleepingThreshold
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsLinearSleepingThreshold(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsGroup
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsGroup(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsFriction
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsFriction(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsFirstContact
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsFirstContact(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsContactZ
(JNIEnv* jenv, jobject jobj) {

    return agk::GetObject3DPhysicsContactZ();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsContactX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetObject3DPhysicsContactX();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsContactVector
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsContactVector(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsContactY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetObject3DPhysicsContactY();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsContactObjectB
(JNIEnv* jenv, jobject jobj) {

    return agk::GetObject3DPhysicsContactObjectB();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsAngularVelocityZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsAngularVelocityZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsAngularVelocityY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsAngularVelocityY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsAngularVelocityX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsAngularVelocityX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsAngularSleepingThreshold
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsAngularSleepingThreshold(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetObject3DPhysicsAngularDamp
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetObject3DPhysicsAngularDamp(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNumProcessors
(JNIEnv* jenv, jobject jobj) {

    return agk::GetNumProcessors();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNumDeviceCameras
(JNIEnv* jenv, jobject jobj) {

    return agk::GetNumDeviceCameras();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNextFolder
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetNextFolder());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNextFile
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetNextFile());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNextContact
(JNIEnv* jenv, jobject jobj) {

    return agk::GetNextContact();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkServerIP
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetNetworkServerIP(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkServerID
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkServerID(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkNumClients
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkNumClients(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkNextClient
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkNextClient(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMyClientID
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkMyClientID(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessageString
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetNetworkMessageString(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessageInteger
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkMessageInteger(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessageFromPort
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkMessageFromPort(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessageFromIP
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetNetworkMessageFromIP(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessageFromClient
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkMessageFromClient(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessageFloat
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkMessageFloat(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessageByte
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkMessageByte(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkFirstClient
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkFirstClient(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkMessage
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkMessage(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetNetworkExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkClientUserData
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::GetNetworkClientUserData(val1, val2, val3);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkClientPing
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetNetworkClientPing(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkClientName
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetNetworkClientName(val1, val2));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkClientIP
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return jenv->NewStringUTF(agk::GetNetworkClientIP(val1, val2));
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkClientFloat
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jstring str3) {
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    return agk::GetNetworkClientFloat(val1, val2, jstring_str3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkClientInteger
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jstring str3) {
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    return agk::GetNetworkClientInteger(val1, val2, jstring_str3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNetworkClientDisconnected
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetNetworkClientDisconnected(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetNFCExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetNFCExists();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicPositionOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMusicPositionOGG(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicPosition
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMusicPosition();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicPlayingOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMusicPlayingOGG(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicPlaying
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMusicPlaying();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicExistsOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMusicExistsOGG(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicLoopCountOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMusicLoopCountOGG(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMusicExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicDurationOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMusicDurationOGG(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMusicDuration
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMusicDuration(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMouseExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMouseExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMinutesFromUnix
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMinutesFromUnix(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMonthFromUnix
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMonthFromUnix(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMultiTouchExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMultiTouchExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMilliseconds
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMilliseconds();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexV
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexV(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexZ(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexU
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexU(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexRed
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexRed(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexNormalY
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexNormalY(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexNormalX
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexNormalX(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexNormalZ
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexNormalZ(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexGreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexGreen(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexBlue
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexBlue(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMeshMemblockVertexAlpha
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMeshMemblockVertexAlpha(val1, val2);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockString
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return jenv->NewStringUTF(agk::GetMemblockString(val1, val2, val3));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockShort
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMemblockShort(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockSize
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMemblockSize(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockSHA256
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetMemblockSHA256(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockSHA1
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetMemblockSHA1(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockInt
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMemblockInt(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockFloat
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMemblockFloat(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetMemblockExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockByte
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMemblockByte(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMaxDeviceWidth
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMaxDeviceWidth();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMemblockByteSigned
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::GetMemblockByteSigned(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMaxDeviceHeight
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMaxDeviceHeight();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetManagedSpriteSortedCount
(JNIEnv* jenv, jobject jobj) {

    return agk::GetManagedSpriteSortedCount();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetManagedSpriteDrawCalls
(JNIEnv* jenv, jobject jobj) {

    return agk::GetManagedSpriteDrawCalls();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetManagedSpriteDrawnCount
(JNIEnv* jenv, jobject jobj) {

    return agk::GetManagedSpriteDrawnCount();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetManagedSpriteCount
(JNIEnv* jenv, jobject jobj) {

    return agk::GetManagedSpriteCount();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetMagneticSensorExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetMagneticSensorExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLocalNotificationTime
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetLocalNotificationTime(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLocalNotificationExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetLocalNotificationExists(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLocalNotificationMessage
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetLocalNotificationMessage(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLoadedImages
(JNIEnv* jenv, jobject jobj) {

    return agk::GetLoadedImages();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLightSensorExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetLightSensorExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLeapYear
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetLeapYear(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLastError
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetLastError());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetKeyboardExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetKeyboardExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetLastChar
(JNIEnv* jenv, jobject jobj) {

    return agk::GetLastChar();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetJoystickY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetJoystickY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetJoystickX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetJoystickX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetJointReactionTorque
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetJointReactionTorque(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetJoystickExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetJoystickExists();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetJointReactionForceY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetJointReactionForceY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetJointReactionForceX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetJointReactionForceX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetJointExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetJointExists(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetInAppPurchaseLocalPrice
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetInAppPurchaseLocalPrice(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetInAppPurchaseState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetInAppPurchaseState();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetInAppPurchaseSignature
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetInAppPurchaseSignature(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetInAppPurchaseDescription
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetInAppPurchaseDescription(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetInternetState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetInternetState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImageSizeFromFile
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::GetImageSizeFromFile(jstring_str1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImageMemoryUsage
(JNIEnv* jenv, jobject jobj) {

    return agk::GetImageMemoryUsage();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImageHeight
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetImageHeight(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImageWidth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetImageWidth(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetInAppPurchaseAvailable
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetInAppPurchaseAvailable(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImageExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetImageExists(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImageFilename
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetImageFilename(val1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImage__IFFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::GetImage(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetImage__FFFF
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4) {

    return agk::GetImage(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHoursFromUnix
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetHoursFromUnix(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHTTPStatusCode
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetHTTPStatusCode(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHTTPFileProgress
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetHTTPFileProgress(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHTTPResponseReady
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetHTTPResponseReady(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHTTPResponse
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetHTTPResponse(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHTTPFileComplete
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetHTTPFileComplete(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetGyroSensorExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetGyroSensorExists();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetGameCenterPlayerID
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetGameCenterPlayerID());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHTTPFile__ILjava_lang_String_2Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3, jstring str4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    const char* jstring_str4 = jenv->GetStringUTFChars(str4, 0);
    return agk::GetHTTPFile(val1, jstring_str2, jstring_str3, jstring_str4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetHTTPFile__ILjava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    return agk::GetHTTPFile(val1, jstring_str2, jstring_str3);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetGameCenterPlayerDisplayName
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetGameCenterPlayerDisplayName());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetGameCenterLoggedIn
(JNIEnv* jenv, jobject jobj) {

    return agk::GetGameCenterLoggedIn();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetGameCenterExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetGameCenterExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFullscreenAdvertLoadedChartboost
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFullscreenAdvertLoadedChartboost();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFullscreenAdvertLoadedAmazon
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFullscreenAdvertLoadedAmazon();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetGPSSensorExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetGPSSensorExists();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFullscreenAdvertLoadedAdMob
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFullscreenAdvertLoadedAdMob();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFrameTime
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFrameTime();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFontExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetFontExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFolderCount__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetFolderCount(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFolderCount__
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFolderCount();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFolder
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetFolder());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFirstFolder__
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetFirstFolder());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFirstFolder__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetFirstFolder(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFirstFile__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetFirstFile(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFirstFile__
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetFirstFile());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFogMode
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFogMode();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFirstContact
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFirstContact();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFileSize
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetFileSize(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFileCount__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetFileCount(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFileCount__
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFileCount();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFileExists
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::GetFileExists(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFilePos
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetFilePos(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFacebookLoggedIn
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFacebookLoggedIn();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFacebookDownloadState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetFacebookDownloadState();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetFacebookDownloadFile
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetFacebookDownloadFile());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetExpansionFileState
(JNIEnv* jenv, jobject jobj) {

    return agk::GetExpansionFileState();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetExpansionFileError
(JNIEnv* jenv, jobject jobj) {

    return agk::GetExpansionFileError();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetExpansionFileProgress
(JNIEnv* jenv, jobject jobj) {

    return agk::GetExpansionFileProgress();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetErrorOccurred
(JNIEnv* jenv, jobject jobj) {

    return agk::GetErrorOccurred();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxVisible(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxWidth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxWidth(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxText
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::GetEditBoxText(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxLines
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxLines(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxHeight
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxHeight(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxHasFocus
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxHasFocus(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxDepth(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxChanged
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxChanged(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxCursorPosition
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxCursorPosition(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDrawingTime
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDrawingTime();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetEditBoxActive
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetEditBoxActive(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDrawingSetupTime
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDrawingSetupTime();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDocumentsPath
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDocumentsPath());
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDisplayAspect
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDisplayAspect();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDirectionX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDirectionX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDirectionY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDirectionY();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDirectionSpeed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDirectionSpeed();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDirectionAngle
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDirectionAngle();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceWidth
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDeviceWidth();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDevicePlatform
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDevicePlatform();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceType
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDeviceType());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceNetworkType
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDeviceNetworkType();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceLanguage
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDeviceLanguage());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceIPv6
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDeviceIPv6());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceName
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDeviceName());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceIP
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDeviceIP());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceID
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDeviceID());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceHeight
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDeviceHeight();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceCameraType
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetDeviceCameraType(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceDPI
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDeviceDPI();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDeviceBaseName
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetDeviceBaseName());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDaysFromUnix
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetDaysFromUnix(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCurrentTime
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetCurrentTime());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCurrentEditBox
(JNIEnv* jenv, jobject jobj) {

    return agk::GetCurrentEditBox();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCurrentDir
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetCurrentDir());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetDayOfWeek
(JNIEnv* jenv, jobject jobj) {

    return agk::GetDayOfWeek();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCurrentDate
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetCurrentDate());
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetContactWorldX
(JNIEnv* jenv, jobject jobj) {

    return agk::GetContactWorldX();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetContactWorldY
(JNIEnv* jenv, jobject jobj) {

    return agk::GetContactWorldY();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetContactSpriteID2
(JNIEnv* jenv, jobject jobj) {

    return agk::GetContactSpriteID2();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetContactSpriteID1
(JNIEnv* jenv, jobject jobj) {

    return agk::GetContactSpriteID1();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetConsentStatusAdMob
(JNIEnv* jenv, jobject jobj) {

    return agk::GetConsentStatusAdMob();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetColorRed
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetColorRed(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCloudDataVariable
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return jenv->NewStringUTF(agk::GetCloudDataVariable(jstring_str1, jstring_str2));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetColorGreen
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetColorGreen(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetColorBlue
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetColorBlue(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCloudDataChanged
(JNIEnv* jenv, jobject jobj) {

    return agk::GetCloudDataChanged();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCloudDataAllowed
(JNIEnv* jenv, jobject jobj) {

    return agk::GetCloudDataAllowed();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetClipboardText
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetClipboardText());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCharBufferLength
(JNIEnv* jenv, jobject jobj) {

    return agk::GetCharBufferLength();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetChosenImage
(JNIEnv* jenv, jobject jobj) {

    return agk::GetChosenImage();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCharBuffer
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetCharBuffer());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCapturedImage
(JNIEnv* jenv, jobject jobj) {

    return agk::GetCapturedImage();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraWorldZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraWorldZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraWorldX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraWorldX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraWorldY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraWorldY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraQuatY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraQuatY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraQuatZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraQuatZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraQuatX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraQuatX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraQuatW
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraQuatW(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetCameraExists();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraFOV
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraFOV(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraAngleZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraAngleZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraAngleY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraAngleY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetCameraAngleX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetCameraAngleX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetButtonState
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetButtonState(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetButtonReleased
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetButtonReleased(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetButtonPressed
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetButtonPressed(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetBroadcastMessage
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetBroadcastMessage(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetAppRunning
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::GetAppRunning(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetAppPackageName
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetAppPackageName());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetAppName
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::GetAppName());
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetAppInstalled
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::GetAppInstalled(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GetAccelerometerExists
(JNIEnv* jenv, jobject jobj) {

    return agk::GetAccelerometerExists();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DVectorZFromScreen
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::Get3DVectorZFromScreen(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DVectorXFromScreen
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::Get3DVectorXFromScreen(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DVectorYFromScreen
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::Get3DVectorYFromScreen(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsTotalObjects
(JNIEnv* jenv, jobject jobj) {

    return agk::Get3DPhysicsTotalObjects();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsTotalJoints
(JNIEnv* jenv, jobject jobj) {

    return agk::Get3DPhysicsTotalJoints();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRayCastObjectHit
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    return agk::Get3DPhysicsRayCastObjectHit(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRayCastFraction
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsRayCastFraction(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRayCastNormalVector
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Get3DPhysicsRayCastNormalVector(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRayCastNumHits
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsRayCastNumHits(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRayCastContactPosition
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3) {

    return agk::Get3DPhysicsRayCastContactPosition(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRayCastClosestObjectHit
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsRayCastClosestObjectHit(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRayCastClosestContactPosition
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::Get3DPhysicsRayCastClosestContactPosition(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRagdollExist
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsRagdollExist(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsRagdollFromBoneObject
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsRagdollFromBoneObject(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsJointRotationVector
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsJointRotationVector(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsJointPositionVector
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsJointPositionVector(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsCharacterControllerMaxSlope
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsCharacterControllerMaxSlope(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsCharacterControllerGravity
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsCharacterControllerGravity(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsJointEnabled
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsJointEnabled(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsCharacterControllerExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DPhysicsCharacterControllerExists(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DPhysicsActiveObjects
(JNIEnv* jenv, jobject jobj) {

    return agk::Get3DPhysicsActiveObjects();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesVisible
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesVisible(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesSize
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesSize(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesMaxReached
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesMaxReached(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesLife
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesLife(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesFrequency
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesFrequency(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesExists
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesExists(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesDirectionZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesDirectionZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesDirectionY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesDirectionY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesDirectionX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesDirectionX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesDirectionRange2
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesDirectionRange2(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesDirectionRange1
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesDirectionRange1(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Get3DParticlesActive
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::Get3DParticlesActive(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterSubmitScore
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::GameCenterSubmitScore(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterSubmitAchievement
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::GameCenterSubmitAchievement(jstring_str1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterShowLeaderBoard
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::GameCenterShowLeaderBoard(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterSetup
(JNIEnv* jenv, jobject jobj) {

    agk::GameCenterSetup();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterLogout
(JNIEnv* jenv, jobject jobj) {

    agk::GameCenterLogout();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterLogin
(JNIEnv* jenv, jobject jobj) {

    agk::GameCenterLogin();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterAchievementsShow
(JNIEnv* jenv, jobject jobj) {

    agk::GameCenterAchievementsShow();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_GameCenterAchievementsReset
(JNIEnv* jenv, jobject jobj) {

    agk::GameCenterAchievementsReset();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FlushSocket
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::FlushSocket(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Floor
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Floor(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixTextToScreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::FixTextToScreen(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixSpriteToSkeleton2D
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::FixSpriteToSkeleton2D(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixSpriteToScreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::FixSpriteToScreen(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixParticlesToScreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::FixParticlesToScreen(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixObjectToObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::FixObjectToObject(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixSkeleton2DToScreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::FixSkeleton2DToScreen(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixObjectToBone
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::FixObjectToBone(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixObjectPivot
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::FixObjectPivot(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixEditBoxToScreen
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::FixEditBoxToScreen(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FixCameraToObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::FixCameraToObject(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FirebaseSetup
(JNIEnv* jenv, jobject jobj) {

    agk::FirebaseSetup();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FirebaseLogEvent
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::FirebaseLogEvent(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FinishPulleyJoint
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jfloat val8) {

    return agk::FinishPulleyJoint(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FindStringReverse__Ljava_lang_String_2Ljava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::FindStringReverse(jstring_str1, jstring_str2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FindStringReverse__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::FindStringReverse(jstring_str1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FindStringCount__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::FindStringCount(jstring_str1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FindStringCount__Ljava_lang_String_2Ljava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::FindStringCount(jstring_str1, jstring_str2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FindString__Ljava_lang_String_2Ljava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::FindString(jstring_str1, jstring_str2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FindString__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::FindString(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Finalize3DPhysicsRagDoll
(JNIEnv* jenv, jobject jobj) {

    agk::Finalize3DPhysicsRagDoll();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FileIsOpen
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::FileIsOpen(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookSetup
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::FacebookSetup(jstring_str1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FileEOF
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::FileEOF(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookShowLikeButton
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2, jint val3, jint val4, jint val5) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::FacebookShowLikeButton(jstring_str1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookPostOnFriendsWall
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jstring str3, jstring str4, jstring str5, jstring str6) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    const char* jstring_str4 = jenv->GetStringUTFChars(str4, 0);
    const char* jstring_str5 = jenv->GetStringUTFChars(str5, 0);
    const char* jstring_str6 = jenv->GetStringUTFChars(str6, 0);
    agk::FacebookPostOnFriendsWall(jstring_str1, jstring_str2, jstring_str3, jstring_str4, jstring_str5, jstring_str6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookLogout
(JNIEnv* jenv, jobject jobj) {

    agk::FacebookLogout();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookPostOnMyWall
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jstring str3, jstring str4, jstring str5) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    const char* jstring_str4 = jenv->GetStringUTFChars(str4, 0);
    const char* jstring_str5 = jenv->GetStringUTFChars(str5, 0);
    agk::FacebookPostOnMyWall(jstring_str1, jstring_str2, jstring_str3, jstring_str4, jstring_str5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookInviteFriend
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::FacebookInviteFriend(jstring_str1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookLogin
(JNIEnv* jenv, jobject jobj) {

    agk::FacebookLogin();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetUserName
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::FacebookGetUserName());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetFriendsID
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::FacebookGetFriendsID(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetFriendsState
(JNIEnv* jenv, jobject jobj) {

    return agk::FacebookGetFriendsState();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetUserID
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::FacebookGetUserID());
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetFriendsName
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::FacebookGetFriendsName(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetFriendsCount
(JNIEnv* jenv, jobject jobj) {

    return agk::FacebookGetFriendsCount();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetAccessToken
(JNIEnv* jenv, jobject jobj) {

    return jenv->NewStringUTF(agk::FacebookGetAccessToken());
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookDownloadFriendsPhoto
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::FacebookDownloadFriendsPhoto(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookDestroyLikeButton
(JNIEnv* jenv, jobject jobj) {

    agk::FacebookDestroyLikeButton();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookGetFriends
(JNIEnv* jenv, jobject jobj) {

    agk::FacebookGetFriends();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FacebookActivateAppTracking
(JNIEnv* jenv, jobject jobj) {

    agk::FacebookActivateAppTracking();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_FMod
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::FMod(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ExtractZipASync
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jstring str3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::ExtractZipASync(jstring_str1, jstring_str2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ExtractZip__Ljava_lang_String_2Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jstring str3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::ExtractZip(jstring_str1, jstring_str2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ExtractZip__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::ExtractZip(jstring_str1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_EncodeQRCode
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::EncodeQRCode(jstring_str1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_EnableClearDepth
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::EnableClearDepth(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_EnableClearColor
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::EnableClearColor(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawSprite
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DrawSprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawText
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DrawText(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawParticles
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DrawParticles(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawObject
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DrawObject(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawLine__FFFFIII
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4, jint val5, jint val6, jint val7) {

    agk::DrawLine(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawLine__FFFFII
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4, jint val5, jint val6) {

    agk::DrawLine(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawEllipse
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4, jint val5, jint val6, jint val7) {

    agk::DrawEllipse(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DrawBox
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4, jint val5, jint val6, jint val7, jint val8, jint val9) {

    agk::DrawBox(val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Draw3DParticles
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Draw3DParticles(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DownloadExpansionFile
(JNIEnv* jenv, jobject jobj) {

    agk::DownloadExpansionFile();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteVirtualJoystick
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteVirtualJoystick(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteVirtualButton
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteVirtualButton(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteVector3
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteVector3(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteVideo
(JNIEnv* jenv, jobject jobj) {

    agk::DeleteVideo();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteUDPListener
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteUDPListener(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteTweenChain
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteTweenChain(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteTween
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteTween(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteText
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteText(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteSprite
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteSprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteSound
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteSound(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteSocket
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteSocket(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteSocketListener
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteSocketListener(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteSkeleton2D
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteSkeleton2D(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteSharedVariable
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::DeleteSharedVariable(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteShader
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteShader(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeletePointLight
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeletePointLight(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeletePhysicsForce
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeletePhysicsForce(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteParticles
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteParticles(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteObjectWithChildren
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteObjectWithChildren(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteObjectTree
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteObjectTree(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteNetworkMessage
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteNetworkMessage(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteObject
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteObject(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteNetworkClient
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::DeleteNetworkClient(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteMusicOGG
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteMusicOGG(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteJoint
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteJoint(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteMemblock
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteMemblock(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteMusic
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteMusic(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteImage
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteImage(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteHTTPConnection
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteHTTPConnection(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteFont
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteFont(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteEditBox
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteEditBox(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteFile
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::DeleteFile(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteFolder
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::DeleteFolder(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteCloudDataVariable
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::DeleteCloudDataVariable(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteBroadcastListener
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::DeleteBroadcastListener(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteAllObjects
(JNIEnv* jenv, jobject jobj) {

    agk::DeleteAllObjects();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteAllSprites
(JNIEnv* jenv, jobject jobj) {

    agk::DeleteAllSprites();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteAllText
(JNIEnv* jenv, jobject jobj) {

    agk::DeleteAllText();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteAllImages
(JNIEnv* jenv, jobject jobj) {

    agk::DeleteAllImages();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DeleteAdvert
(JNIEnv* jenv, jobject jobj) {

    agk::DeleteAdvert();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsWorld
(JNIEnv* jenv, jobject jobj) {

    agk::Delete3DPhysicsWorld();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsRay
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DPhysicsRay(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsStaticPlane
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DPhysicsStaticPlane(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsRagdoll
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DPhysicsRagdoll(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsPickJoint
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DPhysicsPickJoint(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsJoint
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DPhysicsJoint(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsCharacterController
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DPhysicsCharacterController(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DPhysicsBody
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DPhysicsBody(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Delete3DParticles
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Delete3DParticles(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Debug3DPhysicsWorld
(JNIEnv* jenv, jobject jobj) {

    agk::Debug3DPhysicsWorld();
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_DecodeQRCode
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::DecodeQRCode(val1));
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Debug3DPhysicsCharacterController
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::Debug3DPhysicsCharacterController(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Crouch3DPhysicsCharacterController
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Crouch3DPhysicsCharacterController(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateZip__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateZip(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateZip__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::CreateZip(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateWeldJoint__IIIFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jint val6) {

    agk::CreateWeldJoint(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateWeldJoint__IIFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jint val5) {

    return agk::CreateWeldJoint(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateVector3__FFF
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    return agk::CreateVector3(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateVector3__
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateVector3();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenSprite__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::CreateTweenSprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenSprite__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::CreateTweenSprite(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateUDPListener__ILjava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::CreateUDPListener(val1, jstring_str2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateUDPListener__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateUDPListener(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenText__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::CreateTweenText(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenText__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::CreateTweenText(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenObject__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::CreateTweenObject(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenObject__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::CreateTweenObject(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenCustom__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::CreateTweenCustom(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenCustom__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::CreateTweenCustom(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenChar__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::CreateTweenChar(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenChar__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::CreateTweenChar(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenCamera__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::CreateTweenCamera(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenCamera__IF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::CreateTweenCamera(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenChain__
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateTweenChain();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateTweenChain__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CreateTweenChain(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateText__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateText(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateText__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::CreateText(val1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSprite__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateSprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSprite__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateSprite(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSoundFromOGGMemblock__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateSoundFromOGGMemblock(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSoundFromOGGMemblock__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateSoundFromOGGMemblock(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSoundFromMemblock__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateSoundFromMemblock(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSoundFromMemblock__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateSoundFromMemblock(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSocketListener__ILjava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::CreateSocketListener(val1, jstring_str2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSocketListener__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateSocketListener(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSkeleton2D__
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateSkeleton2D();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateSkeleton2D__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CreateSkeleton2D(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateRopeJoint__IIFFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jint val8) {

    return agk::CreateRopeJoint(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateRopeJoint__IIIFFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jfloat val8, jint val9) {

    agk::CreateRopeJoint(val1, val2, val3, val4, val5, val6, val7, val8, val9);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateRevoluteJoint__IIFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jint val5) {

    return agk::CreateRevoluteJoint(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateRevoluteJoint__IIIFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jint val6) {

    agk::CreateRevoluteJoint(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateRenderImage__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    return agk::CreateRenderImage(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateRenderImage__IIIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::CreateRenderImage(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreatePulleyJoint2
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jint val4) {

    agk::CreatePulleyJoint2(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreatePulleyJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jfloat val8, jfloat val9, jfloat val10, jfloat val11, jfloat val12, jint val13) {

    agk::CreatePulleyJoint(val1, val2, val3, val4, val5, val6, val7, val8, val9, val10, val11, val12, val13);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreatePrismaticJoint__IIFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jint val7) {

    return agk::CreatePrismaticJoint(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreatePrismaticJoint__IIIFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jint val8) {

    agk::CreatePrismaticJoint(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreatePointLight
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jint val6, jint val7, jint val8) {

    agk::CreatePointLight(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateParticles__FF
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::CreateParticles(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateParticles__IFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::CreateParticles(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreatePhysicsForce
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jint val6) {

    return agk::CreatePhysicsForce(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectSphere__IFII
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3, jint val4) {

    agk::CreateObjectSphere(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectSphere__FII
(JNIEnv* jenv, jobject jobj, jfloat val1, jint val2, jint val3) {

    return agk::CreateObjectSphere(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectQuad__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CreateObjectQuad(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectQuad__
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateObjectQuad();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectPlane__IFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::CreateObjectPlane(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectPlane__FF
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::CreateObjectPlane(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromRawHeightMap__Ljava_lang_String_2FFFIIII
(JNIEnv* jenv, jobject jobj, jstring str1, jfloat val2, jfloat val3, jfloat val4, jint val5, jint val6, jint val7, jint val8) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateObjectFromRawHeightMap(jstring_str1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromRawHeightMap__ILjava_lang_String_2FFFIIII
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4, jfloat val5, jint val6, jint val7, jint val8, jint val9) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::CreateObjectFromRawHeightMap(val1, jstring_str2, val3, val4, val5, val6, val7, val8, val9);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromObjectMesh__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::CreateObjectFromObjectMesh(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromObjectMesh__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::CreateObjectFromObjectMesh(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromMeshMemblock__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateObjectFromMeshMemblock(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromMeshMemblock__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateObjectFromMeshMemblock(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromHeightMap__ILjava_lang_String_2FFFII
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jfloat val3, jfloat val4, jfloat val5, jint val6, jint val7) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::CreateObjectFromHeightMap(val1, jstring_str2, val3, val4, val5, val6, val7);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectFromHeightMap__Ljava_lang_String_2FFFII
(JNIEnv* jenv, jobject jobj, jstring str1, jfloat val2, jfloat val3, jfloat val4, jint val5, jint val6) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateObjectFromHeightMap(jstring_str1, val2, val3, val4, val5, val6);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectCylinder__FFI
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jint val3) {

    return agk::CreateObjectCylinder(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectCylinder__IFFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::CreateObjectCylinder(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectCapsule__IFFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::CreateObjectCapsule(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectCapsule__FFI
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jint val3) {

    return agk::CreateObjectCapsule(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectCone__FFI
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jint val3) {

    return agk::CreateObjectCone(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectCone__IFFI
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jint val4) {

    agk::CreateObjectCone(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectBox__FFF
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    return agk::CreateObjectBox(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateObjectBox__IFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::CreateObjectBox(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateNetworkMessage
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateNetworkMessage();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMusicFromOGGMemblock__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateMusicFromOGGMemblock(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMusicFromOGGMemblock__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateMusicFromOGGMemblock(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromObjectMesh__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::CreateMemblockFromObjectMesh(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromObjectMesh__III
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    agk::CreateMemblockFromObjectMesh(val1, val2, val3);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromSound__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateMemblockFromSound(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromSound__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateMemblockFromSound(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMouseJoint__IIFFF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::CreateMouseJoint(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMouseJoint__IFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    return agk::CreateMouseJoint(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromImage__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateMemblockFromImage(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromImage__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateMemblockFromImage(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateLineJoint__IIFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jint val7) {

    return agk::CreateLineJoint(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateLineJoint__IIIFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jint val8) {

    agk::CreateLineJoint(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblock__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateMemblock(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblock__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateMemblock(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateImageFromPNGMemblock__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateImageFromPNGMemblock(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateImageFromPNGMemblock__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateImageFromPNGMemblock(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromFile__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateMemblockFromFile(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateMemblockFromFile__ILjava_lang_String_2
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::CreateMemblockFromFile(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateImageFromMemblock__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CreateImageFromMemblock(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateImageFromMemblock__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateImageFromMemblock(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateHTTPConnection
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateHTTPConnection();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateGearJoint__IIF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    return agk::CreateGearJoint(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateGearJoint__IIIF
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::CreateGearJoint(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateImageColor__IIIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::CreateImageColor(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateImageColor__IIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    return agk::CreateImageColor(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateFullscreenAdvert
(JNIEnv* jenv, jobject jobj) {

    agk::CreateFullscreenAdvert();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateFileFromMemblock
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::CreateFileFromMemblock(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateEditBox__
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateEditBox();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateEditBox__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CreateEditBox(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateDummySprite__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CreateDummySprite(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateDummySprite__
(JNIEnv* jenv, jobject jobj) {

    return agk::CreateDummySprite();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateDistanceJoint__IIIFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5, jfloat val6, jfloat val7, jint val8) {

    agk::CreateDistanceJoint(val1, val2, val3, val4, val5, val6, val7, val8);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateDistanceJoint__IIFFFFI
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6, jint val7) {

    return agk::CreateDistanceJoint(val1, val2, val3, val4, val5, val6, val7);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateBroadcastListener__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CreateBroadcastListener(jstring_str1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateBroadcastListener__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CreateBroadcastListener(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateAdvertEx
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jfloat val5, jfloat val6) {

    agk::CreateAdvertEx(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CreateAdvert
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::CreateAdvert(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsStaticPlane
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3, jfloat val4) {

    return agk::Create3DPhysicsStaticPlane(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsWorld__F
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    agk::Create3DPhysicsWorld(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsWorld__
(JNIEnv* jenv, jobject jobj) {

    agk::Create3DPhysicsWorld();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsStaticBody
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Create3DPhysicsStaticBody(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsSliderJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    return agk::Create3DPhysicsSliderJoint(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsRay
(JNIEnv* jenv, jobject jobj) {

    return agk::Create3DPhysicsRay();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsRagDoll
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::Create3DPhysicsRagDoll(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsPickJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    return agk::Create3DPhysicsPickJoint(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsKinematicBody
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Create3DPhysicsKinematicBody(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsHingeJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    return agk::Create3DPhysicsHingeJoint(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsFixedJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3) {

    return agk::Create3DPhysicsFixedJoint(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsDynamicBody
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Create3DPhysicsDynamicBody(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsConeTwistJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    return agk::Create3DPhysicsConeTwistJoint(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysicsCharacterController
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jfloat val5) {

    agk::Create3DPhysicsCharacterController(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DPhysics6DOFJoint
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    return agk::Create3DPhysics6DOFJoint(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CountWindowsDrives
(JNIEnv* jenv, jobject jobj) {

    return agk::CountWindowsDrives();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DParticles__FFF
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2, jfloat val3) {

    return agk::Create3DParticles(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Create3DParticles__IFFF
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::Create3DParticles(val1, val2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CountStringTokens2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::CountStringTokens2(jstring_str1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CountStringTokens
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::CountStringTokens(jstring_str1, jstring_str2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CosRad
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::CosRad(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CopyNetworkMessage
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CopyNetworkMessage(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Cos
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Cos(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CopyImage__IIIIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5, jint val6) {

    agk::CopyImage(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CopyImage__IIIII
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    return agk::CopyImage(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CopyMemblock
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::CopyMemblock(val1, val2, val3, val4, val5);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ConnectSocket__ILjava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jint val3, jint val4) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::ConnectSocket(val1, jstring_str2, val3, val4);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ConnectSocket__Ljava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2, jint val3) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::ConnectSocket(jstring_str1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CompleteRawJoystickDetection
(JNIEnv* jenv, jobject jobj) {

    agk::CompleteRawJoystickDetection();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CompareString__Ljava_lang_String_2Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::CompareString(jstring_str1, jstring_str2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CompareString__Ljava_lang_String_2Ljava_lang_String_2II
(JNIEnv* jenv, jobject jobj, jstring str1, jstring str2, jint val3, jint val4) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    return agk::CompareString(jstring_str1, jstring_str2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloseZip
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CloseZip(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloseRawFolder
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CloseRawFolder(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloseNetwork
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CloseNetwork(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloseHTTPConnection
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CloseHTTPConnection(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloseFile
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CloseFile(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloneSprite__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CloneSprite(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloneSprite__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CloneSprite(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloneObject__II
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::CloneObject(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CloneObject__I
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::CloneObject(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearURLSchemeText
(JNIEnv* jenv, jobject jobj) {

    agk::ClearURLSchemeText();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearTweenChain
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ClearTweenChain(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearSpriteShapes
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ClearSpriteShapes(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearSpriteAnimationFrames
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ClearSpriteAnimationFrames(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearScreen
(JNIEnv* jenv, jobject jobj) {

    agk::ClearScreen();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearPointLights
(JNIEnv* jenv, jobject jobj) {

    agk::ClearPointLights();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearParticlesScales
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ClearParticlesScales(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearParticlesForces
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ClearParticlesForces(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearParticlesColors
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ClearParticlesColors(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Clear3DParticlesScales
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Clear3DParticlesScales(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ClearDepthBuffer
(JNIEnv* jenv, jobject jobj) {

    agk::ClearDepthBuffer();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Clear3DParticlesColors
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Clear3DParticlesColors(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Clear3DParticlesForces
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::Clear3DParticlesForces(val1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Chr
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::Chr(val1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ChooseRawFile__Ljava_lang_String_2
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::ChooseRawFile(jstring_str1));
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ChooseRawFile__Ljava_lang_String_2I
(JNIEnv* jenv, jobject jobj, jstring str1, jint val2) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return jenv->NewStringUTF(agk::ChooseRawFile(jstring_str1, val2));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CheckPermission
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::CheckPermission(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CancelZipExtract
(JNIEnv* jenv, jobject jobj) {

    agk::CancelZipExtract();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Ceil
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Ceil(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CancelLocalNotification
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CancelLocalNotification(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CacheRewardAdChartboost
(JNIEnv* jenv, jobject jobj) {

    agk::CacheRewardAdChartboost();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_CalculateSpritePhysicsCOM
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::CalculateSpritePhysicsCOM(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ByteLen
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::ByteLen(jstring_str1);
}

JNIEXPORT jstring JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Bin
(JNIEnv* jenv, jobject jobj, jint val1) {

    return jenv->NewStringUTF(agk::Bin(val1));
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Asc
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    return agk::Asc(jstring_str1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddZipEntry
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::AddZipEntry(val1, jstring_str2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddVirtualButton
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::AddVirtualButton(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddVirtualJoystick
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::AddVirtualJoystick(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddTweenChainText
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::AddTweenChainText(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddTweenChainSprite
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::AddTweenChainSprite(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddTweenChainObject
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::AddTweenChainObject(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddTweenChainCustom
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::AddTweenChainCustom(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddTweenChainChar
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jfloat val5) {

    agk::AddTweenChainChar(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddTweenChainCamera
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4) {

    agk::AddTweenChainCamera(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddSpriteShapePolygon
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jfloat val4, jfloat val5) {

    agk::AddSpriteShapePolygon(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddSpriteShapeCircle
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4) {

    agk::AddSpriteShapeCircle(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddSpriteShapeChain
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jfloat val5, jfloat val6) {

    agk::AddSpriteShapeChain(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddSpriteShapeBox
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6) {

    agk::AddSpriteShapeBox(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddSpriteAnimationFrame
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::AddSpriteAnimationFrame(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddParticlesForce
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5) {

    agk::AddParticlesForce(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddParticlesScaleKeyFrame
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::AddParticlesScaleKeyFrame(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddParticlesColorKeyFrame
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3, jint val4, jint val5, jint val6) {

    agk::AddParticlesColorKeyFrame(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddObjectShapeCylinder
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::AddObjectShapeCylinder(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddObjectShapeSphere
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3) {

    agk::AddObjectShapeSphere(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddObjectShapeCone
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::AddObjectShapeCone(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddObjectShapeCapsule
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4, jint val5) {

    agk::AddObjectShapeCapsule(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddObjectShapeBox
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jint val3, jint val4) {

    agk::AddObjectShapeBox(val1, val2, val3, val4);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddObjectMeshFromMemblock
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::AddObjectMeshFromMemblock(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddNetworkMessageFloat
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2) {

    agk::AddNetworkMessageFloat(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddNetworkMessageInteger
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::AddNetworkMessageInteger(val1, val2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddNetworkMessageString
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    agk::AddNetworkMessageString(val1, jstring_str2);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddNetworkMessageByte
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::AddNetworkMessageByte(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Add3DPhysicsRagDollBone
(JNIEnv* jenv, jobject jobj, jint val1, jint val2, jfloat val3, jint val4, jint val5) {

    return agk::Add3DPhysicsRagDollBone(val1, val2, val3, val4, val5);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_AddHTTPHeader
(JNIEnv* jenv, jobject jobj, jint val1, jstring str2, jstring str3) {
    const char* jstring_str2 = jenv->GetStringUTFChars(str2, 0);
    const char* jstring_str3 = jenv->GetStringUTFChars(str3, 0);
    agk::AddHTTPHeader(val1, jstring_str2, jstring_str3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Add3DParticlesScaleKeyFrame
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3) {

    agk::Add3DParticlesScaleKeyFrame(val1, val2, val3);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Add3DParticlesForce
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jfloat val3, jfloat val4, jfloat val5, jfloat val6) {

    agk::Add3DParticlesForce(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Add3DParticlesColorKeyFrame
(JNIEnv* jenv, jobject jobj, jint val1, jfloat val2, jint val3, jint val4, jint val5, jint val6) {

    agk::Add3DParticlesColorKeyFrame(val1, val2, val3, val4, val5, val6);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ActivateSmartWatch
(JNIEnv* jenv, jobject jobj, jstring str1) {
    const char* jstring_str1 = jenv->GetStringUTFChars(str1, 0);
    agk::ActivateSmartWatch(jstring_str1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_Abs
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::Abs(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ATanRad
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ATanRad(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ATanFullRad
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::ATanFullRad(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ATanFull
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::ATanFull(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ATan2
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::ATan2(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ATan2Rad
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::ATan2Rad(val1, val2);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ATan
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ATan(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ASinRad
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ASinRad(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARSetPlaneDetectionMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ARSetPlaneDetectionMode(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ASin
(JNIEnv* jenv, jobject jobj, jfloat val1) {

    return agk::ASin(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARSetup
(JNIEnv* jenv, jobject jobj) {

    agk::ARSetup();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARSetLightEstimationMode
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ARSetLightEstimationMode(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARHitTestFinish
(JNIEnv* jenv, jobject jobj) {

    agk::ARHitTestFinish();
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARHitTest
(JNIEnv* jenv, jobject jobj, jfloat val1, jfloat val2) {

    return agk::ARHitTest(val1, val2);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetStatus
(JNIEnv* jenv, jobject jobj) {

    return agk::ARGetStatus();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlanesFinish
(JNIEnv* jenv, jobject jobj) {

    agk::ARGetPlanesFinish();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneZ(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlanes
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlanes(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneSizeZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneSizeZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneSizeX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneSizeX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneAngleZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneAngleZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneAngleX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneAngleX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetLightEstimate
(JNIEnv* jenv, jobject jobj) {

    return agk::ARGetLightEstimate();
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetPlaneAngleY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetPlaneAngleY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetHitTestZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetHitTestZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetHitTestY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetHitTestY(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetHitTestX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetHitTestX(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetHitTestType
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetHitTestType(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetHitTestNormalZ
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetHitTestNormalZ(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetHitTestNormalX
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetHitTestNormalX(val1);
}

JNIEXPORT jfloat JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetHitTestNormalY
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetHitTestNormalY(val1);
}

JNIEXPORT jint JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARGetAnchorStatus
(JNIEnv* jenv, jobject jobj, jint val1) {

    return agk::ARGetAnchorStatus(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARDrawBackground
(JNIEnv* jenv, jobject jobj) {

    agk::ARDrawBackground();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARDestroy
(JNIEnv* jenv, jobject jobj) {

    agk::ARDestroy();
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARDeleteAnchor
(JNIEnv* jenv, jobject jobj, jint val1) {

    agk::ARDeleteAnchor(val1);
}

JNIEXPORT void JNICALL Java_org_fibonaccifox_appgamekit_AppGameKitEngine_ARFixObjectToAnchor
(JNIEnv* jenv, jobject jobj, jint val1, jint val2) {

    agk::ARFixObjectToAnchor(val1, val2);
}