#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A378
// Address: 0x16a378 - 0x16a3d0
void sub_0016A378_0x16a378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A378_0x16a378");
#endif

    switch (ctx->pc) {
        case 0x16a39cu: goto label_16a39c;
        case 0x16a3acu: goto label_16a3ac;
        case 0x16a3b4u: goto label_16a3b4;
        default: break;
    }

    ctx->pc = 0x16a378u;

    // 0x16a378: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a37c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a384: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a388: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x16a388u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a38c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x16a38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x16a390: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x16a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16a394: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x16A394u;
    SET_GPR_U32(ctx, 31, 0x16A39Cu);
    ctx->pc = 0x16A398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A394u;
            // 0x16a398: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A39Cu; }
        if (ctx->pc != 0x16A39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A39Cu; }
        if (ctx->pc != 0x16A39Cu) { return; }
    }
    ctx->pc = 0x16A39Cu;
label_16a39c:
    // 0x16a39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16a3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3a4: 0xc05a8f4  jal         func_16A3D0
    ctx->pc = 0x16A3A4u;
    SET_GPR_U32(ctx, 31, 0x16A3ACu);
    ctx->pc = 0x16A3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3A4u;
            // 0x16a3a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A3D0u;
    if (runtime->hasFunction(0x16A3D0u)) {
        auto targetFn = runtime->lookupFunction(0x16A3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3ACu; }
        if (ctx->pc != 0x16A3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A3D0_0x16a3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3ACu; }
        if (ctx->pc != 0x16A3ACu) { return; }
    }
    ctx->pc = 0x16A3ACu;
label_16a3ac:
    // 0x16a3ac: 0xc05adca  jal         func_16B728
    ctx->pc = 0x16A3ACu;
    SET_GPR_U32(ctx, 31, 0x16A3B4u);
    ctx->pc = 0x16A3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3ACu;
            // 0x16a3b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3B4u; }
        if (ctx->pc != 0x16A3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A3B4u; }
        if (ctx->pc != 0x16A3B4u) { return; }
    }
    ctx->pc = 0x16A3B4u;
label_16a3b4:
    // 0x16a3b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a3b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a3b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x16a3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a3bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16a3bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a3c4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16a3c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x16a3c8: 0x3e00008  jr          $ra
    ctx->pc = 0x16A3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A3C8u;
            // 0x16a3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A3D0u;
}
