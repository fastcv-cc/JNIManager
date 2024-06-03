package cc.fastcv.libs

object MmapUtil {

    external fun mmapOpen(path:String)

    external fun mmapClose()

    external fun mmapWrite(content:String)

    external fun mmapSetEmpty()

    external fun observe(defaultVal : String) : String

}