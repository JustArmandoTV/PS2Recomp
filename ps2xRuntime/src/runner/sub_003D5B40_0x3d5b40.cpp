#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003D5B40
// Address: 0x3d5b40 - 0x3d5e00
void sub_003D5B40_0x3d5b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D5B40_0x3d5b40");
#endif

    ctx->pc = 0x3d5b40u;

    // 0x3d5b40: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x3d5b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3d5b44: 0x28610006  slti        $at, $v1, 0x6
    ctx->pc = 0x3d5b44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x3d5b48: 0x102000ab  beqz        $at, . + 4 + (0xAB << 2)
    ctx->pc = 0x3D5B48u;
    {
        const bool branch_taken_0x3d5b48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5b48) {
            ctx->pc = 0x3D5DF8u;
            goto label_3d5df8;
        }
    }
    ctx->pc = 0x3D5B50u;
    // 0x3d5b50: 0xa08500c0  sb          $a1, 0xC0($a0)
    ctx->pc = 0x3d5b50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 192), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d5b54: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3d5b58: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3d5b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3d5b5c: 0x8c630788  lw          $v1, 0x788($v1)
    ctx->pc = 0x3d5b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1928)));
    // 0x3d5b60: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x3d5b60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3d5b64: 0x50200047  beql        $at, $zero, . + 4 + (0x47 << 2)
    ctx->pc = 0x3D5B64u;
    {
        const bool branch_taken_0x3d5b64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d5b64) {
            ctx->pc = 0x3D5B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5B64u;
            // 0x3d5b68: 0x908600c0  lbu         $a2, 0xC0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3D5C84u;
            goto label_3d5c84;
        }
    }
    ctx->pc = 0x3D5B6Cu;
    // 0x3d5b6c: 0x908600c0  lbu         $a2, 0xC0($a0)
    ctx->pc = 0x3d5b6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 192)));
    // 0x3d5b70: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d5b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3d5b74: 0x24639360  addiu       $v1, $v1, -0x6CA0
    ctx->pc = 0x3d5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939488));
    // 0x3d5b78: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3d5b78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d5b7c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3d5b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3d5b80: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3d5b80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d5b84: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3d5b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3d5b88: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3d5b88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3d5b8c: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x3d5b8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d5b90: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x3d5b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d5b94: 0xc5450010  lwc1        $f5, 0x10($t2)
    ctx->pc = 0x3d5b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d5b98: 0x91450004  lbu         $a1, 0x4($t2)
    ctx->pc = 0x3d5b98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3d5b9c: 0xc5440014  lwc1        $f4, 0x14($t2)
    ctx->pc = 0x3d5b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d5ba0: 0x91430005  lbu         $v1, 0x5($t2)
    ctx->pc = 0x3d5ba0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x3d5ba4: 0xc5430018  lwc1        $f3, 0x18($t2)
    ctx->pc = 0x3d5ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d5ba8: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x3d5ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x3d5bac: 0xc542001c  lwc1        $f2, 0x1C($t2)
    ctx->pc = 0x3d5bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d5bb0: 0xa0850058  sb          $a1, 0x58($a0)
    ctx->pc = 0x3d5bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d5bb4: 0xc5410020  lwc1        $f1, 0x20($t2)
    ctx->pc = 0x3d5bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5bb8: 0xa0830059  sb          $v1, 0x59($a0)
    ctx->pc = 0x3d5bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5bbc: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x3d5bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5bc0: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x3d5bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3d5bc4: 0xc54a0034  lwc1        $f10, 0x34($t2)
    ctx->pc = 0x3d5bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3d5bc8: 0x9143000c  lbu         $v1, 0xC($t2)
    ctx->pc = 0x3d5bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d5bcc: 0xc5490038  lwc1        $f9, 0x38($t2)
    ctx->pc = 0x3d5bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3d5bd0: 0x8d490028  lw          $t1, 0x28($t2)
    ctx->pc = 0x3d5bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x3d5bd4: 0xc548003c  lwc1        $f8, 0x3C($t2)
    ctx->pc = 0x3d5bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3d5bd8: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x3d5bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x3d5bdc: 0xc5470040  lwc1        $f7, 0x40($t2)
    ctx->pc = 0x3d5bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3d5be0: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x3d5be0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5be4: 0xc5460044  lwc1        $f6, 0x44($t2)
    ctx->pc = 0x3d5be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3d5be8: 0xe4850064  swc1        $f5, 0x64($a0)
    ctx->pc = 0x3d5be8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x3d5bec: 0x9148002c  lbu         $t0, 0x2C($t2)
    ctx->pc = 0x3d5becu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x3d5bf0: 0xe4840068  swc1        $f4, 0x68($a0)
    ctx->pc = 0x3d5bf0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x3d5bf4: 0x9147002d  lbu         $a3, 0x2D($t2)
    ctx->pc = 0x3d5bf4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 45)));
    // 0x3d5bf8: 0xe483006c  swc1        $f3, 0x6C($a0)
    ctx->pc = 0x3d5bf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x3d5bfc: 0x9146002e  lbu         $a2, 0x2E($t2)
    ctx->pc = 0x3d5bfcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 46)));
    // 0x3d5c00: 0xe4820070  swc1        $f2, 0x70($a0)
    ctx->pc = 0x3d5c00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3d5c04: 0x9145002f  lbu         $a1, 0x2F($t2)
    ctx->pc = 0x3d5c04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 47)));
    // 0x3d5c08: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x3d5c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3d5c0c: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x3d5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x3d5c10: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x3d5c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3d5c14: 0xac89007c  sw          $t1, 0x7C($a0)
    ctx->pc = 0x3d5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 9));
    // 0x3d5c18: 0xc5450048  lwc1        $f5, 0x48($t2)
    ctx->pc = 0x3d5c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d5c1c: 0xa0880080  sb          $t0, 0x80($a0)
    ctx->pc = 0x3d5c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 8));
    // 0x3d5c20: 0xc544004c  lwc1        $f4, 0x4C($t2)
    ctx->pc = 0x3d5c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d5c24: 0xa0870081  sb          $a3, 0x81($a0)
    ctx->pc = 0x3d5c24u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 129), (uint8_t)GPR_U32(ctx, 7));
    // 0x3d5c28: 0xc5430050  lwc1        $f3, 0x50($t2)
    ctx->pc = 0x3d5c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d5c2c: 0xa0860082  sb          $a2, 0x82($a0)
    ctx->pc = 0x3d5c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 130), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d5c30: 0xc5420054  lwc1        $f2, 0x54($t2)
    ctx->pc = 0x3d5c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d5c34: 0xa0850083  sb          $a1, 0x83($a0)
    ctx->pc = 0x3d5c34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 131), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d5c38: 0xc5410058  lwc1        $f1, 0x58($t2)
    ctx->pc = 0x3d5c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5c3c: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x3d5c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x3d5c40: 0xc540005c  lwc1        $f0, 0x5C($t2)
    ctx->pc = 0x3d5c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5c44: 0xe48a0088  swc1        $f10, 0x88($a0)
    ctx->pc = 0x3d5c44u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x3d5c48: 0xe489008c  swc1        $f9, 0x8C($a0)
    ctx->pc = 0x3d5c48u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x3d5c4c: 0xe4880090  swc1        $f8, 0x90($a0)
    ctx->pc = 0x3d5c4cu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x3d5c50: 0xe4870094  swc1        $f7, 0x94($a0)
    ctx->pc = 0x3d5c50u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x3d5c54: 0xe4860098  swc1        $f6, 0x98($a0)
    ctx->pc = 0x3d5c54u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3d5c58: 0xe485009c  swc1        $f5, 0x9C($a0)
    ctx->pc = 0x3d5c58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x3d5c5c: 0xe48400a0  swc1        $f4, 0xA0($a0)
    ctx->pc = 0x3d5c5cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3d5c60: 0xe48300a4  swc1        $f3, 0xA4($a0)
    ctx->pc = 0x3d5c60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x3d5c64: 0xe48200a8  swc1        $f2, 0xA8($a0)
    ctx->pc = 0x3d5c64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x3d5c68: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x3d5c68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x3d5c6c: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x3d5c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x3d5c70: 0xc5410060  lwc1        $f1, 0x60($t2)
    ctx->pc = 0x3d5c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5c74: 0xc5400064  lwc1        $f0, 0x64($t2)
    ctx->pc = 0x3d5c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5c78: 0xe48100b4  swc1        $f1, 0xB4($a0)
    ctx->pc = 0x3d5c78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x3d5c7c: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x3D5C7Cu;
    {
        const bool branch_taken_0x3d5c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5C7Cu;
            // 0x3d5c80: 0xe48000b8  swc1        $f0, 0xB8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5c7c) {
            ctx->pc = 0x3D5D94u;
            goto label_3d5d94;
        }
    }
    ctx->pc = 0x3D5C84u;
label_3d5c84:
    // 0x3d5c84: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3d5c88: 0x246395d0  addiu       $v1, $v1, -0x6A30
    ctx->pc = 0x3d5c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940112));
    // 0x3d5c8c: 0x62840  sll         $a1, $a2, 1
    ctx->pc = 0x3d5c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x3d5c90: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3d5c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3d5c94: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3d5c94u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x3d5c98: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3d5c98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3d5c9c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x3d5c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x3d5ca0: 0x655021  addu        $t2, $v1, $a1
    ctx->pc = 0x3d5ca0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x3d5ca4: 0x8d460000  lw          $a2, 0x0($t2)
    ctx->pc = 0x3d5ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x3d5ca8: 0xc5450010  lwc1        $f5, 0x10($t2)
    ctx->pc = 0x3d5ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d5cac: 0x91450004  lbu         $a1, 0x4($t2)
    ctx->pc = 0x3d5cacu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x3d5cb0: 0xc5440014  lwc1        $f4, 0x14($t2)
    ctx->pc = 0x3d5cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d5cb4: 0x91430005  lbu         $v1, 0x5($t2)
    ctx->pc = 0x3d5cb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 5)));
    // 0x3d5cb8: 0xc5430018  lwc1        $f3, 0x18($t2)
    ctx->pc = 0x3d5cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d5cbc: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x3d5cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x3d5cc0: 0xc542001c  lwc1        $f2, 0x1C($t2)
    ctx->pc = 0x3d5cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d5cc4: 0xa0850058  sb          $a1, 0x58($a0)
    ctx->pc = 0x3d5cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 88), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d5cc8: 0xc5410020  lwc1        $f1, 0x20($t2)
    ctx->pc = 0x3d5cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5ccc: 0xa0830059  sb          $v1, 0x59($a0)
    ctx->pc = 0x3d5cccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 89), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5cd0: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x3d5cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5cd4: 0x8d450008  lw          $a1, 0x8($t2)
    ctx->pc = 0x3d5cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x3d5cd8: 0xc54a0034  lwc1        $f10, 0x34($t2)
    ctx->pc = 0x3d5cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3d5cdc: 0x9143000c  lbu         $v1, 0xC($t2)
    ctx->pc = 0x3d5cdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x3d5ce0: 0xc5490038  lwc1        $f9, 0x38($t2)
    ctx->pc = 0x3d5ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3d5ce4: 0x8d490028  lw          $t1, 0x28($t2)
    ctx->pc = 0x3d5ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 40)));
    // 0x3d5ce8: 0xc548003c  lwc1        $f8, 0x3C($t2)
    ctx->pc = 0x3d5ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3d5cec: 0xac85005c  sw          $a1, 0x5C($a0)
    ctx->pc = 0x3d5cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
    // 0x3d5cf0: 0xc5470040  lwc1        $f7, 0x40($t2)
    ctx->pc = 0x3d5cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3d5cf4: 0xa0830060  sb          $v1, 0x60($a0)
    ctx->pc = 0x3d5cf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 96), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d5cf8: 0xc5460044  lwc1        $f6, 0x44($t2)
    ctx->pc = 0x3d5cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3d5cfc: 0xe4850064  swc1        $f5, 0x64($a0)
    ctx->pc = 0x3d5cfcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x3d5d00: 0x9148002c  lbu         $t0, 0x2C($t2)
    ctx->pc = 0x3d5d00u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 44)));
    // 0x3d5d04: 0xe4840068  swc1        $f4, 0x68($a0)
    ctx->pc = 0x3d5d04u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x3d5d08: 0x9147002d  lbu         $a3, 0x2D($t2)
    ctx->pc = 0x3d5d08u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 45)));
    // 0x3d5d0c: 0xe483006c  swc1        $f3, 0x6C($a0)
    ctx->pc = 0x3d5d0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x3d5d10: 0x9146002e  lbu         $a2, 0x2E($t2)
    ctx->pc = 0x3d5d10u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 46)));
    // 0x3d5d14: 0xe4820070  swc1        $f2, 0x70($a0)
    ctx->pc = 0x3d5d14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x3d5d18: 0x9145002f  lbu         $a1, 0x2F($t2)
    ctx->pc = 0x3d5d18u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 47)));
    // 0x3d5d1c: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x3d5d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x3d5d20: 0x8d430030  lw          $v1, 0x30($t2)
    ctx->pc = 0x3d5d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 48)));
    // 0x3d5d24: 0xe4800078  swc1        $f0, 0x78($a0)
    ctx->pc = 0x3d5d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 120), bits); }
    // 0x3d5d28: 0xac89007c  sw          $t1, 0x7C($a0)
    ctx->pc = 0x3d5d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 9));
    // 0x3d5d2c: 0xc5450048  lwc1        $f5, 0x48($t2)
    ctx->pc = 0x3d5d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3d5d30: 0xa0880080  sb          $t0, 0x80($a0)
    ctx->pc = 0x3d5d30u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 128), (uint8_t)GPR_U32(ctx, 8));
    // 0x3d5d34: 0xc544004c  lwc1        $f4, 0x4C($t2)
    ctx->pc = 0x3d5d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3d5d38: 0xa0870081  sb          $a3, 0x81($a0)
    ctx->pc = 0x3d5d38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 129), (uint8_t)GPR_U32(ctx, 7));
    // 0x3d5d3c: 0xc5430050  lwc1        $f3, 0x50($t2)
    ctx->pc = 0x3d5d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3d5d40: 0xa0860082  sb          $a2, 0x82($a0)
    ctx->pc = 0x3d5d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 130), (uint8_t)GPR_U32(ctx, 6));
    // 0x3d5d44: 0xc5420054  lwc1        $f2, 0x54($t2)
    ctx->pc = 0x3d5d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3d5d48: 0xa0850083  sb          $a1, 0x83($a0)
    ctx->pc = 0x3d5d48u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 131), (uint8_t)GPR_U32(ctx, 5));
    // 0x3d5d4c: 0xc5410058  lwc1        $f1, 0x58($t2)
    ctx->pc = 0x3d5d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5d50: 0xac830084  sw          $v1, 0x84($a0)
    ctx->pc = 0x3d5d50u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 3));
    // 0x3d5d54: 0xc540005c  lwc1        $f0, 0x5C($t2)
    ctx->pc = 0x3d5d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5d58: 0xe48a0088  swc1        $f10, 0x88($a0)
    ctx->pc = 0x3d5d58u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 136), bits); }
    // 0x3d5d5c: 0xe489008c  swc1        $f9, 0x8C($a0)
    ctx->pc = 0x3d5d5cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 140), bits); }
    // 0x3d5d60: 0xe4880090  swc1        $f8, 0x90($a0)
    ctx->pc = 0x3d5d60u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 144), bits); }
    // 0x3d5d64: 0xe4870094  swc1        $f7, 0x94($a0)
    ctx->pc = 0x3d5d64u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 148), bits); }
    // 0x3d5d68: 0xe4860098  swc1        $f6, 0x98($a0)
    ctx->pc = 0x3d5d68u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    // 0x3d5d6c: 0xe485009c  swc1        $f5, 0x9C($a0)
    ctx->pc = 0x3d5d6cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 156), bits); }
    // 0x3d5d70: 0xe48400a0  swc1        $f4, 0xA0($a0)
    ctx->pc = 0x3d5d70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 160), bits); }
    // 0x3d5d74: 0xe48300a4  swc1        $f3, 0xA4($a0)
    ctx->pc = 0x3d5d74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
    // 0x3d5d78: 0xe48200a8  swc1        $f2, 0xA8($a0)
    ctx->pc = 0x3d5d78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 168), bits); }
    // 0x3d5d7c: 0xe48100ac  swc1        $f1, 0xAC($a0)
    ctx->pc = 0x3d5d7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 172), bits); }
    // 0x3d5d80: 0xe48000b0  swc1        $f0, 0xB0($a0)
    ctx->pc = 0x3d5d80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 176), bits); }
    // 0x3d5d84: 0xc5410060  lwc1        $f1, 0x60($t2)
    ctx->pc = 0x3d5d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5d88: 0xc5400064  lwc1        $f0, 0x64($t2)
    ctx->pc = 0x3d5d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3d5d8c: 0xe48100b4  swc1        $f1, 0xB4($a0)
    ctx->pc = 0x3d5d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 180), bits); }
    // 0x3d5d90: 0xe48000b8  swc1        $f0, 0xB8($a0)
    ctx->pc = 0x3d5d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 184), bits); }
label_3d5d94:
    // 0x3d5d94: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3d5d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3d5d98: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3d5d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3d5d9c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3d5d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3d5da0: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x3d5da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x3d5da4: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D5DA4u;
    {
        const bool branch_taken_0x3d5da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x3d5da4) {
            ctx->pc = 0x3D5DB4u;
            goto label_3d5db4;
        }
    }
    ctx->pc = 0x3D5DACu;
    // 0x3d5dac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D5DACu;
    {
        const bool branch_taken_0x3d5dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D5DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3D5DACu;
            // 0x3d5db0: 0xac8000bc  sw          $zero, 0xBC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d5dac) {
            ctx->pc = 0x3D5DC0u;
            goto label_3d5dc0;
        }
    }
    ctx->pc = 0x3D5DB4u;
label_3d5db4:
    // 0x3d5db4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x3d5db4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
    // 0x3d5db8: 0x24639840  addiu       $v1, $v1, -0x67C0
    ctx->pc = 0x3d5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940736));
    // 0x3d5dbc: 0xac8300bc  sw          $v1, 0xBC($a0)
    ctx->pc = 0x3d5dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 3));
label_3d5dc0:
    // 0x3d5dc0: 0xac8000c8  sw          $zero, 0xC8($a0)
    ctx->pc = 0x3d5dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 0));
    // 0x3d5dc4: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x3d5dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
    // 0x3d5dc8: 0xac8000cc  sw          $zero, 0xCC($a0)
    ctx->pc = 0x3d5dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 204), GPR_U32(ctx, 0));
    // 0x3d5dcc: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x3d5dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
    // 0x3d5dd0: 0xc4810084  lwc1        $f1, 0x84($a0)
    ctx->pc = 0x3d5dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3d5dd4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3d5dd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3d5dd8: 0x90830058  lbu         $v1, 0x58($a0)
    ctx->pc = 0x3d5dd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x3d5ddc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3d5ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3d5de0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x3d5de0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3d5de4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3d5de4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3d5de8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3d5de8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3d5dec: 0x0  nop
    ctx->pc = 0x3d5decu;
    // NOP
    // 0x3d5df0: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x3d5df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3d5df4: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x3d5df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_3d5df8:
    // 0x3d5df8: 0x3e00008  jr          $ra
    ctx->pc = 0x3D5DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3D5E00u;
}
