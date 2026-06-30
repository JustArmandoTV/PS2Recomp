#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013DC00
// Address: 0x13dc00 - 0x13dcb0
void sub_0013DC00_0x13dc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DC00_0x13dc00");
#endif

    switch (ctx->pc) {
        case 0x13dc54u: goto label_13dc54;
        case 0x13dc64u: goto label_13dc64;
        case 0x13dc70u: goto label_13dc70;
        case 0x13dc80u: goto label_13dc80;
        case 0x13dc98u: goto label_13dc98;
        default: break;
    }

    ctx->pc = 0x13dc00u;

    // 0x13dc00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x13dc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x13dc04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13dc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13dc08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13dc0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dc0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13dc10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13dc10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc14: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x13dc14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13dc18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13dc18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc1c: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x13dc1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dc20: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x13dc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13dc24: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13dc24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13dc28: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x13dc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13dc2c: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x13dc2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13dc30: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x13dc30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dc34: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13dc34u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13dc38: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x13dc38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x13dc3c: 0xc4a1001c  lwc1        $f1, 0x1C($a1)
    ctx->pc = 0x13dc3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13dc40: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x13dc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13dc44: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13dc44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x13dc48: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x13dc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc4c: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x13DC4Cu;
    SET_GPR_U32(ctx, 31, 0x13DC54u);
    ctx->pc = 0x13DC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC4Cu;
            // 0x13dc50: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC54u; }
        if (ctx->pc != 0x13DC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC54u; }
        if (ctx->pc != 0x13DC54u) { return; }
    }
    ctx->pc = 0x13DC54u;
label_13dc54:
    // 0x13dc54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13dc54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13dc58: 0x2605002c  addiu       $a1, $s0, 0x2C
    ctx->pc = 0x13dc58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x13dc5c: 0xc04cb0c  jal         func_132C30
    ctx->pc = 0x13DC5Cu;
    SET_GPR_U32(ctx, 31, 0x13DC64u);
    ctx->pc = 0x13DC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC5Cu;
            // 0x13dc60: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C30u;
    if (runtime->hasFunction(0x132C30u)) {
        auto targetFn = runtime->lookupFunction(0x132C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC64u; }
        if (ctx->pc != 0x13DC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C30_0x132c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC64u; }
        if (ctx->pc != 0x13DC64u) { return; }
    }
    ctx->pc = 0x13DC64u;
label_13dc64:
    // 0x13dc64: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x13dc64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13dc68: 0xc04cb44  jal         func_132D10
    ctx->pc = 0x13DC68u;
    SET_GPR_U32(ctx, 31, 0x13DC70u);
    ctx->pc = 0x13DC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC68u;
            // 0x13dc6c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132D10u;
    if (runtime->hasFunction(0x132D10u)) {
        auto targetFn = runtime->lookupFunction(0x132D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC70u; }
        if (ctx->pc != 0x13DC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132D10_0x132d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC70u; }
        if (ctx->pc != 0x13DC70u) { return; }
    }
    ctx->pc = 0x13DC70u;
label_13dc70:
    // 0x13dc70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x13dc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13dc74: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x13dc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x13dc78: 0xc04cb0c  jal         func_132C30
    ctx->pc = 0x13DC78u;
    SET_GPR_U32(ctx, 31, 0x13DC80u);
    ctx->pc = 0x13DC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC78u;
            // 0x13dc7c: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C30u;
    if (runtime->hasFunction(0x132C30u)) {
        auto targetFn = runtime->lookupFunction(0x132C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC80u; }
        if (ctx->pc != 0x13DC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C30_0x132c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC80u; }
        if (ctx->pc != 0x13DC80u) { return; }
    }
    ctx->pc = 0x13DC80u;
label_13dc80:
    // 0x13dc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13dc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc84: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x13dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x13dc88: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x13dc88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13dc8c: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x13dc8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x13dc90: 0xc04f73c  jal         func_13DCF0
    ctx->pc = 0x13DC90u;
    SET_GPR_U32(ctx, 31, 0x13DC98u);
    ctx->pc = 0x13DC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC90u;
            // 0x13dc94: 0x27a80050  addiu       $t0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DCF0u;
    if (runtime->hasFunction(0x13DCF0u)) {
        auto targetFn = runtime->lookupFunction(0x13DCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC98u; }
        if (ctx->pc != 0x13DC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DCF0_0x13dcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DC98u; }
        if (ctx->pc != 0x13DC98u) { return; }
    }
    ctx->pc = 0x13DC98u;
label_13dc98:
    // 0x13dc98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13dc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dc9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dc9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dca0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dca4: 0x3e00008  jr          $ra
    ctx->pc = 0x13DCA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DCA4u;
            // 0x13dca8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13DCACu;
    // 0x13dcac: 0x0  nop
    ctx->pc = 0x13dcacu;
    // NOP
}
