#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133A00
// Address: 0x133a00 - 0x133a10
void sub_00133A00_0x133a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133A00_0x133a00");
#endif

    ctx->pc = 0x133a00u;

    // 0x133a00: 0x78a80000  lq          $t0, 0x0($a1)
    ctx->pc = 0x133a00u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133a04: 0x3e00008  jr          $ra
    ctx->pc = 0x133A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133A04u;
            // 0x133a08: 0x7c880030  sq          $t0, 0x30($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x133A0Cu;
    // 0x133a0c: 0x0  nop
    ctx->pc = 0x133a0cu;
    // NOP
}
