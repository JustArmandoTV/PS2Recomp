#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00188B10
// Address: 0x188b10 - 0x188b40
void sub_00188B10_0x188b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00188B10_0x188b10");
#endif

    switch (ctx->pc) {
        case 0x188b28u: goto label_188b28;
        default: break;
    }

    ctx->pc = 0x188b10u;

    // 0x188b10: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x188b14: 0x2442fe40  addiu       $v0, $v0, -0x1C0
    ctx->pc = 0x188b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x188b18: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x188b18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x188b1c: 0x3e00008  jr          $ra
    ctx->pc = 0x188B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B1Cu;
            // 0x188b20: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188B24u;
    // 0x188b24: 0x0  nop
    ctx->pc = 0x188b24u;
    // NOP
label_188b28:
    // 0x188b28: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x188b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x188b2c: 0x2442fe48  addiu       $v0, $v0, -0x1B8
    ctx->pc = 0x188b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966856));
    // 0x188b30: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x188b30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x188b34: 0x3e00008  jr          $ra
    ctx->pc = 0x188B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x188B34u;
            // 0x188b38: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x188B3Cu;
    // 0x188b3c: 0x0  nop
    ctx->pc = 0x188b3cu;
    // NOP
}
