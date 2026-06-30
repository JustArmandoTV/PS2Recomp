#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291420
// Address: 0x291420 - 0x291510
void sub_00291420_0x291420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291420_0x291420");
#endif

    switch (ctx->pc) {
        case 0x291498u: goto label_291498;
        default: break;
    }

    ctx->pc = 0x291420u;

    // 0x291420: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x291420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x291424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x291424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x291428: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x291428u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29142c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291430: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x291430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x291434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291438: 0xc4a00080  lwc1        $f0, 0x80($a1)
    ctx->pc = 0x291438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29143c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x29143cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x291440: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x291440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x291444: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x291444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291448: 0xc4a00084  lwc1        $f0, 0x84($a1)
    ctx->pc = 0x291448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29144c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29144cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x291450: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x291450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x291454: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x291454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291458: 0xc4a00088  lwc1        $f0, 0x88($a1)
    ctx->pc = 0x291458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29145c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29145cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x291460: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x291460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x291464: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x291464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291468: 0xc4a0008c  lwc1        $f0, 0x8C($a1)
    ctx->pc = 0x291468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29146c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x29146cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x291470: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x291470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x291474: 0xe4a20080  swc1        $f2, 0x80($a1)
    ctx->pc = 0x291474u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    // 0x291478: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x291478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29147c: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x29147cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x291480: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x291480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291484: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x291484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x291488: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x291488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29148c: 0xe4a0008c  swc1        $f0, 0x8C($a1)
    ctx->pc = 0x29148cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 140), bits); }
    // 0x291490: 0xc0a4628  jal         func_2918A0
    ctx->pc = 0x291490u;
    SET_GPR_U32(ctx, 31, 0x291498u);
    ctx->pc = 0x291494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291490u;
            // 0x291494: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2918A0u;
    if (runtime->hasFunction(0x2918A0u)) {
        auto targetFn = runtime->lookupFunction(0x2918A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291498u; }
        if (ctx->pc != 0x291498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002918A0_0x2918a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291498u; }
        if (ctx->pc != 0x291498u) { return; }
    }
    ctx->pc = 0x291498u;
label_291498:
    // 0x291498: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x291498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x29149c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x29149cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914a0: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x2914a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2914a4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2914a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2914a8: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x2914a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x2914ac: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x2914acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2914b0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2914b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2914b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2914b8: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x2914b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x2914bc: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x2914bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2914c0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2914c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914c4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2914c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2914c8: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x2914c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x2914cc: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x2914ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2914d0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x2914d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2914d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2914d8: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2914d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2914dc: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x2914dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2914e0: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x2914e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914e4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2914e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2914e8: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2914e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2914ec: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x2914ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2914f0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2914f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2914f4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2914f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2914f8: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2914f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2914fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2914fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291504: 0x3e00008  jr          $ra
    ctx->pc = 0x291504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291504u;
            // 0x291508: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29150Cu;
    // 0x29150c: 0x0  nop
    ctx->pc = 0x29150cu;
    // NOP
}
