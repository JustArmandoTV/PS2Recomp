#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E4540
// Address: 0x1e4540 - 0x1e45a0
void sub_001E4540_0x1e4540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4540_0x1e4540");
#endif

    switch (ctx->pc) {
        case 0x1e4560u: goto label_1e4560;
        default: break;
    }

    ctx->pc = 0x1e4540u;

    // 0x1e4540: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1e4540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1e4544: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x1e4544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1e4548: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e4548u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e454c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x1E454Cu;
    {
        const bool branch_taken_0x1e454c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E454Cu;
            // 0x1e4550: 0xa4800002  sh          $zero, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e454c) {
            ctx->pc = 0x1E4580u;
            goto label_1e4580;
        }
    }
    ctx->pc = 0x1E4554u;
    // 0x1e4554: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x1e4554u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e4558: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E4558u;
    {
        const bool branch_taken_0x1e4558 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e4558) {
            ctx->pc = 0x1E4580u;
            goto label_1e4580;
        }
    }
    ctx->pc = 0x1E4560u;
label_1e4560:
    // 0x1e4560: 0xa4a00002  sh          $zero, 0x2($a1)
    ctx->pc = 0x1e4560u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e4564: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1e4564u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1e4568: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1e4568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1e456c: 0x0  nop
    ctx->pc = 0x1e456cu;
    // NOP
    // 0x1e4570: 0x0  nop
    ctx->pc = 0x1e4570u;
    // NOP
    // 0x1e4574: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E4574u;
    {
        const bool branch_taken_0x1e4574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e4574) {
            ctx->pc = 0x1E4560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e4560;
        }
    }
    ctx->pc = 0x1E457Cu;
    // 0x1e457c: 0x0  nop
    ctx->pc = 0x1e457cu;
    // NOP
label_1e4580:
    // 0x1e4580: 0xa0800021  sb          $zero, 0x21($a0)
    ctx->pc = 0x1e4580u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 33), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4584: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x1e4584u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
    // 0x1e4588: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1e4588u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e458c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E458Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E458Cu;
            // 0x1e4590: 0xa0800022  sb          $zero, 0x22($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 34), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E4594u;
    // 0x1e4594: 0x0  nop
    ctx->pc = 0x1e4594u;
    // NOP
    // 0x1e4598: 0x0  nop
    ctx->pc = 0x1e4598u;
    // NOP
    // 0x1e459c: 0x0  nop
    ctx->pc = 0x1e459cu;
    // NOP
}
