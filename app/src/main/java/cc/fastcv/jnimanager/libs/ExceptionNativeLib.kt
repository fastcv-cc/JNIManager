package cc.fastcv.jnimanager.libs

import android.util.Log
import java.lang.Exception

object ExceptionNativeLib {

    external fun exception1()

    @Throws(Exception::class)
    external fun exception2()

    external fun exception3()

    external fun exception4()

    fun showException() {
        Log.d("ExceptionNativeLib", "call showException!")
        throw NullPointerException("我制造的一个空指针！！！")
    }

}