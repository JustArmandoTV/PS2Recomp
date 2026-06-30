#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003A2180
// Address: 0x3a2180 - 0x3a21a0
void sub_003A2180_0x3a2180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A2180_0x3a2180");
#endif

    ctx->pc = 0x3a2180u;

    // 0x3a2180: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a2180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a2184: 0xac6464a0  sw          $a0, 0x64A0($v1)
    ctx->pc = 0x3a2184u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25760), GPR_U32(ctx, 4));
    // 0x3a2188: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3a2188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3a218c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A218Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A2190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A218Cu;
            // 0x3a2190: 0xac6564a8  sw          $a1, 0x64A8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 25768), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A2194u;
    // 0x3a2194: 0x0  nop
    ctx->pc = 0x3a2194u;
    // NOP
    // 0x3a2198: 0x0  nop
    ctx->pc = 0x3a2198u;
    // NOP
    // 0x3a219c: 0x0  nop
    ctx->pc = 0x3a219cu;
    // NOP
}
