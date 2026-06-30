#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0043A370
// Address: 0x43a370 - 0x43a3e0
void sub_0043A370_0x43a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0043A370_0x43a370");
#endif

    switch (ctx->pc) {
        case 0x43a3b0u: goto label_43a3b0;
        case 0x43a3c8u: goto label_43a3c8;
        default: break;
    }

    ctx->pc = 0x43a370u;

    // 0x43a370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x43a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x43a374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x43a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x43a378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43a378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x43a37c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43a37cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x43a380: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x43a380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43a384: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x43A384u;
    {
        const bool branch_taken_0x43a384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x43A388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A384u;
            // 0x43a388: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43a384) {
            ctx->pc = 0x43A3C8u;
            goto label_43a3c8;
        }
    }
    ctx->pc = 0x43A38Cu;
    // 0x43a38c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x43A38Cu;
    {
        const bool branch_taken_0x43a38c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a38c) {
            ctx->pc = 0x43A390u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A38Cu;
            // 0x43a390: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A3B4u;
            goto label_43a3b4;
        }
    }
    ctx->pc = 0x43A394u;
    // 0x43a394: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x43A394u;
    {
        const bool branch_taken_0x43a394 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a394) {
            ctx->pc = 0x43A3B0u;
            goto label_43a3b0;
        }
    }
    ctx->pc = 0x43A39Cu;
    // 0x43a39c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x43a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x43a3a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43A3A0u;
    {
        const bool branch_taken_0x43a3a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x43a3a0) {
            ctx->pc = 0x43A3B0u;
            goto label_43a3b0;
        }
    }
    ctx->pc = 0x43A3A8u;
    // 0x43a3a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43A3A8u;
    SET_GPR_U32(ctx, 31, 0x43A3B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A3B0u; }
        if (ctx->pc != 0x43A3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A3B0u; }
        if (ctx->pc != 0x43A3B0u) { return; }
    }
    ctx->pc = 0x43A3B0u;
label_43a3b0:
    // 0x43a3b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x43a3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_43a3b4:
    // 0x43a3b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x43a3b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x43a3b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x43A3B8u;
    {
        const bool branch_taken_0x43a3b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x43a3b8) {
            ctx->pc = 0x43A3BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x43A3B8u;
            // 0x43a3bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x43A3CCu;
            goto label_43a3cc;
        }
    }
    ctx->pc = 0x43A3C0u;
    // 0x43a3c0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x43A3C0u;
    SET_GPR_U32(ctx, 31, 0x43A3C8u);
    ctx->pc = 0x43A3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43A3C0u;
            // 0x43a3c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A3C8u; }
        if (ctx->pc != 0x43A3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43A3C8u; }
        if (ctx->pc != 0x43A3C8u) { return; }
    }
    ctx->pc = 0x43A3C8u;
label_43a3c8:
    // 0x43a3c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x43a3c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_43a3cc:
    // 0x43a3cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x43a3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x43a3d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x43a3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43a3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43a3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x43a3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x43A3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43A3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43A3D8u;
            // 0x43a3dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43A3E0u;
}
