package cc.fastcv.jnimanager

import android.annotation.SuppressLint
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.ObjectFieldNativeLib

class ObjectFieldActivity : AppCompatActivity() {

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_object_filed)

        val configInfo = ObjectFieldNativeLib.createConfigInfo()
        findViewById<AppCompatTextView>(R.id.tvCreate).text = "$configInfo"

        ObjectFieldNativeLib.initConfigInfo(configInfo)
        findViewById<AppCompatTextView>(R.id.tvInit).text = "$configInfo"

        findViewById<AppCompatTextView>(R.id.tvPrivateBoolean).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateBoolean(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateByte).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateByte(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateChar).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateChar(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateShort).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateShort(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateInt).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateInt(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateLong).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateLong(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateFloat).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateFloat(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateDouble).text =
            "${ObjectFieldNativeLib.getConfigInfoPrivateDouble(configInfo)}"

        findViewById<AppCompatTextView>(R.id.tvPrivateString).text =
            ObjectFieldNativeLib.getConfigInfoPrivateString(configInfo)

        findViewById<AppCompatTextView>(R.id.tvPrivateBooleanArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateBooleanArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateByteArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateByteArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateCharArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateCharArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateShortArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateShortArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateIntArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateIntArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateLongArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateLongArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateFloatArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateFloatArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateDoubleArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateDoubleArray(configInfo).joinToString()

        findViewById<AppCompatTextView>(R.id.tvPrivateStringArray).text =
            ObjectFieldNativeLib.getConfigInfoPrivateStringArray(configInfo).joinToString()

    }

}