#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028CFC0
// Address: 0x28cfc0 - 0x28d050
void sub_0028CFC0_0x28cfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028CFC0_0x28cfc0");
#endif

    switch (ctx->pc) {
        case 0x28cfe0u: goto label_28cfe0;
        default: break;
    }

    ctx->pc = 0x28cfc0u;

    // 0x28cfc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28cfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x28cfc4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x28cfc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28cfc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28cfcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28cfccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28cfd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28cfd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfd4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x28cfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x28cfd8: 0xc0a3324  jal         func_28CC90
    ctx->pc = 0x28CFD8u;
    SET_GPR_U32(ctx, 31, 0x28CFE0u);
    ctx->pc = 0x28CFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFD8u;
            // 0x28cfdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CC90u;
    if (runtime->hasFunction(0x28CC90u)) {
        auto targetFn = runtime->lookupFunction(0x28CC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CFE0u; }
        if (ctx->pc != 0x28CFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CC90_0x28cc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CFE0u; }
        if (ctx->pc != 0x28CFE0u) { return; }
    }
    ctx->pc = 0x28CFE0u;
label_28cfe0:
    // 0x28cfe0: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x28cfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cfe4: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x28cfe4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x28cfe8: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x28cfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cfec: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x28cfecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x28cff0: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x28cff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cff4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x28cff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x28cff8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x28cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28cffc: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x28cffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x28d000: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x28d000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d004: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x28d004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x28d008: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x28d008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d00c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x28d00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x28d010: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x28d010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d014: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x28d014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x28d018: 0xc7a0003c  lwc1        $f0, 0x3C($sp)
    ctx->pc = 0x28d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d01c: 0xe600001c  swc1        $f0, 0x1C($s0)
    ctx->pc = 0x28d01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x28d020: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x28d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d024: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x28d024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x28d028: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x28d028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d02c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x28d02cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x28d030: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x28d030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d034: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x28d034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x28d038: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x28d038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x28d03c: 0xe600002c  swc1        $f0, 0x2C($s0)
    ctx->pc = 0x28d03cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x28d040: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28d040u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d044: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28d044u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28d048: 0x3e00008  jr          $ra
    ctx->pc = 0x28D048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D048u;
            // 0x28d04c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D050u;
}
