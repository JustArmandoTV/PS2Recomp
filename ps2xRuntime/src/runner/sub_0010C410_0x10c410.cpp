#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010C410
// Address: 0x10c410 - 0x10c5e0
void sub_0010C410_0x10c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C410_0x10c410");
#endif

    ctx->pc = 0x10c410u;

    // 0x10c410: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x10c410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x10c414: 0xc  syscall     0
    ctx->pc = 0x10c414u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c418: 0x3e00008  jr          $ra
    ctx->pc = 0x10C418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C420u;
    // 0x10c420: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x10c420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x10c424: 0xc  syscall     0
    ctx->pc = 0x10c424u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c428: 0x3e00008  jr          $ra
    ctx->pc = 0x10C428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C430u;
    // 0x10c430: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x10c430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x10c434: 0xc  syscall     0
    ctx->pc = 0x10c434u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c438: 0x3e00008  jr          $ra
    ctx->pc = 0x10C438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C440u;
    // 0x10c440: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x10c440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x10c444: 0xc  syscall     0
    ctx->pc = 0x10c444u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c448: 0x3e00008  jr          $ra
    ctx->pc = 0x10C448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C450u;
    // 0x10c450: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x10c450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x10c454: 0xc  syscall     0
    ctx->pc = 0x10c454u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c458: 0x3e00008  jr          $ra
    ctx->pc = 0x10C458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C460u;
    // 0x10c460: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x10c460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x10c464: 0xc  syscall     0
    ctx->pc = 0x10c464u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c468: 0x3e00008  jr          $ra
    ctx->pc = 0x10C468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C470u;
    // 0x10c470: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x10c470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x10c474: 0xc  syscall     0
    ctx->pc = 0x10c474u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c478: 0x3e00008  jr          $ra
    ctx->pc = 0x10C478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C480u;
    // 0x10c480: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x10c480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x10c484: 0xc  syscall     0
    ctx->pc = 0x10c484u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c488: 0x3e00008  jr          $ra
    ctx->pc = 0x10C488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C490u;
    // 0x10c490: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x10c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x10c494: 0xc  syscall     0
    ctx->pc = 0x10c494u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c498: 0x3e00008  jr          $ra
    ctx->pc = 0x10C498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C4A0u;
    // 0x10c4a0: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x10c4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x10c4a4: 0xc  syscall     0
    ctx->pc = 0x10c4a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c4a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C4B0u;
    // 0x10c4b0: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x10c4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x10c4b4: 0xc  syscall     0
    ctx->pc = 0x10c4b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C4C0u;
    // 0x10c4c0: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x10c4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x10c4c4: 0xc  syscall     0
    ctx->pc = 0x10c4c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C4D0u;
    // 0x10c4d0: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x10c4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x10c4d4: 0xc  syscall     0
    ctx->pc = 0x10c4d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C4E0u;
    // 0x10c4e0: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x10c4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x10c4e4: 0xc  syscall     0
    ctx->pc = 0x10c4e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c4e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C4F0u;
    // 0x10c4f0: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x10c4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x10c4f4: 0xc  syscall     0
    ctx->pc = 0x10c4f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C500u;
    // 0x10c500: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x10c500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x10c504: 0xc  syscall     0
    ctx->pc = 0x10c504u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c508: 0x3e00008  jr          $ra
    ctx->pc = 0x10C508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C510u;
    // 0x10c510: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x10c510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x10c514: 0xc  syscall     0
    ctx->pc = 0x10c514u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c518: 0x3e00008  jr          $ra
    ctx->pc = 0x10C518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C520u;
    // 0x10c520: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x10c520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x10c524: 0xc  syscall     0
    ctx->pc = 0x10c524u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c528: 0x3e00008  jr          $ra
    ctx->pc = 0x10C528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C530u;
    // 0x10c530: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x10c530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x10c534: 0xc  syscall     0
    ctx->pc = 0x10c534u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c538: 0x3e00008  jr          $ra
    ctx->pc = 0x10C538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C540u;
    // 0x10c540: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x10c540u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x10c544: 0xc  syscall     0
    ctx->pc = 0x10c544u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c548: 0x3e00008  jr          $ra
    ctx->pc = 0x10C548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C550u;
    // 0x10c550: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x10c550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x10c554: 0xc  syscall     0
    ctx->pc = 0x10c554u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c558: 0x3e00008  jr          $ra
    ctx->pc = 0x10C558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C560u;
    // 0x10c560: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x10c560u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x10c564: 0xc  syscall     0
    ctx->pc = 0x10c564u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c568: 0x3e00008  jr          $ra
    ctx->pc = 0x10C568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C570u;
    // 0x10c570: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x10c570u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x10c574: 0xc  syscall     0
    ctx->pc = 0x10c574u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c578: 0x3e00008  jr          $ra
    ctx->pc = 0x10C578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C580u;
    // 0x10c580: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x10c580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x10c584: 0xc  syscall     0
    ctx->pc = 0x10c584u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c588: 0x3e00008  jr          $ra
    ctx->pc = 0x10C588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C590u;
    // 0x10c590: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x10c590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x10c594: 0xc  syscall     0
    ctx->pc = 0x10c594u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c598: 0x3e00008  jr          $ra
    ctx->pc = 0x10C598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C5A0u;
    // 0x10c5a0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x10c5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x10c5a4: 0xc  syscall     0
    ctx->pc = 0x10c5a4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c5a8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C5B0u;
    // 0x10c5b0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x10c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x10c5b4: 0xc  syscall     0
    ctx->pc = 0x10c5b4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C5C0u;
    // 0x10c5c0: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x10c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x10c5c4: 0xc  syscall     0
    ctx->pc = 0x10c5c4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c5c8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C5D0u;
    // 0x10c5d0: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x10c5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x10c5d4: 0xc  syscall     0
    ctx->pc = 0x10c5d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c5d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C5D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10C5E0u;
}
