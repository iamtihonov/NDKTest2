#include <android/log.h>
#include <jni.h>
#include <string>

extern "C"//При експорте функций имена их не будут изменятся
JNIEXPORT jintArray JNICALL
Java_ru_artem_ndktest2_MainActivity_getTestIntArray2(
        JNIEnv *env, //указатель на объект, представляющий из себя JNI-окружение
        jobject, //класс, которому принадлежит объявление нативного метода в Java. Фактически это this
        char *request) {//входящая строка

    std::string tag("test");
    std::string message("Hello from C++!");
    __android_log_print(ANDROID_LOG_INFO, tag.c_str(), "%s", message.c_str());//вывод сообщения в лог

    jint a[] = {1, 2, 3, 4, 5};
    jintArray ret = env->NewIntArray(5);
    env->SetIntArrayRegion(ret, 0, 5, a);

    return ret;
}
