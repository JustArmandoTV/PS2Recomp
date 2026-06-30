#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199A58
// Address: 0x199a58 - 0x199ac8
void sub_00199A58_0x199a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199A58_0x199a58");
#endif

    switch (ctx->pc) {
        case 0x199a74u: goto label_199a74;
        case 0x199aa4u: goto label_199aa4;
        default: break;
    }

    ctx->pc = 0x199a58u;

    // 0x199a58: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x199a58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x199a5c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x199a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x199a60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a64: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x199a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x199a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x199a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x199a6c: 0xc067a62  jal         func_19E988
    ctx->pc = 0x199A6Cu;
    SET_GPR_U32(ctx, 31, 0x199A74u);
    ctx->pc = 0x199A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199A6Cu;
            // 0x199a70: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19E988u;
    if (runtime->hasFunction(0x19E988u)) {
        auto targetFn = runtime->lookupFunction(0x19E988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A74u; }
        if (ctx->pc != 0x199A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019E988_0x19e988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199A74u; }
        if (ctx->pc != 0x199A74u) { return; }
    }
    ctx->pc = 0x199A74u;
label_199a74:
    // 0x199a74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x199a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199a78: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x199a78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199a7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x199a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199a84: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x199A84u;
    {
        const bool branch_taken_0x199a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x199A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A84u;
            // 0x199a88: 0x27a70004  addiu       $a3, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a84) {
            ctx->pc = 0x199A98u;
            goto label_199a98;
        }
    }
    ctx->pc = 0x199A8Cu;
    // 0x199a8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x199a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199a90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x199A90u;
    {
        const bool branch_taken_0x199a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199A90u;
            // 0x199a94: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199a90) {
            ctx->pc = 0x199A9Cu;
            goto label_199a9c;
        }
    }
    ctx->pc = 0x199A98u;
label_199a98:
    // 0x199a98: 0xae230050  sw          $v1, 0x50($s1)
    ctx->pc = 0x199a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
label_199a9c:
    // 0x199a9c: 0xc067e4e  jal         func_19F938
    ctx->pc = 0x199A9Cu;
    SET_GPR_U32(ctx, 31, 0x199AA4u);
    ctx->pc = 0x19F938u;
    if (runtime->hasFunction(0x19F938u)) {
        auto targetFn = runtime->lookupFunction(0x19F938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AA4u; }
        if (ctx->pc != 0x199AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F938_0x19f938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199AA4u; }
        if (ctx->pc != 0x199AA4u) { return; }
    }
    ctx->pc = 0x199AA4u;
label_199aa4:
    // 0x199aa4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x199aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199aa8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x199aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x199aac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x199aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x199ab0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x199ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x199ab4: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x199ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x199ab8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x199ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x199abc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x199abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x199ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x199AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199AC0u;
            // 0x199ac4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199AC8u;
}
