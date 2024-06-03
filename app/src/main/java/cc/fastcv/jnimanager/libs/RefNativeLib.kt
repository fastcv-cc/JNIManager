package cc.fastcv.jnimanager.libs

import cc.fastcv.jnimanager.libs.model.RefModel

object RefNativeLib {

    external fun createLocalRef()

    external fun getLocalRef(): RefModel?

    external fun createGlobalRef()

    external fun deleteGlobalRef()

    external fun getGlobalRef(): RefModel?

    external fun createWeakGlobalRef(): RefModel?

    external fun deleteWeakGlobalRef()

    external fun getWeakGlobalRef(): RefModel?

}