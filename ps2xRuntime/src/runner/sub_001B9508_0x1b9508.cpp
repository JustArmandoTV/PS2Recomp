#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9508
// Address: 0x1b9508 - 0x1b9568
void sub_001B9508_0x1b9508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9508_0x1b9508");
#endif

    switch (ctx->pc) {
        case 0x1b9528u: goto label_1b9528;
        case 0x1b9550u: goto label_1b9550;
        default: break;
    }

    ctx->pc = 0x1b9508u;

    // 0x1b9508: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b9508u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b950c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b950cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9510: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9514: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b9514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b9518: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b951c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B951Cu;
    {
        const bool branch_taken_0x1b951c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1B9520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B951Cu;
            // 0x1b9520: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b951c) {
            ctx->pc = 0x1B9548u;
            goto label_1b9548;
        }
    }
    ctx->pc = 0x1B9524u;
    // 0x1b9524: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x1b9524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1b9528:
    // 0x1b9528: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b9528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b952c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1b952cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b9530: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1b9530u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b9534: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b9534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b9538: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1b9538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b953c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1b953cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9540: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1B9540u;
    {
        const bool branch_taken_0x1b9540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9540u;
            // 0x1b9544: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9540) {
            ctx->pc = 0x1B9528u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b9528;
        }
    }
    ctx->pc = 0x1B9548u;
label_1b9548:
    // 0x1b9548: 0xc06e55a  jal         func_1B9568
    ctx->pc = 0x1B9548u;
    SET_GPR_U32(ctx, 31, 0x1B9550u);
    ctx->pc = 0x1B954Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9548u;
            // 0x1b954c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9568u;
    if (runtime->hasFunction(0x1B9568u)) {
        auto targetFn = runtime->lookupFunction(0x1B9568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9550u; }
        if (ctx->pc != 0x1B9550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9568_0x1b9568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9550u; }
        if (ctx->pc != 0x1B9550u) { return; }
    }
    ctx->pc = 0x1B9550u;
label_1b9550:
    // 0x1b9550: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x1b9550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
    // 0x1b9554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b9554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b955c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B955Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B955Cu;
            // 0x1b9560: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9564u;
    // 0x1b9564: 0x0  nop
    ctx->pc = 0x1b9564u;
    // NOP
}
