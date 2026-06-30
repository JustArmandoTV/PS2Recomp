#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220750
// Address: 0x220750 - 0x220950
void sub_00220750_0x220750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220750_0x220750");
#endif

    switch (ctx->pc) {
        case 0x220798u: goto label_220798;
        case 0x220910u: goto label_220910;
        default: break;
    }

    ctx->pc = 0x220750u;

    // 0x220750: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x220750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x220754: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x220754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x220758: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x220758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22075c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x22075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x220760: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x220760u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220764: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x220764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x220768: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x220768u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22076c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x22076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x220770: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x220770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220774: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x220774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x220778: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x220778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22077c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22077cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x220780: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x220780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220784: 0x1a600068  blez        $s3, . + 4 + (0x68 << 2)
    ctx->pc = 0x220784u;
    {
        const bool branch_taken_0x220784 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x220788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220784u;
            // 0x220788: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220784) {
            ctx->pc = 0x220928u;
            goto label_220928;
        }
    }
    ctx->pc = 0x22078Cu;
    // 0x22078c: 0x1a600066  blez        $s3, . + 4 + (0x66 << 2)
    ctx->pc = 0x22078Cu;
    {
        const bool branch_taken_0x22078c = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x22078c) {
            ctx->pc = 0x220928u;
            goto label_220928;
        }
    }
    ctx->pc = 0x220794u;
    // 0x220794: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x220794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_220798:
    // 0x220798: 0x8e2b0000  lw          $t3, 0x0($s1)
    ctx->pc = 0x220798u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x22079c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x22079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2207a0: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x2207a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2207a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2207a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2207a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207ac: 0x27a7010c  addiu       $a3, $sp, 0x10C
    ctx->pc = 0x2207acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 268));
    // 0x2207b0: 0x256300a0  addiu       $v1, $t3, 0xA0
    ctx->pc = 0x2207b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 160));
    // 0x2207b4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2207b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2207b8: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x2207b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
    // 0x2207bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2207bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207c0: 0x8d630068  lw          $v1, 0x68($t3)
    ctx->pc = 0x2207c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 104)));
    // 0x2207c4: 0x2c35021  addu        $t2, $s6, $v1
    ctx->pc = 0x2207c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x2207c8: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x2207c8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x2207cc: 0xa3a30080  sb          $v1, 0x80($sp)
    ctx->pc = 0x2207ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 3));
    // 0x2207d0: 0x91430001  lbu         $v1, 0x1($t2)
    ctx->pc = 0x2207d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
    // 0x2207d4: 0xa3a30081  sb          $v1, 0x81($sp)
    ctx->pc = 0x2207d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 129), (uint8_t)GPR_U32(ctx, 3));
    // 0x2207d8: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2207d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x2207dc: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x2207dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
    // 0x2207e0: 0x8d430008  lw          $v1, 0x8($t2)
    ctx->pc = 0x2207e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2207e4: 0xafa30088  sw          $v1, 0x88($sp)
    ctx->pc = 0x2207e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 3));
    // 0x2207e8: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x2207e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2207ec: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x2207ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x2207f0: 0xc5400014  lwc1        $f0, 0x14($t2)
    ctx->pc = 0x2207f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2207f4: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x2207f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x2207f8: 0xc5400018  lwc1        $f0, 0x18($t2)
    ctx->pc = 0x2207f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2207fc: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2207fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x220800: 0xc540001c  lwc1        $f0, 0x1C($t2)
    ctx->pc = 0x220800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220804: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x220804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x220808: 0xc5400020  lwc1        $f0, 0x20($t2)
    ctx->pc = 0x220808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22080c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x22080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x220810: 0xc5400024  lwc1        $f0, 0x24($t2)
    ctx->pc = 0x220810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220814: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x220814u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x220818: 0xc5400028  lwc1        $f0, 0x28($t2)
    ctx->pc = 0x220818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22081c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x22081cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x220820: 0xc540002c  lwc1        $f0, 0x2C($t2)
    ctx->pc = 0x220820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220824: 0xe7a000ac  swc1        $f0, 0xAC($sp)
    ctx->pc = 0x220824u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x220828: 0xc5400030  lwc1        $f0, 0x30($t2)
    ctx->pc = 0x220828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22082c: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x22082cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x220830: 0xc5400034  lwc1        $f0, 0x34($t2)
    ctx->pc = 0x220830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220834: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x220834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x220838: 0xc5400038  lwc1        $f0, 0x38($t2)
    ctx->pc = 0x220838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22083c: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x22083cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x220840: 0xc540003c  lwc1        $f0, 0x3C($t2)
    ctx->pc = 0x220840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220844: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x220844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x220848: 0xc5400040  lwc1        $f0, 0x40($t2)
    ctx->pc = 0x220848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22084c: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x22084cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x220850: 0xc5400044  lwc1        $f0, 0x44($t2)
    ctx->pc = 0x220850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220854: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x220854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x220858: 0xc5400048  lwc1        $f0, 0x48($t2)
    ctx->pc = 0x220858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22085c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x22085cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x220860: 0xc540004c  lwc1        $f0, 0x4C($t2)
    ctx->pc = 0x220860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220864: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x220864u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x220868: 0xc5400050  lwc1        $f0, 0x50($t2)
    ctx->pc = 0x220868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22086c: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x22086cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x220870: 0xc5400054  lwc1        $f0, 0x54($t2)
    ctx->pc = 0x220870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220874: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x220874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x220878: 0xc5400058  lwc1        $f0, 0x58($t2)
    ctx->pc = 0x220878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22087c: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x22087cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x220880: 0xc540005c  lwc1        $f0, 0x5C($t2)
    ctx->pc = 0x220880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220884: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x220884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x220888: 0xc5400060  lwc1        $f0, 0x60($t2)
    ctx->pc = 0x220888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22088c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x22088cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x220890: 0xc5400064  lwc1        $f0, 0x64($t2)
    ctx->pc = 0x220890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220894: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x220894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x220898: 0xc5400068  lwc1        $f0, 0x68($t2)
    ctx->pc = 0x220898u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22089c: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x22089cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x2208a0: 0xc540006c  lwc1        $f0, 0x6C($t2)
    ctx->pc = 0x2208a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208a4: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x2208a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x2208a8: 0xc5400070  lwc1        $f0, 0x70($t2)
    ctx->pc = 0x2208a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208ac: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x2208acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x2208b0: 0xc5400074  lwc1        $f0, 0x74($t2)
    ctx->pc = 0x2208b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208b4: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x2208b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    // 0x2208b8: 0xc5400078  lwc1        $f0, 0x78($t2)
    ctx->pc = 0x2208b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208bc: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2208bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x2208c0: 0xc540007c  lwc1        $f0, 0x7C($t2)
    ctx->pc = 0x2208c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208c4: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x2208c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x2208c8: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x2208c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2208cc: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x2208ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208d0: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2208d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2208d4: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x2208d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208d8: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x2208d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2208dc: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x2208dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208e0: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2208e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x2208e4: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x2208e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208e8: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x2208e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2208ec: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2208ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208f0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x2208f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2208f4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x2208f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2208f8: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x2208f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x2208fc: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2208fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220900: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x220900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x220904: 0x917000a9  lbu         $s0, 0xA9($t3)
    ctx->pc = 0x220904u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 169)));
    // 0x220908: 0xc08a450  jal         func_229140
    ctx->pc = 0x220908u;
    SET_GPR_U32(ctx, 31, 0x220910u);
    ctx->pc = 0x22090Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220908u;
            // 0x22090c: 0xa16200a9  sb          $v0, 0xA9($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 169), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229140u;
    if (runtime->hasFunction(0x229140u)) {
        auto targetFn = runtime->lookupFunction(0x229140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220910u; }
        if (ctx->pc != 0x220910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229140_0x229140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220910u; }
        if (ctx->pc != 0x220910u) { return; }
    }
    ctx->pc = 0x220910u;
label_220910:
    // 0x220910: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x220910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x220914: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x220914u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x220918: 0x253182a  slt         $v1, $s2, $s3
    ctx->pc = 0x220918u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x22091c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x22091cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x220920: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x220920u;
    {
        const bool branch_taken_0x220920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220920u;
            // 0x220924: 0xa0900009  sb          $s0, 0x9($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 9), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220920) {
            ctx->pc = 0x220798u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220798;
        }
    }
    ctx->pc = 0x220928u;
label_220928:
    // 0x220928: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x220928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22092c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22092cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x220930: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x220930u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x220934: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x220934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x220938: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x220938u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22093c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x22093cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x220940: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x220940u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x220944: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x220944u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220948: 0x3e00008  jr          $ra
    ctx->pc = 0x220948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22094Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220948u;
            // 0x22094c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220950u;
}
