//
//  LXDMacross.h
//  Pods
//
//  Created by didi on 2017/8/9.
//
//

#import <Foundation/Foundation.h>


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

/// 弱符号修饰
#ifndef signal_weak
#define signal_weak __attribute__((weak))
#endif

/// 全局构造
#ifndef app_constructor 
#define app_constructor __attribute__((constructor))
#endif

#ifndef app_constructor_priority
#define app_constructor_priority(priority) __attribute__((constructor(priority)))
#endif

/// 全局析构
#ifndef app_deconstructor
#define app_deconstructor __attribute__((destructor))
#endif

#ifndef app_deconstructor_priority
#define app_deconstructor_priority(priority) __attribute__((destructor(priority)))
#endif
