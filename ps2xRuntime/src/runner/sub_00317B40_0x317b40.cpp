#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00317B40
// Address: 0x317b40 - 0x317bb0
void sub_00317B40_0x317b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317B40_0x317b40");
#endif

    switch (ctx->pc) {
        case 0x317b60u: goto label_317b60;
        case 0x317b70u: goto label_317b70;
        case 0x317b7cu: goto label_317b7c;
        default: break;
    }

    ctx->pc = 0x317b40u;

    // 0x317b40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x317b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x317b44: 0x24a502c0  addiu       $a1, $a1, 0x2C0
    ctx->pc = 0x317b44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 704));
    // 0x317b48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x317b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x317b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x317b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x317b50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x317b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x317b54: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x317b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317b58: 0xc04cc90  jal         func_133240
    ctx->pc = 0x317B58u;
    SET_GPR_U32(ctx, 31, 0x317B60u);
    ctx->pc = 0x317B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317B58u;
            // 0x317b5c: 0x26060040  addiu       $a2, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B60u; }
        if (ctx->pc != 0x317B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B60u; }
        if (ctx->pc != 0x317B60u) { return; }
    }
    ctx->pc = 0x317B60u;
label_317b60:
    // 0x317b60: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x317b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x317b64: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x317b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x317b68: 0xc04cc44  jal         func_133110
    ctx->pc = 0x317B68u;
    SET_GPR_U32(ctx, 31, 0x317B70u);
    ctx->pc = 0x317B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317B68u;
            // 0x317b6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B70u; }
        if (ctx->pc != 0x317B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B70u; }
        if (ctx->pc != 0x317B70u) { return; }
    }
    ctx->pc = 0x317B70u;
label_317b70:
    // 0x317b70: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x317b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x317b74: 0xc04cc08  jal         func_133020
    ctx->pc = 0x317B74u;
    SET_GPR_U32(ctx, 31, 0x317B7Cu);
    ctx->pc = 0x317B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x317B74u;
            // 0x317b78: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B7Cu; }
        if (ctx->pc != 0x317B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x317B7Cu; }
        if (ctx->pc != 0x317B7Cu) { return; }
    }
    ctx->pc = 0x317B7Cu;
label_317b7c:
    // 0x317b7c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x317b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x317b80: 0x0  nop
    ctx->pc = 0x317b80u;
    // NOP
    // 0x317b84: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x317b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x317b88: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x317B88u;
    {
        const bool branch_taken_0x317b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x317B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317B88u;
            // 0x317b8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x317b88) {
            ctx->pc = 0x317B94u;
            goto label_317b94;
        }
    }
    ctx->pc = 0x317B90u;
    // 0x317b90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x317b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_317b94:
    // 0x317b94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x317b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x317b98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x317b98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x317B9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x317B9Cu;
            // 0x317ba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x317BA4u;
    // 0x317ba4: 0x0  nop
    ctx->pc = 0x317ba4u;
    // NOP
    // 0x317ba8: 0x0  nop
    ctx->pc = 0x317ba8u;
    // NOP
    // 0x317bac: 0x0  nop
    ctx->pc = 0x317bacu;
    // NOP
}
