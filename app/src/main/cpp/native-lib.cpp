#include <android/log.h>
#include <jni.h>
#include <string>
#include "string.h"

#include "catalog.h"

extern "C"//При експорте функций имена их не будут изменятся
JNIEXPORT jboolean JNICALL
Java_ru_artem_ndktest2_MainActivity_getTestBool(
        JNIEnv *env, //указатель на объект, представляющий из себя JNI-окружение
        jobject) { //класс, которому принадлежит объявление нативного метода в Java. Фактически это this)

    Catalog cat;
    return cat.getResult();
}
