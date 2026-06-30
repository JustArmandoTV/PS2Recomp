#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005375A0
// Address: 0x5375a0 - 0x537610
void sub_005375A0_0x5375a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005375A0_0x5375a0");
#endif

    switch (ctx->pc) {
        case 0x5375e0u: goto label_5375e0;
        case 0x5375f8u: goto label_5375f8;
        default: break;
    }

    ctx->pc = 0x5375a0u;

    // 0x5375a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5375a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x5375a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5375a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x5375a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5375a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x5375ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5375acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5375b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x5375b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5375b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x5375B4u;
    {
        const bool branch_taken_0x5375b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x5375B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5375B4u;
            // 0x5375b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5375b4) {
            ctx->pc = 0x5375F8u;
            goto label_5375f8;
        }
    }
    ctx->pc = 0x5375BCu;
    // 0x5375bc: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x5375BCu;
    {
        const bool branch_taken_0x5375bc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5375bc) {
            ctx->pc = 0x5375C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5375BCu;
            // 0x5375c0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5375E4u;
            goto label_5375e4;
        }
    }
    ctx->pc = 0x5375C4u;
    // 0x5375c4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x5375C4u;
    {
        const bool branch_taken_0x5375c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x5375c4) {
            ctx->pc = 0x5375E0u;
            goto label_5375e0;
        }
    }
    ctx->pc = 0x5375CCu;
    // 0x5375cc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x5375ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x5375d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x5375D0u;
    {
        const bool branch_taken_0x5375d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x5375d0) {
            ctx->pc = 0x5375E0u;
            goto label_5375e0;
        }
    }
    ctx->pc = 0x5375D8u;
    // 0x5375d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5375D8u;
    SET_GPR_U32(ctx, 31, 0x5375E0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5375E0u; }
        if (ctx->pc != 0x5375E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5375E0u; }
        if (ctx->pc != 0x5375E0u) { return; }
    }
    ctx->pc = 0x5375E0u;
label_5375e0:
    // 0x5375e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x5375e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_5375e4:
    // 0x5375e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5375e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5375e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5375E8u;
    {
        const bool branch_taken_0x5375e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5375e8) {
            ctx->pc = 0x5375ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5375E8u;
            // 0x5375ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5375FCu;
            goto label_5375fc;
        }
    }
    ctx->pc = 0x5375F0u;
    // 0x5375f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5375F0u;
    SET_GPR_U32(ctx, 31, 0x5375F8u);
    ctx->pc = 0x5375F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5375F0u;
            // 0x5375f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5375F8u; }
        if (ctx->pc != 0x5375F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5375F8u; }
        if (ctx->pc != 0x5375F8u) { return; }
    }
    ctx->pc = 0x5375F8u;
label_5375f8:
    // 0x5375f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5375f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5375fc:
    // 0x5375fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5375fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x537600: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x537600u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x537604: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537604u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x537608: 0x3e00008  jr          $ra
    ctx->pc = 0x537608u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53760Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537608u;
            // 0x53760c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x537610u;
}
