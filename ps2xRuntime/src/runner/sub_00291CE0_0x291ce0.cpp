#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00291CE0
// Address: 0x291ce0 - 0x292280
void sub_00291CE0_0x291ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291CE0_0x291ce0");
#endif

    switch (ctx->pc) {
        case 0x291d04u: goto label_291d04;
        case 0x291d18u: goto label_291d18;
        case 0x291da0u: goto label_291da0;
        case 0x291e70u: goto label_291e70;
        case 0x291e98u: goto label_291e98;
        case 0x291eb8u: goto label_291eb8;
        case 0x291ee8u: goto label_291ee8;
        case 0x291f08u: goto label_291f08;
        case 0x291f48u: goto label_291f48;
        case 0x291fa0u: goto label_291fa0;
        case 0x291fc0u: goto label_291fc0;
        case 0x292020u: goto label_292020;
        case 0x292040u: goto label_292040;
        case 0x292070u: goto label_292070;
        case 0x292090u: goto label_292090;
        case 0x2920bcu: goto label_2920bc;
        case 0x2920c4u: goto label_2920c4;
        case 0x292108u: goto label_292108;
        case 0x29214cu: goto label_29214c;
        case 0x292194u: goto label_292194;
        case 0x2921e4u: goto label_2921e4;
        case 0x29225cu: goto label_29225c;
        default: break;
    }

    ctx->pc = 0x291ce0u;

    // 0x291ce0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x291ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x291ce4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x291ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x291ce8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291cec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291cf0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x291cf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291cf4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x291cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x291cf8: 0x8ca40048  lw          $a0, 0x48($a1)
    ctx->pc = 0x291cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x291cfc: 0xc08d40c  jal         func_235030
    ctx->pc = 0x291CFCu;
    SET_GPR_U32(ctx, 31, 0x291D04u);
    ctx->pc = 0x291D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291CFCu;
            // 0x291d00: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235030u;
    if (runtime->hasFunction(0x235030u)) {
        auto targetFn = runtime->lookupFunction(0x235030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D04u; }
        if (ctx->pc != 0x291D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235030_0x235030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D04u; }
        if (ctx->pc != 0x291D04u) { return; }
    }
    ctx->pc = 0x291D04u;
label_291d04:
    // 0x291d04: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x291d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x291d08: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x291D08u;
    {
        const bool branch_taken_0x291d08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x291d08) {
            ctx->pc = 0x291D18u;
            goto label_291d18;
        }
    }
    ctx->pc = 0x291D10u;
    // 0x291d10: 0xc08d414  jal         func_235050
    ctx->pc = 0x291D10u;
    SET_GPR_U32(ctx, 31, 0x291D18u);
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D18u; }
        if (ctx->pc != 0x291D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291D18u; }
        if (ctx->pc != 0x291D18u) { return; }
    }
    ctx->pc = 0x291D18u;
label_291d18:
    // 0x291d18: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x291d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d1c: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x291d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
    // 0x291d20: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x291d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d24: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x291d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x291d28: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x291d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d2c: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x291d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x291d30: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x291d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d34: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x291d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x291d38: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x291d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d3c: 0xe6400034  swc1        $f0, 0x34($s2)
    ctx->pc = 0x291d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x291d40: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x291d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d44: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x291d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x291d48: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x291d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d4c: 0xe640005c  swc1        $f0, 0x5C($s2)
    ctx->pc = 0x291d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x291d50: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x291d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d54: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x291d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x291d58: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x291d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d5c: 0xe6400054  swc1        $f0, 0x54($s2)
    ctx->pc = 0x291d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x291d60: 0xc600004c  lwc1        $f0, 0x4C($s0)
    ctx->pc = 0x291d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d64: 0xe6400058  swc1        $f0, 0x58($s2)
    ctx->pc = 0x291d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x291d68: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x291d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x291d6c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x291d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
    // 0x291d70: 0xc6000050  lwc1        $f0, 0x50($s0)
    ctx->pc = 0x291d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d74: 0xe6400060  swc1        $f0, 0x60($s2)
    ctx->pc = 0x291d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 96), bits); }
    // 0x291d78: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x291d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x291d7c: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x291d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
    // 0x291d80: 0xc6000058  lwc1        $f0, 0x58($s0)
    ctx->pc = 0x291d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d84: 0xe6400068  swc1        $f0, 0x68($s2)
    ctx->pc = 0x291d84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x291d88: 0xc600005c  lwc1        $f0, 0x5C($s0)
    ctx->pc = 0x291d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d8c: 0xe640006c  swc1        $f0, 0x6C($s2)
    ctx->pc = 0x291d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x291d90: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x291d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291d94: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x291d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x291d98: 0xc047714  jal         func_11DC50
    ctx->pc = 0x291D98u;
    SET_GPR_U32(ctx, 31, 0x291DA0u);
    ctx->pc = 0x291D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291D98u;
            // 0x291d9c: 0xc60c0064  lwc1        $f12, 0x64($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DC50u;
    if (runtime->hasFunction(0x11DC50u)) {
        auto targetFn = runtime->lookupFunction(0x11DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DA0u; }
        if (ctx->pc != 0x291DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DC50_0x11dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291DA0u; }
        if (ctx->pc != 0x291DA0u) { return; }
    }
    ctx->pc = 0x291DA0u;
label_291da0:
    // 0x291da0: 0xe64000a4  swc1        $f0, 0xA4($s2)
    ctx->pc = 0x291da0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 164), bits); }
    // 0x291da4: 0xc6000068  lwc1        $f0, 0x68($s0)
    ctx->pc = 0x291da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291da8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x291da8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x291dac: 0xe64000a8  swc1        $f0, 0xA8($s2)
    ctx->pc = 0x291dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 168), bits); }
    // 0x291db0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x291db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x291db4: 0xae4300ac  sw          $v1, 0xAC($s2)
    ctx->pc = 0x291db4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 172), GPR_U32(ctx, 3));
    // 0x291db8: 0x92030070  lbu         $v1, 0x70($s0)
    ctx->pc = 0x291db8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x291dbc: 0xa24300b0  sb          $v1, 0xB0($s2)
    ctx->pc = 0x291dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 176), (uint8_t)GPR_U32(ctx, 3));
    // 0x291dc0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x291dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291dc4: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x291dc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x291dc8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x291dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291dcc: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x291dccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x291dd0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x291dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291dd4: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x291dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x291dd8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x291dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291ddc: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x291ddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x291de0: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x291de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291de4: 0xc6410040  lwc1        $f1, 0x40($s2)
    ctx->pc = 0x291de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x291de8: 0xc6420048  lwc1        $f2, 0x48($s2)
    ctx->pc = 0x291de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x291dec: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x291decu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x291df0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x291df0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x291df4: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x291df4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x291df8: 0x4602105c  madd.s      $f1, $f2, $f2
    ctx->pc = 0x291df8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x291dfc: 0x46030832  c.eq.s      $f1, $f3
    ctx->pc = 0x291dfcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x291e00: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x291E00u;
    {
        const bool branch_taken_0x291e00 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x291E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291E00u;
            // 0x291e04: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e00) {
            ctx->pc = 0x291E28u;
            goto label_291e28;
        }
    }
    ctx->pc = 0x291E08u;
    // 0x291e08: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291e0c: 0x0  nop
    ctx->pc = 0x291e0cu;
    // NOP
    // 0x291e10: 0x460100d6  rsqrt.s     $f3, $f0, $f1
    ctx->pc = 0x291e10u;
    ctx->f[3] = 1.0f / sqrtf(ctx->f[0]);
    // 0x291e14: 0x0  nop
    ctx->pc = 0x291e14u;
    // NOP
    // 0x291e18: 0x0  nop
    ctx->pc = 0x291e18u;
    // NOP
    // 0x291e1c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x291E1Cu;
    {
        const bool branch_taken_0x291e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291e1c) {
            ctx->pc = 0x291E28u;
            goto label_291e28;
        }
    }
    ctx->pc = 0x291E24u;
    // 0x291e24: 0x0  nop
    ctx->pc = 0x291e24u;
    // NOP
label_291e28:
    // 0x291e28: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x291e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e2c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x291e30: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x291e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x291e34: 0xc6400044  lwc1        $f0, 0x44($s2)
    ctx->pc = 0x291e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e38: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291e38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x291e3c: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x291e3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x291e40: 0xc6400048  lwc1        $f0, 0x48($s2)
    ctx->pc = 0x291e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e44: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291e44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x291e48: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x291e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x291e4c: 0xc640004c  lwc1        $f0, 0x4C($s2)
    ctx->pc = 0x291e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291e50: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x291e50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x291e54: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x291e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x291e58: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x291e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x291e5c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x291e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x291e60: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x291E60u;
    {
        const bool branch_taken_0x291e60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291E60u;
            // 0x291e64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e60) {
            ctx->pc = 0x291E70u;
            goto label_291e70;
        }
    }
    ctx->pc = 0x291E68u;
    // 0x291e68: 0xc0a5444  jal         func_295110
    ctx->pc = 0x291E68u;
    SET_GPR_U32(ctx, 31, 0x291E70u);
    ctx->pc = 0x291E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291E68u;
            // 0x291e6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E70u; }
        if (ctx->pc != 0x291E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291E70u; }
        if (ctx->pc != 0x291E70u) { return; }
    }
    ctx->pc = 0x291E70u;
label_291e70:
    // 0x291e70: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x291e70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
    // 0x291e74: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x291e74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
    // 0x291e78: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x291e78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
    // 0x291e7c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x291e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x291e80: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x291e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x291e84: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x291e84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291e88: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x291E88u;
    {
        const bool branch_taken_0x291e88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291E88u;
            // 0x291e8c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e88) {
            ctx->pc = 0x291ED0u;
            goto label_291ed0;
        }
    }
    ctx->pc = 0x291E90u;
    // 0x291e90: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x291e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291e94: 0x0  nop
    ctx->pc = 0x291e94u;
    // NOP
label_291e98:
    // 0x291e98: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x291E98u;
    {
        const bool branch_taken_0x291e98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x291E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291E98u;
            // 0x291e9c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291e98) {
            ctx->pc = 0x291EA8u;
            goto label_291ea8;
        }
    }
    ctx->pc = 0x291EA0u;
    // 0x291ea0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x291ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x291ea4: 0x0  nop
    ctx->pc = 0x291ea4u;
    // NOP
label_291ea8:
    // 0x291ea8: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x291ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x291eac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291eb0: 0xc088b24  jal         func_222C90
    ctx->pc = 0x291EB0u;
    SET_GPR_U32(ctx, 31, 0x291EB8u);
    ctx->pc = 0x291EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291EB0u;
            // 0x291eb4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222C90u;
    if (runtime->hasFunction(0x222C90u)) {
        auto targetFn = runtime->lookupFunction(0x222C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EB8u; }
        if (ctx->pc != 0x291EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222C90_0x222c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291EB8u; }
        if (ctx->pc != 0x291EB8u) { return; }
    }
    ctx->pc = 0x291EB8u;
label_291eb8:
    // 0x291eb8: 0x8e430090  lw          $v1, 0x90($s2)
    ctx->pc = 0x291eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x291ebc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x291ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x291ec0: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x291ec0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291ec4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x291EC4u;
    {
        const bool branch_taken_0x291ec4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291EC4u;
            // 0x291ec8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ec4) {
            ctx->pc = 0x291E98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291e98;
        }
    }
    ctx->pc = 0x291ECCu;
    // 0x291ecc: 0x0  nop
    ctx->pc = 0x291eccu;
    // NOP
label_291ed0:
    // 0x291ed0: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x291ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x291ed4: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x291ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x291ed8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x291ed8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291edc: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x291EDCu;
    {
        const bool branch_taken_0x291edc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291EDCu;
            // 0x291ee0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291edc) {
            ctx->pc = 0x291F20u;
            goto label_291f20;
        }
    }
    ctx->pc = 0x291EE4u;
    // 0x291ee4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x291ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_291ee8:
    // 0x291ee8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x291EE8u;
    {
        const bool branch_taken_0x291ee8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x291EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291EE8u;
            // 0x291eec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291ee8) {
            ctx->pc = 0x291EF8u;
            goto label_291ef8;
        }
    }
    ctx->pc = 0x291EF0u;
    // 0x291ef0: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x291ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x291ef4: 0x0  nop
    ctx->pc = 0x291ef4u;
    // NOP
label_291ef8:
    // 0x291ef8: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x291ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x291efc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x291efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x291f00: 0xc08acf8  jal         func_22B3E0
    ctx->pc = 0x291F00u;
    SET_GPR_U32(ctx, 31, 0x291F08u);
    ctx->pc = 0x291F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F00u;
            // 0x291f04: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B3E0u;
    if (runtime->hasFunction(0x22B3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F08u; }
        if (ctx->pc != 0x291F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B3E0_0x22b3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291F08u; }
        if (ctx->pc != 0x291F08u) { return; }
    }
    ctx->pc = 0x291F08u;
label_291f08:
    // 0x291f08: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x291f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x291f0c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x291f0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x291f10: 0x223182a  slt         $v1, $s1, $v1
    ctx->pc = 0x291f10u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291f14: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x291F14u;
    {
        const bool branch_taken_0x291f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F14u;
            // 0x291f18: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f14) {
            ctx->pc = 0x291EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291ee8;
        }
    }
    ctx->pc = 0x291F1Cu;
    // 0x291f1c: 0x0  nop
    ctx->pc = 0x291f1cu;
    // NOP
label_291f20:
    // 0x291f20: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x291f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x291f24: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x291f24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
    // 0x291f28: 0x8e470030  lw          $a3, 0x30($s2)
    ctx->pc = 0x291f28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x291f2c: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x291f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x291f30: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x291f30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291f34: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x291F34u;
    {
        const bool branch_taken_0x291f34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F34u;
            // 0x291f38: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f34) {
            ctx->pc = 0x291F78u;
            goto label_291f78;
        }
    }
    ctx->pc = 0x291F3Cu;
    // 0x291f3c: 0x8ce5004c  lw          $a1, 0x4C($a3)
    ctx->pc = 0x291f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x291f40: 0x24041300  addiu       $a0, $zero, 0x1300
    ctx->pc = 0x291f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
    // 0x291f44: 0x0  nop
    ctx->pc = 0x291f44u;
    // NOP
label_291f48:
    // 0x291f48: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x291f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x291f4c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x291F4Cu;
    {
        const bool branch_taken_0x291f4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x291F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F4Cu;
            // 0x291f50: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f4c) {
            ctx->pc = 0x291F60u;
            goto label_291f60;
        }
    }
    ctx->pc = 0x291F54u;
    // 0x291f54: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x291f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x291f58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x291F58u;
    {
        const bool branch_taken_0x291f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F58u;
            // 0x291f5c: 0xa3a3004c  sb          $v1, 0x4C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f58) {
            ctx->pc = 0x291F80u;
            goto label_291f80;
        }
    }
    ctx->pc = 0x291F60u;
label_291f60:
    // 0x291f60: 0x8ce30050  lw          $v1, 0x50($a3)
    ctx->pc = 0x291f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 80)));
    // 0x291f64: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x291f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x291f68: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x291f68u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x291f6c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x291F6Cu;
    {
        const bool branch_taken_0x291f6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F6Cu;
            // 0x291f70: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f6c) {
            ctx->pc = 0x291F48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_291f48;
        }
    }
    ctx->pc = 0x291F74u;
    // 0x291f74: 0x0  nop
    ctx->pc = 0x291f74u;
    // NOP
label_291f78:
    // 0x291f78: 0xa3a0004c  sb          $zero, 0x4C($sp)
    ctx->pc = 0x291f78u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x291f7c: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x291f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_291f80:
    // 0x291f80: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x291f80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x291f84: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x291F84u;
    {
        const bool branch_taken_0x291f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x291F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291F84u;
            // 0x291f88: 0x12303c  dsll32      $a2, $s2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291f84) {
            ctx->pc = 0x291FA0u;
            goto label_291fa0;
        }
    }
    ctx->pc = 0x291F8Cu;
    // 0x291f8c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x291f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x291f90: 0xffa60040  sd          $a2, 0x40($sp)
    ctx->pc = 0x291f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 6));
    // 0x291f94: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x291f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x291f98: 0xc08d37c  jal         func_234DF0
    ctx->pc = 0x291F98u;
    SET_GPR_U32(ctx, 31, 0x291FA0u);
    ctx->pc = 0x291F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x291F98u;
            // 0x291f9c: 0x24051300  addiu       $a1, $zero, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234DF0u;
    if (runtime->hasFunction(0x234DF0u)) {
        auto targetFn = runtime->lookupFunction(0x234DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FA0u; }
        if (ctx->pc != 0x291FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234DF0_0x234df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x291FA0u; }
        if (ctx->pc != 0x291FA0u) { return; }
    }
    ctx->pc = 0x291FA0u;
label_291fa0:
    // 0x291fa0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x291fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x291fa4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x291fa4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x291fa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x291fa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x291fac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x291facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x291fb0: 0x3e00008  jr          $ra
    ctx->pc = 0x291FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291FB0u;
            // 0x291fb4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x291FB8u;
    // 0x291fb8: 0x0  nop
    ctx->pc = 0x291fb8u;
    // NOP
    // 0x291fbc: 0x0  nop
    ctx->pc = 0x291fbcu;
    // NOP
label_291fc0:
    // 0x291fc0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x291fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x291fc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x291fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x291fc8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x291fc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x291fcc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x291fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x291fd0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x291fd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fd4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x291fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x291fd8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x291fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291fdc: 0x126000a0  beqz        $s3, . + 4 + (0xA0 << 2)
    ctx->pc = 0x291FDCu;
    {
        const bool branch_taken_0x291fdc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x291FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291FDCu;
            // 0x291fe0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291fdc) {
            ctx->pc = 0x292260u;
            goto label_292260;
        }
    }
    ctx->pc = 0x291FE4u;
    // 0x291fe4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x291fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x291fe8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x291fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x291fec: 0x2442f4d0  addiu       $v0, $v0, -0xB30
    ctx->pc = 0x291fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964432));
    // 0x291ff0: 0x2463f4e0  addiu       $v1, $v1, -0xB20
    ctx->pc = 0x291ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964448));
    // 0x291ff4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x291ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x291ff8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x291ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x291ffc: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x291ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    // 0x292000: 0x2442f4fc  addiu       $v0, $v0, -0xB04
    ctx->pc = 0x292000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964476));
    // 0x292004: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x292004u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x292008: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x292008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x29200c: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x29200cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x292010: 0x10200011  beqz        $at, . + 4 + (0x11 << 2)
    ctx->pc = 0x292010u;
    {
        const bool branch_taken_0x292010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x292014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292010u;
            // 0x292014: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292010) {
            ctx->pc = 0x292058u;
            goto label_292058;
        }
    }
    ctx->pc = 0x292018u;
    // 0x292018: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x292018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29201c: 0x0  nop
    ctx->pc = 0x29201cu;
    // NOP
label_292020:
    // 0x292020: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x292020u;
    {
        const bool branch_taken_0x292020 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x292024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292020u;
            // 0x292024: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292020) {
            ctx->pc = 0x292030u;
            goto label_292030;
        }
    }
    ctx->pc = 0x292028u;
    // 0x292028: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x292028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x29202c: 0x0  nop
    ctx->pc = 0x29202cu;
    // NOP
label_292030:
    // 0x292030: 0x8e62008c  lw          $v0, 0x8C($s3)
    ctx->pc = 0x292030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x292034: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x292034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x292038: 0xc088b24  jal         func_222C90
    ctx->pc = 0x292038u;
    SET_GPR_U32(ctx, 31, 0x292040u);
    ctx->pc = 0x29203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292038u;
            // 0x29203c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222C90u;
    if (runtime->hasFunction(0x222C90u)) {
        auto targetFn = runtime->lookupFunction(0x222C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292040u; }
        if (ctx->pc != 0x292040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222C90_0x222c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292040u; }
        if (ctx->pc != 0x292040u) { return; }
    }
    ctx->pc = 0x292040u;
label_292040:
    // 0x292040: 0x8e620090  lw          $v0, 0x90($s3)
    ctx->pc = 0x292040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x292044: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x292044u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x292048: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x292048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29204c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29204Cu;
    {
        const bool branch_taken_0x29204c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29204Cu;
            // 0x292050: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29204c) {
            ctx->pc = 0x292020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292020;
        }
    }
    ctx->pc = 0x292054u;
    // 0x292054: 0x0  nop
    ctx->pc = 0x292054u;
    // NOP
label_292058:
    // 0x292058: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x292058u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
    // 0x29205c: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x29205cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x292060: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x292060u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x292064: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x292064u;
    {
        const bool branch_taken_0x292064 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x292068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292064u;
            // 0x292068: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292064) {
            ctx->pc = 0x2920A8u;
            goto label_2920a8;
        }
    }
    ctx->pc = 0x29206Cu;
    // 0x29206c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29206cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292070:
    // 0x292070: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x292070u;
    {
        const bool branch_taken_0x292070 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x292074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292070u;
            // 0x292074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292070) {
            ctx->pc = 0x292080u;
            goto label_292080;
        }
    }
    ctx->pc = 0x292078u;
    // 0x292078: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x292078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x29207c: 0x0  nop
    ctx->pc = 0x29207cu;
    // NOP
label_292080:
    // 0x292080: 0x8e620098  lw          $v0, 0x98($s3)
    ctx->pc = 0x292080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x292084: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x292084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x292088: 0xc08acf8  jal         func_22B3E0
    ctx->pc = 0x292088u;
    SET_GPR_U32(ctx, 31, 0x292090u);
    ctx->pc = 0x29208Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292088u;
            // 0x29208c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B3E0u;
    if (runtime->hasFunction(0x22B3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292090u; }
        if (ctx->pc != 0x292090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B3E0_0x22b3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292090u; }
        if (ctx->pc != 0x292090u) { return; }
    }
    ctx->pc = 0x292090u;
label_292090:
    // 0x292090: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x292090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x292094: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x292094u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x292098: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x292098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29209c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x29209Cu;
    {
        const bool branch_taken_0x29209c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2920A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29209Cu;
            // 0x2920a0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29209c) {
            ctx->pc = 0x292070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292070;
        }
    }
    ctx->pc = 0x2920A4u;
    // 0x2920a4: 0x0  nop
    ctx->pc = 0x2920a4u;
    // NOP
label_2920a8:
    // 0x2920a8: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x2920a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
    // 0x2920ac: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x2920acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2920b0: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x2920b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2920b4: 0xc08d3a8  jal         func_234EA0
    ctx->pc = 0x2920B4u;
    SET_GPR_U32(ctx, 31, 0x2920BCu);
    ctx->pc = 0x2920B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2920B4u;
            // 0x2920b8: 0x24061300  addiu       $a2, $zero, 0x1300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234EA0u;
    if (runtime->hasFunction(0x234EA0u)) {
        auto targetFn = runtime->lookupFunction(0x234EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920BCu; }
        if (ctx->pc != 0x2920BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234EA0_0x234ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920BCu; }
        if (ctx->pc != 0x2920BCu) { return; }
    }
    ctx->pc = 0x2920BCu;
label_2920bc:
    // 0x2920bc: 0xc08d414  jal         func_235050
    ctx->pc = 0x2920BCu;
    SET_GPR_U32(ctx, 31, 0x2920C4u);
    ctx->pc = 0x2920C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2920BCu;
            // 0x2920c0: 0x8e640030  lw          $a0, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x235050u;
    if (runtime->hasFunction(0x235050u)) {
        auto targetFn = runtime->lookupFunction(0x235050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920C4u; }
        if (ctx->pc != 0x2920C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00235050_0x235050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2920C4u; }
        if (ctx->pc != 0x2920C4u) { return; }
    }
    ctx->pc = 0x2920C4u;
label_2920c4:
    // 0x2920c4: 0x26620098  addiu       $v0, $s3, 0x98
    ctx->pc = 0x2920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 152));
    // 0x2920c8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2920C8u;
    {
        const bool branch_taken_0x2920c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2920c8) {
            ctx->pc = 0x292108u;
            goto label_292108;
        }
    }
    ctx->pc = 0x2920D0u;
    // 0x2920d0: 0x8e6300a0  lw          $v1, 0xA0($s3)
    ctx->pc = 0x2920d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x2920d4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2920d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2920d8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2920d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2920dc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2920DCu;
    {
        const bool branch_taken_0x2920dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2920dc) {
            ctx->pc = 0x292108u;
            goto label_292108;
        }
    }
    ctx->pc = 0x2920E4u;
    // 0x2920e4: 0x8e6200a0  lw          $v0, 0xA0($s3)
    ctx->pc = 0x2920e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 160)));
    // 0x2920e8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2920e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2920ec: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2920ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2920f0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2920f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2920f4: 0x8e650098  lw          $a1, 0x98($s3)
    ctx->pc = 0x2920f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
    // 0x2920f8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2920f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2920fc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x2920fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x292100: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x292100u;
    SET_GPR_U32(ctx, 31, 0x292108u);
    ctx->pc = 0x292104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292100u;
            // 0x292104: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292108u; }
        if (ctx->pc != 0x292108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292108u; }
        if (ctx->pc != 0x292108u) { return; }
    }
    ctx->pc = 0x292108u;
label_292108:
    // 0x292108: 0x2662008c  addiu       $v0, $s3, 0x8C
    ctx->pc = 0x292108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 140));
    // 0x29210c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x29210Cu;
    {
        const bool branch_taken_0x29210c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29210c) {
            ctx->pc = 0x292150u;
            goto label_292150;
        }
    }
    ctx->pc = 0x292114u;
    // 0x292114: 0x8e630094  lw          $v1, 0x94($s3)
    ctx->pc = 0x292114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x292118: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29211c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x29211cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x292120: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292120u;
    {
        const bool branch_taken_0x292120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292120) {
            ctx->pc = 0x292150u;
            goto label_292150;
        }
    }
    ctx->pc = 0x292128u;
    // 0x292128: 0x8e620094  lw          $v0, 0x94($s3)
    ctx->pc = 0x292128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x29212c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x29212cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x292130: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x292130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x292134: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x292134u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x292138: 0x8e65008c  lw          $a1, 0x8C($s3)
    ctx->pc = 0x292138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
    // 0x29213c: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x29213cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x292140: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x292140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x292144: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x292144u;
    SET_GPR_U32(ctx, 31, 0x29214Cu);
    ctx->pc = 0x292148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292144u;
            // 0x292148: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29214Cu; }
        if (ctx->pc != 0x29214Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29214Cu; }
        if (ctx->pc != 0x29214Cu) { return; }
    }
    ctx->pc = 0x29214Cu;
label_29214c:
    // 0x29214c: 0x0  nop
    ctx->pc = 0x29214cu;
    // NOP
label_292150:
    // 0x292150: 0x26620080  addiu       $v0, $s3, 0x80
    ctx->pc = 0x292150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
    // 0x292154: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x292154u;
    {
        const bool branch_taken_0x292154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292154) {
            ctx->pc = 0x292198u;
            goto label_292198;
        }
    }
    ctx->pc = 0x29215Cu;
    // 0x29215c: 0x8e630088  lw          $v1, 0x88($s3)
    ctx->pc = 0x29215cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x292160: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x292160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x292164: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x292164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x292168: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x292168u;
    {
        const bool branch_taken_0x292168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292168) {
            ctx->pc = 0x292198u;
            goto label_292198;
        }
    }
    ctx->pc = 0x292170u;
    // 0x292170: 0x8e620088  lw          $v0, 0x88($s3)
    ctx->pc = 0x292170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 136)));
    // 0x292174: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x292174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x292178: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x292178u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x29217c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29217cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x292180: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x292180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x292184: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x292184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x292188: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x292188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x29218c: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x29218Cu;
    SET_GPR_U32(ctx, 31, 0x292194u);
    ctx->pc = 0x292190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29218Cu;
            // 0x292190: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292194u; }
        if (ctx->pc != 0x292194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292194u; }
        if (ctx->pc != 0x292194u) { return; }
    }
    ctx->pc = 0x292194u;
label_292194:
    // 0x292194: 0x0  nop
    ctx->pc = 0x292194u;
    // NOP
label_292198:
    // 0x292198: 0x26620074  addiu       $v0, $s3, 0x74
    ctx->pc = 0x292198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 116));
    // 0x29219c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x29219Cu;
    {
        const bool branch_taken_0x29219c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29219c) {
            ctx->pc = 0x2921E8u;
            goto label_2921e8;
        }
    }
    ctx->pc = 0x2921A4u;
    // 0x2921a4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2921a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2921a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2921a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2921ac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2921acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2921b0: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2921B0u;
    {
        const bool branch_taken_0x2921b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2921b0) {
            ctx->pc = 0x2921E8u;
            goto label_2921e8;
        }
    }
    ctx->pc = 0x2921B8u;
    // 0x2921b8: 0x8e62007c  lw          $v0, 0x7C($s3)
    ctx->pc = 0x2921b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2921bc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2921bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x2921c0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2921c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x2921c4: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x2921c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2921c8: 0x8e650074  lw          $a1, 0x74($s3)
    ctx->pc = 0x2921c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
    // 0x2921cc: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x2921ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2921d0: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2921d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x2921d4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2921d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2921d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2921d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2921dc: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2921DCu;
    SET_GPR_U32(ctx, 31, 0x2921E4u);
    ctx->pc = 0x2921E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2921DCu;
            // 0x2921e0: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921E4u; }
        if (ctx->pc != 0x2921E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2921E4u; }
        if (ctx->pc != 0x2921E4u) { return; }
    }
    ctx->pc = 0x2921E4u;
label_2921e4:
    // 0x2921e4: 0x0  nop
    ctx->pc = 0x2921e4u;
    // NOP
label_2921e8:
    // 0x2921e8: 0x2662000c  addiu       $v0, $s3, 0xC
    ctx->pc = 0x2921e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x2921ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2921ECu;
    {
        const bool branch_taken_0x2921ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2921F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2921ECu;
            // 0x2921f0: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2921ec) {
            ctx->pc = 0x292200u;
            goto label_292200;
        }
    }
    ctx->pc = 0x2921F4u;
    // 0x2921f4: 0x2442f530  addiu       $v0, $v0, -0xAD0
    ctx->pc = 0x2921f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964528));
    // 0x2921f8: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x2921f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x2921fc: 0x0  nop
    ctx->pc = 0x2921fcu;
    // NOP
label_292200:
    // 0x292200: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x292200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x292204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x292204u;
    {
        const bool branch_taken_0x292204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292204u;
            // 0x292208: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292204) {
            ctx->pc = 0x292218u;
            goto label_292218;
        }
    }
    ctx->pc = 0x29220Cu;
    // 0x29220c: 0x2442f550  addiu       $v0, $v0, -0xAB0
    ctx->pc = 0x29220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964560));
    // 0x292210: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x292210u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x292214: 0x0  nop
    ctx->pc = 0x292214u;
    // NOP
label_292218:
    // 0x292218: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x292218u;
    {
        const bool branch_taken_0x292218 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29221Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292218u;
            // 0x29221c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292218) {
            ctx->pc = 0x292238u;
            goto label_292238;
        }
    }
    ctx->pc = 0x292220u;
    // 0x292220: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x292220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x292224: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x292224u;
    {
        const bool branch_taken_0x292224 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x292228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292224u;
            // 0x292228: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292224) {
            ctx->pc = 0x292238u;
            goto label_292238;
        }
    }
    ctx->pc = 0x29222Cu;
    // 0x29222c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x29222cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x292230: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x292230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x292234: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x292234u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_292238:
    // 0x292238: 0x12143c  dsll32      $v0, $s2, 16
    ctx->pc = 0x292238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 16));
    // 0x29223c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x29223cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x292240: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x292240u;
    {
        const bool branch_taken_0x292240 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x292244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292240u;
            // 0x292244: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292240) {
            ctx->pc = 0x292260u;
            goto label_292260;
        }
    }
    ctx->pc = 0x292248u;
    // 0x292248: 0x96660004  lhu         $a2, 0x4($s3)
    ctx->pc = 0x292248u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x29224c: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x29224cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x292250: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x292250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292254: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x292254u;
    SET_GPR_U32(ctx, 31, 0x29225Cu);
    ctx->pc = 0x292258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292254u;
            // 0x292258: 0x24070032  addiu       $a3, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29225Cu; }
        if (ctx->pc != 0x29225Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29225Cu; }
        if (ctx->pc != 0x29225Cu) { return; }
    }
    ctx->pc = 0x29225Cu;
label_29225c:
    // 0x29225c: 0x0  nop
    ctx->pc = 0x29225cu;
    // NOP
label_292260:
    // 0x292260: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x292260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292264: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x292264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292268: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x292268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29226c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29226cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292270: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x292270u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x292274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292278: 0x3e00008  jr          $ra
    ctx->pc = 0x292278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292278u;
            // 0x29227c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x292280u;
}
