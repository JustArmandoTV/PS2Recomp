#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B5E20
// Address: 0x1b5e20 - 0x1b5ea8
void sub_001B5E20_0x1b5e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5E20_0x1b5e20");
#endif

    switch (ctx->pc) {
        case 0x1b5e58u: goto label_1b5e58;
        case 0x1b5e64u: goto label_1b5e64;
        case 0x1b5e7cu: goto label_1b5e7c;
        default: break;
    }

    ctx->pc = 0x1b5e20u;

    // 0x1b5e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b5e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b5e24: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b5e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b5e28: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b5e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b5e2c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1b5e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1b5e30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b5e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b5e34: 0x24110007  addiu       $s1, $zero, 0x7
    ctx->pc = 0x1b5e34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1b5e38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b5e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b5e3c: 0x24529b8c  addiu       $s2, $v0, -0x6474
    ctx->pc = 0x1b5e3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941580));
    // 0x1b5e40: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b5e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b5e44: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1b5e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e48: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b5e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b5e4c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1b5e4cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e50: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1b5e50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b5e54: 0x0  nop
    ctx->pc = 0x1b5e54u;
    // NOP
label_1b5e58:
    // 0x1b5e58: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1b5e58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1b5e5c: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B5E5Cu;
    SET_GPR_U32(ctx, 31, 0x1B5E64u);
    ctx->pc = 0x1B5E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E5Cu;
            // 0x1b5e60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E64u; }
        if (ctx->pc != 0x1B5E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E64u; }
        if (ctx->pc != 0x1B5E64u) { return; }
    }
    ctx->pc = 0x1B5E64u;
label_1b5e64:
    // 0x1b5e64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b5e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e68: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b5e68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b5e6c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B5E6Cu;
    {
        const bool branch_taken_0x1b5e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B5E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E6Cu;
            // 0x1b5e70: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b5e6c) {
            ctx->pc = 0x1B5E7Cu;
            goto label_1b5e7c;
        }
    }
    ctx->pc = 0x1B5E74u;
    // 0x1b5e74: 0xc06d7aa  jal         func_1B5EA8
    ctx->pc = 0x1B5E74u;
    SET_GPR_U32(ctx, 31, 0x1B5E7Cu);
    ctx->pc = 0x1B5EA8u;
    if (runtime->hasFunction(0x1B5EA8u)) {
        auto targetFn = runtime->lookupFunction(0x1B5EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E7Cu; }
        if (ctx->pc != 0x1B5E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5EA8_0x1b5ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B5E7Cu; }
        if (ctx->pc != 0x1B5E7Cu) { return; }
    }
    ctx->pc = 0x1B5E7Cu;
label_1b5e7c:
    // 0x1b5e7c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1b5e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b5e80: 0x623fff5  bgezl       $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1B5E80u;
    {
        const bool branch_taken_0x1b5e80 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x1b5e80) {
            ctx->pc = 0x1B5E84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5E80u;
            // 0x1b5e84: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B5E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b5e58;
        }
    }
    ctx->pc = 0x1B5E88u;
    // 0x1b5e88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b5e88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b5e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b5e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b5e90: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b5e90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b5e94: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b5e94u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b5e98: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b5e98u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b5e9c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1b5e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b5ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B5EA0u;
            // 0x1b5ea4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B5EA8u;
}
