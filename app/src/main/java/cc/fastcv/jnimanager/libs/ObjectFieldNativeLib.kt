package cc.fastcv.jnimanager.libs

import cc.fastcv.jnimanager.libs.model.ConfigInfo

object ObjectFieldNativeLib {

    external fun createConfigInfo(): ConfigInfo

    external fun initConfigInfo(info: ConfigInfo)

    external fun getConfigInfoPrivateBoolean(info: ConfigInfo): Boolean

    external fun getConfigInfoPrivateByte(info: ConfigInfo): Byte

    external fun getConfigInfoPrivateChar(info: ConfigInfo): Char

    external fun getConfigInfoPrivateShort(info: ConfigInfo): Short

    external fun getConfigInfoPrivateInt(info: ConfigInfo): Int

    external fun getConfigInfoPrivateLong(info: ConfigInfo): Long

    external fun getConfigInfoPrivateFloat(info: ConfigInfo): Float

    external fun getConfigInfoPrivateDouble(info: ConfigInfo): Double

    external fun getConfigInfoPrivateString(info: ConfigInfo): String

    external fun getConfigInfoPrivateBooleanArray(info: ConfigInfo): BooleanArray

    external fun getConfigInfoPrivateByteArray(info: ConfigInfo): ByteArray

    external fun getConfigInfoPrivateCharArray(info: ConfigInfo): CharArray

    external fun getConfigInfoPrivateShortArray(info: ConfigInfo): ShortArray

    external fun getConfigInfoPrivateIntArray(info: ConfigInfo): IntArray

    external fun getConfigInfoPrivateLongArray(info: ConfigInfo): LongArray

    external fun getConfigInfoPrivateFloatArray(info: ConfigInfo): FloatArray

    external fun getConfigInfoPrivateDoubleArray(info: ConfigInfo): DoubleArray

    external fun getConfigInfoPrivateStringArray(info: ConfigInfo): Array<String>


}