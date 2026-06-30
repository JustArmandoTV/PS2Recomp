#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0034BFA0
// Address: 0x34bfa0 - 0x34c060
void sub_0034BFA0_0x34bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034BFA0_0x34bfa0");
#endif

    ctx->pc = 0x34bfa0u;

    // 0x34bfa0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34bfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x34bfa4: 0x8c64e418  lw          $a0, -0x1BE8($v1)
    ctx->pc = 0x34bfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960152)));
    // 0x34bfa8: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x34bfa8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x34bfac: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34bfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34bfb0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x34bfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bfb4: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x34bfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x34bfb8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x34bfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bfbc: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x34bfbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x34bfc0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x34bfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bfc4: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x34bfc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x34bfc8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34bfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34bfcc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x34bfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bfd0: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x34bfd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x34bfd4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34bfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34bfd8: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x34bfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bfdc: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x34bfdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x34bfe0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34bfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34bfe4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x34bfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bfe8: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x34bfe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
    // 0x34bfec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34bfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34bff0: 0xc4600020  lwc1        $f0, 0x20($v1)
    ctx->pc = 0x34bff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34bff4: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x34bff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x34bff8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34bffc: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x34bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c000: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x34c000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
    // 0x34c004: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x34c004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c008: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x34c008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
    // 0x34c00c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x34c00cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c010: 0xe4a0002c  swc1        $f0, 0x2C($a1)
    ctx->pc = 0x34c010u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
    // 0x34c014: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34c018: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x34c018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c01c: 0xe4a00030  swc1        $f0, 0x30($a1)
    ctx->pc = 0x34c01cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 48), bits); }
    // 0x34c020: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34c020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34c024: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x34c024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c028: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x34c028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
    // 0x34c02c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34c030: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x34c030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c034: 0xe4a00038  swc1        $f0, 0x38($a1)
    ctx->pc = 0x34c034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 56), bits); }
    // 0x34c038: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x34c038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x34c03c: 0xc460004c  lwc1        $f0, 0x4C($v1)
    ctx->pc = 0x34c03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c040: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x34c040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x34c044: 0xc4600050  lwc1        $f0, 0x50($v1)
    ctx->pc = 0x34c044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c048: 0xe4a00040  swc1        $f0, 0x40($a1)
    ctx->pc = 0x34c048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
    // 0x34c04c: 0xc4600054  lwc1        $f0, 0x54($v1)
    ctx->pc = 0x34c04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x34c050: 0x3e00008  jr          $ra
    ctx->pc = 0x34C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34C050u;
            // 0x34c054: 0xe4a00044  swc1        $f0, 0x44($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x34C058u;
    // 0x34c058: 0x0  nop
    ctx->pc = 0x34c058u;
    // NOP
    // 0x34c05c: 0x0  nop
    ctx->pc = 0x34c05cu;
    // NOP
}
