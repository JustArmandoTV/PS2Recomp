#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4FC0
// Address: 0x1d4fc0 - 0x1d52d0
void sub_001D4FC0_0x1d4fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4FC0_0x1d4fc0");
#endif

    switch (ctx->pc) {
        case 0x1d50e0u: goto label_1d50e0;
        case 0x1d5208u: goto label_1d5208;
        case 0x1d521cu: goto label_1d521c;
        case 0x1d52a4u: goto label_1d52a4;
        case 0x1d52b0u: goto label_1d52b0;
        default: break;
    }

    ctx->pc = 0x1d4fc0u;

    // 0x1d4fc0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d4fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1d4fc4: 0x3c023ea1  lui         $v0, 0x3EA1
    ctx->pc = 0x1d4fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16033 << 16));
    // 0x1d4fc8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1d4fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1d4fcc: 0x3449af28  ori         $t1, $v0, 0xAF28
    ctx->pc = 0x1d4fccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44840);
    // 0x1d4fd0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1d4fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1d4fd4: 0x3c023c8f  lui         $v0, 0x3C8F
    ctx->pc = 0x1d4fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15503 << 16));
    // 0x1d4fd8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1d4fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1d4fdc: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x1d4fdcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
    // 0x1d4fe0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d4fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d4fe4: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1d4fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1d4fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d4fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d4fec: 0x3448b824  ori         $t0, $v0, 0xB824
    ctx->pc = 0x1d4fecu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47140);
    // 0x1d4ff0: 0x8cab0018  lw          $t3, 0x18($a1)
    ctx->pc = 0x1d4ff0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x1d4ff4: 0x254aca40  addiu       $t2, $t2, -0x35C0
    ctx->pc = 0x1d4ff4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294953536));
    // 0x1d4ff8: 0x8cb10004  lw          $s1, 0x4($a1)
    ctx->pc = 0x1d4ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d4ffc: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x1d4ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x1d5000: 0x8cd20050  lw          $s2, 0x50($a2)
    ctx->pc = 0x1d5000u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x1d5004: 0x2463c960  addiu       $v1, $v1, -0x36A0
    ctx->pc = 0x1d5004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953312));
    // 0x1d5008: 0xb1080  sll         $v0, $t3, 2
    ctx->pc = 0x1d5008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x1d500c: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1d500cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1d5010: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x1d5010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x1d5014: 0xac8600fc  sw          $a2, 0xFC($a0)
    ctx->pc = 0x1d5014u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 6));
    // 0x1d5018: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x1d5018u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d501c: 0xcb3021  addu        $a2, $a2, $t3
    ctx->pc = 0x1d501cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1d5020: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1d5020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d5024: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1d5024u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1d5028: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d5028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d502c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x1d502cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1d5030: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d5030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d5034: 0xc5420000  lwc1        $f2, 0x0($t2)
    ctx->pc = 0x1d5034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5038: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1d5038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1d503c: 0xc541000c  lwc1        $f1, 0xC($t2)
    ctx->pc = 0x1d503cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5040: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d5040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d5044: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x1d5044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5048: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x1d5048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d504c: 0xe4820054  swc1        $f2, 0x54($a0)
    ctx->pc = 0x1d504cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
    // 0x1d5050: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1d5050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d5054: 0xe4810060  swc1        $f1, 0x60($a0)
    ctx->pc = 0x1d5054u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 96), bits); }
    // 0x1d5058: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x1d5058u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
    // 0x1d505c: 0xe4800058  swc1        $f0, 0x58($a0)
    ctx->pc = 0x1d505cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 88), bits); }
    // 0x1d5060: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d5060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1d5064: 0xc5420010  lwc1        $f2, 0x10($t2)
    ctx->pc = 0x1d5064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5068: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1d5068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d506c: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x1d506cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5070: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x1d5070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5074: 0xe4820064  swc1        $f2, 0x64($a0)
    ctx->pc = 0x1d5074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 100), bits); }
    // 0x1d5078: 0xe481005c  swc1        $f1, 0x5C($a0)
    ctx->pc = 0x1d5078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x1d507c: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x1d507cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
    // 0x1d5080: 0xc5420018  lwc1        $f2, 0x18($t2)
    ctx->pc = 0x1d5080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5084: 0xc541001c  lwc1        $f1, 0x1C($t2)
    ctx->pc = 0x1d5084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5088: 0xc5400020  lwc1        $f0, 0x20($t2)
    ctx->pc = 0x1d5088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d508c: 0xe482006c  swc1        $f2, 0x6C($a0)
    ctx->pc = 0x1d508cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
    // 0x1d5090: 0xe4810070  swc1        $f1, 0x70($a0)
    ctx->pc = 0x1d5090u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
    // 0x1d5094: 0xe4800074  swc1        $f0, 0x74($a0)
    ctx->pc = 0x1d5094u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
    // 0x1d5098: 0xac890078  sw          $t1, 0x78($a0)
    ctx->pc = 0x1d5098u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 9));
    // 0x1d509c: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x1d509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d50a0: 0xac88007c  sw          $t0, 0x7C($a0)
    ctx->pc = 0x1d50a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 8));
    // 0x1d50a4: 0xac870088  sw          $a3, 0x88($a0)
    ctx->pc = 0x1d50a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 7));
    // 0x1d50a8: 0xe4800080  swc1        $f0, 0x80($a0)
    ctx->pc = 0x1d50a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 128), bits); }
    // 0x1d50ac: 0xa48600a4  sh          $a2, 0xA4($a0)
    ctx->pc = 0x1d50acu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 164), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d50b0: 0xa08000a6  sb          $zero, 0xA6($a0)
    ctx->pc = 0x1d50b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 166), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d50b4: 0xa08000a7  sb          $zero, 0xA7($a0)
    ctx->pc = 0x1d50b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 167), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d50b8: 0xac850094  sw          $a1, 0x94($a0)
    ctx->pc = 0x1d50b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 5));
    // 0x1d50bc: 0xac850098  sw          $a1, 0x98($a0)
    ctx->pc = 0x1d50bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 5));
    // 0x1d50c0: 0xac85009c  sw          $a1, 0x9C($a0)
    ctx->pc = 0x1d50c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
    // 0x1d50c4: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x1d50c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x1d50c8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d50c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1d50cc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1d50ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1d50d0: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D50D0u;
    {
        const bool branch_taken_0x1d50d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D50D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50D0u;
            // 0x1d50d4: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d50d0) {
            ctx->pc = 0x1D50E0u;
            goto label_1d50e0;
        }
    }
    ctx->pc = 0x1D50D8u;
    // 0x1d50d8: 0xc075600  jal         func_1D5800
    ctx->pc = 0x1D50D8u;
    SET_GPR_U32(ctx, 31, 0x1D50E0u);
    ctx->pc = 0x1D50DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D50D8u;
            // 0x1d50dc: 0x26650054  addiu       $a1, $s3, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5800u;
    if (runtime->hasFunction(0x1D5800u)) {
        auto targetFn = runtime->lookupFunction(0x1D5800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E0u; }
        if (ctx->pc != 0x1D50E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5800_0x1d5800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D50E0u; }
        if (ctx->pc != 0x1D50E0u) { return; }
    }
    ctx->pc = 0x1D50E0u;
label_1d50e0:
    // 0x1d50e0: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1d50e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d50e4: 0x3c023ea1  lui         $v0, 0x3EA1
    ctx->pc = 0x1d50e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16033 << 16));
    // 0x1d50e8: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x1d50e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d50ec: 0x3449af28  ori         $t1, $v0, 0xAF28
    ctx->pc = 0x1d50ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44840);
    // 0x1d50f0: 0x3c023c8f  lui         $v0, 0x3C8F
    ctx->pc = 0x1d50f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15503 << 16));
    // 0x1d50f4: 0x3c0a3f80  lui         $t2, 0x3F80
    ctx->pc = 0x1d50f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
    // 0x1d50f8: 0x3448b824  ori         $t0, $v0, 0xB824
    ctx->pc = 0x1d50f8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47140);
    // 0x1d50fc: 0x3c0742c8  lui         $a3, 0x42C8
    ctx->pc = 0x1d50fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17096 << 16));
    // 0x1d5100: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1d5100u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1d5104: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1d5104u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1d5108: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x1d5108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1d510c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d510cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x1d5110: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d5110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1d5114: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1d5114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1d5118: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1d5118u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d511c: 0x0  nop
    ctx->pc = 0x1d511cu;
    // NOP
    // 0x1d5120: 0x46010100  add.s       $f4, $f0, $f1
    ctx->pc = 0x1d5120u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1d5124: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x1d5124u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1d5128: 0xe6610100  swc1        $f1, 0x100($s3)
    ctx->pc = 0x1d5128u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 256), bits); }
    // 0x1d512c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1d512cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5130: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x1d5130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5134: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x1d5134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5138: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x1d5138u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x1d513c: 0xe6620000  swc1        $f2, 0x0($s3)
    ctx->pc = 0x1d513cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x1d5140: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1d5140u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1d5144: 0xe661000c  swc1        $f1, 0xC($s3)
    ctx->pc = 0x1d5144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x1d5148: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1d5148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1d514c: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x1d514cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5150: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x1d5150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x1d5154: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1d5154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d5158: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1d5158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d515c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d515cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d5160: 0xe6620010  swc1        $f2, 0x10($s3)
    ctx->pc = 0x1d5160u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
    // 0x1d5164: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x1d5164u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x1d5168: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x1d5168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x1d516c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1d516cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1d5170: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x1d5170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d5174: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x1d5174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
    // 0x1d5178: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1d5178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d517c: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1d517cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d5180: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x1d5180u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x1d5184: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1d5184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x1d5188: 0xe6620018  swc1        $f2, 0x18($s3)
    ctx->pc = 0x1d5188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x1d518c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1d518cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1d5190: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x1d5190u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x1d5194: 0xe6600020  swc1        $f0, 0x20($s3)
    ctx->pc = 0x1d5194u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
    // 0x1d5198: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1d5198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d519c: 0xae690024  sw          $t1, 0x24($s3)
    ctx->pc = 0x1d519cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 9));
    // 0x1d51a0: 0xae680028  sw          $t0, 0x28($s3)
    ctx->pc = 0x1d51a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 8));
    // 0x1d51a4: 0xae670034  sw          $a3, 0x34($s3)
    ctx->pc = 0x1d51a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 7));
    // 0x1d51a8: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1d51a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1d51ac: 0xe660002c  swc1        $f0, 0x2C($s3)
    ctx->pc = 0x1d51acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 44), bits); }
    // 0x1d51b0: 0xa6660050  sh          $a2, 0x50($s3)
    ctx->pc = 0x1d51b0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 6));
    // 0x1d51b4: 0xa2600052  sb          $zero, 0x52($s3)
    ctx->pc = 0x1d51b4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d51b8: 0xa2600053  sb          $zero, 0x53($s3)
    ctx->pc = 0x1d51b8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 0));
    // 0x1d51bc: 0xae6a0040  sw          $t2, 0x40($s3)
    ctx->pc = 0x1d51bcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 10));
    // 0x1d51c0: 0xae6a0044  sw          $t2, 0x44($s3)
    ctx->pc = 0x1d51c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 10));
    // 0x1d51c4: 0xae6a0048  sw          $t2, 0x48($s3)
    ctx->pc = 0x1d51c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 10));
    // 0x1d51c8: 0xae640030  sw          $a0, 0x30($s3)
    ctx->pc = 0x1d51c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 4));
    // 0x1d51cc: 0xc4606514  lwc1        $f0, 0x6514($v1)
    ctx->pc = 0x1d51ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 25876)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d51d0: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x1d51d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x1d51d4: 0xae6a003c  sw          $t2, 0x3C($s3)
    ctx->pc = 0x1d51d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 10));
    // 0x1d51d8: 0x8c4489d0  lw          $a0, -0x7630($v0)
    ctx->pc = 0x1d51d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1d51dc: 0x8c830084  lw          $v1, 0x84($a0)
    ctx->pc = 0x1d51dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x1d51e0: 0x50650005  beql        $v1, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D51E0u;
    {
        const bool branch_taken_0x1d51e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d51e0) {
            ctx->pc = 0x1D51E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D51E0u;
            // 0x1d51e4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D51F8u;
            goto label_1d51f8;
        }
    }
    ctx->pc = 0x1D51E8u;
    // 0x1d51e8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1d51e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1d51ec: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1D51ECu;
    {
        const bool branch_taken_0x1d51ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d51ec) {
            ctx->pc = 0x1D5280u;
            goto label_1d5280;
        }
    }
    ctx->pc = 0x1D51F4u;
    // 0x1d51f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d51f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d51f8:
    // 0x1d51f8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D51F8u;
    {
        const bool branch_taken_0x1d51f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d51f8) {
            ctx->pc = 0x1D5214u;
            goto label_1d5214;
        }
    }
    ctx->pc = 0x1D5200u;
    // 0x1d5200: 0xc0b8c34  jal         func_2E30D0
    ctx->pc = 0x1D5200u;
    SET_GPR_U32(ctx, 31, 0x1D5208u);
    ctx->pc = 0x2E30D0u;
    if (runtime->hasFunction(0x2E30D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E30D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5208u; }
        if (ctx->pc != 0x1D5208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E30D0_0x2e30d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D5208u; }
        if (ctx->pc != 0x1D5208u) { return; }
    }
    ctx->pc = 0x1D5208u;
label_1d5208:
    // 0x1d5208: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1d5208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1d520c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D520Cu;
    {
        const bool branch_taken_0x1d520c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D520Cu;
            // 0x1d5210: 0x2163f  dsra32      $v0, $v0, 24 (Delay Slot)
        SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d520c) {
            ctx->pc = 0x1D5224u;
            goto label_1d5224;
        }
    }
    ctx->pc = 0x1D5214u;
label_1d5214:
    // 0x1d5214: 0xc0b8c0c  jal         func_2E3030
    ctx->pc = 0x1D5214u;
    SET_GPR_U32(ctx, 31, 0x1D521Cu);
    ctx->pc = 0x2E3030u;
    if (runtime->hasFunction(0x2E3030u)) {
        auto targetFn = runtime->lookupFunction(0x2E3030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D521Cu; }
        if (ctx->pc != 0x1D521Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E3030_0x2e3030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D521Cu; }
        if (ctx->pc != 0x1D521Cu) { return; }
    }
    ctx->pc = 0x1D521Cu;
label_1d521c:
    // 0x1d521c: 0x2163c  dsll32      $v0, $v0, 24
    ctx->pc = 0x1d521cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1d5220: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1d5220u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1d5224:
    // 0x1d5224: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x1d5224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
    // 0x1d5228: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x1d5228u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x1d522c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d522cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d5230: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D5230u;
    {
        const bool branch_taken_0x1d5230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d5230) {
            ctx->pc = 0x1D5234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5230u;
            // 0x1d5234: 0xc6600040  lwc1        $f0, 0x40($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D526Cu;
            goto label_1d526c;
        }
    }
    ctx->pc = 0x1D5238u;
    // 0x1d5238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d5238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d523c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D523Cu;
    {
        const bool branch_taken_0x1d523c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d523c) {
            ctx->pc = 0x1D5280u;
            goto label_1d5280;
        }
    }
    ctx->pc = 0x1D5244u;
    // 0x1d5244: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D5244u;
    {
        const bool branch_taken_0x1d5244 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d5244) {
            ctx->pc = 0x1D5248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5244u;
            // 0x1d5248: 0xc6600040  lwc1        $f0, 0x40($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D5254u;
            goto label_1d5254;
        }
    }
    ctx->pc = 0x1D524Cu;
    // 0x1d524c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1D524Cu;
    {
        const bool branch_taken_0x1d524c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d524c) {
            ctx->pc = 0x1D5280u;
            goto label_1d5280;
        }
    }
    ctx->pc = 0x1D5254u;
label_1d5254:
    // 0x1d5254: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x1d5254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x1d5258: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d525c: 0x0  nop
    ctx->pc = 0x1d525cu;
    // NOP
    // 0x1d5260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d5260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d5264: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1D5264u;
    {
        const bool branch_taken_0x1d5264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D5268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5264u;
            // 0x1d5268: 0xe6600040  swc1        $f0, 0x40($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d5264) {
            ctx->pc = 0x1D5280u;
            goto label_1d5280;
        }
    }
    ctx->pc = 0x1D526Cu;
label_1d526c:
    // 0x1d526c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1d526cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1d5270: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d5270u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d5274: 0x0  nop
    ctx->pc = 0x1d5274u;
    // NOP
    // 0x1d5278: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d5278u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d527c: 0xe6600040  swc1        $f0, 0x40($s3)
    ctx->pc = 0x1d527cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 64), bits); }
label_1d5280:
    // 0x1d5280: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d5280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x1d5284: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1d5284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1d5288: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d5288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x1d528c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1d528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1d5290: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D5290u;
    {
        const bool branch_taken_0x1d5290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d5290) {
            ctx->pc = 0x1D5294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D5290u;
            // 0x1d5294: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D52A8u;
            goto label_1d52a8;
        }
    }
    ctx->pc = 0x1D5298u;
    // 0x1d5298: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d5298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d529c: 0xc075600  jal         func_1D5800
    ctx->pc = 0x1D529Cu;
    SET_GPR_U32(ctx, 31, 0x1D52A4u);
    ctx->pc = 0x1D52A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D529Cu;
            // 0x1d52a0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5800u;
    if (runtime->hasFunction(0x1D5800u)) {
        auto targetFn = runtime->lookupFunction(0x1D5800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52A4u; }
        if (ctx->pc != 0x1D52A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5800_0x1d5800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52A4u; }
        if (ctx->pc != 0x1D52A4u) { return; }
    }
    ctx->pc = 0x1D52A4u;
label_1d52a4:
    // 0x1d52a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d52a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d52a8:
    // 0x1d52a8: 0xc0754e0  jal         func_1D5380
    ctx->pc = 0x1D52A8u;
    SET_GPR_U32(ctx, 31, 0x1D52B0u);
    ctx->pc = 0x1D5380u;
    if (runtime->hasFunction(0x1D5380u)) {
        auto targetFn = runtime->lookupFunction(0x1D5380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52B0u; }
        if (ctx->pc != 0x1D52B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5380_0x1d5380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D52B0u; }
        if (ctx->pc != 0x1D52B0u) { return; }
    }
    ctx->pc = 0x1D52B0u;
label_1d52b0:
    // 0x1d52b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1d52b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d52b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d52b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d52b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d52b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d52bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d52bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d52c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d52c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d52c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D52C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D52C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D52C4u;
            // 0x1d52c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D52CCu;
    // 0x1d52cc: 0x0  nop
    ctx->pc = 0x1d52ccu;
    // NOP
}
