#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A67C8
// Address: 0x1a67c8 - 0x1a6800
void sub_001A67C8_0x1a67c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A67C8_0x1a67c8");
#endif

    ctx->pc = 0x1a67c8u;

    // 0x1a67c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a67c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a67cc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1a67ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a67d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1a67d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1a67d4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a67d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1a67d8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1a67d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1a67dc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a67dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x1a67e0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1a67e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1a67e4: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x1a67e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x1a67e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1a67e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1a67ec: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a67ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1a67f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a67f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1a67f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A67F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A67F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A67F4u;
            // 0x1a67f8: 0x451025  or          $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A67FCu;
    // 0x1a67fc: 0x0  nop
    ctx->pc = 0x1a67fcu;
    // NOP
}
