#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00225A20
// Address: 0x225a20 - 0x225ce0
void sub_00225A20_0x225a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225A20_0x225a20");
#endif

    switch (ctx->pc) {
        case 0x225a30u: goto label_225a30;
        default: break;
    }

    ctx->pc = 0x225a20u;

    // 0x225a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225a28: 0xc0a38b8  jal         func_28E2E0
    ctx->pc = 0x225A28u;
    SET_GPR_U32(ctx, 31, 0x225A30u);
    ctx->pc = 0x225A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225A28u;
            // 0x225a2c: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E2E0u;
    if (runtime->hasFunction(0x28E2E0u)) {
        auto targetFn = runtime->lookupFunction(0x28E2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A30u; }
        if (ctx->pc != 0x225A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E2E0_0x28e2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A30u; }
        if (ctx->pc != 0x225A30u) { return; }
    }
    ctx->pc = 0x225A30u;
label_225a30:
    // 0x225a30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a34: 0x3e00008  jr          $ra
    ctx->pc = 0x225A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A34u;
            // 0x225a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225A3Cu;
    // 0x225a3c: 0x0  nop
    ctx->pc = 0x225a3cu;
    // NOP
    // 0x225a40: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x225a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a44: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x225a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x225a48: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x225a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a4c: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x225a4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x225a50: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x225a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a54: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x225a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x225a58: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x225a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a5c: 0x3e00008  jr          $ra
    ctx->pc = 0x225A5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A5Cu;
            // 0x225a60: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225A64u;
    // 0x225a64: 0x0  nop
    ctx->pc = 0x225a64u;
    // NOP
    // 0x225a68: 0x0  nop
    ctx->pc = 0x225a68u;
    // NOP
    // 0x225a6c: 0x0  nop
    ctx->pc = 0x225a6cu;
    // NOP
    // 0x225a70: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x225a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a74: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x225a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
    // 0x225a78: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x225a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a7c: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x225a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
    // 0x225a80: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x225a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a84: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x225a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x225a88: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x225a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x225A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A8Cu;
            // 0x225a90: 0xe48000fc  swc1        $f0, 0xFC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 252), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225A94u;
    // 0x225a94: 0x0  nop
    ctx->pc = 0x225a94u;
    // NOP
    // 0x225a98: 0x0  nop
    ctx->pc = 0x225a98u;
    // NOP
    // 0x225a9c: 0x0  nop
    ctx->pc = 0x225a9cu;
    // NOP
    // 0x225aa0: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x225aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225aa4: 0xc48300dc  lwc1        $f3, 0xDC($a0)
    ctx->pc = 0x225aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x225aa8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x225aa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x225aac: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x225aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225ab0: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x225ab0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x225ab4: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x225ab4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x225ab8: 0xe48000e0  swc1        $f0, 0xE0($a0)
    ctx->pc = 0x225ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 224), bits); }
    // 0x225abc: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x225abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225ac0: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x225ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225ac4: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x225ac4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x225ac8: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x225ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x225acc: 0xe48000e4  swc1        $f0, 0xE4($a0)
    ctx->pc = 0x225accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 228), bits); }
    // 0x225ad0: 0xc48000e8  lwc1        $f0, 0xE8($a0)
    ctx->pc = 0x225ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225ad4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x225ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225ad8: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x225ad8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x225adc: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x225adcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x225ae0: 0xe48000e8  swc1        $f0, 0xE8($a0)
    ctx->pc = 0x225ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 232), bits); }
    // 0x225ae4: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x225ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225ae8: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x225ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225aec: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x225aecu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x225af0: 0x4601181c  madd.s      $f0, $f3, $f1
    ctx->pc = 0x225af0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[1]));
    // 0x225af4: 0x3e00008  jr          $ra
    ctx->pc = 0x225AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225AF4u;
            // 0x225af8: 0xe48000ec  swc1        $f0, 0xEC($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 236), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225AFCu;
    // 0x225afc: 0x0  nop
    ctx->pc = 0x225afcu;
    // NOP
    // 0x225b00: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x225b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b04: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x225b04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x225b08: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x225b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b0c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x225b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x225b10: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x225b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b14: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x225b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x225b18: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x225b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b1c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x225b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x225b20: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x225b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b24: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x225b24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x225b28: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x225b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b2c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x225b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x225b30: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x225b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b34: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x225b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x225b38: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x225b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b3c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x225b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x225b40: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x225b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b44: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x225b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x225b48: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x225b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b4c: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x225b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x225b50: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x225b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b54: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x225b54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x225b58: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x225b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b5c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x225b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x225b60: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x225b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b64: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x225b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x225b68: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x225b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b6c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x225b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x225b70: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x225b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b74: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x225b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x225b78: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x225b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b7c: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x225b7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x225b80: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x225b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b84: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x225b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x225b88: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x225b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b8c: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x225b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x225b90: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x225b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b94: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x225b94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x225b98: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x225b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225b9c: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x225b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x225ba0: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x225ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225ba4: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x225ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x225ba8: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x225ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bac: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x225bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x225bb0: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x225bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bb4: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x225bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x225bb8: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x225bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bbc: 0xe4a0006c  swc1        $f0, 0x6C($a1)
    ctx->pc = 0x225bbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x225bc0: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x225bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bc4: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x225bc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x225bc8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x225bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bcc: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x225bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x225bd0: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x225bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bd4: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x225bd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x225bd8: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x225bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bdc: 0xe4a0007c  swc1        $f0, 0x7C($a1)
    ctx->pc = 0x225bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
    // 0x225be0: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x225be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225be4: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x225be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    // 0x225be8: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x225be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bec: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x225becu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x225bf0: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x225bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bf4: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x225bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x225bf8: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x225bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225bfc: 0xe4a0008c  swc1        $f0, 0x8C($a1)
    ctx->pc = 0x225bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 140), bits); }
    // 0x225c00: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x225c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c04: 0xe4a00090  swc1        $f0, 0x90($a1)
    ctx->pc = 0x225c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 144), bits); }
    // 0x225c08: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x225c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c0c: 0xe4a00094  swc1        $f0, 0x94($a1)
    ctx->pc = 0x225c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
    // 0x225c10: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x225c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c14: 0xe4a00098  swc1        $f0, 0x98($a1)
    ctx->pc = 0x225c14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
    // 0x225c18: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x225c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c1c: 0xe4a0009c  swc1        $f0, 0x9C($a1)
    ctx->pc = 0x225c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
    // 0x225c20: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x225c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c24: 0xe4a000a0  swc1        $f0, 0xA0($a1)
    ctx->pc = 0x225c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
    // 0x225c28: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x225c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c2c: 0xe4a000a4  swc1        $f0, 0xA4($a1)
    ctx->pc = 0x225c2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x225c30: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x225c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c34: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x225c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
    // 0x225c38: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x225c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c3c: 0xe4a000ac  swc1        $f0, 0xAC($a1)
    ctx->pc = 0x225c3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 172), bits); }
    // 0x225c40: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x225c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c44: 0xe4a000b0  swc1        $f0, 0xB0($a1)
    ctx->pc = 0x225c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 176), bits); }
    // 0x225c48: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x225c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c4c: 0xe4a000b4  swc1        $f0, 0xB4($a1)
    ctx->pc = 0x225c4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
    // 0x225c50: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x225c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c54: 0xe4a000b8  swc1        $f0, 0xB8($a1)
    ctx->pc = 0x225c54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 184), bits); }
    // 0x225c58: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x225c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c5c: 0xe4a000bc  swc1        $f0, 0xBC($a1)
    ctx->pc = 0x225c5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 188), bits); }
    // 0x225c60: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x225c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c64: 0xe4a000c0  swc1        $f0, 0xC0($a1)
    ctx->pc = 0x225c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 192), bits); }
    // 0x225c68: 0x948300c4  lhu         $v1, 0xC4($a0)
    ctx->pc = 0x225c68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x225c6c: 0xa4a300c4  sh          $v1, 0xC4($a1)
    ctx->pc = 0x225c6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x225c70: 0x948300c6  lhu         $v1, 0xC6($a0)
    ctx->pc = 0x225c70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x225c74: 0xa4a300c6  sh          $v1, 0xC6($a1)
    ctx->pc = 0x225c74u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x225c78: 0xc48100c8  lwc1        $f1, 0xC8($a0)
    ctx->pc = 0x225c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x225c7c: 0xc48000cc  lwc1        $f0, 0xCC($a0)
    ctx->pc = 0x225c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c80: 0xe4a100c8  swc1        $f1, 0xC8($a1)
    ctx->pc = 0x225c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 200), bits); }
    // 0x225c84: 0xe4a000cc  swc1        $f0, 0xCC($a1)
    ctx->pc = 0x225c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 204), bits); }
    // 0x225c88: 0xc48000e0  lwc1        $f0, 0xE0($a0)
    ctx->pc = 0x225c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c8c: 0xe4a000e0  swc1        $f0, 0xE0($a1)
    ctx->pc = 0x225c8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
    // 0x225c90: 0xc48000e4  lwc1        $f0, 0xE4($a0)
    ctx->pc = 0x225c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c94: 0xe4a000e4  swc1        $f0, 0xE4($a1)
    ctx->pc = 0x225c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 228), bits); }
    // 0x225c98: 0xc48000e8  lwc1        $f0, 0xE8($a0)
    ctx->pc = 0x225c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225c9c: 0xe4a000e8  swc1        $f0, 0xE8($a1)
    ctx->pc = 0x225c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 232), bits); }
    // 0x225ca0: 0xc48000ec  lwc1        $f0, 0xEC($a0)
    ctx->pc = 0x225ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225ca4: 0xe4a000ec  swc1        $f0, 0xEC($a1)
    ctx->pc = 0x225ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 236), bits); }
    // 0x225ca8: 0xc48000f0  lwc1        $f0, 0xF0($a0)
    ctx->pc = 0x225ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cac: 0xe4a000f0  swc1        $f0, 0xF0($a1)
    ctx->pc = 0x225cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 240), bits); }
    // 0x225cb0: 0xc48000f4  lwc1        $f0, 0xF4($a0)
    ctx->pc = 0x225cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cb4: 0xe4a000f4  swc1        $f0, 0xF4($a1)
    ctx->pc = 0x225cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 244), bits); }
    // 0x225cb8: 0xc48000f8  lwc1        $f0, 0xF8($a0)
    ctx->pc = 0x225cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cbc: 0xe4a000f8  swc1        $f0, 0xF8($a1)
    ctx->pc = 0x225cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 248), bits); }
    // 0x225cc0: 0xc48000fc  lwc1        $f0, 0xFC($a0)
    ctx->pc = 0x225cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x225cc4: 0xe4a000fc  swc1        $f0, 0xFC($a1)
    ctx->pc = 0x225cc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 252), bits); }
    // 0x225cc8: 0x90830009  lbu         $v1, 0x9($a0)
    ctx->pc = 0x225cc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 9)));
    // 0x225ccc: 0x3e00008  jr          $ra
    ctx->pc = 0x225CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225CCCu;
            // 0x225cd0: 0xa0a30009  sb          $v1, 0x9($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225CD4u;
    // 0x225cd4: 0x0  nop
    ctx->pc = 0x225cd4u;
    // NOP
    // 0x225cd8: 0x0  nop
    ctx->pc = 0x225cd8u;
    // NOP
    // 0x225cdc: 0x0  nop
    ctx->pc = 0x225cdcu;
    // NOP
}
