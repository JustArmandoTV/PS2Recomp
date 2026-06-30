#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D2D8
// Address: 0x11d2d8 - 0x11d308
void sub_0011D2D8_0x11d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D2D8_0x11d2d8");
#endif

    ctx->pc = 0x11d2d8u;

    // 0x11d2d8: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11d2d8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11d2dc: 0x4703f  dsra32      $t6, $a0, 0
    ctx->pc = 0x11d2dcu;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d2e0: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d2e0u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d2e4: 0x4683c  dsll32      $t5, $a0, 0
    ctx->pc = 0x11d2e4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d2e8: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x11d2e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x11d2ec: 0xd683e  dsrl32      $t5, $t5, 0
    ctx->pc = 0x11d2ecu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (32 + 0));
    // 0x11d2f0: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d2f0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d2f4: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x11d2f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
    // 0x11d2f8: 0xe703c  dsll32      $t6, $t6, 0
    ctx->pc = 0x11d2f8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << (32 + 0));
    // 0x11d2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D2FCu;
            // 0x11d300: 0x1ae1025  or          $v0, $t5, $t6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D304u;
    // 0x11d304: 0x0  nop
    ctx->pc = 0x11d304u;
    // NOP
}
