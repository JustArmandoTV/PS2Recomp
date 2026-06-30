#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0038C8F0
// Address: 0x38c8f0 - 0x38c970
void sub_0038C8F0_0x38c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038C8F0_0x38c8f0");
#endif

    switch (ctx->pc) {
        case 0x38c8f0u: goto label_38c8f0;
        case 0x38c8f4u: goto label_38c8f4;
        case 0x38c8f8u: goto label_38c8f8;
        case 0x38c8fcu: goto label_38c8fc;
        case 0x38c900u: goto label_38c900;
        case 0x38c904u: goto label_38c904;
        case 0x38c908u: goto label_38c908;
        case 0x38c90cu: goto label_38c90c;
        case 0x38c910u: goto label_38c910;
        case 0x38c914u: goto label_38c914;
        case 0x38c918u: goto label_38c918;
        case 0x38c91cu: goto label_38c91c;
        case 0x38c920u: goto label_38c920;
        case 0x38c924u: goto label_38c924;
        case 0x38c928u: goto label_38c928;
        case 0x38c92cu: goto label_38c92c;
        case 0x38c930u: goto label_38c930;
        case 0x38c934u: goto label_38c934;
        case 0x38c938u: goto label_38c938;
        case 0x38c93cu: goto label_38c93c;
        case 0x38c940u: goto label_38c940;
        case 0x38c944u: goto label_38c944;
        case 0x38c948u: goto label_38c948;
        case 0x38c94cu: goto label_38c94c;
        case 0x38c950u: goto label_38c950;
        case 0x38c954u: goto label_38c954;
        case 0x38c958u: goto label_38c958;
        case 0x38c95cu: goto label_38c95c;
        case 0x38c960u: goto label_38c960;
        case 0x38c964u: goto label_38c964;
        case 0x38c968u: goto label_38c968;
        case 0x38c96cu: goto label_38c96c;
        default: break;
    }

    ctx->pc = 0x38c8f0u;

label_38c8f0:
    // 0x38c8f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x38c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_38c8f4:
    // 0x38c8f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x38c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_38c8f8:
    // 0x38c8f8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x38c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_38c8fc:
    // 0x38c8fc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x38c8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_38c900:
    // 0x38c900: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x38c900u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_38c904:
    // 0x38c904: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x38c904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_38c908:
    // 0x38c908: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x38c908u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_38c90c:
    // 0x38c90c: 0x90830020  lbu         $v1, 0x20($a0)
    ctx->pc = 0x38c90cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_38c910:
    // 0x38c910: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_38c914:
    if (ctx->pc == 0x38C914u) {
        ctx->pc = 0x38C914u;
            // 0x38c914: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x38C918u;
        goto label_38c918;
    }
    ctx->pc = 0x38C910u;
    {
        const bool branch_taken_0x38c910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38C914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C910u;
            // 0x38c914: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c910) {
            ctx->pc = 0x38C944u;
            goto label_38c944;
        }
    }
    ctx->pc = 0x38C918u;
label_38c918:
    // 0x38c918: 0x8c910000  lw          $s1, 0x0($a0)
    ctx->pc = 0x38c918u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_38c91c:
    // 0x38c91c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x38c91cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_38c920:
    // 0x38c920: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x38c920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38c924:
    // 0x38c924: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x38c924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_38c928:
    // 0x38c928: 0x8c990024  lw          $t9, 0x24($a0)
    ctx->pc = 0x38c928u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_38c92c:
    // 0x38c92c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x38c92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_38c930:
    // 0x38c930: 0x320f809  jalr        $t9
label_38c934:
    if (ctx->pc == 0x38C934u) {
        ctx->pc = 0x38C934u;
            // 0x38c934: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x38C938u;
        goto label_38c938;
    }
    ctx->pc = 0x38C930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x38C938u);
        ctx->pc = 0x38C934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C930u;
            // 0x38c934: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x38C938u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x38C938u; }
            if (ctx->pc != 0x38C938u) { return; }
        }
        }
    }
    ctx->pc = 0x38C938u;
label_38c938:
    // 0x38c938: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x38c938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_38c93c:
    // 0x38c93c: 0x1e00fff8  bgtz        $s0, . + 4 + (-0x8 << 2)
label_38c940:
    if (ctx->pc == 0x38C940u) {
        ctx->pc = 0x38C940u;
            // 0x38c940: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x38C944u;
        goto label_38c944;
    }
    ctx->pc = 0x38C93Cu;
    {
        const bool branch_taken_0x38c93c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x38C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C93Cu;
            // 0x38c940: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38c93c) {
            ctx->pc = 0x38C920u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_38c920;
        }
    }
    ctx->pc = 0x38C944u;
label_38c944:
    // 0x38c944: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x38c944u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_38c948:
    // 0x38c948: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x38c948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_38c94c:
    // 0x38c94c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x38c94cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_38c950:
    // 0x38c950: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x38c950u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_38c954:
    // 0x38c954: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x38c954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_38c958:
    // 0x38c958: 0x3e00008  jr          $ra
label_38c95c:
    if (ctx->pc == 0x38C95Cu) {
        ctx->pc = 0x38C95Cu;
            // 0x38c95c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x38C960u;
        goto label_38c960;
    }
    ctx->pc = 0x38C958u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38C95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38C958u;
            // 0x38c95c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C960u;
label_38c960:
    // 0x38c960: 0x3e00008  jr          $ra
label_38c964:
    if (ctx->pc == 0x38C964u) {
        ctx->pc = 0x38C968u;
        goto label_38c968;
    }
    ctx->pc = 0x38C960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x38C968u;
label_38c968:
    // 0x38c968: 0x0  nop
    ctx->pc = 0x38c968u;
    // NOP
label_38c96c:
    // 0x38c96c: 0x0  nop
    ctx->pc = 0x38c96cu;
    // NOP
}
