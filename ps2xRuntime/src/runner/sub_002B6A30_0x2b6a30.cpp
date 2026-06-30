#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B6A30
// Address: 0x2b6a30 - 0x2b6ac0
void sub_002B6A30_0x2b6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6A30_0x2b6a30");
#endif

    switch (ctx->pc) {
        case 0x2b6a70u: goto label_2b6a70;
        case 0x2b6a84u: goto label_2b6a84;
        case 0x2b6a98u: goto label_2b6a98;
        case 0x2b6aacu: goto label_2b6aac;
        default: break;
    }

    ctx->pc = 0x2b6a30u;

    // 0x2b6a30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6a34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2b6a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2b6a38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6a3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6a40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b6a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b6a44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6a44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6a48: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x2b6a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x2b6a4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b6a4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6a50: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x2b6a50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x2b6a54: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2b6a54u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6a58: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2b6a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2b6a5c: 0xa4800050  sh          $zero, 0x50($a0)
    ctx->pc = 0x2b6a5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 80), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6a60: 0xa4800052  sh          $zero, 0x52($a0)
    ctx->pc = 0x2b6a60u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 82), (uint16_t)GPR_U32(ctx, 0));
    // 0x2b6a64: 0xa4820054  sh          $v0, 0x54($a0)
    ctx->pc = 0x2b6a64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2b6a68: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6A68u;
    SET_GPR_U32(ctx, 31, 0x2B6A70u);
    ctx->pc = 0x2B6A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A68u;
            // 0x2b6a6c: 0xa4800056  sh          $zero, 0x56($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A70u; }
        if (ctx->pc != 0x2B6A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A70u; }
        if (ctx->pc != 0x2B6A70u) { return; }
    }
    ctx->pc = 0x2B6A70u;
label_2b6a70:
    // 0x2b6a70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6a70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6a74: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x2b6a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2b6a78: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6a78u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6a7c: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6A7Cu;
    SET_GPR_U32(ctx, 31, 0x2B6A84u);
    ctx->pc = 0x2B6A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A7Cu;
            // 0x2b6a80: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A84u; }
        if (ctx->pc != 0x2B6A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A84u; }
        if (ctx->pc != 0x2B6A84u) { return; }
    }
    ctx->pc = 0x2B6A84u;
label_2b6a84:
    // 0x2b6a84: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6a84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6a88: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x2b6a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2b6a8c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6a8cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6a90: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6A90u;
    SET_GPR_U32(ctx, 31, 0x2B6A98u);
    ctx->pc = 0x2B6A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6A90u;
            // 0x2b6a94: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A98u; }
        if (ctx->pc != 0x2B6A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6A98u; }
        if (ctx->pc != 0x2B6A98u) { return; }
    }
    ctx->pc = 0x2B6A98u;
label_2b6a98:
    // 0x2b6a98: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2b6a98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2b6a9c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x2b6a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2b6aa0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2b6aa0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2b6aa4: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2B6AA4u;
    SET_GPR_U32(ctx, 31, 0x2B6AACu);
    ctx->pc = 0x2B6AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6AA4u;
            // 0x2b6aa8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AACu; }
        if (ctx->pc != 0x2B6AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B6AACu; }
        if (ctx->pc != 0x2B6AACu) { return; }
    }
    ctx->pc = 0x2B6AACu;
label_2b6aac:
    // 0x2b6aac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b6aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b6ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B6AB8u;
            // 0x2b6abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B6AC0u;
}
