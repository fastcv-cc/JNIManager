package cc.fastcv.jnimanager

import android.annotation.SuppressLint
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.BaseStaticNativeLib

class BaseStaticActivity : AppCompatActivity() {

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_static_base)

        findViewById<AppCompatTextView>(R.id.tvBoolean).text =
            "${BaseStaticNativeLib.booleanFromJNI(true)}"

        findViewById<AppCompatTextView>(R.id.tvByte).text = "${
            BaseStaticNativeLib.byteFromJNI(
                Byte.MAX_VALUE
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvUByte).text = "${
            BaseStaticNativeLib.uByteFromJNI().toUByte()
        }"

        findViewById<AppCompatTextView>(R.id.tvChar).text = "${
            BaseStaticNativeLib.charFromJNI(
                'B'
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvShort).text = "${
            BaseStaticNativeLib.shortFromJNI(
                Short.MAX_VALUE
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvUShort).text = "${
            BaseStaticNativeLib.uShortFromJNI().toUShort()
        }"

        findViewById<AppCompatTextView>(R.id.tvInt).text = "${
            BaseStaticNativeLib.intFromJNI(
                Int.MAX_VALUE
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvUInt).text = "${
            BaseStaticNativeLib.uIntFromJNI().toUInt()
        }"

        findViewById<AppCompatTextView>(R.id.tvLong).text = "${
            BaseStaticNativeLib.longFromJNI(
                Long.MAX_VALUE
            )
        }"

        findViewById<AppCompatTextView>(R.id.tvULong).text = "${
            BaseStaticNativeLib.uLongFromJNI().toULong()
        }"

        findViewById<AppCompatTextView>(R.id.tvFloat).text = "${
            BaseStaticNativeLib.floatFromJNI(435.23343f)
        }"

        findViewById<AppCompatTextView>(R.id.tvDouble).text = "${
            BaseStaticNativeLib.doubleFromJNI(
                12.938747458343432
            )
        }"

        val booleanArray = booleanArrayOf(true, false, true, false)
        findViewById<AppCompatTextView>(R.id.tvBooleanArray).text =
            BaseStaticNativeLib.booleanArrayFromJNI(booleanArray).joinToString()

        val byteArray = byteArrayOf(11, 2, 9, 19, 8, 10)
        findViewById<AppCompatTextView>(R.id.tvByteArray).text =
            BaseStaticNativeLib.byteArraySortFromJNI(byteArray).joinToString()

        val charArrayFromDynamicJNI =
            BaseStaticNativeLib.charArrayFromJNI("你好 Hello World!")
        findViewById<AppCompatTextView>(R.id.tvCharArray).text =
            charArrayFromDynamicJNI.joinToString()

        val shortArray = shortArrayOf(110, 20, 90, 190, 80, 100)
        findViewById<AppCompatTextView>(R.id.tvShortArray).text =
            BaseStaticNativeLib.shortArraySortFromJNI(shortArray).joinToString()

        val intArray = intArrayOf(1100, 200, 900, 1900, 800, 1000)
        findViewById<AppCompatTextView>(R.id.tvIntArray).text =
            BaseStaticNativeLib.intArraySortFromJNI(intArray).joinToString()

        val longArray = longArrayOf(11000, 2000, 9000, 19000, 8000, 10000)
        findViewById<AppCompatTextView>(R.id.tvLongArray).text =
            BaseStaticNativeLib.longArraySortFromJNI(longArray).joinToString()

        val floatArray = floatArrayOf(100.747f, 100.131f, 100.23f, 100.9f, 100.111f, 100.874f)
        findViewById<AppCompatTextView>(R.id.tvFloatArray).text =
            BaseStaticNativeLib.floatArraySortFromJNI(floatArray).joinToString()

        val doubleArray =
            doubleArrayOf(100.747234, 100.131645, 100.23179, 100.9621, 100.11161, 100.87457)
        findViewById<AppCompatTextView>(R.id.tvDoubleArray).text =
            BaseStaticNativeLib.doubleArraySortFromJNI(doubleArray).joinToString()

    }

}