package cc.fastcv.jnimanager.libs

import android.util.Log

object ObjectMethodNativeLib {

    private const val TAG = "ObjectMethodNativeLib"

    external fun callMethod1()

    external fun callMethod2()

    external fun callMethod3()

    external fun callMethod4()

    external fun callMethod5()

    private fun method01() {
        Log.d(TAG, "method01")
    }

    private fun method02() {
        Log.d(TAG, "method02")
    }

    private fun method03() {
        Log.d(TAG, "method03")
    }

    private fun method04() {
        Log.d(TAG, "method04")
    }

    private fun method05() {
        Log.d(TAG, "method05")
    }

}