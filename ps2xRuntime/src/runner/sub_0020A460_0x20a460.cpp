#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020A460
// Address: 0x20a460 - 0x20a500
void sub_0020A460_0x20a460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A460_0x20a460");
#endif

    switch (ctx->pc) {
        case 0x20a4f4u: goto label_20a4f4;
        default: break;
    }

    ctx->pc = 0x20a460u;

    // 0x20a460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20a464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20a464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20a468: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20a468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a46c: 0xe4800030  swc1        $f0, 0x30($a0)
    ctx->pc = 0x20a46cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x20a470: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x20a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a474: 0xe4800034  swc1        $f0, 0x34($a0)
    ctx->pc = 0x20a474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x20a478: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x20a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a47c: 0xe4800038  swc1        $f0, 0x38($a0)
    ctx->pc = 0x20a47cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x20a480: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x20a480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a484: 0xe480003c  swc1        $f0, 0x3C($a0)
    ctx->pc = 0x20a484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
    // 0x20a488: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x20a488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a48c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x20a48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x20a490: 0xc4a00014  lwc1        $f0, 0x14($a1)
    ctx->pc = 0x20a490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a494: 0xe4800044  swc1        $f0, 0x44($a0)
    ctx->pc = 0x20a494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 68), bits); }
    // 0x20a498: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x20a498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a49c: 0xe4800048  swc1        $f0, 0x48($a0)
    ctx->pc = 0x20a49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 72), bits); }
    // 0x20a4a0: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x20a4a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4a4: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x20a4a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x20a4a8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x20a4a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4ac: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x20a4acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x20a4b0: 0xc4a00024  lwc1        $f0, 0x24($a1)
    ctx->pc = 0x20a4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4b4: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x20a4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x20a4b8: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x20a4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4bc: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x20a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x20a4c0: 0xc4a0002c  lwc1        $f0, 0x2C($a1)
    ctx->pc = 0x20a4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4c4: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x20a4c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x20a4c8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x20a4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4cc: 0xe4800060  swc1        $f0, 0x60($a0)
    ctx->pc = 0x20a4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x20a4d0: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x20a4d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4d4: 0xe4800064  swc1        $f0, 0x64($a0)
    ctx->pc = 0x20a4d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x20a4d8: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x20a4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4dc: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x20a4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x20a4e0: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x20a4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a4e4: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x20a4e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x20a4e8: 0x24850030  addiu       $a1, $a0, 0x30
    ctx->pc = 0x20a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x20a4ec: 0xc0a3828  jal         func_28E0A0
    ctx->pc = 0x20A4ECu;
    SET_GPR_U32(ctx, 31, 0x20A4F4u);
    ctx->pc = 0x20A4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4ECu;
            // 0x20a4f0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0A0u;
    if (runtime->hasFunction(0x28E0A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4F4u; }
        if (ctx->pc != 0x20A4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0A0_0x28e0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4F4u; }
        if (ctx->pc != 0x20A4F4u) { return; }
    }
    ctx->pc = 0x20A4F4u;
label_20a4f4:
    // 0x20a4f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20a4f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20a4f8: 0x3e00008  jr          $ra
    ctx->pc = 0x20A4F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4F8u;
            // 0x20a4fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A500u;
}
