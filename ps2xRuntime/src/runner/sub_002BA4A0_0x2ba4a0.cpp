#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BA4A0
// Address: 0x2ba4a0 - 0x2ba510
void sub_002BA4A0_0x2ba4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BA4A0_0x2ba4a0");
#endif

    switch (ctx->pc) {
        case 0x2ba4d0u: goto label_2ba4d0;
        case 0x2ba4e0u: goto label_2ba4e0;
        case 0x2ba4f8u: goto label_2ba4f8;
        default: break;
    }

    ctx->pc = 0x2ba4a0u;

    // 0x2ba4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ba4a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ba4a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ba4a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ba4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ba4ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ba4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ba4b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ba4b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ba4b4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2BA4B4u;
    {
        const bool branch_taken_0x2ba4b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4B4u;
            // 0x2ba4b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4b4) {
            ctx->pc = 0x2BA4F8u;
            goto label_2ba4f8;
        }
    }
    ctx->pc = 0x2BA4BCu;
    // 0x2ba4bc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2ba4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ba4c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BA4C0u;
    {
        const bool branch_taken_0x2ba4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba4c0) {
            ctx->pc = 0x2BA4D0u;
            goto label_2ba4d0;
        }
    }
    ctx->pc = 0x2BA4C8u;
    // 0x2ba4c8: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2BA4C8u;
    SET_GPR_U32(ctx, 31, 0x2BA4D0u);
    ctx->pc = 0x2BA4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4C8u;
            // 0x2ba4cc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4D0u; }
        if (ctx->pc != 0x2BA4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4D0u; }
        if (ctx->pc != 0x2BA4D0u) { return; }
    }
    ctx->pc = 0x2BA4D0u;
label_2ba4d0:
    // 0x2ba4d0: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA4D0u;
    {
        const bool branch_taken_0x2ba4d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba4d0) {
            ctx->pc = 0x2BA4D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4D0u;
            // 0x2ba4d4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA4E4u;
            goto label_2ba4e4;
        }
    }
    ctx->pc = 0x2BA4D8u;
    // 0x2ba4d8: 0xc07507c  jal         func_1D41F0
    ctx->pc = 0x2BA4D8u;
    SET_GPR_U32(ctx, 31, 0x2BA4E0u);
    ctx->pc = 0x2BA4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4D8u;
            // 0x2ba4dc: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4E0u; }
        if (ctx->pc != 0x2BA4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4E0u; }
        if (ctx->pc != 0x2BA4E0u) { return; }
    }
    ctx->pc = 0x2BA4E0u;
label_2ba4e0:
    // 0x2ba4e0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ba4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ba4e4:
    // 0x2ba4e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ba4e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ba4e8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2BA4E8u;
    {
        const bool branch_taken_0x2ba4e8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ba4e8) {
            ctx->pc = 0x2BA4ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4E8u;
            // 0x2ba4ec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BA4FCu;
            goto label_2ba4fc;
        }
    }
    ctx->pc = 0x2BA4F0u;
    // 0x2ba4f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BA4F0u;
    SET_GPR_U32(ctx, 31, 0x2BA4F8u);
    ctx->pc = 0x2BA4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA4F0u;
            // 0x2ba4f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4F8u; }
        if (ctx->pc != 0x2BA4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BA4F8u; }
        if (ctx->pc != 0x2BA4F8u) { return; }
    }
    ctx->pc = 0x2BA4F8u;
label_2ba4f8:
    // 0x2ba4f8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ba4f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4fc:
    // 0x2ba4fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ba4fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ba500: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ba500u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ba504: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ba504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ba508: 0x3e00008  jr          $ra
    ctx->pc = 0x2BA508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BA508u;
            // 0x2ba50c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BA510u;
}
