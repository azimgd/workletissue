#include <jni.h>
#include "react-native-workletissue.h"

extern "C"
JNIEXPORT jint JNICALL
Java_com_workletissue_WorkletissueModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return workletissue::multiply(a, b);
}
