#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002263E0
// Address: 0x2263e0 - 0x226650
void sub_002263E0_0x2263e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002263E0_0x2263e0");
#endif

    switch (ctx->pc) {
        case 0x2263f4u: goto label_2263f4;
        case 0x226610u: goto label_226610;
        case 0x226638u: goto label_226638;
        default: break;
    }

    ctx->pc = 0x2263e0u;

    // 0x2263e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2263e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2263e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2263e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2263e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2263e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2263ec: 0xc089994  jal         func_226650
    ctx->pc = 0x2263ECu;
    SET_GPR_U32(ctx, 31, 0x2263F4u);
    ctx->pc = 0x2263F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2263ECu;
            // 0x2263f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226650u;
    if (runtime->hasFunction(0x226650u)) {
        auto targetFn = runtime->lookupFunction(0x226650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263F4u; }
        if (ctx->pc != 0x2263F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226650_0x226650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2263F4u; }
        if (ctx->pc != 0x2263F4u) { return; }
    }
    ctx->pc = 0x2263F4u;
label_2263f4:
    // 0x2263f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2263f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2263f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2263f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2263fc: 0x2442ed10  addiu       $v0, $v0, -0x12F0
    ctx->pc = 0x2263fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962448));
    // 0x226400: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x226400u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x226404: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x226404u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x226408: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x226408u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22640c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22640cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226414: 0x3e00008  jr          $ra
    ctx->pc = 0x226414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226414u;
            // 0x226418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22641Cu;
    // 0x22641c: 0x0  nop
    ctx->pc = 0x22641cu;
    // NOP
    // 0x226420: 0x3e00008  jr          $ra
    ctx->pc = 0x226420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226428u;
    // 0x226428: 0x0  nop
    ctx->pc = 0x226428u;
    // NOP
    // 0x22642c: 0x0  nop
    ctx->pc = 0x22642cu;
    // NOP
    // 0x226430: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x226430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226434: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x226434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x226438: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x226438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22643c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x22643cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x226440: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x226440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226444: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x226444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x226448: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x226448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22644c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x22644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x226450: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x226450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226454: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x226454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x226458: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x226458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22645c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x22645cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x226460: 0xc4800028  lwc1        $f0, 0x28($a0)
    ctx->pc = 0x226460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226464: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x226464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x226468: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x226468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22646c: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x22646cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x226470: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x226470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226474: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x226474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x226478: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x226478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22647c: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x22647cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x226480: 0xc4800038  lwc1        $f0, 0x38($a0)
    ctx->pc = 0x226480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226484: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x226484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x226488: 0xc480003c  lwc1        $f0, 0x3C($a0)
    ctx->pc = 0x226488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22648c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x22648cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x226490: 0xc4800040  lwc1        $f0, 0x40($a0)
    ctx->pc = 0x226490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226494: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x226494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x226498: 0xc4800044  lwc1        $f0, 0x44($a0)
    ctx->pc = 0x226498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22649c: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x22649cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x2264a0: 0xc4800048  lwc1        $f0, 0x48($a0)
    ctx->pc = 0x2264a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264a4: 0xe4a00048  swc1        $f0, 0x48($a1)
    ctx->pc = 0x2264a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 72), bits); }
    // 0x2264a8: 0xc480004c  lwc1        $f0, 0x4C($a0)
    ctx->pc = 0x2264a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264ac: 0xe4a0004c  swc1        $f0, 0x4C($a1)
    ctx->pc = 0x2264acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 76), bits); }
    // 0x2264b0: 0xc4800050  lwc1        $f0, 0x50($a0)
    ctx->pc = 0x2264b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264b4: 0xe4a00050  swc1        $f0, 0x50($a1)
    ctx->pc = 0x2264b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 80), bits); }
    // 0x2264b8: 0xc4800054  lwc1        $f0, 0x54($a0)
    ctx->pc = 0x2264b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264bc: 0xe4a00054  swc1        $f0, 0x54($a1)
    ctx->pc = 0x2264bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 84), bits); }
    // 0x2264c0: 0xc4800058  lwc1        $f0, 0x58($a0)
    ctx->pc = 0x2264c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264c4: 0xe4a00058  swc1        $f0, 0x58($a1)
    ctx->pc = 0x2264c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 88), bits); }
    // 0x2264c8: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x2264c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264cc: 0xe4a0005c  swc1        $f0, 0x5C($a1)
    ctx->pc = 0x2264ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 92), bits); }
    // 0x2264d0: 0xc4800060  lwc1        $f0, 0x60($a0)
    ctx->pc = 0x2264d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264d4: 0xe4a00060  swc1        $f0, 0x60($a1)
    ctx->pc = 0x2264d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 96), bits); }
    // 0x2264d8: 0xc4800064  lwc1        $f0, 0x64($a0)
    ctx->pc = 0x2264d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264dc: 0xe4a00064  swc1        $f0, 0x64($a1)
    ctx->pc = 0x2264dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 100), bits); }
    // 0x2264e0: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x2264e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264e4: 0xe4a00068  swc1        $f0, 0x68($a1)
    ctx->pc = 0x2264e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 104), bits); }
    // 0x2264e8: 0xc480006c  lwc1        $f0, 0x6C($a0)
    ctx->pc = 0x2264e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264ec: 0xe4a0006c  swc1        $f0, 0x6C($a1)
    ctx->pc = 0x2264ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 108), bits); }
    // 0x2264f0: 0xc4800070  lwc1        $f0, 0x70($a0)
    ctx->pc = 0x2264f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264f4: 0xe4a00070  swc1        $f0, 0x70($a1)
    ctx->pc = 0x2264f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 112), bits); }
    // 0x2264f8: 0xc4800074  lwc1        $f0, 0x74($a0)
    ctx->pc = 0x2264f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2264fc: 0xe4a00074  swc1        $f0, 0x74($a1)
    ctx->pc = 0x2264fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 116), bits); }
    // 0x226500: 0xc4800078  lwc1        $f0, 0x78($a0)
    ctx->pc = 0x226500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226504: 0xe4a00078  swc1        $f0, 0x78($a1)
    ctx->pc = 0x226504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 120), bits); }
    // 0x226508: 0xc480007c  lwc1        $f0, 0x7C($a0)
    ctx->pc = 0x226508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22650c: 0xe4a0007c  swc1        $f0, 0x7C($a1)
    ctx->pc = 0x22650cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 124), bits); }
    // 0x226510: 0xc4800080  lwc1        $f0, 0x80($a0)
    ctx->pc = 0x226510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226514: 0xe4a00080  swc1        $f0, 0x80($a1)
    ctx->pc = 0x226514u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 128), bits); }
    // 0x226518: 0xc4800084  lwc1        $f0, 0x84($a0)
    ctx->pc = 0x226518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22651c: 0xe4a00084  swc1        $f0, 0x84($a1)
    ctx->pc = 0x22651cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 132), bits); }
    // 0x226520: 0xc4800088  lwc1        $f0, 0x88($a0)
    ctx->pc = 0x226520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226524: 0xe4a00088  swc1        $f0, 0x88($a1)
    ctx->pc = 0x226524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 136), bits); }
    // 0x226528: 0xc480008c  lwc1        $f0, 0x8C($a0)
    ctx->pc = 0x226528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22652c: 0xe4a0008c  swc1        $f0, 0x8C($a1)
    ctx->pc = 0x22652cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 140), bits); }
    // 0x226530: 0xc4800090  lwc1        $f0, 0x90($a0)
    ctx->pc = 0x226530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226534: 0xe4a00090  swc1        $f0, 0x90($a1)
    ctx->pc = 0x226534u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 144), bits); }
    // 0x226538: 0xc4800094  lwc1        $f0, 0x94($a0)
    ctx->pc = 0x226538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22653c: 0xe4a00094  swc1        $f0, 0x94($a1)
    ctx->pc = 0x22653cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 148), bits); }
    // 0x226540: 0xc4800098  lwc1        $f0, 0x98($a0)
    ctx->pc = 0x226540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226544: 0xe4a00098  swc1        $f0, 0x98($a1)
    ctx->pc = 0x226544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 152), bits); }
    // 0x226548: 0xc480009c  lwc1        $f0, 0x9C($a0)
    ctx->pc = 0x226548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22654c: 0xe4a0009c  swc1        $f0, 0x9C($a1)
    ctx->pc = 0x22654cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 156), bits); }
    // 0x226550: 0xc48000a0  lwc1        $f0, 0xA0($a0)
    ctx->pc = 0x226550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226554: 0xe4a000a0  swc1        $f0, 0xA0($a1)
    ctx->pc = 0x226554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 160), bits); }
    // 0x226558: 0xc48000a4  lwc1        $f0, 0xA4($a0)
    ctx->pc = 0x226558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22655c: 0xe4a000a4  swc1        $f0, 0xA4($a1)
    ctx->pc = 0x22655cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 164), bits); }
    // 0x226560: 0xc48000a8  lwc1        $f0, 0xA8($a0)
    ctx->pc = 0x226560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226564: 0xe4a000a8  swc1        $f0, 0xA8($a1)
    ctx->pc = 0x226564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 168), bits); }
    // 0x226568: 0xc48000ac  lwc1        $f0, 0xAC($a0)
    ctx->pc = 0x226568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22656c: 0xe4a000ac  swc1        $f0, 0xAC($a1)
    ctx->pc = 0x22656cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 172), bits); }
    // 0x226570: 0xc48000b0  lwc1        $f0, 0xB0($a0)
    ctx->pc = 0x226570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226574: 0xe4a000b0  swc1        $f0, 0xB0($a1)
    ctx->pc = 0x226574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 176), bits); }
    // 0x226578: 0xc48000b4  lwc1        $f0, 0xB4($a0)
    ctx->pc = 0x226578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22657c: 0xe4a000b4  swc1        $f0, 0xB4($a1)
    ctx->pc = 0x22657cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 180), bits); }
    // 0x226580: 0xc48000b8  lwc1        $f0, 0xB8($a0)
    ctx->pc = 0x226580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226584: 0xe4a000b8  swc1        $f0, 0xB8($a1)
    ctx->pc = 0x226584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 184), bits); }
    // 0x226588: 0xc48000bc  lwc1        $f0, 0xBC($a0)
    ctx->pc = 0x226588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22658c: 0xe4a000bc  swc1        $f0, 0xBC($a1)
    ctx->pc = 0x22658cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 188), bits); }
    // 0x226590: 0xc48000c0  lwc1        $f0, 0xC0($a0)
    ctx->pc = 0x226590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x226594: 0xe4a000c0  swc1        $f0, 0xC0($a1)
    ctx->pc = 0x226594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 192), bits); }
    // 0x226598: 0x948300c4  lhu         $v1, 0xC4($a0)
    ctx->pc = 0x226598u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 196)));
    // 0x22659c: 0xa4a300c4  sh          $v1, 0xC4($a1)
    ctx->pc = 0x22659cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 196), (uint16_t)GPR_U32(ctx, 3));
    // 0x2265a0: 0x948300c6  lhu         $v1, 0xC6($a0)
    ctx->pc = 0x2265a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x2265a4: 0xa4a300c6  sh          $v1, 0xC6($a1)
    ctx->pc = 0x2265a4u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 198), (uint16_t)GPR_U32(ctx, 3));
    // 0x2265a8: 0xc48100c8  lwc1        $f1, 0xC8($a0)
    ctx->pc = 0x2265a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2265ac: 0xc48000cc  lwc1        $f0, 0xCC($a0)
    ctx->pc = 0x2265acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2265b0: 0xe4a100c8  swc1        $f1, 0xC8($a1)
    ctx->pc = 0x2265b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 200), bits); }
    // 0x2265b4: 0xe4a000cc  swc1        $f0, 0xCC($a1)
    ctx->pc = 0x2265b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 204), bits); }
    // 0x2265b8: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x2265b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
    // 0x2265bc: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x2265bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
    // 0x2265c0: 0xaca000e4  sw          $zero, 0xE4($a1)
    ctx->pc = 0x2265c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 0));
    // 0x2265c4: 0xaca000e0  sw          $zero, 0xE0($a1)
    ctx->pc = 0x2265c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 0));
    // 0x2265c8: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x2265c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
    // 0x2265cc: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x2265ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
    // 0x2265d0: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x2265d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
    // 0x2265d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2265D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2265D4u;
            // 0x2265d8: 0xaca000f0  sw          $zero, 0xF0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2265DCu;
    // 0x2265dc: 0x0  nop
    ctx->pc = 0x2265dcu;
    // NOP
    // 0x2265e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2265e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2265e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2265e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2265e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2265e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2265ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2265ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2265f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2265f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265f4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x2265F4u;
    {
        const bool branch_taken_0x2265f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2265F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2265F4u;
            // 0x2265f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2265f4) {
            ctx->pc = 0x226638u;
            goto label_226638;
        }
    }
    ctx->pc = 0x2265FCu;
    // 0x2265fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2265fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x226600: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226604: 0x2442ed10  addiu       $v0, $v0, -0x12F0
    ctx->pc = 0x226604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962448));
    // 0x226608: 0xc0899ac  jal         func_2266B0
    ctx->pc = 0x226608u;
    SET_GPR_U32(ctx, 31, 0x226610u);
    ctx->pc = 0x22660Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226608u;
            // 0x22660c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2266B0u;
    if (runtime->hasFunction(0x2266B0u)) {
        auto targetFn = runtime->lookupFunction(0x2266B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226610u; }
        if (ctx->pc != 0x226610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002266B0_0x2266b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226610u; }
        if (ctx->pc != 0x226610u) { return; }
    }
    ctx->pc = 0x226610u;
label_226610:
    // 0x226610: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x226610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x226614: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x226614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x226618: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x226618u;
    {
        const bool branch_taken_0x226618 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x226618) {
            ctx->pc = 0x22661Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x226618u;
            // 0x22661c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22663Cu;
            goto label_22663c;
        }
    }
    ctx->pc = 0x226620u;
    // 0x226620: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x226620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x226624: 0x96260004  lhu         $a2, 0x4($s1)
    ctx->pc = 0x226624u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x226628: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x226628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x22662c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22662cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226630: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x226630u;
    SET_GPR_U32(ctx, 31, 0x226638u);
    ctx->pc = 0x226634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226630u;
            // 0x226634: 0x2407002c  addiu       $a3, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226638u; }
        if (ctx->pc != 0x226638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226638u; }
        if (ctx->pc != 0x226638u) { return; }
    }
    ctx->pc = 0x226638u;
label_226638:
    // 0x226638: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x226638u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22663c:
    // 0x22663c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22663cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x226640: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x226640u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x226644: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x226644u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x226648: 0x3e00008  jr          $ra
    ctx->pc = 0x226648u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22664Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x226648u;
            // 0x22664c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x226650u;
}
