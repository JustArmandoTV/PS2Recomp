#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00146990
// Address: 0x146990 - 0x147130
void sub_00146990_0x146990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146990_0x146990");
#endif

    switch (ctx->pc) {
        case 0x146b30u: goto label_146b30;
        case 0x146b60u: goto label_146b60;
        case 0x146c9cu: goto label_146c9c;
        case 0x146d28u: goto label_146d28;
        case 0x146d78u: goto label_146d78;
        case 0x146da4u: goto label_146da4;
        case 0x146dc4u: goto label_146dc4;
        case 0x146e3cu: goto label_146e3c;
        case 0x146e88u: goto label_146e88;
        case 0x146ed0u: goto label_146ed0;
        case 0x146f28u: goto label_146f28;
        case 0x146f60u: goto label_146f60;
        case 0x146fa0u: goto label_146fa0;
        case 0x146fccu: goto label_146fcc;
        case 0x146fe0u: goto label_146fe0;
        case 0x147010u: goto label_147010;
        case 0x147060u: goto label_147060;
        default: break;
    }

    ctx->pc = 0x146990u;

    // 0x146990: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x146990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x146994: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x146994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146998: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x146998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x14699c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x14699cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x1469a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1469a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x1469a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1469a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1469a8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1469a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1469ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1469acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1469b0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1469b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1469b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1469b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1469b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1469bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1469bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1469c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1469c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1469c4: 0x26b20060  addiu       $s2, $s5, 0x60
    ctx->pc = 0x1469c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 96));
    // 0x1469c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1469c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1469cc: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x1469ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1469d0: 0xafa6015c  sw          $a2, 0x15C($sp)
    ctx->pc = 0x1469d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 6));
    // 0x1469d4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1469d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1469d8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1469d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1469dc: 0xe4820000  swc1        $f2, 0x0($a0)
    ctx->pc = 0x1469dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1469e0: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1469e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1469e4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x1469e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1469e8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1469e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1469ec: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1469ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x1469f0: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x1469f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1469f4: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x1469f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x1469f8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1469f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1469fc: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1469fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
    // 0x146a00: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x146a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x146a04: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x146a04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x146a08: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x146a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x146a0c: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x146a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x146a10: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x146a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x146a14: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x146a14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
    // 0x146a18: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x146a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x146a1c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x146a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
    // 0x146a20: 0x8ca30028  lw          $v1, 0x28($a1)
    ctx->pc = 0x146a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x146a24: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x146a24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
    // 0x146a28: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x146a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x146a2c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x146a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x146a30: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x146a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x146a34: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x146a34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x146a38: 0x8ca30034  lw          $v1, 0x34($a1)
    ctx->pc = 0x146a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x146a3c: 0xac830034  sw          $v1, 0x34($a0)
    ctx->pc = 0x146a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 3));
    // 0x146a40: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x146a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x146a44: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x146a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x146a48: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x146a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x146a4c: 0xac83003c  sw          $v1, 0x3C($a0)
    ctx->pc = 0x146a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 3));
    // 0x146a50: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x146a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x146a54: 0xac830040  sw          $v1, 0x40($a0)
    ctx->pc = 0x146a54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
    // 0x146a58: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x146a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x146a5c: 0xac830044  sw          $v1, 0x44($a0)
    ctx->pc = 0x146a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 3));
    // 0x146a60: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x146a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x146a64: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x146a64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x146a68: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x146a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146a6c: 0xe480004c  swc1        $f0, 0x4C($a0)
    ctx->pc = 0x146a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 76), bits); }
    // 0x146a70: 0xc4a00050  lwc1        $f0, 0x50($a1)
    ctx->pc = 0x146a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146a74: 0xe4800050  swc1        $f0, 0x50($a0)
    ctx->pc = 0x146a74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 80), bits); }
    // 0x146a78: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x146a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x146a7c: 0xe4800054  swc1        $f0, 0x54($a0)
    ctx->pc = 0x146a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x146a80: 0x8c830048  lw          $v1, 0x48($a0)
    ctx->pc = 0x146a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x146a84: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x146A84u;
    {
        const bool branch_taken_0x146a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x146A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146A84u;
            // 0x146a88: 0xafa70158  sw          $a3, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146a84) {
            ctx->pc = 0x146AA8u;
            goto label_146aa8;
        }
    }
    ctx->pc = 0x146A8Cu;
    // 0x146a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x146a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146a90: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x146A90u;
    {
        const bool branch_taken_0x146a90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x146a90) {
            ctx->pc = 0x146A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146A90u;
            // 0x146a94: 0x8ea20044  lw          $v0, 0x44($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146AACu;
            goto label_146aac;
        }
    }
    ctx->pc = 0x146A98u;
    // 0x146a98: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x146A98u;
    {
        const bool branch_taken_0x146a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x146a98) {
            ctx->pc = 0x146A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146A98u;
            // 0x146a9c: 0x8fa2015c  lw          $v0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x146AB8u;
            goto label_146ab8;
        }
    }
    ctx->pc = 0x146AA0u;
    // 0x146aa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x146AA0u;
    {
        const bool branch_taken_0x146aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146AA0u;
            // 0x146aa4: 0xaea00048  sw          $zero, 0x48($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146aa0) {
            ctx->pc = 0x146AB4u;
            goto label_146ab4;
        }
    }
    ctx->pc = 0x146AA8u;
label_146aa8:
    // 0x146aa8: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x146aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
label_146aac:
    // 0x146aac: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x146aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x146ab0: 0xaea20044  sw          $v0, 0x44($s5)
    ctx->pc = 0x146ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 2));
label_146ab4:
    // 0x146ab4: 0x8fa2015c  lw          $v0, 0x15C($sp)
    ctx->pc = 0x146ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_146ab8:
    // 0x146ab8: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x146ab8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146abc: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x146abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
    // 0x146ac0: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x146ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x146ac4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x146ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146ac8: 0x8e82001c  lw          $v0, 0x1C($s4)
    ctx->pc = 0x146ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x146acc: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x146accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x146ad0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x146ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x146ad4: 0x184000ce  blez        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x146AD4u;
    {
        const bool branch_taken_0x146ad4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x146AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146AD4u;
            // 0x146ad8: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ad4) {
            ctx->pc = 0x146E10u;
            goto label_146e10;
        }
    }
    ctx->pc = 0x146ADCu;
    // 0x146adc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x146adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x146ae0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x146ae0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ae4: 0x30560001  andi        $s6, $v0, 0x1
    ctx->pc = 0x146ae4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x146ae8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x146ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x146aec: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x146aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
    // 0x146af0: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x146af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x146af4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x146af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x146af8: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x146af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
    // 0x146afc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x146afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x146b00: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x146b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x146b04: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x146b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
    // 0x146b08: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x146b08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x146b0c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x146b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x146b10: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x146b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x146b14: 0x2443000f  addiu       $v1, $v0, 0xF
    ctx->pc = 0x146b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x146b18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146b1c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146b20: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x146b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
    // 0x146b24: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x146b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x146b28: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x146b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x146b2c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x146b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_146b30:
    // 0x146b30: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x146b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
    // 0x146b34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b38: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x146b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b3c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146b3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x146b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146b44: 0x1a200030  blez        $s1, . + 4 + (0x30 << 2)
    ctx->pc = 0x146B44u;
    {
        const bool branch_taken_0x146b44 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x146B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B44u;
            // 0x146b48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b44) {
            ctx->pc = 0x146C08u;
            goto label_146c08;
        }
    }
    ctx->pc = 0x146B4Cu;
    // 0x146b4c: 0x8fa7015c  lw          $a3, 0x15C($sp)
    ctx->pc = 0x146b4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x146b50: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x146b50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x146b54: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x146b54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x146b58: 0x8ceb0004  lw          $t3, 0x4($a3)
    ctx->pc = 0x146b58u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x146b5c: 0x0  nop
    ctx->pc = 0x146b5cu;
    // NOP
label_146b60:
    // 0x146b60: 0x8d670004  lw          $a3, 0x4($t3)
    ctx->pc = 0x146b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x146b64: 0xf75021  addu        $t2, $a3, $s7
    ctx->pc = 0x146b64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 23)));
    // 0x146b68: 0x8d470000  lw          $a3, 0x0($t2)
    ctx->pc = 0x146b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x146b6c: 0x10e90018  beq         $a3, $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x146B6Cu;
    {
        const bool branch_taken_0x146b6c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 9));
        if (branch_taken_0x146b6c) {
            ctx->pc = 0x146BD0u;
            goto label_146bd0;
        }
    }
    ctx->pc = 0x146B74u;
    // 0x146b74: 0x10e80004  beq         $a3, $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x146B74u;
    {
        const bool branch_taken_0x146b74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 8));
        if (branch_taken_0x146b74) {
            ctx->pc = 0x146B88u;
            goto label_146b88;
        }
    }
    ctx->pc = 0x146B7Cu;
    // 0x146b7c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x146B7Cu;
    {
        const bool branch_taken_0x146b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x146b7c) {
            ctx->pc = 0x146BF8u;
            goto label_146bf8;
        }
    }
    ctx->pc = 0x146B84u;
    // 0x146b84: 0x0  nop
    ctx->pc = 0x146b84u;
    // NOP
label_146b88:
    // 0x146b88: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146B88u;
    {
        const bool branch_taken_0x146b88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x146B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146B88u;
            // 0x146b8c: 0x8d470004  lw          $a3, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146b88) {
            ctx->pc = 0x146B98u;
            goto label_146b98;
        }
    }
    ctx->pc = 0x146B90u;
    // 0x146b90: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x146b90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x146b94: 0x0  nop
    ctx->pc = 0x146b94u;
    // NOP
label_146b98:
    // 0x146b98: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146B98u;
    {
        const bool branch_taken_0x146b98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x146b98) {
            ctx->pc = 0x146BA8u;
            goto label_146ba8;
        }
    }
    ctx->pc = 0x146BA0u;
    // 0x146ba0: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x146ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x146ba4: 0x0  nop
    ctx->pc = 0x146ba4u;
    // NOP
label_146ba8:
    // 0x146ba8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146BA8u;
    {
        const bool branch_taken_0x146ba8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146ba8) {
            ctx->pc = 0x146BB8u;
            goto label_146bb8;
        }
    }
    ctx->pc = 0x146BB0u;
    // 0x146bb0: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x146bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x146bb4: 0x0  nop
    ctx->pc = 0x146bb4u;
    // NOP
label_146bb8:
    // 0x146bb8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146BB8u;
    {
        const bool branch_taken_0x146bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146bb8) {
            ctx->pc = 0x146BC8u;
            goto label_146bc8;
        }
    }
    ctx->pc = 0x146BC0u;
    // 0x146bc0: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x146bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x146bc4: 0x0  nop
    ctx->pc = 0x146bc4u;
    // NOP
label_146bc8:
    // 0x146bc8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x146BC8u;
    {
        const bool branch_taken_0x146bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146BC8u;
            // 0x146bcc: 0x8cf30000  lw          $s3, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bc8) {
            ctx->pc = 0x146BF8u;
            goto label_146bf8;
        }
    }
    ctx->pc = 0x146BD0u;
label_146bd0:
    // 0x146bd0: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146BD0u;
    {
        const bool branch_taken_0x146bd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x146BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146BD0u;
            // 0x146bd4: 0x8d470004  lw          $a3, 0x4($t2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146bd0) {
            ctx->pc = 0x146BE0u;
            goto label_146be0;
        }
    }
    ctx->pc = 0x146BD8u;
    // 0x146bd8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x146bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x146bdc: 0x30a5000f  andi        $a1, $a1, 0xF
    ctx->pc = 0x146bdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_146be0:
    // 0x146be0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146BE0u;
    {
        const bool branch_taken_0x146be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x146be0) {
            ctx->pc = 0x146BF0u;
            goto label_146bf0;
        }
    }
    ctx->pc = 0x146BE8u;
    // 0x146be8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x146be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x146bec: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x146becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
label_146bf0:
    // 0x146bf0: 0x8cf30004  lw          $s3, 0x4($a3)
    ctx->pc = 0x146bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x146bf4: 0x0  nop
    ctx->pc = 0x146bf4u;
    // NOP
label_146bf8:
    // 0x146bf8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x146bf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x146bfc: 0xd1382a  slt         $a3, $a2, $s1
    ctx->pc = 0x146bfcu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x146c00: 0x14e0ffd7  bnez        $a3, . + 4 + (-0x29 << 2)
    ctx->pc = 0x146C00u;
    {
        const bool branch_taken_0x146c00 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x146C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146C00u;
            // 0x146c04: 0x256b0008  addiu       $t3, $t3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146c00) {
            ctx->pc = 0x146B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146b60;
        }
    }
    ctx->pc = 0x146C08u;
label_146c08:
    // 0x146c08: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x146C08u;
    {
        const bool branch_taken_0x146c08 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c08) {
            ctx->pc = 0x146C18u;
            goto label_146c18;
        }
    }
    ctx->pc = 0x146C10u;
    // 0x146c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x146c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146c14: 0x0  nop
    ctx->pc = 0x146c14u;
    // NOP
label_146c18:
    // 0x146c18: 0x7ba600f0  lq          $a2, 0xF0($sp)
    ctx->pc = 0x146c18u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x146c1c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x146C1Cu;
    {
        const bool branch_taken_0x146c1c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c1c) {
            ctx->pc = 0x146C28u;
            goto label_146c28;
        }
    }
    ctx->pc = 0x146C24u;
    // 0x146c24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x146c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146c28:
    // 0x146c28: 0x7ba600e0  lq          $a2, 0xE0($sp)
    ctx->pc = 0x146c28u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x146c2c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x146C2Cu;
    {
        const bool branch_taken_0x146c2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c2c) {
            ctx->pc = 0x146C38u;
            goto label_146c38;
        }
    }
    ctx->pc = 0x146C34u;
    // 0x146c34: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x146c34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146c38:
    // 0x146c38: 0x7ba600d0  lq          $a2, 0xD0($sp)
    ctx->pc = 0x146c38u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146c3c: 0x14c00002  bnez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x146C3Cu;
    {
        const bool branch_taken_0x146c3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c3c) {
            ctx->pc = 0x146C48u;
            goto label_146c48;
        }
    }
    ctx->pc = 0x146C44u;
    // 0x146c44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x146c44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146c48:
    // 0x146c48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x146C48u;
    {
        const bool branch_taken_0x146c48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c48) {
            ctx->pc = 0x146C58u;
            goto label_146c58;
        }
    }
    ctx->pc = 0x146C50u;
    // 0x146c50: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x146c50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x146c54: 0xafa60120  sw          $a2, 0x120($sp)
    ctx->pc = 0x146c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 6));
label_146c58:
    // 0x146c58: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x146C58u;
    {
        const bool branch_taken_0x146c58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c58) {
            ctx->pc = 0x146C78u;
            goto label_146c78;
        }
    }
    ctx->pc = 0x146C60u;
    // 0x146c60: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146C60u;
    {
        const bool branch_taken_0x146c60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c60) {
            ctx->pc = 0x146C78u;
            goto label_146c78;
        }
    }
    ctx->pc = 0x146C68u;
    // 0x146c68: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x146C68u;
    {
        const bool branch_taken_0x146c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x146c68) {
            ctx->pc = 0x146C78u;
            goto label_146c78;
        }
    }
    ctx->pc = 0x146C70u;
    // 0x146c70: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x146C70u;
    {
        const bool branch_taken_0x146c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c70) {
            ctx->pc = 0x146D48u;
            goto label_146d48;
        }
    }
    ctx->pc = 0x146C78u;
label_146c78:
    // 0x146c78: 0x13c00009  beqz        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x146C78u;
    {
        const bool branch_taken_0x146c78 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x146c78) {
            ctx->pc = 0x146CA0u;
            goto label_146ca0;
        }
    }
    ctx->pc = 0x146C80u;
    // 0x146c80: 0xaeb2001c  sw          $s2, 0x1C($s5)
    ctx->pc = 0x146c80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 18));
    // 0x146c84: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x146c84u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146c88: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x146c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x146c8c: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x146c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x146c90: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x146c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x146c94: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146C94u;
    SET_GPR_U32(ctx, 31, 0x146C9Cu);
    ctx->pc = 0x146C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146C94u;
            // 0x146c98: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C9Cu; }
        if (ctx->pc != 0x146C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146C9Cu; }
        if (ctx->pc != 0x146C9Cu) { return; }
    }
    ctx->pc = 0x146C9Cu;
label_146c9c:
    // 0x146c9c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x146c9cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146ca0:
    // 0x146ca0: 0x8ea3001c  lw          $v1, 0x1C($s5)
    ctx->pc = 0x146ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x146ca4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x146ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146ca8: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x146ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x146cac: 0xac720004  sw          $s2, 0x4($v1)
    ctx->pc = 0x146cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 18));
    // 0x146cb0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x146cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x146cb4: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x146cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x146cb8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x146cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x146cbc: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x146cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x146cc0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x146cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146cc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x146cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x146cc8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x146cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x146ccc: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x146cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x146cd0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x146cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x146cd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x146cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146cd8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x146cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x146cdc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x146cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x146ce0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x146ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x146ce4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x146ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146ce8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x146ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x146cec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x146cf0: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x146cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x146cf4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x146cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x146cf8: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x146cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x146cfc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x146cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x146d00: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x146d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x146d04: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x146d04u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x146d08: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x146D08u;
    {
        const bool branch_taken_0x146d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D08u;
            // 0x146d0c: 0xac93001c  sw          $s3, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d08) {
            ctx->pc = 0x146DE0u;
            goto label_146de0;
        }
    }
    ctx->pc = 0x146D10u;
    // 0x146d10: 0xac920010  sw          $s2, 0x10($a0)
    ctx->pc = 0x146d10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 18));
    // 0x146d14: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x146d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146d18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d1c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x146d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x146d20: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146D20u;
    SET_GPR_U32(ctx, 31, 0x146D28u);
    ctx->pc = 0x146D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146D20u;
            // 0x146d24: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D28u; }
        if (ctx->pc != 0x146D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D28u; }
        if (ctx->pc != 0x146D28u) { return; }
    }
    ctx->pc = 0x146D28u;
label_146d28:
    // 0x146d28: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x146d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146d2c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146d30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146d30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146d34: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146d38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146d3c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x146D3Cu;
    {
        const bool branch_taken_0x146d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146D3Cu;
            // 0x146d40: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146d3c) {
            ctx->pc = 0x146DE0u;
            goto label_146de0;
        }
    }
    ctx->pc = 0x146D44u;
    // 0x146d44: 0x0  nop
    ctx->pc = 0x146d44u;
    // NOP
label_146d48:
    // 0x146d48: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x146d48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x146d4c: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x146D4Cu;
    {
        const bool branch_taken_0x146d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146d4c) {
            ctx->pc = 0x146DE0u;
            goto label_146de0;
        }
    }
    ctx->pc = 0x146D54u;
    // 0x146d54: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x146D54u;
    {
        const bool branch_taken_0x146d54 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x146d54) {
            ctx->pc = 0x146D80u;
            goto label_146d80;
        }
    }
    ctx->pc = 0x146D5Cu;
    // 0x146d5c: 0xaeb2001c  sw          $s2, 0x1C($s5)
    ctx->pc = 0x146d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 18));
    // 0x146d60: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x146d60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146d64: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x146d64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x146d68: 0x8ea4001c  lw          $a0, 0x1C($s5)
    ctx->pc = 0x146d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x146d6c: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x146d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x146d70: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146D70u;
    SET_GPR_U32(ctx, 31, 0x146D78u);
    ctx->pc = 0x146D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146D70u;
            // 0x146d74: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D78u; }
        if (ctx->pc != 0x146D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146D78u; }
        if (ctx->pc != 0x146D78u) { return; }
    }
    ctx->pc = 0x146D78u;
label_146d78:
    // 0x146d78: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x146d78u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d7c: 0x0  nop
    ctx->pc = 0x146d7cu;
    // NOP
label_146d80:
    // 0x146d80: 0x8ea2001c  lw          $v0, 0x1C($s5)
    ctx->pc = 0x146d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x146d84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146d88: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x146d88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x146d8c: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x146d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x146d90: 0xac520004  sw          $s2, 0x4($v0)
    ctx->pc = 0x146d90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
    // 0x146d94: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x146d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x146d98: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x146d98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146d9c: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146D9Cu;
    SET_GPR_U32(ctx, 31, 0x146DA4u);
    ctx->pc = 0x146DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146D9Cu;
            // 0x146da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146DA4u; }
        if (ctx->pc != 0x146DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146DA4u; }
        if (ctx->pc != 0x146DA4u) { return; }
    }
    ctx->pc = 0x146DA4u;
label_146da4:
    // 0x146da4: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x146da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x146da8: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x146da8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
    // 0x146dac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x146dacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x146db0: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x146db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x146db4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x146db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146db8: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x146db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x146dbc: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146DBCu;
    SET_GPR_U32(ctx, 31, 0x146DC4u);
    ctx->pc = 0x146DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146DBCu;
            // 0x146dc0: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146DC4u; }
        if (ctx->pc != 0x146DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146DC4u; }
        if (ctx->pc != 0x146DC4u) { return; }
    }
    ctx->pc = 0x146DC4u;
label_146dc4:
    // 0x146dc4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x146dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x146dc8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146dcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146dd0: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146dd4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x146dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146dd8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x146dd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x146ddc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x146ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_146de0:
    // 0x146de0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x146de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x146de4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x146de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x146de8: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x146de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x146dec: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x146decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x146df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146df4: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x146df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x146df8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x146df8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146dfc: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x146dfcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x146e00: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x146e00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x146e04: 0x1440ff4a  bnez        $v0, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x146E04u;
    {
        const bool branch_taken_0x146e04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E04u;
            // 0x146e08: 0x26f70008  addiu       $s7, $s7, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e04) {
            ctx->pc = 0x146B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146b30;
        }
    }
    ctx->pc = 0x146E0Cu;
    // 0x146e0c: 0x0  nop
    ctx->pc = 0x146e0cu;
    // NOP
label_146e10:
    // 0x146e10: 0x17c000a1  bnez        $fp, . + 4 + (0xA1 << 2)
    ctx->pc = 0x146E10u;
    {
        const bool branch_taken_0x146e10 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x146e10) {
            ctx->pc = 0x147098u;
            goto label_147098;
        }
    }
    ctx->pc = 0x146E18u;
    // 0x146e18: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x146e18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x146e1c: 0x8eb0001c  lw          $s0, 0x1C($s5)
    ctx->pc = 0x146e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x146e20: 0x8e91001c  lw          $s1, 0x1C($s4)
    ctx->pc = 0x146e20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x146e24: 0x18400036  blez        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x146E24u;
    {
        const bool branch_taken_0x146e24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x146E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E24u;
            // 0x146e28: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e24) {
            ctx->pc = 0x146F00u;
            goto label_146f00;
        }
    }
    ctx->pc = 0x146E2Cu;
    // 0x146e2c: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x146e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x146e30: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x146e30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x146e34: 0x305e2000  andi        $fp, $v0, 0x2000
    ctx->pc = 0x146e34u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x146e38: 0x43b824  and         $s7, $v0, $v1
    ctx->pc = 0x146e38u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_146e3c:
    // 0x146e3c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x146e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x146e40: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x146e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146e44: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x146E44u;
    {
        const bool branch_taken_0x146e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x146e44) {
            ctx->pc = 0x146EA8u;
            goto label_146ea8;
        }
    }
    ctx->pc = 0x146E4Cu;
    // 0x146e4c: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x146e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146e50: 0x16e00007  bnez        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x146E50u;
    {
        const bool branch_taken_0x146e50 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x146E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E50u;
            // 0x146e54: 0xae720008  sw          $s2, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e50) {
            ctx->pc = 0x146E70u;
            goto label_146e70;
        }
    }
    ctx->pc = 0x146E58u;
    // 0x146e58: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x146e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x146e5c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146e60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x146e60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x146e64: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146e68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146e6c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x146e6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_146e70:
    // 0x146e70: 0xae720014  sw          $s2, 0x14($s3)
    ctx->pc = 0x146e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 18));
    // 0x146e74: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x146e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x146e78: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x146e78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x146e7c: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x146e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x146e80: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146E80u;
    SET_GPR_U32(ctx, 31, 0x146E88u);
    ctx->pc = 0x146E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146E80u;
            // 0x146e84: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146E88u; }
        if (ctx->pc != 0x146E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146E88u; }
        if (ctx->pc != 0x146E88u) { return; }
    }
    ctx->pc = 0x146E88u;
label_146e88:
    // 0x146e88: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x146e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x146e8c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146e90: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x146e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x146e94: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146e98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146e9c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x146E9Cu;
    {
        const bool branch_taken_0x146e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146E9Cu;
            // 0x146ea0: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146e9c) {
            ctx->pc = 0x146EE8u;
            goto label_146ee8;
        }
    }
    ctx->pc = 0x146EA4u;
    // 0x146ea4: 0x0  nop
    ctx->pc = 0x146ea4u;
    // NOP
label_146ea8:
    // 0x146ea8: 0x13c0000f  beqz        $fp, . + 4 + (0xF << 2)
    ctx->pc = 0x146EA8u;
    {
        const bool branch_taken_0x146ea8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x146ea8) {
            ctx->pc = 0x146EE8u;
            goto label_146ee8;
        }
    }
    ctx->pc = 0x146EB0u;
    // 0x146eb0: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x146eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x146eb4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146eb8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x146eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x146ebc: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x146ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
    // 0x146ec0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x146ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x146ec4: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x146ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x146ec8: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146EC8u;
    SET_GPR_U32(ctx, 31, 0x146ED0u);
    ctx->pc = 0x146ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146EC8u;
            // 0x146ecc: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146ED0u; }
        if (ctx->pc != 0x146ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146ED0u; }
        if (ctx->pc != 0x146ED0u) { return; }
    }
    ctx->pc = 0x146ED0u;
label_146ed0:
    // 0x146ed0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x146ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x146ed4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146ed8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x146ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x146edc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146ee0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146ee4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x146ee4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_146ee8:
    // 0x146ee8: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x146ee8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x146eec: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x146eecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x146ef0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x146ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x146ef4: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x146ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x146ef8: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x146EF8u;
    {
        const bool branch_taken_0x146ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x146EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146EF8u;
            // 0x146efc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ef8) {
            ctx->pc = 0x146E3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146e3c;
        }
    }
    ctx->pc = 0x146F00u;
label_146f00:
    // 0x146f00: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x146f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x146f04: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x146f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x146f08: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x146F08u;
    {
        const bool branch_taken_0x146f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x146f08) {
            ctx->pc = 0x147098u;
            goto label_147098;
        }
    }
    ctx->pc = 0x146F10u;
    // 0x146f10: 0xaeb20024  sw          $s2, 0x24($s5)
    ctx->pc = 0x146f10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 36), GPR_U32(ctx, 18));
    // 0x146f14: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f18: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x146f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x146f1c: 0x8e850024  lw          $a1, 0x24($s4)
    ctx->pc = 0x146f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x146f20: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146F20u;
    SET_GPR_U32(ctx, 31, 0x146F28u);
    ctx->pc = 0x146F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146F20u;
            // 0x146f24: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F28u; }
        if (ctx->pc != 0x146F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F28u; }
        if (ctx->pc != 0x146F28u) { return; }
    }
    ctx->pc = 0x146F28u;
label_146f28:
    // 0x146f28: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x146f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x146f2c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146f30: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x146f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x146f34: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146f38: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146f3c: 0x2428021  addu        $s0, $s2, $v0
    ctx->pc = 0x146f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x146f40: 0xaeb00030  sw          $s0, 0x30($s5)
    ctx->pc = 0x146f40u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 16));
    // 0x146f44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146f44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f48: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x146f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x146f4c: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x146f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x146f50: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x146f50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x146f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146f58: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146F58u;
    SET_GPR_U32(ctx, 31, 0x146F60u);
    ctx->pc = 0x146F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146F58u;
            // 0x146f5c: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F60u; }
        if (ctx->pc != 0x146F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146F60u; }
        if (ctx->pc != 0x146F60u) { return; }
    }
    ctx->pc = 0x146F60u;
label_146f60:
    // 0x146f60: 0x8e840028  lw          $a0, 0x28($s4)
    ctx->pc = 0x146f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x146f64: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146f68: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x146f68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x146f6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x146f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x146f70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x146f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x146f74: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146f78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146f7c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x146f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x146f80: 0xaeb0003c  sw          $s0, 0x3C($s5)
    ctx->pc = 0x146f80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 16));
    // 0x146f84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x146f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146f88: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x146f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x146f8c: 0x8e85003c  lw          $a1, 0x3C($s4)
    ctx->pc = 0x146f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x146f90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x146f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x146f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x146f98: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x146F98u;
    SET_GPR_U32(ctx, 31, 0x146FA0u);
    ctx->pc = 0x146F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146F98u;
            // 0x146f9c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FA0u; }
        if (ctx->pc != 0x146FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FA0u; }
        if (ctx->pc != 0x146FA0u) { return; }
    }
    ctx->pc = 0x146FA0u;
label_146fa0:
    // 0x146fa0: 0x8e860038  lw          $a2, 0x38($s4)
    ctx->pc = 0x146fa0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x146fa4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x146fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x146fa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x146fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x146facu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fb0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x146fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x146fb4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x146fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x146fb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x146fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x146fbc: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x146fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x146fc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x146fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x146fc4: 0xc055378  jal         func_154DE0
    ctx->pc = 0x146FC4u;
    SET_GPR_U32(ctx, 31, 0x146FCCu);
    ctx->pc = 0x146FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146FC4u;
            // 0x146fc8: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x154DE0u;
    if (runtime->hasFunction(0x154DE0u)) {
        auto targetFn = runtime->lookupFunction(0x154DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FCCu; }
        if (ctx->pc != 0x146FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00154DE0_0x154de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146FCCu; }
        if (ctx->pc != 0x146FCCu) { return; }
    }
    ctx->pc = 0x146FCCu;
label_146fcc:
    // 0x146fcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x146fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fd0: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x146fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x146fd4: 0x18400030  blez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x146FD4u;
    {
        const bool branch_taken_0x146fd4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x146FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146FD4u;
            // 0x146fd8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146fd4) {
            ctx->pc = 0x147098u;
            goto label_147098;
        }
    }
    ctx->pc = 0x146FDCu;
    // 0x146fdc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x146fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_146fe0:
    // 0x146fe0: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x146fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x146fe4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146fe8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x146fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x146fec: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x146fecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x146ff0: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x146ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x146ff4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x146ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x146ff8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x146ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x146ffc: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x146ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x147000: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x147000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x147004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x147004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147008: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x147008u;
    SET_GPR_U32(ctx, 31, 0x147010u);
    ctx->pc = 0x14700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147008u;
            // 0x14700c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147010u; }
        if (ctx->pc != 0x147010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147010u; }
        if (ctx->pc != 0x147010u) { return; }
    }
    ctx->pc = 0x147010u;
label_147010:
    // 0x147010: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x147010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x147014: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x147014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x147018: 0x8ea2003c  lw          $v0, 0x3C($s5)
    ctx->pc = 0x147018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x14701c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x14701cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x147020: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x147020u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x147024: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x147024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x147028: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x147028u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x14702c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14702cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x147030: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x147030u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x147034: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x147034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x147038: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14703c: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x14703cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x147040: 0xac500010  sw          $s0, 0x10($v0)
    ctx->pc = 0x147040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 16));
    // 0x147044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x147044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147048: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x147048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x14704c: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x14704cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x147050: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x147050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x147054: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x147054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x147058: 0xc0517bc  jal         func_145EF0
    ctx->pc = 0x147058u;
    SET_GPR_U32(ctx, 31, 0x147060u);
    ctx->pc = 0x14705Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147058u;
            // 0x14705c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145EF0u;
    if (runtime->hasFunction(0x145EF0u)) {
        auto targetFn = runtime->lookupFunction(0x145EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147060u; }
        if (ctx->pc != 0x147060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145EF0_0x145ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147060u; }
        if (ctx->pc != 0x147060u) { return; }
    }
    ctx->pc = 0x147060u;
label_147060:
    // 0x147060: 0x8e84003c  lw          $a0, 0x3C($s4)
    ctx->pc = 0x147060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x147064: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x147064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x147068: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x147068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x14706c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14706cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x147070: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x147070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x147074: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x147074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x147078: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x147078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14707c: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x14707cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x147080: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x147080u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x147084: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x147084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x147088: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x147088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x14708c: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x14708Cu;
    {
        const bool branch_taken_0x14708c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14708Cu;
            // 0x147090: 0x2039021  addu        $s2, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14708c) {
            ctx->pc = 0x146FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_146fe0;
        }
    }
    ctx->pc = 0x147094u;
    // 0x147094: 0x0  nop
    ctx->pc = 0x147094u;
    // NOP
label_147098:
    // 0x147098: 0x2551023  subu        $v0, $s2, $s5
    ctx->pc = 0x147098u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
    // 0x14709c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x14709cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1470a0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1470a0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1470a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1470a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1470a8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1470a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1470ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1470acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1470b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1470b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1470b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1470b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1470b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1470b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1470bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1470bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1470c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1470c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1470c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1470C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1470C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470C4u;
            // 0x1470c8: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1470CCu;
    // 0x1470cc: 0x0  nop
    ctx->pc = 0x1470ccu;
    // NOP
    // 0x1470d0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1470d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1470d4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1470d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1470d8: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x1470d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1470dc: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x1470dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1470e0: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1470e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1470e4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x1470e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1470e8: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x1470e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1470ec: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x1470ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x1470f0: 0x2484004b  addiu       $a0, $a0, 0x4B
    ctx->pc = 0x1470f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 75));
    // 0x1470f4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1470f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1470f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1470F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1470FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1470F8u;
            // 0x1470fc: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147100u;
    // 0x147100: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x147100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x147104: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x147104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x147108: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x147108u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x14710c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x14710cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x147110: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x147110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x147114: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x147114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x147118: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x147118u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x14711c: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x14711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x147120: 0x2484004b  addiu       $a0, $a0, 0x4B
    ctx->pc = 0x147120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 75));
    // 0x147124: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x147124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x147128: 0x3e00008  jr          $ra
    ctx->pc = 0x147128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14712Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147128u;
            // 0x14712c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x147130u;
}
