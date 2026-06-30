#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200940
// Address: 0x200940 - 0x2012f0
void sub_00200940_0x200940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200940_0x200940");
#endif

    switch (ctx->pc) {
        case 0x200e88u: goto label_200e88;
        case 0x200e90u: goto label_200e90;
        case 0x20104cu: goto label_20104c;
        case 0x2010ccu: goto label_2010cc;
        case 0x2010e0u: goto label_2010e0;
        case 0x20121cu: goto label_20121c;
        case 0x201230u: goto label_201230;
        case 0x201240u: goto label_201240;
        case 0x201250u: goto label_201250;
        case 0x201260u: goto label_201260;
        default: break;
    }

    ctx->pc = 0x200940u;

    // 0x200940: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x200940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200944: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x200944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x200948: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20094c: 0x0  nop
    ctx->pc = 0x20094cu;
    // NOP
    // 0x200950: 0xe4801c54  swc1        $f0, 0x1C54($a0)
    ctx->pc = 0x200950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7252), bits); }
    // 0x200954: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200958: 0xe4801c50  swc1        $f0, 0x1C50($a0)
    ctx->pc = 0x200958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7248), bits); }
    // 0x20095c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x20095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200960: 0x80a3001b  lb          $v1, 0x1B($a1)
    ctx->pc = 0x200960u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 27)));
    // 0x200964: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x200964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200968: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x200968u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x20096c: 0xa0831ac6  sb          $v1, 0x1AC6($a0)
    ctx->pc = 0x20096cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6854), (uint8_t)GPR_U32(ctx, 3));
    // 0x200970: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x200970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x200974: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x200974u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x200978: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x200978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20097c: 0xe4801a8c  swc1        $f0, 0x1A8C($a0)
    ctx->pc = 0x20097cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6796), bits); }
    // 0x200980: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x200980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200984: 0xe4801a90  swc1        $f0, 0x1A90($a0)
    ctx->pc = 0x200984u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6800), bits); }
    // 0x200988: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x200988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20098c: 0xe4801a98  swc1        $f0, 0x1A98($a0)
    ctx->pc = 0x20098cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6808), bits); }
    // 0x200990: 0x80a30019  lb          $v1, 0x19($a1)
    ctx->pc = 0x200990u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 25)));
    // 0x200994: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x200994u;
    {
        const bool branch_taken_0x200994 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200994u;
            // 0x200998: 0x24891a8c  addiu       $t1, $a0, 0x1A8C (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 6796));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200994) {
            ctx->pc = 0x2009B0u;
            goto label_2009b0;
        }
    }
    ctx->pc = 0x20099Cu;
    // 0x20099c: 0x3c03c000  lui         $v1, 0xC000
    ctx->pc = 0x20099cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49152 << 16));
    // 0x2009a0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2009a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2009a4: 0x0  nop
    ctx->pc = 0x2009a4u;
    // NOP
    // 0x2009a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2009a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2009ac: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x2009acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_2009b0:
    // 0x2009b0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2009b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2009b4: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2009b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2009b8: 0x80a3001a  lb          $v1, 0x1A($a1)
    ctx->pc = 0x2009b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 26)));
    // 0x2009bc: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2009BCu;
    {
        const bool branch_taken_0x2009bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2009bc) {
            ctx->pc = 0x2009C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2009BCu;
            // 0x2009c0: 0x3c067f7f  lui         $a2, 0x7F7F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32639 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2009DCu;
            goto label_2009dc;
        }
    }
    ctx->pc = 0x2009C4u;
    // 0x2009c4: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x2009c8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2009c8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2009cc: 0x0  nop
    ctx->pc = 0x2009ccu;
    // NOP
    // 0x2009d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2009d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2009d4: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2009d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x2009d8: 0x3c067f7f  lui         $a2, 0x7F7F
    ctx->pc = 0x2009d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32639 << 16));
label_2009dc:
    // 0x2009dc: 0x3c03e02d  lui         $v1, 0xE02D
    ctx->pc = 0x2009dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57389 << 16));
    // 0x2009e0: 0x34c6ffee  ori         $a2, $a2, 0xFFEE
    ctx->pc = 0x2009e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65518);
    // 0x2009e4: 0x346778ec  ori         $a3, $v1, 0x78EC
    ctx->pc = 0x2009e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30956);
    // 0x2009e8: 0xad260030  sw          $a2, 0x30($t1)
    ctx->pc = 0x2009e8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 48), GPR_U32(ctx, 6));
    // 0x2009ec: 0x3c03df0a  lui         $v1, 0xDF0A
    ctx->pc = 0x2009ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57098 << 16));
    // 0x2009f0: 0xa1200010  sb          $zero, 0x10($t1)
    ctx->pc = 0x2009f0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 16), (uint8_t)GPR_U32(ctx, 0));
    // 0x2009f4: 0x3466c723  ori         $a2, $v1, 0xC723
    ctx->pc = 0x2009f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50979);
    // 0x2009f8: 0x94a80010  lhu         $t0, 0x10($a1)
    ctx->pc = 0x2009f8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2009fc: 0x3c03de8a  lui         $v1, 0xDE8A
    ctx->pc = 0x2009fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56970 << 16));
    // 0x200a00: 0x3463c723  ori         $v1, $v1, 0xC723
    ctx->pc = 0x200a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)50979);
    // 0x200a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x200a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x200a08: 0xa5280038  sh          $t0, 0x38($t1)
    ctx->pc = 0x200a08u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 56), (uint16_t)GPR_U32(ctx, 8));
    // 0x200a0c: 0xad270014  sw          $a3, 0x14($t1)
    ctx->pc = 0x200a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 7));
    // 0x200a10: 0xad270018  sw          $a3, 0x18($t1)
    ctx->pc = 0x200a10u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 7));
    // 0x200a14: 0xad260024  sw          $a2, 0x24($t1)
    ctx->pc = 0x200a14u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 36), GPR_U32(ctx, 6));
    // 0x200a18: 0xad260028  sw          $a2, 0x28($t1)
    ctx->pc = 0x200a18u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 6));
    // 0x200a1c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x200a1cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x200a20: 0xe520002c  swc1        $f0, 0x2C($t1)
    ctx->pc = 0x200a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 44), bits); }
    // 0x200a24: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x200a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x200a28: 0xad23001c  sw          $v1, 0x1C($t1)
    ctx->pc = 0x200a28u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 3));
    // 0x200a2c: 0xad230020  sw          $v1, 0x20($t1)
    ctx->pc = 0x200a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 32), GPR_U32(ctx, 3));
    // 0x200a30: 0xad230034  sw          $v1, 0x34($t1)
    ctx->pc = 0x200a30u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 52), GPR_U32(ctx, 3));
    // 0x200a34: 0xc4801a8c  lwc1        $f0, 0x1A8C($a0)
    ctx->pc = 0x200a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a38: 0xe4801b7c  swc1        $f0, 0x1B7C($a0)
    ctx->pc = 0x200a38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7036), bits); }
    // 0x200a3c: 0xc4801a90  lwc1        $f0, 0x1A90($a0)
    ctx->pc = 0x200a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a40: 0xe4801b80  swc1        $f0, 0x1B80($a0)
    ctx->pc = 0x200a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7040), bits); }
    // 0x200a44: 0xc4801a94  lwc1        $f0, 0x1A94($a0)
    ctx->pc = 0x200a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a48: 0xe4801b84  swc1        $f0, 0x1B84($a0)
    ctx->pc = 0x200a48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7044), bits); }
    // 0x200a4c: 0xc4801a98  lwc1        $f0, 0x1A98($a0)
    ctx->pc = 0x200a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a50: 0xe4801b88  swc1        $f0, 0x1B88($a0)
    ctx->pc = 0x200a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7048), bits); }
    // 0x200a54: 0x90831a9c  lbu         $v1, 0x1A9C($a0)
    ctx->pc = 0x200a54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6812)));
    // 0x200a58: 0xa0831b8c  sb          $v1, 0x1B8C($a0)
    ctx->pc = 0x200a58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7052), (uint8_t)GPR_U32(ctx, 3));
    // 0x200a5c: 0xc4801aa0  lwc1        $f0, 0x1AA0($a0)
    ctx->pc = 0x200a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a60: 0xe4801b90  swc1        $f0, 0x1B90($a0)
    ctx->pc = 0x200a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7056), bits); }
    // 0x200a64: 0xc4801aa4  lwc1        $f0, 0x1AA4($a0)
    ctx->pc = 0x200a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a68: 0xe4801b94  swc1        $f0, 0x1B94($a0)
    ctx->pc = 0x200a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7060), bits); }
    // 0x200a6c: 0xc4801aa8  lwc1        $f0, 0x1AA8($a0)
    ctx->pc = 0x200a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a70: 0xe4801b98  swc1        $f0, 0x1B98($a0)
    ctx->pc = 0x200a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7064), bits); }
    // 0x200a74: 0xc4801aac  lwc1        $f0, 0x1AAC($a0)
    ctx->pc = 0x200a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a78: 0xe4801b9c  swc1        $f0, 0x1B9C($a0)
    ctx->pc = 0x200a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7068), bits); }
    // 0x200a7c: 0xc4801ab0  lwc1        $f0, 0x1AB0($a0)
    ctx->pc = 0x200a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a80: 0xe4801ba0  swc1        $f0, 0x1BA0($a0)
    ctx->pc = 0x200a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7072), bits); }
    // 0x200a84: 0xc4801ab4  lwc1        $f0, 0x1AB4($a0)
    ctx->pc = 0x200a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a88: 0xe4801ba4  swc1        $f0, 0x1BA4($a0)
    ctx->pc = 0x200a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7076), bits); }
    // 0x200a8c: 0xc4801ab8  lwc1        $f0, 0x1AB8($a0)
    ctx->pc = 0x200a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a90: 0xe4801ba8  swc1        $f0, 0x1BA8($a0)
    ctx->pc = 0x200a90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7080), bits); }
    // 0x200a94: 0xc4801abc  lwc1        $f0, 0x1ABC($a0)
    ctx->pc = 0x200a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200a98: 0xe4801bac  swc1        $f0, 0x1BAC($a0)
    ctx->pc = 0x200a98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7084), bits); }
    // 0x200a9c: 0xc4801ac0  lwc1        $f0, 0x1AC0($a0)
    ctx->pc = 0x200a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200aa0: 0xe4801bb0  swc1        $f0, 0x1BB0($a0)
    ctx->pc = 0x200aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7088), bits); }
    // 0x200aa4: 0x94831ac4  lhu         $v1, 0x1AC4($a0)
    ctx->pc = 0x200aa4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6852)));
    // 0x200aa8: 0xa4831bb4  sh          $v1, 0x1BB4($a0)
    ctx->pc = 0x200aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7092), (uint16_t)GPR_U32(ctx, 3));
    // 0x200aac: 0x90831ac6  lbu         $v1, 0x1AC6($a0)
    ctx->pc = 0x200aacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6854)));
    // 0x200ab0: 0xa0831bb6  sb          $v1, 0x1BB6($a0)
    ctx->pc = 0x200ab0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7094), (uint8_t)GPR_U32(ctx, 3));
    // 0x200ab4: 0xc4801a8c  lwc1        $f0, 0x1A8C($a0)
    ctx->pc = 0x200ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ab8: 0xe4801ac8  swc1        $f0, 0x1AC8($a0)
    ctx->pc = 0x200ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6856), bits); }
    // 0x200abc: 0xc4801a90  lwc1        $f0, 0x1A90($a0)
    ctx->pc = 0x200abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ac0: 0xe4801acc  swc1        $f0, 0x1ACC($a0)
    ctx->pc = 0x200ac0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6860), bits); }
    // 0x200ac4: 0xc4801a94  lwc1        $f0, 0x1A94($a0)
    ctx->pc = 0x200ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ac8: 0xe4801ad0  swc1        $f0, 0x1AD0($a0)
    ctx->pc = 0x200ac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6864), bits); }
    // 0x200acc: 0xc4801a98  lwc1        $f0, 0x1A98($a0)
    ctx->pc = 0x200accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ad0: 0xe4801ad4  swc1        $f0, 0x1AD4($a0)
    ctx->pc = 0x200ad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6868), bits); }
    // 0x200ad4: 0x90831a9c  lbu         $v1, 0x1A9C($a0)
    ctx->pc = 0x200ad4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6812)));
    // 0x200ad8: 0xa0831ad8  sb          $v1, 0x1AD8($a0)
    ctx->pc = 0x200ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6872), (uint8_t)GPR_U32(ctx, 3));
    // 0x200adc: 0xc4801aa0  lwc1        $f0, 0x1AA0($a0)
    ctx->pc = 0x200adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ae0: 0xe4801adc  swc1        $f0, 0x1ADC($a0)
    ctx->pc = 0x200ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6876), bits); }
    // 0x200ae4: 0xc4801aa4  lwc1        $f0, 0x1AA4($a0)
    ctx->pc = 0x200ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ae8: 0xe4801ae0  swc1        $f0, 0x1AE0($a0)
    ctx->pc = 0x200ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6880), bits); }
    // 0x200aec: 0xc4801aa8  lwc1        $f0, 0x1AA8($a0)
    ctx->pc = 0x200aecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200af0: 0xe4801ae4  swc1        $f0, 0x1AE4($a0)
    ctx->pc = 0x200af0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6884), bits); }
    // 0x200af4: 0xc4801aac  lwc1        $f0, 0x1AAC($a0)
    ctx->pc = 0x200af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200af8: 0xe4801ae8  swc1        $f0, 0x1AE8($a0)
    ctx->pc = 0x200af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6888), bits); }
    // 0x200afc: 0xc4801ab0  lwc1        $f0, 0x1AB0($a0)
    ctx->pc = 0x200afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b00: 0xe4801aec  swc1        $f0, 0x1AEC($a0)
    ctx->pc = 0x200b00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6892), bits); }
    // 0x200b04: 0xc4801ab4  lwc1        $f0, 0x1AB4($a0)
    ctx->pc = 0x200b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b08: 0xe4801af0  swc1        $f0, 0x1AF0($a0)
    ctx->pc = 0x200b08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6896), bits); }
    // 0x200b0c: 0xc4801ab8  lwc1        $f0, 0x1AB8($a0)
    ctx->pc = 0x200b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b10: 0xe4801af4  swc1        $f0, 0x1AF4($a0)
    ctx->pc = 0x200b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6900), bits); }
    // 0x200b14: 0xc4801abc  lwc1        $f0, 0x1ABC($a0)
    ctx->pc = 0x200b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b18: 0xe4801af8  swc1        $f0, 0x1AF8($a0)
    ctx->pc = 0x200b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6904), bits); }
    // 0x200b1c: 0xc4801ac0  lwc1        $f0, 0x1AC0($a0)
    ctx->pc = 0x200b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b20: 0xe4801afc  swc1        $f0, 0x1AFC($a0)
    ctx->pc = 0x200b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6908), bits); }
    // 0x200b24: 0x94831ac4  lhu         $v1, 0x1AC4($a0)
    ctx->pc = 0x200b24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6852)));
    // 0x200b28: 0xa4831b00  sh          $v1, 0x1B00($a0)
    ctx->pc = 0x200b28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6912), (uint16_t)GPR_U32(ctx, 3));
    // 0x200b2c: 0x90831ac6  lbu         $v1, 0x1AC6($a0)
    ctx->pc = 0x200b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6854)));
    // 0x200b30: 0xa0831b02  sb          $v1, 0x1B02($a0)
    ctx->pc = 0x200b30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6914), (uint8_t)GPR_U32(ctx, 3));
    // 0x200b34: 0xc4801a8c  lwc1        $f0, 0x1A8C($a0)
    ctx->pc = 0x200b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b38: 0xe4801b04  swc1        $f0, 0x1B04($a0)
    ctx->pc = 0x200b38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6916), bits); }
    // 0x200b3c: 0xc4801a90  lwc1        $f0, 0x1A90($a0)
    ctx->pc = 0x200b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b40: 0xe4801b08  swc1        $f0, 0x1B08($a0)
    ctx->pc = 0x200b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6920), bits); }
    // 0x200b44: 0xc4801a94  lwc1        $f0, 0x1A94($a0)
    ctx->pc = 0x200b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b48: 0xe4801b0c  swc1        $f0, 0x1B0C($a0)
    ctx->pc = 0x200b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6924), bits); }
    // 0x200b4c: 0xc4801a98  lwc1        $f0, 0x1A98($a0)
    ctx->pc = 0x200b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b50: 0xe4801b10  swc1        $f0, 0x1B10($a0)
    ctx->pc = 0x200b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6928), bits); }
    // 0x200b54: 0x90831a9c  lbu         $v1, 0x1A9C($a0)
    ctx->pc = 0x200b54u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6812)));
    // 0x200b58: 0xa0831b14  sb          $v1, 0x1B14($a0)
    ctx->pc = 0x200b58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6932), (uint8_t)GPR_U32(ctx, 3));
    // 0x200b5c: 0xc4801aa0  lwc1        $f0, 0x1AA0($a0)
    ctx->pc = 0x200b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b60: 0xe4801b18  swc1        $f0, 0x1B18($a0)
    ctx->pc = 0x200b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6936), bits); }
    // 0x200b64: 0xc4801aa4  lwc1        $f0, 0x1AA4($a0)
    ctx->pc = 0x200b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b68: 0xe4801b1c  swc1        $f0, 0x1B1C($a0)
    ctx->pc = 0x200b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6940), bits); }
    // 0x200b6c: 0xc4801aa8  lwc1        $f0, 0x1AA8($a0)
    ctx->pc = 0x200b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b70: 0xe4801b20  swc1        $f0, 0x1B20($a0)
    ctx->pc = 0x200b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6944), bits); }
    // 0x200b74: 0xc4801aac  lwc1        $f0, 0x1AAC($a0)
    ctx->pc = 0x200b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b78: 0xe4801b24  swc1        $f0, 0x1B24($a0)
    ctx->pc = 0x200b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6948), bits); }
    // 0x200b7c: 0xc4801ab0  lwc1        $f0, 0x1AB0($a0)
    ctx->pc = 0x200b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b80: 0xe4801b28  swc1        $f0, 0x1B28($a0)
    ctx->pc = 0x200b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6952), bits); }
    // 0x200b84: 0xc4801ab4  lwc1        $f0, 0x1AB4($a0)
    ctx->pc = 0x200b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b88: 0xe4801b2c  swc1        $f0, 0x1B2C($a0)
    ctx->pc = 0x200b88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6956), bits); }
    // 0x200b8c: 0xc4801ab8  lwc1        $f0, 0x1AB8($a0)
    ctx->pc = 0x200b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b90: 0xe4801b30  swc1        $f0, 0x1B30($a0)
    ctx->pc = 0x200b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6960), bits); }
    // 0x200b94: 0xc4801abc  lwc1        $f0, 0x1ABC($a0)
    ctx->pc = 0x200b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200b98: 0xe4801b34  swc1        $f0, 0x1B34($a0)
    ctx->pc = 0x200b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6964), bits); }
    // 0x200b9c: 0xc4801ac0  lwc1        $f0, 0x1AC0($a0)
    ctx->pc = 0x200b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200ba0: 0xe4801b38  swc1        $f0, 0x1B38($a0)
    ctx->pc = 0x200ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6968), bits); }
    // 0x200ba4: 0x94831ac4  lhu         $v1, 0x1AC4($a0)
    ctx->pc = 0x200ba4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6852)));
    // 0x200ba8: 0xa4831b3c  sh          $v1, 0x1B3C($a0)
    ctx->pc = 0x200ba8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6972), (uint16_t)GPR_U32(ctx, 3));
    // 0x200bac: 0x90831ac6  lbu         $v1, 0x1AC6($a0)
    ctx->pc = 0x200bacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6854)));
    // 0x200bb0: 0xa0831b3e  sb          $v1, 0x1B3E($a0)
    ctx->pc = 0x200bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6974), (uint8_t)GPR_U32(ctx, 3));
    // 0x200bb4: 0xc4801a8c  lwc1        $f0, 0x1A8C($a0)
    ctx->pc = 0x200bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6796)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200bb8: 0xe4801b40  swc1        $f0, 0x1B40($a0)
    ctx->pc = 0x200bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6976), bits); }
    // 0x200bbc: 0xc4801a90  lwc1        $f0, 0x1A90($a0)
    ctx->pc = 0x200bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200bc0: 0xe4801b44  swc1        $f0, 0x1B44($a0)
    ctx->pc = 0x200bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6980), bits); }
    // 0x200bc4: 0xc4801a94  lwc1        $f0, 0x1A94($a0)
    ctx->pc = 0x200bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200bc8: 0xe4801b48  swc1        $f0, 0x1B48($a0)
    ctx->pc = 0x200bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6984), bits); }
    // 0x200bcc: 0xc4801a98  lwc1        $f0, 0x1A98($a0)
    ctx->pc = 0x200bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6808)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200bd0: 0xe4801b4c  swc1        $f0, 0x1B4C($a0)
    ctx->pc = 0x200bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6988), bits); }
    // 0x200bd4: 0x90831a9c  lbu         $v1, 0x1A9C($a0)
    ctx->pc = 0x200bd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6812)));
    // 0x200bd8: 0xa0831b50  sb          $v1, 0x1B50($a0)
    ctx->pc = 0x200bd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6992), (uint8_t)GPR_U32(ctx, 3));
    // 0x200bdc: 0xc4801aa0  lwc1        $f0, 0x1AA0($a0)
    ctx->pc = 0x200bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200be0: 0xe4801b54  swc1        $f0, 0x1B54($a0)
    ctx->pc = 0x200be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6996), bits); }
    // 0x200be4: 0xc4801aa4  lwc1        $f0, 0x1AA4($a0)
    ctx->pc = 0x200be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6820)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200be8: 0xe4801b58  swc1        $f0, 0x1B58($a0)
    ctx->pc = 0x200be8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7000), bits); }
    // 0x200bec: 0xc4801aa8  lwc1        $f0, 0x1AA8($a0)
    ctx->pc = 0x200becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200bf0: 0xe4801b5c  swc1        $f0, 0x1B5C($a0)
    ctx->pc = 0x200bf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7004), bits); }
    // 0x200bf4: 0xc4801aac  lwc1        $f0, 0x1AAC($a0)
    ctx->pc = 0x200bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200bf8: 0xe4801b60  swc1        $f0, 0x1B60($a0)
    ctx->pc = 0x200bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7008), bits); }
    // 0x200bfc: 0xc4801ab0  lwc1        $f0, 0x1AB0($a0)
    ctx->pc = 0x200bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c00: 0xe4801b64  swc1        $f0, 0x1B64($a0)
    ctx->pc = 0x200c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7012), bits); }
    // 0x200c04: 0xc4801ab4  lwc1        $f0, 0x1AB4($a0)
    ctx->pc = 0x200c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6836)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c08: 0xe4801b68  swc1        $f0, 0x1B68($a0)
    ctx->pc = 0x200c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7016), bits); }
    // 0x200c0c: 0xc4801ab8  lwc1        $f0, 0x1AB8($a0)
    ctx->pc = 0x200c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c10: 0xe4801b6c  swc1        $f0, 0x1B6C($a0)
    ctx->pc = 0x200c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7020), bits); }
    // 0x200c14: 0xc4801abc  lwc1        $f0, 0x1ABC($a0)
    ctx->pc = 0x200c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c18: 0xe4801b70  swc1        $f0, 0x1B70($a0)
    ctx->pc = 0x200c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7024), bits); }
    // 0x200c1c: 0xc4801ac0  lwc1        $f0, 0x1AC0($a0)
    ctx->pc = 0x200c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c20: 0xe4801b74  swc1        $f0, 0x1B74($a0)
    ctx->pc = 0x200c20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7028), bits); }
    // 0x200c24: 0x94831ac4  lhu         $v1, 0x1AC4($a0)
    ctx->pc = 0x200c24u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 6852)));
    // 0x200c28: 0xa4831b78  sh          $v1, 0x1B78($a0)
    ctx->pc = 0x200c28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 7032), (uint16_t)GPR_U32(ctx, 3));
    // 0x200c2c: 0x90831ac6  lbu         $v1, 0x1AC6($a0)
    ctx->pc = 0x200c2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6854)));
    // 0x200c30: 0xa0831b7a  sb          $v1, 0x1B7A($a0)
    ctx->pc = 0x200c30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7034), (uint8_t)GPR_U32(ctx, 3));
    // 0x200c34: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x200c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c38: 0xe4801b88  swc1        $f0, 0x1B88($a0)
    ctx->pc = 0x200c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7048), bits); }
    // 0x200c3c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x200c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c40: 0xe4801b80  swc1        $f0, 0x1B80($a0)
    ctx->pc = 0x200c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7040), bits); }
    // 0x200c44: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x200c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c48: 0xe4801b84  swc1        $f0, 0x1B84($a0)
    ctx->pc = 0x200c48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 7044), bits); }
    // 0x200c4c: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x200c4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x200c50: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x200C50u;
    {
        const bool branch_taken_0x200c50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200C50u;
            // 0x200c54: 0x24881ac8  addiu       $t0, $a0, 0x1AC8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 6856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200c50) {
            ctx->pc = 0x200D04u;
            goto label_200d04;
        }
    }
    ctx->pc = 0x200C58u;
    // 0x200c58: 0x3c06bf19  lui         $a2, 0xBF19
    ctx->pc = 0x200c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48921 << 16));
    // 0x200c5c: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x200c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x200c60: 0x34c7999a  ori         $a3, $a2, 0x999A
    ctx->pc = 0x200c60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)39322);
    // 0x200c64: 0x3466cccc  ori         $a2, $v1, 0xCCCC
    ctx->pc = 0x200c64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52428);
    // 0x200c68: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x200c68u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x200c6c: 0x3c03be99  lui         $v1, 0xBE99
    ctx->pc = 0x200c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
    // 0x200c70: 0xad060018  sw          $a2, 0x18($t0)
    ctx->pc = 0x200c70u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 6));
    // 0x200c74: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x200c74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x200c78: 0x3c06bf80  lui         $a2, 0xBF80
    ctx->pc = 0x200c78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49024 << 16));
    // 0x200c7c: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x200c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x200c80: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x200c80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x200c84: 0x3c03be0f  lui         $v1, 0xBE0F
    ctx->pc = 0x200c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48655 << 16));
    // 0x200c88: 0x34675c28  ori         $a3, $v1, 0x5C28
    ctx->pc = 0x200c88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23592);
    // 0x200c8c: 0xad070028  sw          $a3, 0x28($t0)
    ctx->pc = 0x200c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 7));
    // 0x200c90: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x200c90u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x200c94: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x200c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200c98: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x200c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x200c9c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x200c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x200ca0: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x200ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
    // 0x200ca4: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x200ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x200ca8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x200ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x200cac: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x200cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x200cb0: 0xe500002c  swc1        $f0, 0x2C($t0)
    ctx->pc = 0x200cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x200cb4: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x200cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200cb8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x200cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200cbc: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x200cbcu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x200cc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200cc4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x200cc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x200cc8: 0xe5000030  swc1        $f0, 0x30($t0)
    ctx->pc = 0x200cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x200ccc: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200cd0: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x200cd0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[0] = ctx->f[3] / ctx->f[0];
    // 0x200cd4: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x200cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x200cd8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200cdc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200cdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x200ce0: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x200ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x200ce4: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x200ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200ce8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200cec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x200cecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x200cf0: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200cf0u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x200cf4: 0xe5000034  swc1        $f0, 0x34($t0)
    ctx->pc = 0x200cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
    // 0x200cf8: 0x94a60012  lhu         $a2, 0x12($a1)
    ctx->pc = 0x200cf8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x200cfc: 0xa5060038  sh          $a2, 0x38($t0)
    ctx->pc = 0x200cfcu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 56), (uint16_t)GPR_U32(ctx, 6));
    // 0x200d00: 0xa1030010  sb          $v1, 0x10($t0)
    ctx->pc = 0x200d00u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 3));
label_200d04:
    // 0x200d04: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x200d04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x200d08: 0x1060002b  beqz        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x200D08u;
    {
        const bool branch_taken_0x200d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200D08u;
            // 0x200d0c: 0x24871b04  addiu       $a3, $a0, 0x1B04 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 6916));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200d08) {
            ctx->pc = 0x200DB8u;
            goto label_200db8;
        }
    }
    ctx->pc = 0x200D10u;
    // 0x200d10: 0x3c06bf00  lui         $a2, 0xBF00
    ctx->pc = 0x200d10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48896 << 16));
    // 0x200d14: 0x3c03be2a  lui         $v1, 0xBE2A
    ctx->pc = 0x200d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48682 << 16));
    // 0x200d18: 0xace60014  sw          $a2, 0x14($a3)
    ctx->pc = 0x200d18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 6));
    // 0x200d1c: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x200d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x200d20: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x200d20u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
    // 0x200d24: 0x3c03be80  lui         $v1, 0xBE80
    ctx->pc = 0x200d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48768 << 16));
    // 0x200d28: 0xace30024  sw          $v1, 0x24($a3)
    ctx->pc = 0x200d28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 3));
    // 0x200d2c: 0x3c03bdee  lui         $v1, 0xBDEE
    ctx->pc = 0x200d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48622 << 16));
    // 0x200d30: 0x3466eeef  ori         $a2, $v1, 0xEEEF
    ctx->pc = 0x200d30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61167);
    // 0x200d34: 0xace60028  sw          $a2, 0x28($a3)
    ctx->pc = 0x200d34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 6));
    // 0x200d38: 0x3c03be99  lui         $v1, 0xBE99
    ctx->pc = 0x200d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
    // 0x200d3c: 0xc4e00028  lwc1        $f0, 0x28($a3)
    ctx->pc = 0x200d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200d40: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x200d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x200d44: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x200d44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x200d48: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x200d48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x200d4c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x200d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x200d50: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x200d50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x200d54: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x200d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200d58: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x200d58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x200d5c: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x200d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x200d60: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x200d60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x200d64: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x200d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x200d68: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200d6c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x200d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x200d70: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x200d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x200d74: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x200d74u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x200d78: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x200d78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x200d7c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200d80: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x200d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
    // 0x200d84: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200d88: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x200d88u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200d8c: 0x0  nop
    ctx->pc = 0x200d8cu;
    // NOP
    // 0x200d90: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200d90u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x200d94: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x200d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
    // 0x200d98: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x200d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200d9c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200da0: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x200da0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x200da4: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200da4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x200da8: 0xe4e00034  swc1        $f0, 0x34($a3)
    ctx->pc = 0x200da8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x200dac: 0x94a60014  lhu         $a2, 0x14($a1)
    ctx->pc = 0x200dacu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x200db0: 0xa4e60038  sh          $a2, 0x38($a3)
    ctx->pc = 0x200db0u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 56), (uint16_t)GPR_U32(ctx, 6));
    // 0x200db4: 0xa0e30010  sb          $v1, 0x10($a3)
    ctx->pc = 0x200db4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 16), (uint8_t)GPR_U32(ctx, 3));
label_200db8:
    // 0x200db8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x200db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200dbc: 0xe4801b40  swc1        $f0, 0x1B40($a0)
    ctx->pc = 0x200dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 6976), bits); }
    // 0x200dc0: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x200dc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x200dc4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x200DC4u;
    {
        const bool branch_taken_0x200dc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x200DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200DC4u;
            // 0x200dc8: 0x24881b40  addiu       $t0, $a0, 0x1B40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 6976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200dc4) {
            ctx->pc = 0x200E7Cu;
            goto label_200e7c;
        }
    }
    ctx->pc = 0x200DCCu;
    // 0x200dcc: 0x3c06becc  lui         $a2, 0xBECC
    ctx->pc = 0x200dccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48844 << 16));
    // 0x200dd0: 0x3c03bd01  lui         $v1, 0xBD01
    ctx->pc = 0x200dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48385 << 16));
    // 0x200dd4: 0x34c7cccd  ori         $a3, $a2, 0xCCCD
    ctx->pc = 0x200dd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)52429);
    // 0x200dd8: 0x346658ed  ori         $a2, $v1, 0x58ED
    ctx->pc = 0x200dd8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)22765);
    // 0x200ddc: 0xad070014  sw          $a3, 0x14($t0)
    ctx->pc = 0x200ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 7));
    // 0x200de0: 0x3c03be4c  lui         $v1, 0xBE4C
    ctx->pc = 0x200de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48716 << 16));
    // 0x200de4: 0xad060018  sw          $a2, 0x18($t0)
    ctx->pc = 0x200de4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 24), GPR_U32(ctx, 6));
    // 0x200de8: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x200de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x200dec: 0xad030024  sw          $v1, 0x24($t0)
    ctx->pc = 0x200decu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 36), GPR_U32(ctx, 3));
    // 0x200df0: 0x3c03bcb5  lui         $v1, 0xBCB5
    ctx->pc = 0x200df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48309 << 16));
    // 0x200df4: 0x34661619  ori         $a2, $v1, 0x1619
    ctx->pc = 0x200df4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5657);
    // 0x200df8: 0xad060028  sw          $a2, 0x28($t0)
    ctx->pc = 0x200df8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 40), GPR_U32(ctx, 6));
    // 0x200dfc: 0x3c03be99  lui         $v1, 0xBE99
    ctx->pc = 0x200dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48793 << 16));
    // 0x200e00: 0xc5000028  lwc1        $f0, 0x28($t0)
    ctx->pc = 0x200e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e04: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x200e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x200e08: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x200e08u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x200e0c: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x200e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
    // 0x200e10: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x200e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x200e14: 0xe500002c  swc1        $f0, 0x2C($t0)
    ctx->pc = 0x200e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
    // 0x200e18: 0xc5000018  lwc1        $f0, 0x18($t0)
    ctx->pc = 0x200e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e1c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x200e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x200e20: 0x3c0340a0  lui         $v1, 0x40A0
    ctx->pc = 0x200e20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16544 << 16));
    // 0x200e24: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x200e24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x200e28: 0xe5000030  swc1        $f0, 0x30($t0)
    ctx->pc = 0x200e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 48), bits); }
    // 0x200e2c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e30: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x200e30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x200e34: 0x3c033ba3  lui         $v1, 0x3BA3
    ctx->pc = 0x200e34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15267 << 16));
    // 0x200e38: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x200e38u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x200e3c: 0x3466d70a  ori         $a2, $v1, 0xD70A
    ctx->pc = 0x200e3cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
    // 0x200e40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x200e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x200e44: 0xe500001c  swc1        $f0, 0x1C($t0)
    ctx->pc = 0x200e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 28), bits); }
    // 0x200e48: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e4c: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x200e4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x200e50: 0x0  nop
    ctx->pc = 0x200e50u;
    // NOP
    // 0x200e54: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200e54u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x200e58: 0xe5000020  swc1        $f0, 0x20($t0)
    ctx->pc = 0x200e58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
    // 0x200e5c: 0xc5010018  lwc1        $f1, 0x18($t0)
    ctx->pc = 0x200e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x200e60: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x200e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x200e64: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x200e64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x200e68: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x200e68u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x200e6c: 0xe5000034  swc1        $f0, 0x34($t0)
    ctx->pc = 0x200e6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
    // 0x200e70: 0x94a50016  lhu         $a1, 0x16($a1)
    ctx->pc = 0x200e70u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 22)));
    // 0x200e74: 0xa5050038  sh          $a1, 0x38($t0)
    ctx->pc = 0x200e74u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 56), (uint16_t)GPR_U32(ctx, 5));
    // 0x200e78: 0xa1030010  sb          $v1, 0x10($t0)
    ctx->pc = 0x200e78u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 3));
label_200e7c:
    // 0x200e7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x200e7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e80: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x200e80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x200e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200e88:
    // 0x200e88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x200e88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e8c: 0x0  nop
    ctx->pc = 0x200e8cu;
    // NOP
label_200e90:
    // 0x200e90: 0xc82821  addu        $a1, $a2, $t0
    ctx->pc = 0x200e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x200e94: 0xa0a719f0  sb          $a3, 0x19F0($a1)
    ctx->pc = 0x200e94u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6640), (uint8_t)GPR_U32(ctx, 7));
    // 0x200e98: 0x25080003  addiu       $t0, $t0, 0x3
    ctx->pc = 0x200e98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
    // 0x200e9c: 0xa0a719f1  sb          $a3, 0x19F1($a1)
    ctx->pc = 0x200e9cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6641), (uint8_t)GPR_U32(ctx, 7));
    // 0x200ea0: 0x29030009  slti        $v1, $t0, 0x9
    ctx->pc = 0x200ea0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x200ea4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200EA4u;
    {
        const bool branch_taken_0x200ea4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200EA4u;
            // 0x200ea8: 0xa0a719f2  sb          $a3, 0x19F2($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6642), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ea4) {
            ctx->pc = 0x200E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200e90;
        }
    }
    ctx->pc = 0x200EACu;
    // 0x200eac: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x200eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x200eb0: 0x29230009  slti        $v1, $t1, 0x9
    ctx->pc = 0x200eb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x200eb4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x200EB4u;
    {
        const bool branch_taken_0x200eb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x200EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200EB4u;
            // 0x200eb8: 0x24c60009  addiu       $a2, $a2, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200eb4) {
            ctx->pc = 0x200E88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_200e88;
        }
    }
    ctx->pc = 0x200EBCu;
    // 0x200ebc: 0xa08019fa  sb          $zero, 0x19FA($a0)
    ctx->pc = 0x200ebcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6650), (uint8_t)GPR_U32(ctx, 0));
    // 0x200ec0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x200ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200ec4: 0xa08019fb  sb          $zero, 0x19FB($a0)
    ctx->pc = 0x200ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6651), (uint8_t)GPR_U32(ctx, 0));
    // 0x200ec8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x200ecc: 0xa0861a01  sb          $a2, 0x1A01($a0)
    ctx->pc = 0x200eccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6657), (uint8_t)GPR_U32(ctx, 6));
    // 0x200ed0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x200ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x200ed4: 0xa08719fc  sb          $a3, 0x19FC($a0)
    ctx->pc = 0x200ed4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6652), (uint8_t)GPR_U32(ctx, 7));
    // 0x200ed8: 0xa08519fd  sb          $a1, 0x19FD($a0)
    ctx->pc = 0x200ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6653), (uint8_t)GPR_U32(ctx, 5));
    // 0x200edc: 0xa08319fe  sb          $v1, 0x19FE($a0)
    ctx->pc = 0x200edcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6654), (uint8_t)GPR_U32(ctx, 3));
    // 0x200ee0: 0xa08519ff  sb          $a1, 0x19FF($a0)
    ctx->pc = 0x200ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6655), (uint8_t)GPR_U32(ctx, 5));
    // 0x200ee4: 0xa0801a03  sb          $zero, 0x1A03($a0)
    ctx->pc = 0x200ee4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6659), (uint8_t)GPR_U32(ctx, 0));
    // 0x200ee8: 0xa0801a04  sb          $zero, 0x1A04($a0)
    ctx->pc = 0x200ee8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6660), (uint8_t)GPR_U32(ctx, 0));
    // 0x200eec: 0xa0861a0a  sb          $a2, 0x1A0A($a0)
    ctx->pc = 0x200eecu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6666), (uint8_t)GPR_U32(ctx, 6));
    // 0x200ef0: 0xa0871a05  sb          $a3, 0x1A05($a0)
    ctx->pc = 0x200ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6661), (uint8_t)GPR_U32(ctx, 7));
    // 0x200ef4: 0xa0861a06  sb          $a2, 0x1A06($a0)
    ctx->pc = 0x200ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6662), (uint8_t)GPR_U32(ctx, 6));
    // 0x200ef8: 0xa0861a07  sb          $a2, 0x1A07($a0)
    ctx->pc = 0x200ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6663), (uint8_t)GPR_U32(ctx, 6));
    // 0x200efc: 0xa0861a08  sb          $a2, 0x1A08($a0)
    ctx->pc = 0x200efcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6664), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f00: 0xa0861a39  sb          $a2, 0x1A39($a0)
    ctx->pc = 0x200f00u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6713), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f04: 0xa0861a3a  sb          $a2, 0x1A3A($a0)
    ctx->pc = 0x200f04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6714), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f08: 0xa0861a40  sb          $a2, 0x1A40($a0)
    ctx->pc = 0x200f08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6720), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f0c: 0xa0871a3b  sb          $a3, 0x1A3B($a0)
    ctx->pc = 0x200f0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6715), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f10: 0xa0861a3c  sb          $a2, 0x1A3C($a0)
    ctx->pc = 0x200f10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6716), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f14: 0xa0861a3d  sb          $a2, 0x1A3D($a0)
    ctx->pc = 0x200f14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6717), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f18: 0xa0861a3e  sb          $a2, 0x1A3E($a0)
    ctx->pc = 0x200f18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6718), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f1c: 0xa0871a0c  sb          $a3, 0x1A0C($a0)
    ctx->pc = 0x200f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6668), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f20: 0xa0871a0d  sb          $a3, 0x1A0D($a0)
    ctx->pc = 0x200f20u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6669), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f24: 0xa0871a13  sb          $a3, 0x1A13($a0)
    ctx->pc = 0x200f24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6675), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f28: 0xa0871a0e  sb          $a3, 0x1A0E($a0)
    ctx->pc = 0x200f28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6670), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f2c: 0xa0871a0f  sb          $a3, 0x1A0F($a0)
    ctx->pc = 0x200f2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6671), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f30: 0xa0871a10  sb          $a3, 0x1A10($a0)
    ctx->pc = 0x200f30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6672), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f34: 0xa0861a11  sb          $a2, 0x1A11($a0)
    ctx->pc = 0x200f34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6673), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f38: 0xa0851a15  sb          $a1, 0x1A15($a0)
    ctx->pc = 0x200f38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6677), (uint8_t)GPR_U32(ctx, 5));
    // 0x200f3c: 0xa0861a16  sb          $a2, 0x1A16($a0)
    ctx->pc = 0x200f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6678), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f40: 0xa0861a1c  sb          $a2, 0x1A1C($a0)
    ctx->pc = 0x200f40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6684), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f44: 0xa0871a17  sb          $a3, 0x1A17($a0)
    ctx->pc = 0x200f44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6679), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f48: 0xa0871a18  sb          $a3, 0x1A18($a0)
    ctx->pc = 0x200f48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6680), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f4c: 0xa0861a19  sb          $a2, 0x1A19($a0)
    ctx->pc = 0x200f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6681), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f50: 0xa0861a1a  sb          $a2, 0x1A1A($a0)
    ctx->pc = 0x200f50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6682), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f54: 0xa0831a1e  sb          $v1, 0x1A1E($a0)
    ctx->pc = 0x200f54u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6686), (uint8_t)GPR_U32(ctx, 3));
    // 0x200f58: 0xa0861a1f  sb          $a2, 0x1A1F($a0)
    ctx->pc = 0x200f58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6687), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f5c: 0xa0861a25  sb          $a2, 0x1A25($a0)
    ctx->pc = 0x200f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6693), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f60: 0xa0871a20  sb          $a3, 0x1A20($a0)
    ctx->pc = 0x200f60u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6688), (uint8_t)GPR_U32(ctx, 7));
    // 0x200f64: 0xa0861a21  sb          $a2, 0x1A21($a0)
    ctx->pc = 0x200f64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6689), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f68: 0xa0861a22  sb          $a2, 0x1A22($a0)
    ctx->pc = 0x200f68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6690), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f6c: 0xa0861a23  sb          $a2, 0x1A23($a0)
    ctx->pc = 0x200f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6691), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f70: 0xa0851a27  sb          $a1, 0x1A27($a0)
    ctx->pc = 0x200f70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6695), (uint8_t)GPR_U32(ctx, 5));
    // 0x200f74: 0xa0861a28  sb          $a2, 0x1A28($a0)
    ctx->pc = 0x200f74u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6696), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f78: 0xa0861a2e  sb          $a2, 0x1A2E($a0)
    ctx->pc = 0x200f78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6702), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f7c: 0xa0861a29  sb          $a2, 0x1A29($a0)
    ctx->pc = 0x200f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6697), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f80: 0xa0861a2a  sb          $a2, 0x1A2A($a0)
    ctx->pc = 0x200f80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6698), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f84: 0xa0861a2b  sb          $a2, 0x1A2B($a0)
    ctx->pc = 0x200f84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 6699), (uint8_t)GPR_U32(ctx, 6));
    // 0x200f88: 0x3e00008  jr          $ra
    ctx->pc = 0x200F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200F88u;
            // 0x200f8c: 0xa0861a2c  sb          $a2, 0x1A2C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 6700), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200F90u;
    // 0x200f90: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x200f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x200f94: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x200f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
    // 0x200f98: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x200f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x200f9c: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x200f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x200fa0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x200fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x200fa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x200fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x200fa8: 0x8c630110  lw          $v1, 0x110($v1)
    ctx->pc = 0x200fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x200fac: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x200facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x200fb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x200fb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x200fb4: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x200FB4u;
    {
        const bool branch_taken_0x200fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fb4) {
            ctx->pc = 0x200FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200FB4u;
            // 0x200fb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200FC0u;
            goto label_200fc0;
        }
    }
    ctx->pc = 0x200FBCu;
    // 0x200fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x200fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_200fc0:
    // 0x200fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x200FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x200FC8u;
    // 0x200fc8: 0x0  nop
    ctx->pc = 0x200fc8u;
    // NOP
    // 0x200fcc: 0x0  nop
    ctx->pc = 0x200fccu;
    // NOP
    // 0x200fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x200fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x200fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x200fdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x200fdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fe0: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x200FE0u;
    {
        const bool branch_taken_0x200fe0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fe0) {
            ctx->pc = 0x200FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200FE0u;
            // 0x200fe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201050u;
            goto label_201050;
        }
    }
    ctx->pc = 0x200FE8u;
    // 0x200fe8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x200fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x200fec: 0x2442e050  addiu       $v0, $v0, -0x1FB0
    ctx->pc = 0x200fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959184));
    // 0x200ff0: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x200FF0u;
    {
        const bool branch_taken_0x200ff0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200FF0u;
            // 0x200ff4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ff0) {
            ctx->pc = 0x201024u;
            goto label_201024;
        }
    }
    ctx->pc = 0x200FF8u;
    // 0x200ff8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x200ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x200ffc: 0x2442e070  addiu       $v0, $v0, -0x1F90
    ctx->pc = 0x200ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959216));
    // 0x201000: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201000u;
    {
        const bool branch_taken_0x201000 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201000u;
            // 0x201004: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201000) {
            ctx->pc = 0x201024u;
            goto label_201024;
        }
    }
    ctx->pc = 0x201008u;
    // 0x201008: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x20100c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x20100cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x201010: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201010u;
    {
        const bool branch_taken_0x201010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201010u;
            // 0x201014: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201010) {
            ctx->pc = 0x201024u;
            goto label_201024;
        }
    }
    ctx->pc = 0x201018u;
    // 0x201018: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x20101c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20101cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x201020: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_201024:
    // 0x201024: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x201024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x201028: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x201028u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x20102c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20102Cu;
    {
        const bool branch_taken_0x20102c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x20102c) {
            ctx->pc = 0x20104Cu;
            goto label_20104c;
        }
    }
    ctx->pc = 0x201034u;
    // 0x201034: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x201034u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x201038: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x201038u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20103c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20103cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x201040: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201044: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x201044u;
    SET_GPR_U32(ctx, 31, 0x20104Cu);
    ctx->pc = 0x201048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201044u;
            // 0x201048: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20104Cu; }
        if (ctx->pc != 0x20104Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20104Cu; }
        if (ctx->pc != 0x20104Cu) { return; }
    }
    ctx->pc = 0x20104Cu;
label_20104c:
    // 0x20104c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20104cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201050:
    // 0x201050: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201050u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201054: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201054u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201058: 0x3e00008  jr          $ra
    ctx->pc = 0x201058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201058u;
            // 0x20105c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201060u;
    // 0x201060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x201060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x201064: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x201064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x201068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x20106c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20106cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201070: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x201070u;
    {
        const bool branch_taken_0x201070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x201070) {
            ctx->pc = 0x201074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201070u;
            // 0x201074: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2010D0u;
            goto label_2010d0;
        }
    }
    ctx->pc = 0x201078u;
    // 0x201078: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x20107c: 0x2442e070  addiu       $v0, $v0, -0x1F90
    ctx->pc = 0x20107cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959216));
    // 0x201080: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x201080u;
    {
        const bool branch_taken_0x201080 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201080u;
            // 0x201084: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201080) {
            ctx->pc = 0x2010A4u;
            goto label_2010a4;
        }
    }
    ctx->pc = 0x201088u;
    // 0x201088: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x20108c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x20108cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x201090: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201090u;
    {
        const bool branch_taken_0x201090 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201090u;
            // 0x201094: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201090) {
            ctx->pc = 0x2010A4u;
            goto label_2010a4;
        }
    }
    ctx->pc = 0x201098u;
    // 0x201098: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x20109c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x20109cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2010a0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2010a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2010a4:
    // 0x2010a4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2010a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2010a8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2010a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2010ac: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2010ACu;
    {
        const bool branch_taken_0x2010ac = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2010ac) {
            ctx->pc = 0x2010CCu;
            goto label_2010cc;
        }
    }
    ctx->pc = 0x2010B4u;
    // 0x2010b4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2010b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2010b8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x2010b8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2010bc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2010bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x2010c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2010c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010c4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x2010C4u;
    SET_GPR_U32(ctx, 31, 0x2010CCu);
    ctx->pc = 0x2010C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2010C4u;
            // 0x2010c8: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010CCu; }
        if (ctx->pc != 0x2010CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2010CCu; }
        if (ctx->pc != 0x2010CCu) { return; }
    }
    ctx->pc = 0x2010CCu;
label_2010cc:
    // 0x2010cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2010ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2010d0:
    // 0x2010d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2010d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2010d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2010d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2010d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2010D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2010DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2010D8u;
            // 0x2010dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2010E0u;
label_2010e0:
    // 0x2010e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2010e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2010e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2010e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2010e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2010e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2010ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2010ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2010f0: 0x5200004b  beql        $s0, $zero, . + 4 + (0x4B << 2)
    ctx->pc = 0x2010F0u;
    {
        const bool branch_taken_0x2010f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2010f0) {
            ctx->pc = 0x2010F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2010F0u;
            // 0x2010f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201220u;
            goto label_201220;
        }
    }
    ctx->pc = 0x2010F8u;
    // 0x2010f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2010f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2010fc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2010fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x201100: 0x2442e090  addiu       $v0, $v0, -0x1F70
    ctx->pc = 0x201100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959248));
    // 0x201104: 0x2463e0a0  addiu       $v1, $v1, -0x1F60
    ctx->pc = 0x201104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959264));
    // 0x201108: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x201108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x20110c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20110cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201110: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x201110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x201114: 0x2442e0b0  addiu       $v0, $v0, -0x1F50
    ctx->pc = 0x201114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959280));
    // 0x201118: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x201118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x20111c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x20111cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x201120: 0x2463e0c0  addiu       $v1, $v1, -0x1F40
    ctx->pc = 0x201120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959296));
    // 0x201124: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201128: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x201128u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x20112c: 0x2442e0d0  addiu       $v0, $v0, -0x1F30
    ctx->pc = 0x20112cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959312));
    // 0x201130: 0x12000030  beqz        $s0, . + 4 + (0x30 << 2)
    ctx->pc = 0x201130u;
    {
        const bool branch_taken_0x201130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x201134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201130u;
            // 0x201134: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201130) {
            ctx->pc = 0x2011F4u;
            goto label_2011f4;
        }
    }
    ctx->pc = 0x201138u;
    // 0x201138: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x201138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x20113c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20113cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201140: 0x2463d380  addiu       $v1, $v1, -0x2C80
    ctx->pc = 0x201140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955904));
    // 0x201144: 0x2442d390  addiu       $v0, $v0, -0x2C70
    ctx->pc = 0x201144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955920));
    // 0x201148: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x201148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x20114c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x20114cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x201150: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x201150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x201154: 0x2463d3a0  addiu       $v1, $v1, -0x2C60
    ctx->pc = 0x201154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955936));
    // 0x201158: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x20115c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20115cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x201160: 0x2442d3b0  addiu       $v0, $v0, -0x2C50
    ctx->pc = 0x201160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955952));
    // 0x201164: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x201164u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x201168: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x201168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x20116c: 0x2463d3c0  addiu       $v1, $v1, -0x2C40
    ctx->pc = 0x20116cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955968));
    // 0x201170: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x201170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x201174: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x201174u;
    {
        const bool branch_taken_0x201174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201174u;
            // 0x201178: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201174) {
            ctx->pc = 0x201188u;
            goto label_201188;
        }
    }
    ctx->pc = 0x20117Cu;
    // 0x20117c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x20117cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201180: 0x2442d3e0  addiu       $v0, $v0, -0x2C20
    ctx->pc = 0x201180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956000));
    // 0x201184: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x201184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_201188:
    // 0x201188: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x201188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x20118c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20118Cu;
    {
        const bool branch_taken_0x20118c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20118c) {
            ctx->pc = 0x201190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20118Cu;
            // 0x201190: 0x2602000c  addiu       $v0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2011A4u;
            goto label_2011a4;
        }
    }
    ctx->pc = 0x201194u;
    // 0x201194: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x201194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x201198: 0x2442d3f0  addiu       $v0, $v0, -0x2C10
    ctx->pc = 0x201198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956016));
    // 0x20119c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x20119cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2011a0: 0x2602000c  addiu       $v0, $s0, 0xC
    ctx->pc = 0x2011a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2011a4:
    // 0x2011a4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2011A4u;
    {
        const bool branch_taken_0x2011a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2011a4) {
            ctx->pc = 0x2011A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2011A4u;
            // 0x2011a8: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2011BCu;
            goto label_2011bc;
        }
    }
    ctx->pc = 0x2011ACu;
    // 0x2011ac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2011acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2011b0: 0x2442d400  addiu       $v0, $v0, -0x2C00
    ctx->pc = 0x2011b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956032));
    // 0x2011b4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x2011b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x2011b8: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2011b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2011bc:
    // 0x2011bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2011BCu;
    {
        const bool branch_taken_0x2011bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2011bc) {
            ctx->pc = 0x2011D0u;
            goto label_2011d0;
        }
    }
    ctx->pc = 0x2011C4u;
    // 0x2011c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2011c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2011c8: 0x2442d410  addiu       $v0, $v0, -0x2BF0
    ctx->pc = 0x2011c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956048));
    // 0x2011cc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2011ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2011d0:
    // 0x2011d0: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2011D0u;
    {
        const bool branch_taken_0x2011d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2011d0) {
            ctx->pc = 0x2011D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2011D0u;
            // 0x2011d4: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2011F8u;
            goto label_2011f8;
        }
    }
    ctx->pc = 0x2011D8u;
    // 0x2011d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2011d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2011dc: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x2011dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x2011e0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2011E0u;
    {
        const bool branch_taken_0x2011e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2011E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2011E0u;
            // 0x2011e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2011e0) {
            ctx->pc = 0x2011F4u;
            goto label_2011f4;
        }
    }
    ctx->pc = 0x2011E8u;
    // 0x2011e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2011e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2011ec: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x2011ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x2011f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2011f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2011f4:
    // 0x2011f4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2011f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_2011f8:
    // 0x2011f8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2011f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2011fc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2011FCu;
    {
        const bool branch_taken_0x2011fc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2011fc) {
            ctx->pc = 0x20121Cu;
            goto label_20121c;
        }
    }
    ctx->pc = 0x201204u;
    // 0x201204: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x201204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x201208: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x201208u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20120c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x20120cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x201210: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x201210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201214: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x201214u;
    SET_GPR_U32(ctx, 31, 0x20121Cu);
    ctx->pc = 0x201218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201214u;
            // 0x201218: 0x24070025  addiu       $a3, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20121Cu; }
        if (ctx->pc != 0x20121Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20121Cu; }
        if (ctx->pc != 0x20121Cu) { return; }
    }
    ctx->pc = 0x20121Cu;
label_20121c:
    // 0x20121c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20121cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_201220:
    // 0x201220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x201224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201228: 0x3e00008  jr          $ra
    ctx->pc = 0x201228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20122Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201228u;
            // 0x20122c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x201230u;
label_201230:
    // 0x201230: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201234: 0x3e00008  jr          $ra
    ctx->pc = 0x201234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201234u;
            // 0x201238: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20123Cu;
    // 0x20123c: 0x0  nop
    ctx->pc = 0x20123cu;
    // NOP
label_201240:
    // 0x201240: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201240u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201244: 0x3e00008  jr          $ra
    ctx->pc = 0x201244u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201244u;
            // 0x201248: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20124Cu;
    // 0x20124c: 0x0  nop
    ctx->pc = 0x20124cu;
    // NOP
label_201250:
    // 0x201250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201254: 0x3e00008  jr          $ra
    ctx->pc = 0x201254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201254u;
            // 0x201258: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20125Cu;
    // 0x20125c: 0x0  nop
    ctx->pc = 0x20125cu;
    // NOP
label_201260:
    // 0x201260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x201260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x201264: 0x3e00008  jr          $ra
    ctx->pc = 0x201264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201264u;
            // 0x201268: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20126Cu;
    // 0x20126c: 0x0  nop
    ctx->pc = 0x20126cu;
    // NOP
    // 0x201270: 0x808048c  j           func_201230
    ctx->pc = 0x201270u;
    ctx->pc = 0x201274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201270u;
            // 0x201274: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201230u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_201230;
    ctx->pc = 0x201278u;
    // 0x201278: 0x0  nop
    ctx->pc = 0x201278u;
    // NOP
    // 0x20127c: 0x0  nop
    ctx->pc = 0x20127cu;
    // NOP
    // 0x201280: 0x8080438  j           func_2010E0
    ctx->pc = 0x201280u;
    ctx->pc = 0x201284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201280u;
            // 0x201284: 0x2484fff8  addiu       $a0, $a0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2010E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2010e0;
    ctx->pc = 0x201288u;
    // 0x201288: 0x0  nop
    ctx->pc = 0x201288u;
    // NOP
    // 0x20128c: 0x0  nop
    ctx->pc = 0x20128cu;
    // NOP
    // 0x201290: 0x8080438  j           func_2010E0
    ctx->pc = 0x201290u;
    ctx->pc = 0x201294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x201290u;
            // 0x201294: 0x2484fff4  addiu       $a0, $a0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2010E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2010e0;
    ctx->pc = 0x201298u;
    // 0x201298: 0x0  nop
    ctx->pc = 0x201298u;
    // NOP
    // 0x20129c: 0x0  nop
    ctx->pc = 0x20129cu;
    // NOP
    // 0x2012a0: 0x8080490  j           func_201240
    ctx->pc = 0x2012A0u;
    ctx->pc = 0x2012A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012A0u;
            // 0x2012a4: 0x24a5fff4  addiu       $a1, $a1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201240u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_201240;
    ctx->pc = 0x2012A8u;
    // 0x2012a8: 0x0  nop
    ctx->pc = 0x2012a8u;
    // NOP
    // 0x2012ac: 0x0  nop
    ctx->pc = 0x2012acu;
    // NOP
    // 0x2012b0: 0x8080438  j           func_2010E0
    ctx->pc = 0x2012B0u;
    ctx->pc = 0x2012B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012B0u;
            // 0x2012b4: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2010E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2010e0;
    ctx->pc = 0x2012B8u;
    // 0x2012b8: 0x0  nop
    ctx->pc = 0x2012b8u;
    // NOP
    // 0x2012bc: 0x0  nop
    ctx->pc = 0x2012bcu;
    // NOP
    // 0x2012c0: 0x8080494  j           func_201250
    ctx->pc = 0x2012C0u;
    ctx->pc = 0x2012C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012C0u;
            // 0x2012c4: 0x24a5fff0  addiu       $a1, $a1, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201250u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_201250;
    ctx->pc = 0x2012C8u;
    // 0x2012c8: 0x0  nop
    ctx->pc = 0x2012c8u;
    // NOP
    // 0x2012cc: 0x0  nop
    ctx->pc = 0x2012ccu;
    // NOP
    // 0x2012d0: 0x8080498  j           func_201260
    ctx->pc = 0x2012D0u;
    ctx->pc = 0x2012D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012D0u;
            // 0x2012d4: 0x24a5ffec  addiu       $a1, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201260u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_201260;
    ctx->pc = 0x2012D8u;
    // 0x2012d8: 0x0  nop
    ctx->pc = 0x2012d8u;
    // NOP
    // 0x2012dc: 0x0  nop
    ctx->pc = 0x2012dcu;
    // NOP
    // 0x2012e0: 0x8080438  j           func_2010E0
    ctx->pc = 0x2012E0u;
    ctx->pc = 0x2012E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2012E0u;
            // 0x2012e4: 0x2484ffec  addiu       $a0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2010E0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_2010e0;
    ctx->pc = 0x2012E8u;
    // 0x2012e8: 0x0  nop
    ctx->pc = 0x2012e8u;
    // NOP
    // 0x2012ec: 0x0  nop
    ctx->pc = 0x2012ecu;
    // NOP
}
