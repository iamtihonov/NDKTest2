#include <jni.h>
#include <string>
#include <iostream>

extern "C"
JNIEXPORT jstring JNICALL
Java_ru_artem_ndktest2_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++ 1!";
    return env->NewStringUTF(hello.c_str());
}
