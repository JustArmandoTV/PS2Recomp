#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0030B750
// Address: 0x30b750 - 0x30b7d0
void sub_0030B750_0x30b750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B750_0x30b750");
#endif

    switch (ctx->pc) {
        case 0x30b770u: goto label_30b770;
        case 0x30b7a0u: goto label_30b7a0;
        default: break;
    }

    ctx->pc = 0x30b750u;

    // 0x30b750: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30b750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30b754: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30b754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30b758: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30b758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30b75c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x30b75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x30b760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30b760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30b768: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x30b768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b76c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x30b76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30b770:
    // 0x30b770: 0x8e030154  lw          $v1, 0x154($s0)
    ctx->pc = 0x30b770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x30b774: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x30B774u;
    {
        const bool branch_taken_0x30b774 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30b774) {
            ctx->pc = 0x30B7A0u;
            goto label_30b7a0;
        }
    }
    ctx->pc = 0x30B77Cu;
    // 0x30b77c: 0x8c650030  lw          $a1, 0x30($v1)
    ctx->pc = 0x30b77cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x30b780: 0x84a3009a  lh          $v1, 0x9A($a1)
    ctx->pc = 0x30b780u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 154)));
    // 0x30b784: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x30b784u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x30b788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x30b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30b78c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x30b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x30b790: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x30b790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x30b794: 0x8446000a  lh          $a2, 0xA($v0)
    ctx->pc = 0x30b794u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x30b798: 0xc0c2e9c  jal         func_30BA70
    ctx->pc = 0x30B798u;
    SET_GPR_U32(ctx, 31, 0x30B7A0u);
    ctx->pc = 0x30B79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30B798u;
            // 0x30b79c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30BA70u;
    if (runtime->hasFunction(0x30BA70u)) {
        auto targetFn = runtime->lookupFunction(0x30BA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7A0u; }
        if (ctx->pc != 0x30B7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030BA70_0x30ba70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30B7A0u; }
        if (ctx->pc != 0x30B7A0u) { return; }
    }
    ctx->pc = 0x30B7A0u;
label_30b7a0:
    // 0x30b7a0: 0x8e430454  lw          $v1, 0x454($s2)
    ctx->pc = 0x30b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1108)));
    // 0x30b7a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x30b7a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x30b7a8: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x30b7a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x30b7ac: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x30B7ACu;
    {
        const bool branch_taken_0x30b7ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B7ACu;
            // 0x30b7b0: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b7ac) {
            ctx->pc = 0x30B770u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30b770;
        }
    }
    ctx->pc = 0x30B7B4u;
    // 0x30b7b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30b7b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30b7b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30b7b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30b7bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x30b7bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b7c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30b7c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x30B7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30B7C4u;
            // 0x30b7c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30B7CCu;
    // 0x30b7cc: 0x0  nop
    ctx->pc = 0x30b7ccu;
    // NOP
}
