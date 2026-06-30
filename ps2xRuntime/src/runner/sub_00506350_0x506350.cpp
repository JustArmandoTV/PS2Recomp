#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00506350
// Address: 0x506350 - 0x506610
void sub_00506350_0x506350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00506350_0x506350");
#endif

    switch (ctx->pc) {
        case 0x506524u: goto label_506524;
        case 0x506558u: goto label_506558;
        case 0x506580u: goto label_506580;
        case 0x5065a4u: goto label_5065a4;
        default: break;
    }

    ctx->pc = 0x506350u;

    // 0x506350: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x506350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x506354: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x506354u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x506358: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x506358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x50635c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x50635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x506360: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x506360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x506364: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x506364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x506368: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x506368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x50636c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x50636cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x506370: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x506370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x506374: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x506374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x506378: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x506378u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x50637c: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x50637cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x506380: 0x106c0028  beq         $v1, $t4, . + 4 + (0x28 << 2)
    ctx->pc = 0x506380u;
    {
        const bool branch_taken_0x506380 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 12));
        ctx->pc = 0x506384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506380u;
            // 0x506384: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506380) {
            ctx->pc = 0x506424u;
            goto label_506424;
        }
    }
    ctx->pc = 0x506388u;
    // 0x506388: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x506388u;
    {
        const bool branch_taken_0x506388 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x506388) {
            ctx->pc = 0x506398u;
            goto label_506398;
        }
    }
    ctx->pc = 0x506390u;
    // 0x506390: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x506390u;
    {
        const bool branch_taken_0x506390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x506394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506390u;
            // 0x506394: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506390) {
            ctx->pc = 0x5065D0u;
            goto label_5065d0;
        }
    }
    ctx->pc = 0x506398u;
label_506398:
    // 0x506398: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x506398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x50639c: 0x8ea40040  lw          $a0, 0x40($s5)
    ctx->pc = 0x50639cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x5063a0: 0x8c630d30  lw          $v1, 0xD30($v1)
    ctx->pc = 0x5063a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3376)));
    // 0x5063a4: 0x3c090063  lui         $t1, 0x63
    ctx->pc = 0x5063a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)99 << 16));
    // 0x5063a8: 0x3c080063  lui         $t0, 0x63
    ctx->pc = 0x5063a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)99 << 16));
    // 0x5063ac: 0x3c070063  lui         $a3, 0x63
    ctx->pc = 0x5063acu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)99 << 16));
    // 0x5063b0: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x5063b0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x5063b4: 0x3c060063  lui         $a2, 0x63
    ctx->pc = 0x5063b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)99 << 16));
    // 0x5063b8: 0x8c6a0074  lw          $t2, 0x74($v1)
    ctx->pc = 0x5063b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x5063bc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x5063bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x5063c0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x5063c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x5063c4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x5063c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x5063c8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5063c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x5063cc: 0x8d4a0000  lw          $t2, 0x0($t2)
    ctx->pc = 0x5063ccu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x5063d0: 0xaeaa0058  sw          $t2, 0x58($s5)
    ctx->pc = 0x5063d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 10));
    // 0x5063d4: 0xc520cca0  lwc1        $f0, -0x3360($t1)
    ctx->pc = 0x5063d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294954144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5063d8: 0x8d4a0064  lw          $t2, 0x64($t2)
    ctx->pc = 0x5063d8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 100)));
    // 0x5063dc: 0xc502cca4  lwc1        $f2, -0x335C($t0)
    ctx->pc = 0x5063dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294954148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5063e0: 0xc4e1cca8  lwc1        $f1, -0x3358($a3)
    ctx->pc = 0x5063e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294954152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5063e4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x5063e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x5063e8: 0xc4c0ccac  lwc1        $f0, -0x3354($a2)
    ctx->pc = 0x5063e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294954156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5063ec: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x5063ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x5063f0: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x5063f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x5063f4: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x5063f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x5063f8: 0xc4a2ccb0  lwc1        $f2, -0x3350($a1)
    ctx->pc = 0x5063f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294954160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x5063fc: 0xc460ccb8  lwc1        $f0, -0x3348($v1)
    ctx->pc = 0x5063fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x506400: 0xc481ccb4  lwc1        $f1, -0x334C($a0)
    ctx->pc = 0x506400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x506404: 0xe7a200a0  swc1        $f2, 0xA0($sp)
    ctx->pc = 0x506404u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x506408: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x506408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x50640c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x50640cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x506410: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x506410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x506414: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x506414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x506418: 0xc4600090  lwc1        $f0, 0x90($v1)
    ctx->pc = 0x506418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50641c: 0xe6a0005c  swc1        $f0, 0x5C($s5)
    ctx->pc = 0x50641cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x506420: 0xaeac0050  sw          $t4, 0x50($s5)
    ctx->pc = 0x506420u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 12));
label_506424:
    // 0x506424: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x506424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x506428: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x506428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
    // 0x50642c: 0xc462cca0  lwc1        $f2, -0x3360($v1)
    ctx->pc = 0x50642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x506430: 0x8c840064  lw          $a0, 0x64($a0)
    ctx->pc = 0x506430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x506434: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x506434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x506438: 0xc460cca4  lwc1        $f0, -0x335C($v1)
    ctx->pc = 0x506438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x50643c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x50643cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x506440: 0xc6a2005c  lwc1        $f2, 0x5C($s5)
    ctx->pc = 0x506440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x506444: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x506444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x506448: 0xc461cca8  lwc1        $f1, -0x3358($v1)
    ctx->pc = 0x506448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x50644c: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x50644cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x506450: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x506450u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x506454: 0xc460ccac  lwc1        $f0, -0x3354($v1)
    ctx->pc = 0x506454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x506458: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x506458u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x50645c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x50645cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x506460: 0x7d2821  addu        $a1, $v1, $sp
    ctx->pc = 0x506460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x506464: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x506464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x506468: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x506468u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x50646c: 0xc461ccb0  lwc1        $f1, -0x3350($v1)
    ctx->pc = 0x50646cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x506470: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x506470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    // 0x506474: 0xc480ccb4  lwc1        $f0, -0x334C($a0)
    ctx->pc = 0x506474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294954164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x506478: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x506478u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x50647c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x50647cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x506480: 0xc461ccb8  lwc1        $f1, -0x3348($v1)
    ctx->pc = 0x506480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294954168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x506484: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x506484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x506488: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x506488u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x50648c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x50648cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x506490: 0x0  nop
    ctx->pc = 0x506490u;
    // NOP
    // 0x506494: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x506494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x506498: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x506498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x50649c: 0xc4b400b0  lwc1        $f20, 0xB0($a1)
    ctx->pc = 0x50649cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5064a0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x5064A0u;
    {
        const bool branch_taken_0x5064a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x5064A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5064A0u;
            // 0x5064a4: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5064a0) {
            ctx->pc = 0x5064C8u;
            goto label_5064c8;
        }
    }
    ctx->pc = 0x5064A8u;
    // 0x5064a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5064a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5064ac: 0x0  nop
    ctx->pc = 0x5064acu;
    // NOP
    // 0x5064b0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x5064b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5064b4: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x5064B4u;
    {
        const bool branch_taken_0x5064b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5064b4) {
            ctx->pc = 0x5064B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5064B4u;
            // 0x5064b8: 0x3c0340e0  lui         $v1, 0x40E0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5064CCu;
            goto label_5064cc;
        }
    }
    ctx->pc = 0x5064BCu;
    // 0x5064bc: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x5064bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x5064c0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x5064C0u;
    {
        const bool branch_taken_0x5064c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5064C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5064C0u;
            // 0x5064c4: 0x347611a9  ori         $s6, $v1, 0x11A9 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4521);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5064c0) {
            ctx->pc = 0x506500u;
            goto label_506500;
        }
    }
    ctx->pc = 0x5064C8u;
label_5064c8:
    // 0x5064c8: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x5064c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_5064cc:
    // 0x5064cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5064ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5064d0: 0x0  nop
    ctx->pc = 0x5064d0u;
    // NOP
    // 0x5064d4: 0x46020032  c.eq.s      $f0, $f2
    ctx->pc = 0x5064d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5064d8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x5064D8u;
    {
        const bool branch_taken_0x5064d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5064d8) {
            ctx->pc = 0x506500u;
            goto label_506500;
        }
    }
    ctx->pc = 0x5064E0u;
    // 0x5064e0: 0x3c034160  lui         $v1, 0x4160
    ctx->pc = 0x5064e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16736 << 16));
    // 0x5064e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5064e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x5064e8: 0x0  nop
    ctx->pc = 0x5064e8u;
    // NOP
    // 0x5064ec: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x5064ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x5064f0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x5064F0u;
    {
        const bool branch_taken_0x5064f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5064f0) {
            ctx->pc = 0x506500u;
            goto label_506500;
        }
    }
    ctx->pc = 0x5064F8u;
    // 0x5064f8: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x5064f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
    // 0x5064fc: 0x347611a9  ori         $s6, $v1, 0x11A9
    ctx->pc = 0x5064fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4521);
label_506500:
    // 0x506500: 0x12c0002f  beqz        $s6, . + 4 + (0x2F << 2)
    ctx->pc = 0x506500u;
    {
        const bool branch_taken_0x506500 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x506500) {
            ctx->pc = 0x5065C0u;
            goto label_5065c0;
        }
    }
    ctx->pc = 0x506508u;
    // 0x506508: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x506508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x50650c: 0x3c1400af  lui         $s4, 0xAF
    ctx->pc = 0x50650cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)175 << 16));
    // 0x506510: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x506510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x506514: 0x26940e84  addiu       $s4, $s4, 0xE84
    ctx->pc = 0x506514u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 3716));
    // 0x506518: 0x26b20010  addiu       $s2, $s5, 0x10
    ctx->pc = 0x506518u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x50651c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x50651cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506520: 0x8c70077c  lw          $s0, 0x77C($v1)
    ctx->pc = 0x506520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_506524:
    // 0x506524: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x506524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x506528: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x506528u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
    // 0x50652c: 0x8c830e38  lw          $v1, 0xE38($a0)
    ctx->pc = 0x50652cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x506530: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x506530u;
    {
        const bool branch_taken_0x506530 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x506534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x506530u;
            // 0x506534: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x506530) {
            ctx->pc = 0x506548u;
            goto label_506548;
        }
    }
    ctx->pc = 0x506538u;
    // 0x506538: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x506538u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x50653c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x50653Cu;
    {
        const bool branch_taken_0x50653c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x50653c) {
            ctx->pc = 0x506548u;
            goto label_506548;
        }
    }
    ctx->pc = 0x506544u;
    // 0x506544: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x506544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_506548:
    // 0x506548: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x506548u;
    {
        const bool branch_taken_0x506548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x506548) {
            ctx->pc = 0x506568u;
            goto label_506568;
        }
    }
    ctx->pc = 0x506550u;
    // 0x506550: 0xc075eb4  jal         func_1D7AD0
    ctx->pc = 0x506550u;
    SET_GPR_U32(ctx, 31, 0x506558u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506558u; }
        if (ctx->pc != 0x506558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506558u; }
        if (ctx->pc != 0x506558u) { return; }
    }
    ctx->pc = 0x506558u;
label_506558:
    // 0x506558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x506558u;
    {
        const bool branch_taken_0x506558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x506558) {
            ctx->pc = 0x506568u;
            goto label_506568;
        }
    }
    ctx->pc = 0x506560u;
    // 0x506560: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x506560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506564: 0x0  nop
    ctx->pc = 0x506564u;
    // NOP
label_506568:
    // 0x506568: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x506568u;
    {
        const bool branch_taken_0x506568 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x506568) {
            ctx->pc = 0x50656Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x506568u;
            // 0x50656c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5065B0u;
            goto label_5065b0;
        }
    }
    ctx->pc = 0x506570u;
    // 0x506570: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x506570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x506574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x506574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x506578: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x506578u;
    SET_GPR_U32(ctx, 31, 0x506580u);
    ctx->pc = 0x50657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506578u;
            // 0x50657c: 0x244502c0  addiu       $a1, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506580u; }
        if (ctx->pc != 0x506580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x506580u; }
        if (ctx->pc != 0x506580u) { return; }
    }
    ctx->pc = 0x506580u;
label_506580:
    // 0x506580: 0x3c03471c  lui         $v1, 0x471C
    ctx->pc = 0x506580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18204 << 16));
    // 0x506584: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x506584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x506588: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x506588u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x50658c: 0x0  nop
    ctx->pc = 0x50658cu;
    // NOP
    // 0x506590: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x506590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x506594: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x506594u;
    {
        const bool branch_taken_0x506594 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x506594) {
            ctx->pc = 0x5065ACu;
            goto label_5065ac;
        }
    }
    ctx->pc = 0x50659Cu;
    // 0x50659c: 0xc073234  jal         func_1CC8D0
    ctx->pc = 0x50659Cu;
    SET_GPR_U32(ctx, 31, 0x5065A4u);
    ctx->pc = 0x5065A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50659Cu;
            // 0x5065a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5065A4u; }
        if (ctx->pc != 0x5065A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5065A4u; }
        if (ctx->pc != 0x5065A4u) { return; }
    }
    ctx->pc = 0x5065A4u;
label_5065a4:
    // 0x5065a4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x5065A4u;
    {
        const bool branch_taken_0x5065a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5065a4) {
            ctx->pc = 0x5065C0u;
            goto label_5065c0;
        }
    }
    ctx->pc = 0x5065ACu;
label_5065ac:
    // 0x5065ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x5065acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_5065b0:
    // 0x5065b0: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x5065b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x5065b4: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x5065B4u;
    {
        const bool branch_taken_0x5065b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x5065B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5065B4u;
            // 0x5065b8: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5065b4) {
            ctx->pc = 0x506524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_506524;
        }
    }
    ctx->pc = 0x5065BCu;
    // 0x5065bc: 0x0  nop
    ctx->pc = 0x5065bcu;
    // NOP
label_5065c0:
    // 0x5065c0: 0xc6a00054  lwc1        $f0, 0x54($s5)
    ctx->pc = 0x5065c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5065c4: 0xe6a0005c  swc1        $f0, 0x5C($s5)
    ctx->pc = 0x5065c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 92), bits); }
    // 0x5065c8: 0xe6b40054  swc1        $f20, 0x54($s5)
    ctx->pc = 0x5065c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 84), bits); }
    // 0x5065cc: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x5065ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_5065d0:
    // 0x5065d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5065d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x5065d4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x5065d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x5065d8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x5065d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x5065dc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5065dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x5065e0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5065e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x5065e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5065e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x5065e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5065e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5065ec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5065ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5065f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5065F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5065F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5065F0u;
            // 0x5065f4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5065F8u;
    // 0x5065f8: 0x0  nop
    ctx->pc = 0x5065f8u;
    // NOP
    // 0x5065fc: 0x0  nop
    ctx->pc = 0x5065fcu;
    // NOP
    // 0x506600: 0x814174c  j           func_505D30
    ctx->pc = 0x506600u;
    ctx->pc = 0x506604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x506600u;
            // 0x506604: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x505D30u;
    {
        auto targetFn = runtime->lookupFunction(0x505D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x506608u;
    // 0x506608: 0x0  nop
    ctx->pc = 0x506608u;
    // NOP
    // 0x50660c: 0x0  nop
    ctx->pc = 0x50660cu;
    // NOP
}
