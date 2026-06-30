#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242930
// Address: 0x242930 - 0x2429d0
void sub_00242930_0x242930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242930_0x242930");
#endif

    switch (ctx->pc) {
        case 0x242960u: goto label_242960;
        case 0x242974u: goto label_242974;
        case 0x2429b0u: goto label_2429b0;
        default: break;
    }

    ctx->pc = 0x242930u;

    // 0x242930: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x242930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x242934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x242938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24293c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24293cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242940: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x242940u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x242944: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x242944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242948: 0xa3a0004d  sb          $zero, 0x4D($sp)
    ctx->pc = 0x242948u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x24294c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x24294cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x242950: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x242950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
    // 0x242954: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x242954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x242958: 0xc090a30  jal         func_2428C0
    ctx->pc = 0x242958u;
    SET_GPR_U32(ctx, 31, 0x242960u);
    ctx->pc = 0x24295Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242958u;
            // 0x24295c: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2428C0u;
    if (runtime->hasFunction(0x2428C0u)) {
        auto targetFn = runtime->lookupFunction(0x2428C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242960u; }
        if (ctx->pc != 0x242960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002428C0_0x2428c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242960u; }
        if (ctx->pc != 0x242960u) { return; }
    }
    ctx->pc = 0x242960u;
label_242960:
    // 0x242960: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x242960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x242964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242968: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x242968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x24296c: 0xc07ffd4  jal         func_1FFF50
    ctx->pc = 0x24296Cu;
    SET_GPR_U32(ctx, 31, 0x242974u);
    ctx->pc = 0x242970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24296Cu;
            // 0x242970: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFF50u;
    if (runtime->hasFunction(0x1FFF50u)) {
        auto targetFn = runtime->lookupFunction(0x1FFF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242974u; }
        if (ctx->pc != 0x242974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFF50_0x1fff50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242974u; }
        if (ctx->pc != 0x242974u) { return; }
    }
    ctx->pc = 0x242974u;
label_242974:
    // 0x242974: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x242974u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242978: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x242978u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24297c: 0x3e00008  jr          $ra
    ctx->pc = 0x24297Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24297Cu;
            // 0x242980: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x242984u;
    // 0x242984: 0x0  nop
    ctx->pc = 0x242984u;
    // NOP
    // 0x242988: 0x0  nop
    ctx->pc = 0x242988u;
    // NOP
    // 0x24298c: 0x0  nop
    ctx->pc = 0x24298cu;
    // NOP
    // 0x242990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x242990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x242994: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x242994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x242998: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x242998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24299c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x24299cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2429a0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2429A0u;
    {
        const bool branch_taken_0x2429a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2429A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429A0u;
            // 0x2429a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2429a0) {
            ctx->pc = 0x2429B0u;
            goto label_2429b0;
        }
    }
    ctx->pc = 0x2429A8u;
    // 0x2429a8: 0xc079150  jal         func_1E4540
    ctx->pc = 0x2429A8u;
    SET_GPR_U32(ctx, 31, 0x2429B0u);
    ctx->pc = 0x1E4540u;
    if (runtime->hasFunction(0x1E4540u)) {
        auto targetFn = runtime->lookupFunction(0x1E4540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2429B0u; }
        if (ctx->pc != 0x2429B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4540_0x1e4540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2429B0u; }
        if (ctx->pc != 0x2429B0u) { return; }
    }
    ctx->pc = 0x2429B0u;
label_2429b0:
    // 0x2429b0: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x2429b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2429b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2429b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2429b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2429b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2429bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2429BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2429C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2429BCu;
            // 0x2429c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2429C4u;
    // 0x2429c4: 0x0  nop
    ctx->pc = 0x2429c4u;
    // NOP
    // 0x2429c8: 0x0  nop
    ctx->pc = 0x2429c8u;
    // NOP
    // 0x2429cc: 0x0  nop
    ctx->pc = 0x2429ccu;
    // NOP
}
