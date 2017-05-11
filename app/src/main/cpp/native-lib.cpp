#include <android/log.h>
#include <jni.h>
#include <string>
#include "string.h"

#include "catalog.h"

extern "C"//При експорте функций имена их не будут изменятся
JNIEXPORT jintArray JNICALL
Java_ru_artem_ndktest2_MainActivity_getTestIntArray(
        JNIEnv *env, //указатель на объект, представляющий из себя JNI-окружение
        jobject, //класс, которому принадлежит объявление нативного метода в Java. Фактически это this
        char *request) {//входящая строка

    //Работа с Catalog
    Catalog cat;
    cat.find(0);

    return ret;
}
