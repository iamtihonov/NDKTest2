#include <jni.h>

extern "C"
JNIEXPORT jintArray JNICALL
Java_ru_artem_ndktest2_MainActivity_getTestIntArray(JNIEnv *env, jobject /* this */, int first) {
    jint a[] = {first, 2, 3, 4, 5, 6};
    jintArray ret = env->NewIntArray(6);
    env->SetIntArrayRegion(ret, 0, 6, a);
    return ret;
}
