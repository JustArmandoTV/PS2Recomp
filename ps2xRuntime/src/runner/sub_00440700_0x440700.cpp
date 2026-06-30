#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00440700
// Address: 0x440700 - 0x440710
void sub_00440700_0x440700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440700_0x440700");
#endif

    ctx->pc = 0x440700u;

    // 0x440700: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x440700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x440704: 0x3e00008  jr          $ra
    ctx->pc = 0x440704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x440704u;
            // 0x440708: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44070Cu;
    // 0x44070c: 0x0  nop
    ctx->pc = 0x44070cu;
    // NOP
}
