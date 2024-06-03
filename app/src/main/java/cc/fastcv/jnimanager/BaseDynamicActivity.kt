package cc.fastcv.jnimanager

import android.annotation.SuppressLint
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.BaseDynamicNativeLib

class BaseDynamicActivity : AppCompatActivity() {

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_dynamic_base)

        findViewById<AppCompatTextView>(R.id.tvBoolean).text =
            "${BaseDynamicNativeLib.booleanFromDynamicJNI(false)}"

        findViewById<AppCompatTextView>(R.id.tvByte).text = "${
            BaseDynamicNativeLib.byteFromDynamicJNI(
                100
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvUByte).text = "${
            BaseDynamicNativeLib.uByteFromDynamicJNI().toUByte()
        }"

        findViewById<AppCompatTextView>(R.id.tvChar).text = "${
            BaseDynamicNativeLib.charFromDynamicJNI(
                'S'
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvShort).text = "${
            BaseDynamicNativeLib.shortFromDynamicJNI(
                Short.MAX_VALUE
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvUShort).text = "${
            BaseDynamicNativeLib.uShortFromDynamicJNI().toUShort()
        }"

        findViewById<AppCompatTextView>(R.id.tvInt).text = "${
            BaseDynamicNativeLib.intFromDynamicJNI(
                Int.MAX_VALUE
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvUInt).text = "${
            BaseDynamicNativeLib.uIntFromDynamicJNI().toUInt()
        }"

        findViewById<AppCompatTextView>(R.id.tvLong).text = "${
            BaseDynamicNativeLib.longFromDynamicJNI(
                Long.MAX_VALUE
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvULong).text = "${
            BaseDynamicNativeLib.uLongFromDynamicJNI().toULong()
        }"

        findViewById<AppCompatTextView>(R.id.tvFloat).text = "${
            BaseDynamicNativeLib.floatFromDynamicJNI(123.23343f)
        }"

        findViewById<AppCompatTextView>(R.id.tvDouble).text = "${
            BaseDynamicNativeLib.doubleFromDynamicJNI(
                113.93874745834343
            )
        }"

        val booleanArray = booleanArrayOf(false, false, true, true)
        findViewById<AppCompatTextView>(R.id.tvBooleanArray).text =
            BaseDynamicNativeLib.booleanArrayFromDynamicJNI(booleanArray).joinToString()

        val byteArray = byteArrayOf(11, 2, 9, 19, 8, 10)
        findViewById<AppCompatTextView>(R.id.tvByteArray).text =
            BaseDynamicNativeLib.byteArraySortFromDynamicJNI(byteArray).joinToString()

        val charArrayFromDynamicJNI =
            BaseDynamicNativeLib.charArrayFromDynamicJNI("你好 Hello World!")
        findViewById<AppCompatTextView>(R.id.tvCharArray).text =
            charArrayFromDynamicJNI.joinToString()

        val shortArray = shortArrayOf(110, 20, 90, 190, 80, 100)
        findViewById<AppCompatTextView>(R.id.tvShortArray).text =
            BaseDynamicNativeLib.shortArraySortFromDynamicJNI(shortArray).joinToString()

        val intArray = intArrayOf(1100, 200, 900, 1900, 800, 1000)
        findViewById<AppCompatTextView>(R.id.tvIntArray).text =
            BaseDynamicNativeLib.intArraySortFromDynamicJNI(intArray).joinToString()

        val longArray = longArrayOf(11000, 2000, 9000, 19000, 8000, 10000)
        findViewById<AppCompatTextView>(R.id.tvLongArray).text =
            BaseDynamicNativeLib.longArraySortFromDynamicJNI(longArray).joinToString()

        val floatArray = floatArrayOf(100.747f, 100.131f, 100.23f, 100.9f, 100.111f, 100.874f)
        findViewById<AppCompatTextView>(R.id.tvFloatArray).text =
            BaseDynamicNativeLib.floatArraySortFromDynamicJNI(floatArray).joinToString()

        val doubleArray =
            doubleArrayOf(100.747234, 100.131645, 100.23179, 100.9621, 100.11161, 100.87457)
        findViewById<AppCompatTextView>(R.id.tvDoubleArray).text =
            BaseDynamicNativeLib.doubleArraySortFromDynamicJNI(doubleArray).joinToString()

    }


}