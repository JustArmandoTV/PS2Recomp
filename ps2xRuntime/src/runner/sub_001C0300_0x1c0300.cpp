#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C0300
// Address: 0x1c0300 - 0x1c0310
void sub_001C0300_0x1c0300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0300_0x1c0300");
#endif

    ctx->pc = 0x1c0300u;

    // 0x1c0300: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x1c0300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1c0304: 0x3e00008  jr          $ra
    ctx->pc = 0x1C0304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C0304u;
            // 0x1c0308: 0x4100a  movz        $v0, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C030Cu;
    // 0x1c030c: 0x0  nop
    ctx->pc = 0x1c030cu;
    // NOP
}
