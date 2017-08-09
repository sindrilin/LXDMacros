//
//  LXDMacros.h
//  Pods
//
//  Created by didi on 2017/8/9.
//
//

#ifndef LXDMacros_h
#define LXDMacros_h


/// CPU预判指令
#define nearly(exp) ((typeof(exp))__builtin_expect((long)(exp), ~0l))
#define hardly(exp) ((typeof(exp))__builtin_expect((long)(exp), 0l))


/// 弱引用
#ifndef weakify
    #define weakify(objc) __weak typeof(objc) weak##objc = objc
#endif

/// 内联
#ifndef func_inline
    #define func_inline static inline
#endif

/// 函数重载
#ifndef func_overload
#define func_overload __attribute__((overloadable))
#endif


#endif /* LXDMacros_h */
