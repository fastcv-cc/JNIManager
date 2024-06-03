package cc.fastcv.jnimanager.libs

import android.content.Context
import android.content.res.Resources

object ObjectStaticMethodNativeLib {

    external fun getPackageName(context: Context): String

    external fun getLocaleLanguage(resources: Resources): String

    external fun getCountryZipCode(resources: Resources): String

    external fun getVerName(context: Context): String

    external fun getVerCode(context: Context): Long

    external fun getPhoneVersion(): Int

    external fun getManufacturer(): String

    external fun getProduct(): String

    external fun getSupportedAbis(): Array<String>

    external fun getDevice(): String

    external fun getDisplayInfo(): String

    external fun getModel(): String

}