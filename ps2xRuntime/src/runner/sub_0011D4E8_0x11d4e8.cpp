#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011D4E8
// Address: 0x11d4e8 - 0x11d530
void sub_0011D4E8_0x11d4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D4E8_0x11d4e8");
#endif

    ctx->pc = 0x11d4e8u;

    // 0x11d4e8: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11d4e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11d4ec: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x11d4ecu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x11d4f0: 0xe703f  dsra32      $t6, $t6, 0
    ctx->pc = 0x11d4f0u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
    // 0x11d4f4: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x11d4f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x11d4f8: 0xe6023  negu        $t4, $t6
    ctx->pc = 0x11d4f8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 14)));
    // 0x11d4fc: 0x4783f  dsra32      $t7, $a0, 0
    ctx->pc = 0x11d4fcu;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11d500: 0x1cc7025  or          $t6, $t6, $t4
    ctx->pc = 0x11d500u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 12));
    // 0x11d504: 0x1ed7824  and         $t7, $t7, $t5
    ctx->pc = 0x11d504u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 13));
    // 0x11d508: 0xe77c2  srl         $t6, $t6, 31
    ctx->pc = 0x11d508u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
    // 0x11d50c: 0x3c0d7ff0  lui         $t5, 0x7FF0
    ctx->pc = 0x11d50cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32752 << 16));
    // 0x11d510: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11d510u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11d514: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d518: 0x1af7823  subu        $t7, $t5, $t7
    ctx->pc = 0x11d518u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 15)));
    // 0x11d51c: 0xf7023  negu        $t6, $t7
    ctx->pc = 0x11d51cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
    // 0x11d520: 0x1ee7825  or          $t7, $t7, $t6
    ctx->pc = 0x11d520u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 14));
    // 0x11d524: 0xf7fc2  srl         $t7, $t7, 31
    ctx->pc = 0x11d524u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 15), 31));
    // 0x11d528: 0x3e00008  jr          $ra
    ctx->pc = 0x11D528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D528u;
            // 0x11d52c: 0x4f1023  subu        $v0, $v0, $t7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11D530u;
}
