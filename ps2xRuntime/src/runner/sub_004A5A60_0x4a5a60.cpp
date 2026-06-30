#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A5A60
// Address: 0x4a5a60 - 0x4a5b00
void sub_004A5A60_0x4a5a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A5A60_0x4a5a60");
#endif

    switch (ctx->pc) {
        case 0x4a5a60u: goto label_4a5a60;
        case 0x4a5a64u: goto label_4a5a64;
        case 0x4a5a68u: goto label_4a5a68;
        case 0x4a5a6cu: goto label_4a5a6c;
        case 0x4a5a70u: goto label_4a5a70;
        case 0x4a5a74u: goto label_4a5a74;
        case 0x4a5a78u: goto label_4a5a78;
        case 0x4a5a7cu: goto label_4a5a7c;
        case 0x4a5a80u: goto label_4a5a80;
        case 0x4a5a84u: goto label_4a5a84;
        case 0x4a5a88u: goto label_4a5a88;
        case 0x4a5a8cu: goto label_4a5a8c;
        case 0x4a5a90u: goto label_4a5a90;
        case 0x4a5a94u: goto label_4a5a94;
        case 0x4a5a98u: goto label_4a5a98;
        case 0x4a5a9cu: goto label_4a5a9c;
        case 0x4a5aa0u: goto label_4a5aa0;
        case 0x4a5aa4u: goto label_4a5aa4;
        case 0x4a5aa8u: goto label_4a5aa8;
        case 0x4a5aacu: goto label_4a5aac;
        case 0x4a5ab0u: goto label_4a5ab0;
        case 0x4a5ab4u: goto label_4a5ab4;
        case 0x4a5ab8u: goto label_4a5ab8;
        case 0x4a5abcu: goto label_4a5abc;
        case 0x4a5ac0u: goto label_4a5ac0;
        case 0x4a5ac4u: goto label_4a5ac4;
        case 0x4a5ac8u: goto label_4a5ac8;
        case 0x4a5accu: goto label_4a5acc;
        case 0x4a5ad0u: goto label_4a5ad0;
        case 0x4a5ad4u: goto label_4a5ad4;
        case 0x4a5ad8u: goto label_4a5ad8;
        case 0x4a5adcu: goto label_4a5adc;
        case 0x4a5ae0u: goto label_4a5ae0;
        case 0x4a5ae4u: goto label_4a5ae4;
        case 0x4a5ae8u: goto label_4a5ae8;
        case 0x4a5aecu: goto label_4a5aec;
        case 0x4a5af0u: goto label_4a5af0;
        case 0x4a5af4u: goto label_4a5af4;
        case 0x4a5af8u: goto label_4a5af8;
        case 0x4a5afcu: goto label_4a5afc;
        default: break;
    }

    ctx->pc = 0x4a5a60u;

label_4a5a60:
    // 0x4a5a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a5a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a5a64:
    // 0x4a5a64: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x4a5a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_4a5a68:
    // 0x4a5a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a5a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4a5a6c:
    // 0x4a5a6c: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x4a5a6cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_4a5a70:
    // 0x4a5a70: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a5a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a5a74:
    // 0x4a5a74: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x4a5a74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_4a5a78:
    // 0x4a5a78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4a5a78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4a5a7c:
    // 0x4a5a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a5a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a5a80:
    // 0x4a5a80: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x4a5a80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_4a5a84:
    // 0x4a5a84: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4a5a84u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a5a88:
    // 0x4a5a88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a5a88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a5a8c:
    // 0x4a5a8c: 0xc0b9404  jal         func_2E5010
label_4a5a90:
    if (ctx->pc == 0x4A5A90u) {
        ctx->pc = 0x4A5A90u;
            // 0x4a5a90: 0x2408404b  addiu       $t0, $zero, 0x404B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16459));
        ctx->pc = 0x4A5A94u;
        goto label_4a5a94;
    }
    ctx->pc = 0x4A5A8Cu;
    SET_GPR_U32(ctx, 31, 0x4A5A94u);
    ctx->pc = 0x4A5A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5A8Cu;
            // 0x4a5a90: 0x2408404b  addiu       $t0, $zero, 0x404B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16459));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5A94u; }
        if (ctx->pc != 0x4A5A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5A94u; }
        if (ctx->pc != 0x4A5A94u) { return; }
    }
    ctx->pc = 0x4A5A94u;
label_4a5a94:
    // 0x4a5a94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a5a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a5a98:
    // 0x4a5a98: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x4a5a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_4a5a9c:
    // 0x4a5a9c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a5a9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a5aa0:
    // 0x4a5aa0: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x4a5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
label_4a5aa4:
    // 0x4a5aa4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4a5aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4a5aa8:
    // 0x4a5aa8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a5aa8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a5aac:
    // 0x4a5aac: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a5aacu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a5ab0:
    // 0x4a5ab0: 0xc04cbd8  jal         func_132F60
label_4a5ab4:
    if (ctx->pc == 0x4A5AB4u) {
        ctx->pc = 0x4A5AB4u;
            // 0x4a5ab4: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x4A5AB8u;
        goto label_4a5ab8;
    }
    ctx->pc = 0x4A5AB0u;
    SET_GPR_U32(ctx, 31, 0x4A5AB8u);
    ctx->pc = 0x4A5AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5AB0u;
            // 0x4a5ab4: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5AB8u; }
        if (ctx->pc != 0x4A5AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A5AB8u; }
        if (ctx->pc != 0x4A5AB8u) { return; }
    }
    ctx->pc = 0x4A5AB8u;
label_4a5ab8:
    // 0x4a5ab8: 0xe61400e0  swc1        $f20, 0xE0($s0)
    ctx->pc = 0x4a5ab8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
label_4a5abc:
    // 0x4a5abc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a5ac0:
    // 0x4a5ac0: 0x8c4389e8  lw          $v1, -0x7618($v0)
    ctx->pc = 0x4a5ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4a5ac4:
    // 0x4a5ac4: 0x8c790004  lw          $t9, 0x4($v1)
    ctx->pc = 0x4a5ac4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_4a5ac8:
    // 0x4a5ac8: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x4a5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
label_4a5acc:
    // 0x4a5acc: 0x344501a9  ori         $a1, $v0, 0x1A9
    ctx->pc = 0x4a5accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
label_4a5ad0:
    // 0x4a5ad0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4a5ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4a5ad4:
    // 0x4a5ad4: 0x320f809  jalr        $t9
label_4a5ad8:
    if (ctx->pc == 0x4A5AD8u) {
        ctx->pc = 0x4A5AD8u;
            // 0x4a5ad8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x4A5ADCu;
        goto label_4a5adc;
    }
    ctx->pc = 0x4A5AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A5ADCu);
        ctx->pc = 0x4A5AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5AD4u;
            // 0x4a5ad8: 0x24640004  addiu       $a0, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A5ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A5ADCu; }
            if (ctx->pc != 0x4A5ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A5ADCu;
label_4a5adc:
    // 0x4a5adc: 0xae0200e4  sw          $v0, 0xE4($s0)
    ctx->pc = 0x4a5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 2));
label_4a5ae0:
    // 0x4a5ae0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a5ae0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a5ae4:
    // 0x4a5ae4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a5ae4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a5ae8:
    // 0x4a5ae8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a5ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a5aec:
    // 0x4a5aec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4a5aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4a5af0:
    // 0x4a5af0: 0x3e00008  jr          $ra
label_4a5af4:
    if (ctx->pc == 0x4A5AF4u) {
        ctx->pc = 0x4A5AF4u;
            // 0x4a5af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4A5AF8u;
        goto label_4a5af8;
    }
    ctx->pc = 0x4A5AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A5AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A5AF0u;
            // 0x4a5af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A5AF8u;
label_4a5af8:
    // 0x4a5af8: 0x0  nop
    ctx->pc = 0x4a5af8u;
    // NOP
label_4a5afc:
    // 0x4a5afc: 0x0  nop
    ctx->pc = 0x4a5afcu;
    // NOP
}
