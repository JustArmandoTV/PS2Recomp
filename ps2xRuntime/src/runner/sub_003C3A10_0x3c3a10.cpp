#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C3A10
// Address: 0x3c3a10 - 0x3c3a30
void sub_003C3A10_0x3c3a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C3A10_0x3c3a10");
#endif

    ctx->pc = 0x3c3a10u;

    // 0x3c3a10: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x3c3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3c3a14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3c3a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3c3a18: 0xa06400b0  sb          $a0, 0xB0($v1)
    ctx->pc = 0x3c3a18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 176), (uint8_t)GPR_U32(ctx, 4));
    // 0x3c3a1c: 0x3e00008  jr          $ra
    ctx->pc = 0x3C3A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C3A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C3A1Cu;
            // 0x3c3a20: 0xa06600b4  sb          $a2, 0xB4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 180), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C3A24u;
    // 0x3c3a24: 0x0  nop
    ctx->pc = 0x3c3a24u;
    // NOP
    // 0x3c3a28: 0x0  nop
    ctx->pc = 0x3c3a28u;
    // NOP
    // 0x3c3a2c: 0x0  nop
    ctx->pc = 0x3c3a2cu;
    // NOP
}
