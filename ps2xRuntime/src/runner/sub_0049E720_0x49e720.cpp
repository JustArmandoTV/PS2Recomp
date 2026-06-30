#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049E720
// Address: 0x49e720 - 0x49e7b0
void sub_0049E720_0x49e720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049E720_0x49e720");
#endif

    switch (ctx->pc) {
        case 0x49e720u: goto label_49e720;
        case 0x49e724u: goto label_49e724;
        case 0x49e728u: goto label_49e728;
        case 0x49e72cu: goto label_49e72c;
        case 0x49e730u: goto label_49e730;
        case 0x49e734u: goto label_49e734;
        case 0x49e738u: goto label_49e738;
        case 0x49e73cu: goto label_49e73c;
        case 0x49e740u: goto label_49e740;
        case 0x49e744u: goto label_49e744;
        case 0x49e748u: goto label_49e748;
        case 0x49e74cu: goto label_49e74c;
        case 0x49e750u: goto label_49e750;
        case 0x49e754u: goto label_49e754;
        case 0x49e758u: goto label_49e758;
        case 0x49e75cu: goto label_49e75c;
        case 0x49e760u: goto label_49e760;
        case 0x49e764u: goto label_49e764;
        case 0x49e768u: goto label_49e768;
        case 0x49e76cu: goto label_49e76c;
        case 0x49e770u: goto label_49e770;
        case 0x49e774u: goto label_49e774;
        case 0x49e778u: goto label_49e778;
        case 0x49e77cu: goto label_49e77c;
        case 0x49e780u: goto label_49e780;
        case 0x49e784u: goto label_49e784;
        case 0x49e788u: goto label_49e788;
        case 0x49e78cu: goto label_49e78c;
        case 0x49e790u: goto label_49e790;
        case 0x49e794u: goto label_49e794;
        case 0x49e798u: goto label_49e798;
        case 0x49e79cu: goto label_49e79c;
        case 0x49e7a0u: goto label_49e7a0;
        case 0x49e7a4u: goto label_49e7a4;
        case 0x49e7a8u: goto label_49e7a8;
        case 0x49e7acu: goto label_49e7ac;
        default: break;
    }

    ctx->pc = 0x49e720u;

label_49e720:
    // 0x49e720: 0x3e00008  jr          $ra
label_49e724:
    if (ctx->pc == 0x49E724u) {
        ctx->pc = 0x49E724u;
            // 0x49e724: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->pc = 0x49E728u;
        goto label_49e728;
    }
    ctx->pc = 0x49E720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E720u;
            // 0x49e724: 0x8c820050  lw          $v0, 0x50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E728u;
label_49e728:
    // 0x49e728: 0x0  nop
    ctx->pc = 0x49e728u;
    // NOP
label_49e72c:
    // 0x49e72c: 0x0  nop
    ctx->pc = 0x49e72cu;
    // NOP
label_49e730:
    // 0x49e730: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x49e730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_49e734:
    // 0x49e734: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x49e734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_49e738:
    // 0x49e738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49e738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49e73c:
    // 0x49e73c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49e73cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49e740:
    // 0x49e740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49e740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49e744:
    // 0x49e744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49e744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49e748:
    // 0x49e748: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x49e748u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49e74c:
    // 0x49e74c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_49e750:
    if (ctx->pc == 0x49E750u) {
        ctx->pc = 0x49E750u;
            // 0x49e750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49E754u;
        goto label_49e754;
    }
    ctx->pc = 0x49E74Cu;
    {
        const bool branch_taken_0x49e74c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x49E750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E74Cu;
            // 0x49e750: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e74c) {
            ctx->pc = 0x49E788u;
            goto label_49e788;
        }
    }
    ctx->pc = 0x49E754u;
label_49e754:
    // 0x49e754: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49e754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e758:
    // 0x49e758: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49e758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49e75c:
    // 0x49e75c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x49e75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_49e760:
    // 0x49e760: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x49e760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_49e764:
    // 0x49e764: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49e764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49e768:
    // 0x49e768: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49e768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49e76c:
    // 0x49e76c: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x49e76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_49e770:
    // 0x49e770: 0x320f809  jalr        $t9
label_49e774:
    if (ctx->pc == 0x49E774u) {
        ctx->pc = 0x49E778u;
        goto label_49e778;
    }
    ctx->pc = 0x49E770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49E778u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49E778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49E778u; }
            if (ctx->pc != 0x49E778u) { return; }
        }
        }
    }
    ctx->pc = 0x49E778u;
label_49e778:
    // 0x49e778: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x49e778u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_49e77c:
    // 0x49e77c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x49e77cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_49e780:
    // 0x49e780: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_49e784:
    if (ctx->pc == 0x49E784u) {
        ctx->pc = 0x49E784u;
            // 0x49e784: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x49E788u;
        goto label_49e788;
    }
    ctx->pc = 0x49E780u;
    {
        const bool branch_taken_0x49e780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x49E784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E780u;
            // 0x49e784: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49e780) {
            ctx->pc = 0x49E75Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49e75c;
        }
    }
    ctx->pc = 0x49E788u;
label_49e788:
    // 0x49e788: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x49e788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_49e78c:
    // 0x49e78c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49e78cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49e790:
    // 0x49e790: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49e790u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49e794:
    // 0x49e794: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49e794u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49e798:
    // 0x49e798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49e798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49e79c:
    // 0x49e79c: 0x3e00008  jr          $ra
label_49e7a0:
    if (ctx->pc == 0x49E7A0u) {
        ctx->pc = 0x49E7A0u;
            // 0x49e7a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x49E7A4u;
        goto label_49e7a4;
    }
    ctx->pc = 0x49E79Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49E79Cu;
            // 0x49e7a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49E7A4u;
label_49e7a4:
    // 0x49e7a4: 0x0  nop
    ctx->pc = 0x49e7a4u;
    // NOP
label_49e7a8:
    // 0x49e7a8: 0x0  nop
    ctx->pc = 0x49e7a8u;
    // NOP
label_49e7ac:
    // 0x49e7ac: 0x0  nop
    ctx->pc = 0x49e7acu;
    // NOP
}
