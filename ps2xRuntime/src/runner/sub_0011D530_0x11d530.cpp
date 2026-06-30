#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D530
// Address: 0x11d530 - 0x11d568
void sub_0011D530_0x11d530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D530_0x11d530");
#endif

    ctx->pc = 0x11d530u;

    // 0x11d530: 0x4783c  dsll32      $t7, $a0, 0
    ctx->pc = 0x11d530u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d534: 0x3c0e7fff  lui         $t6, 0x7FFF
    ctx->pc = 0x11d534u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32767 << 16));
    // 0x11d538: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x11d538u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
    // 0x11d53c: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11d53cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11d540: 0xf6823  negu        $t5, $t7
    ctx->pc = 0x11d540u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x11d544: 0x4103f  dsra32      $v0, $a0, 0
    ctx->pc = 0x11d544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d548: 0x1ed7825  or          $t7, $t7, $t5
    ctx->pc = 0x11d548u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 13));
    // 0x11d54c: 0x4e1024  and         $v0, $v0, $t6
    ctx->pc = 0x11d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 14));
    // 0x11d550: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11d550u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11d554: 0x3c0e7ff0  lui         $t6, 0x7FF0
    ctx->pc = 0x11d554u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32752 << 16));
    // 0x11d558: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x11d558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x11d55c: 0x1c21023  subu        $v0, $t6, $v0
    ctx->pc = 0x11d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x11d560: 0x3e00008  jr          $ra
    ctx->pc = 0x11D560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D560u;
            // 0x11d564: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D568u;
}
