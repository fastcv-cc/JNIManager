package cc.fastcv.jnimanager

import android.annotation.SuppressLint
import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.ObjectFieldNativeLib
import cc.fastcv.jnimanager.libs.ObjectStaticFieldNativeLib
import cc.fastcv.jnimanager.libs.ObjectStaticMethodNativeLib

class ObjectStaticMethodActivity : AppCompatActivity() {

    @SuppressLint("SetTextI18n")
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_object_static_method)

        findViewById<AppCompatTextView>(R.id.tvPackageName).text =
            ObjectStaticMethodNativeLib.getPackageName(this)

        findViewById<AppCompatTextView>(R.id.tvLanguage).text =
            ObjectStaticMethodNativeLib.getLocaleLanguage(resources)

        findViewById<AppCompatTextView>(R.id.tvCountryCode).text =
            ObjectStaticMethodNativeLib.getCountryZipCode(resources)

        findViewById<AppCompatTextView>(R.id.tvVersionName).text =
            ObjectStaticMethodNativeLib.getVerName(this)

        findViewById<AppCompatTextView>(R.id.tvVersionCode).text =
            "${ObjectStaticMethodNativeLib.getVerCode(this)}"

        findViewById<AppCompatTextView>(R.id.tvAndroidVersion).text =
            "${ObjectStaticMethodNativeLib.getPhoneVersion()}"

        findViewById<AppCompatTextView>(R.id.tvManufacturer).text =
            ObjectStaticMethodNativeLib.getManufacturer()

        findViewById<AppCompatTextView>(R.id.tvProduct).text =
            ObjectStaticMethodNativeLib.getProduct()

        findViewById<AppCompatTextView>(R.id.tvAbis).text =
            ObjectStaticMethodNativeLib.getSupportedAbis().joinToString()

        findViewById<AppCompatTextView>(R.id.tvDevice).text =
            ObjectStaticMethodNativeLib.getDevice()

        findViewById<AppCompatTextView>(R.id.tvDisplayInfo).text =
            ObjectStaticMethodNativeLib.getDisplayInfo()

        findViewById<AppCompatTextView>(R.id.tvModel).text =
            ObjectStaticMethodNativeLib.getModel()

    }

}