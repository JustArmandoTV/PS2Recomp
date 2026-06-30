#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D298
// Address: 0x11d298 - 0x11d2d8
void sub_0011D298_0x11d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D298_0x11d298");
#endif

    ctx->pc = 0x11d298u;

    // 0x11d298: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11d298u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11d29c: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x11d29cu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d2a0: 0x5603f  dsra32      $t4, $a1, 0
    ctx->pc = 0x11d2a0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x11d2a4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11d2a4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11d2a8: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x11d2a8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x11d2ac: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11d2acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11d2b0: 0x18e6024  and         $t4, $t4, $t6
    ctx->pc = 0x11d2b0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) & GPR_U64(ctx, 14));
    // 0x11d2b4: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x11d2b4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d2b8: 0x1ec7825  or          $t7, $t7, $t4
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 12));
    // 0x11d2bc: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x11d2bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x11d2c0: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d2c0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d2c4: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x11d2c4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
    // 0x11d2c8: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x11d2c8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
    // 0x11d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D2CCu;
            // 0x11d2d0: 0x1af1025  or          $v0, $t5, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D2D4u;
    // 0x11d2d4: 0x0  nop
    ctx->pc = 0x11d2d4u;
    // NOP
}
