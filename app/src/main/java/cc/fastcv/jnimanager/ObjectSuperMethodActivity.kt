package cc.fastcv.jnimanager

import android.os.Bundle
import androidx.appcompat.app.AppCompatActivity
import androidx.appcompat.widget.AppCompatTextView
import cc.fastcv.jnimanager.libs.ObjectSuperMethodNativeLib

class ObjectSuperMethodActivity : AppCompatActivity() {

    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        setContentView(R.layout.activity_object_super_method)

        val cat = ObjectSuperMethodNativeLib.initCat()
        findViewById<AppCompatTextView>(R.id.tvCatInit).text = cat.toString()

        findViewById<AppCompatTextView>(R.id.tvCatDesc).text =
            ObjectSuperMethodNativeLib.getCatDes(cat)

        findViewById<AppCompatTextView>(R.id.tvCatPrice).text =
            "${ObjectSuperMethodNativeLib.getCatPrice(cat)}"

        findViewById<AppCompatTextView>(R.id.tvCatSuperCls).text =
            ObjectSuperMethodNativeLib.getCatSuperCls(cat).toString()

        findViewById<AppCompatTextView>(R.id.tvCatSuperDes).text =
            ObjectSuperMethodNativeLib.getCatSuperDes(cat)

        findViewById<AppCompatTextView>(R.id.tvCatSuperPrice).text =
            "${ObjectSuperMethodNativeLib.getCatSuperPrice(cat)}"

    }

}