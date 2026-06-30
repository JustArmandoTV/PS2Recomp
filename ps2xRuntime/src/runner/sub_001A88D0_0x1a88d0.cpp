#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A88D0
// Address: 0x1a88d0 - 0x1a88f8
void sub_001A88D0_0x1a88d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A88D0_0x1a88d0");
#endif

    ctx->pc = 0x1a88d0u;

    // 0x1a88d0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A88D0u;
    {
        const bool branch_taken_0x1a88d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A88D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88D0u;
            // 0x1a88d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88d0) {
            ctx->pc = 0x1A88ECu;
            goto label_1a88ec;
        }
    }
    ctx->pc = 0x1A88D8u;
    // 0x1a88d8: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x1a88d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1a88dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A88DCu;
    {
        const bool branch_taken_0x1a88dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A88E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A88DCu;
            // 0x1a88e0: 0x3c030060  lui         $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a88dc) {
            ctx->pc = 0x1A88ECu;
            goto label_1a88ec;
        }
    }
    ctx->pc = 0x1A88E4u;
    // 0x1a88e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a88e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a88e8: 0xac649978  sw          $a0, -0x6688($v1)
    ctx->pc = 0x1a88e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941048), GPR_U32(ctx, 4));
label_1a88ec:
    // 0x1a88ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1A88ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A88F4u;
    // 0x1a88f4: 0x0  nop
    ctx->pc = 0x1a88f4u;
    // NOP
}
