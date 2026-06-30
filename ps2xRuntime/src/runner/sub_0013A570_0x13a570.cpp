#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013A570
// Address: 0x13a570 - 0x13a5e0
void sub_0013A570_0x13a570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013A570_0x13a570");
#endif

    ctx->pc = 0x13a570u;

    // 0x13a570: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x13a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a574: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x13a574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x13a578: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x13a578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a57c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x13a57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x13a580: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x13a580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a584: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x13a584u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x13a588: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x13a588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a58c: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x13a58cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x13a590: 0xe48c0014  swc1        $f12, 0x14($a0)
    ctx->pc = 0x13a590u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x13a594: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x13a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a598: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x13a598u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x13a59c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x13a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a5a0: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x13a5a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
    // 0x13a5a4: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x13a5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a5a8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x13a5a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13a5ac: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x13a5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a5b0: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x13a5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x13a5b4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x13a5b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a5b8: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x13a5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x13a5bc: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x13a5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13a5c0: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x13a5c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x13a5c4: 0xe48d0030  swc1        $f13, 0x30($a0)
    ctx->pc = 0x13a5c4u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
    // 0x13a5c8: 0xe48e0034  swc1        $f14, 0x34($a0)
    ctx->pc = 0x13a5c8u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
    // 0x13a5cc: 0xe48f0038  swc1        $f15, 0x38($a0)
    ctx->pc = 0x13a5ccu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 56), bits); }
    // 0x13a5d0: 0x3e00008  jr          $ra
    ctx->pc = 0x13A5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A5D0u;
            // 0x13a5d4: 0xe490003c  swc1        $f16, 0x3C($a0) (Delay Slot)
        { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 60), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13A5D8u;
    // 0x13a5d8: 0x0  nop
    ctx->pc = 0x13a5d8u;
    // NOP
    // 0x13a5dc: 0x0  nop
    ctx->pc = 0x13a5dcu;
    // NOP
}
