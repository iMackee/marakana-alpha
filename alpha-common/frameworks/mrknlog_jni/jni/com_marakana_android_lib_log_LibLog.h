/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_marakana_android_lib_log_LibLog */

#ifndef _Included_com_marakana_android_lib_log_LibLog
#define _Included_com_marakana_android_lib_log_LibLog
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_marakana_android_lib_log_LibLog
 * Method:    flushLog
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_marakana_android_lib_log_LibLog_flushLog
  (JNIEnv *, jclass);

/*
 * Class:     com_marakana_android_lib_log_LibLog
 * Method:    getTotalLogSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_marakana_android_lib_log_LibLog_getTotalLogSize
  (JNIEnv *, jclass);

/*
 * Class:     com_marakana_android_lib_log_LibLog
 * Method:    getUsedLogSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_marakana_android_lib_log_LibLog_getUsedLogSize
  (JNIEnv *, jclass);

#ifdef __cplusplus
}
#endif
#endif
