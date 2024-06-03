package cc.fastcv.libs

object MmapUtil {

    init {
        System.loadLibrary("mmap")
    }

    external fun mmapOpen(path:String)

    external fun mmapClose()

    external fun mmapWrite(content:String)

    external fun mmapSetEmpty()

    external fun observe(defaultVal : String) : String

}