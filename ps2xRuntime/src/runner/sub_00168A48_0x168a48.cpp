#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00168A48
// Address: 0x168a48 - 0x168ad8
void sub_00168A48_0x168a48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168A48_0x168a48");
#endif

    switch (ctx->pc) {
        case 0x168a9cu: goto label_168a9c;
        case 0x168ab0u: goto label_168ab0;
        case 0x168ab8u: goto label_168ab8;
        default: break;
    }

    ctx->pc = 0x168a48u;

    // 0x168a48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x168a48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168a4c: 0x3c08005d  lui         $t0, 0x5D
    ctx->pc = 0x168a4cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)93 << 16));
    // 0x168a50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x168a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x168a54: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x168a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x168a58: 0x25087c87  addiu       $t0, $t0, 0x7C87
    ctx->pc = 0x168a58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 31879));
    // 0x168a5c: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x168a5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x168a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168a64: 0x1024024  and         $t0, $t0, $v0
    ctx->pc = 0x168a64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x168a68: 0x805a34a  j           func_168D28
    ctx->pc = 0x168A68u;
    ctx->pc = 0x168A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A68u;
            // 0x168a6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168D28u;
    if (runtime->hasFunction(0x168D28u)) {
        auto targetFn = runtime->lookupFunction(0x168D28u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00168D28_0x168d28(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x168A70u;
    // 0x168a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x168a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x168a74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x168a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x168a78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x168a78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x168a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x168a80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x168a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x168a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x168a88: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x168a88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168a8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x168a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x168a90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x168a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x168a94: 0xc05adc4  jal         func_16B710
    ctx->pc = 0x168A94u;
    SET_GPR_U32(ctx, 31, 0x168A9Cu);
    ctx->pc = 0x168A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168A94u;
            // 0x168a98: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B710u;
    if (runtime->hasFunction(0x16B710u)) {
        auto targetFn = runtime->lookupFunction(0x16B710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A9Cu; }
        if (ctx->pc != 0x168A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B710_0x16b710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168A9Cu; }
        if (ctx->pc != 0x168A9Cu) { return; }
    }
    ctx->pc = 0x168A9Cu;
label_168a9c:
    // 0x168a9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x168a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168aa0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x168aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168aa4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x168aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168aa8: 0xc05a2b6  jal         func_168AD8
    ctx->pc = 0x168AA8u;
    SET_GPR_U32(ctx, 31, 0x168AB0u);
    ctx->pc = 0x168AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AA8u;
            // 0x168aac: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168AD8u;
    if (runtime->hasFunction(0x168AD8u)) {
        auto targetFn = runtime->lookupFunction(0x168AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB0u; }
        if (ctx->pc != 0x168AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00168AD8_0x168ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB0u; }
        if (ctx->pc != 0x168AB0u) { return; }
    }
    ctx->pc = 0x168AB0u;
label_168ab0:
    // 0x168ab0: 0xc05adca  jal         func_16B728
    ctx->pc = 0x168AB0u;
    SET_GPR_U32(ctx, 31, 0x168AB8u);
    ctx->pc = 0x168AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x168AB0u;
            // 0x168ab4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16B728u;
    if (runtime->hasFunction(0x16B728u)) {
        auto targetFn = runtime->lookupFunction(0x16B728u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB8u; }
        if (ctx->pc != 0x168AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016B728_0x16b728(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x168AB8u; }
        if (ctx->pc != 0x168AB8u) { return; }
    }
    ctx->pc = 0x168AB8u;
label_168ab8:
    // 0x168ab8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x168ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x168abc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x168abcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x168ac0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x168ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x168ac4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x168ac4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168ac8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x168ac8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x168acc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x168accu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x168ad0: 0x3e00008  jr          $ra
    ctx->pc = 0x168AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x168AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x168AD0u;
            // 0x168ad4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x168AD8u;
}
