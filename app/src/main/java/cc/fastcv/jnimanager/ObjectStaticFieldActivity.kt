package cc.fastcv.jnimanager

import android.annotation.SuppressLint
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.ObjectFieldNativeLib
import cc.fastcv.jnimanager.libs.ObjectStaticFieldNativeLib

class ObjectStaticFieldActivity : AppCompatActivity() {

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_object_static_filed)

        findViewById<AppCompatTextView>(R.id.tvPrivateBoolean).text =
            "${ObjectStaticFieldNativeLib.getModelStaticBoolean()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateByte).text =
            "${ObjectStaticFieldNativeLib.getModelStaticByte()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateChar).text =
            "${ObjectStaticFieldNativeLib.getModelStaticChar()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateShort).text =
            "${ObjectStaticFieldNativeLib.getModelStaticShort()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateInt).text =
            "${ObjectStaticFieldNativeLib.getModelStaticInt()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateLong).text =
            "${ObjectStaticFieldNativeLib.getModelStaticLong()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateFloat).text =
            "${ObjectStaticFieldNativeLib.getModelStaticFloat()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateDouble).text =
            "${ObjectStaticFieldNativeLib.getModelStaticDouble()}"

        findViewById<AppCompatTextView>(R.id.tvPrivateString).text =
            ObjectStaticFieldNativeLib.getModelStaticString()

        findViewById<AppCompatTextView>(R.id.tvPrivateBooleanArray).text =
            ObjectStaticFieldNativeLib.getModelStaticBooleanArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateByteArray).text =
            ObjectStaticFieldNativeLib.getModelStaticByteArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateCharArray).text =
            ObjectStaticFieldNativeLib.getModelStaticCharArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateShortArray).text =
            ObjectStaticFieldNativeLib.getModelStaticShortArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateIntArray).text =
            ObjectStaticFieldNativeLib.getModelStaticIntArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateLongArray).text =
            ObjectStaticFieldNativeLib.getModelStaticLongArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateFloatArray).text =
            ObjectStaticFieldNativeLib.getModelStaticFloatArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateDoubleArray).text =
            ObjectStaticFieldNativeLib.getModelStaticDoubleArray().joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateStringArray).text =
            ObjectStaticFieldNativeLib.getModelStaticStringArray().joinToString()

    }

}