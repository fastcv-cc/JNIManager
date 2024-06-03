package cc.fastcv.jnimanager.libs

object StringStaticNativeLib {

    external fun stringFromJNI(s: String): String

    external fun stringArrayFromJNI(
        array: Array<String>
    ): Array<String>

    external fun nativeStrCompare(str1: String, str2: String): Boolean

}