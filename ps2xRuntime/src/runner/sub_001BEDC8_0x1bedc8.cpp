#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEDC8
// Address: 0x1bedc8 - 0x1bee18
void sub_001BEDC8_0x1bedc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEDC8_0x1bedc8");
#endif

    switch (ctx->pc) {
        case 0x1bede8u: goto label_1bede8;
        default: break;
    }

    ctx->pc = 0x1bedc8u;

    // 0x1bedc8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1bedc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1bedcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bedccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedd0: 0x2442a240  addiu       $v0, $v0, -0x5DC0
    ctx->pc = 0x1bedd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943296));
    // 0x1bedd4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1bedd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1bedd8: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x1BEDD8u;
    {
        const bool branch_taken_0x1bedd8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1BEDDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDD8u;
            // 0x1beddc: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedd8) {
            ctx->pc = 0x1BEE0Cu;
            goto label_1bee0c;
        }
    }
    ctx->pc = 0x1BEDE0u;
    // 0x1bede0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1bede0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bede4: 0x0  nop
    ctx->pc = 0x1bede4u;
    // NOP
label_1bede8:
    // 0x1bede8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bede8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bedec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1bedecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bedf0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BEDF0u;
    {
        const bool branch_taken_0x1bedf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEDF0u;
            // 0x1bedf4: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bedf0) {
            ctx->pc = 0x1BEE10u;
            goto label_1bee10;
        }
    }
    ctx->pc = 0x1BEDF8u;
    // 0x1bedf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bedf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1bedfc: 0xc5102a  slt         $v0, $a2, $a1
    ctx->pc = 0x1bedfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1bee00: 0x0  nop
    ctx->pc = 0x1bee00u;
    // NOP
    // 0x1bee04: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1BEE04u;
    {
        const bool branch_taken_0x1bee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bee04) {
            ctx->pc = 0x1BEDE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bede8;
        }
    }
    ctx->pc = 0x1BEE0Cu;
label_1bee0c:
    // 0x1bee0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bee0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bee10:
    // 0x1bee10: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEE18u;
}
