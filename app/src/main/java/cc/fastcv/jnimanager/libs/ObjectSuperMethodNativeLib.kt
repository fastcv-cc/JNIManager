package cc.fastcv.jnimanager.libs

import cc.fastcv.jnimanager.libs.model.Cat

object ObjectSuperMethodNativeLib {

    external fun initCat() : Cat

    external fun getCatDes(cat: Cat) : String

    external fun getCatPrice(cat: Cat) : Int

    external fun getCatSuperCls(cat: Cat) : Class<*>

    external fun getCatSuperDes(cat: Cat) : String

    external fun getCatSuperPrice(cat: Cat) : Int

}