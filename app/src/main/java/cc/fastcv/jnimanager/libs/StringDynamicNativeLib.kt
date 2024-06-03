package cc.fastcv.jnimanager.libs

object StringDynamicNativeLib {

    external fun stringFromDynamicJNI(s: String): String


    external fun stringArrayFromDynamicJNI(
        array: Array<String>
    ): Array<String>

}