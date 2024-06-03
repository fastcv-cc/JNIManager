package cc.fastcv.jnimanager

import android.annotation.SuppressLint
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.StringDynamicNativeLib

class StringDynamicActivity : AppCompatActivity() {

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_dynamic_string)

        findViewById<AppCompatTextView>(R.id.tvString).text =
            StringDynamicNativeLib.stringFromDynamicJNI(
                "这是一段文本"
            )

        findViewById<AppCompatTextView>(R.id.tvStringArray).text =
            StringDynamicNativeLib.stringArrayFromDynamicJNI(
                arrayOf(
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本",
                    "文本"
                )
            ).joinToString()
    }


}