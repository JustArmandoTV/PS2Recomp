#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002153A8
// Address: 0x2153a8 - 0x216488
void sub_002153A8_0x2153a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002153A8_0x2153a8");
#endif

    switch (ctx->pc) {
        case 0x215410u: goto label_215410;
        case 0x215414u: goto label_215414;
        case 0x21543cu: goto label_21543c;
        case 0x2154a4u: goto label_2154a4;
        case 0x2154c4u: goto label_2154c4;
        case 0x2154fcu: goto label_2154fc;
        case 0x21565cu: goto label_21565c;
        case 0x2156acu: goto label_2156ac;
        case 0x21572cu: goto label_21572c;
        case 0x2157a0u: goto label_2157a0;
        case 0x2157d0u: goto label_2157d0;
        case 0x2158bcu: goto label_2158bc;
        case 0x215a14u: goto label_215a14;
        case 0x215ba0u: goto label_215ba0;
        case 0x215bbcu: goto label_215bbc;
        case 0x215bf4u: goto label_215bf4;
        case 0x215c14u: goto label_215c14;
        case 0x215c4cu: goto label_215c4c;
        case 0x215d78u: goto label_215d78;
        case 0x215e80u: goto label_215e80;
        case 0x215fd4u: goto label_215fd4;
        case 0x216318u: goto label_216318;
        case 0x216354u: goto label_216354;
        case 0x216370u: goto label_216370;
        case 0x2163a8u: goto label_2163a8;
        case 0x2163c4u: goto label_2163c4;
        case 0x2163f4u: goto label_2163f4;
        case 0x216410u: goto label_216410;
        default: break;
    }

    ctx->pc = 0x2153a8u;

    // 0x2153a8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2153a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2153ac: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x2153acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x2153b0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2153b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x2153b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2153b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153b8: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x2153b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x2153bc: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2153bcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153c0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x2153c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x2153c4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x2153c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x2153c8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x2153c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x2153cc: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x2153ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x2153d0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x2153d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x2153d4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x2153d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x2153d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2153d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2153dc: 0x4a31033c  vmove.w     $vf17, $vf0
    ctx->pc = 0x2153dcu;
    ctx->vu0_vf[17] = ctx->vu0_vf[0];
    // 0x2153e0: 0x4bc00443  vaddw.xyz   $vf17, $vf0, $vf0w
    ctx->pc = 0x2153e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2153e4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x2153e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2153e8: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x2153e8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153ec: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2153ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x2153f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2153f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2153f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2153f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2153f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2153fc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2153fcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215400: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x215400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x215404: 0x2454e7a0  addiu       $s4, $v0, -0x1860
    ctx->pc = 0x215404u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
    // 0x215408: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x215408u;
    {
        const bool branch_taken_0x215408 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21540Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215408u;
            // 0x21540c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215408) {
            ctx->pc = 0x21546Cu;
            goto label_21546c;
        }
    }
    ctx->pc = 0x215410u;
label_215410:
    // 0x215410: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215410u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_215414:
    // 0x215414: 0x2c62001d  sltiu       $v0, $v1, 0x1D
    ctx->pc = 0x215414u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x215418: 0x1040040d  beqz        $v0, . + 4 + (0x40D << 2)
    ctx->pc = 0x215418u;
    {
        const bool branch_taken_0x215418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21541Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215418u;
            // 0x21541c: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215418) {
            ctx->pc = 0x216450u;
            goto label_216450;
        }
    }
    ctx->pc = 0x215420u;
    // 0x215420: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x215420u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x215424: 0x2442e700  addiu       $v0, $v0, -0x1900
    ctx->pc = 0x215424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960896));
    // 0x215428: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21542c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21542cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215430: 0x800008  jr          $a0
    ctx->pc = 0x215430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215438u: goto label_215438;
            case 0x21549Cu: goto label_21549c;
            case 0x2154A4u: goto label_2154a4;
            case 0x2154FCu: goto label_2154fc;
            case 0x215624u: goto label_215624;
            case 0x2156C4u: goto label_2156c4;
            case 0x21574Cu: goto label_21574c;
            case 0x2157D0u: goto label_2157d0;
            case 0x2158BCu: goto label_2158bc;
            case 0x215A14u: goto label_215a14;
            case 0x215BA0u: goto label_215ba0;
            case 0x215BF4u: goto label_215bf4;
            case 0x215C4Cu: goto label_215c4c;
            case 0x215D78u: goto label_215d78;
            case 0x215E80u: goto label_215e80;
            case 0x215FD4u: goto label_215fd4;
            case 0x216180u: goto label_216180;
            case 0x216224u: goto label_216224;
            case 0x21626Cu: goto label_21626c;
            case 0x216300u: goto label_216300;
            case 0x21630Cu: goto label_21630c;
            case 0x216334u: goto label_216334;
            case 0x216388u: goto label_216388;
            case 0x2163D4u: goto label_2163d4;
            case 0x216450u: goto label_216450;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215438u;
label_215438:
    // 0x215438: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x215438u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21543c:
    // 0x21543c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x21543cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x215440: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x215440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x215444: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x215444u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x215448: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x215448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x21544c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x21544cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x215450: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x215450u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x215454: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x215454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215458: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x215458u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21545c: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21545cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x215460: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x215460u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x215464: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x215464u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x215468: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x215468u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_21546c:
    // 0x21546c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x21546cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x215470: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x215470u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x215474: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x215474u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x215478: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x215478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x21547c: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x21547cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x215480: 0x2c39021  addu        $s2, $s6, $v1
    ctx->pc = 0x215480u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x215484: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x215484u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x215488: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x215488u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x21548c: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x21548cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x215490: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x215490u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x215494: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x215494u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x215498: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x215498u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_21549c:
    // 0x21549c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x21549Cu;
    {
        const bool branch_taken_0x21549c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21549Cu;
            // 0x2154a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21549c) {
            ctx->pc = 0x215410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215410;
        }
    }
    ctx->pc = 0x2154A4u;
label_2154a4:
    // 0x2154a4: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x2154a4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2154a8: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x2154a8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2154ac: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x2154acu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2154b0: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x2154b0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2154b4: 0x4a000578  vcallms     0xA8
    ctx->pc = 0x2154b4u;
    {     ctx->vu0_tpc = 0xA8;     runtime->executeVU0Microprogram(rdram, ctx, 0xA8); }
    // 0x2154b8: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x2154b8u;
    // PREF instruction (ignored)
    // 0x2154bc: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2154BCu;
    SET_GPR_U32(ctx, 31, 0x2154C4u);
    ctx->pc = 0x2154C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2154BCu;
            // 0x2154c0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154C4u; }
        if (ctx->pc != 0x2154C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2154C4u; }
        if (ctx->pc != 0x2154C4u) { return; }
    }
    ctx->pc = 0x2154C4u;
label_2154c4:
    // 0x2154c4: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2154c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2154c8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2154c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2154cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2154ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2154d0: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2154d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2154d4: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x2154d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2154d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2154d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2154dc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2154dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2154e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2154e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2154e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2154e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2154e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2154e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2154ec: 0x10a4ffed  beq         $a1, $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2154ECu;
    {
        const bool branch_taken_0x2154ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2154F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2154ECu;
            // 0x2154f0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154ec) {
            ctx->pc = 0x2154A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2154a4;
        }
    }
    ctx->pc = 0x2154F4u;
    // 0x2154f4: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x2154F4u;
    {
        const bool branch_taken_0x2154f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2154F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2154F4u;
            // 0x2154f8: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2154f4) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x2154FCu;
label_2154fc:
    // 0x2154fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2154fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215500: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x215500u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215504: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x215504u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215508: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x215508u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x21550c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x21550cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x215510: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x215510u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x215514: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x215514u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x215518: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x215518u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x21551c: 0x4bd4f0a9  vmadd.xyz   $vf2, $vf30, $vf20
    ctx->pc = 0x21551cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215520: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x215520u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x215524: 0x4b0288fc  vmsubax.x   $ACC, $vf17, $vf2x
    ctx->pc = 0x215524u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x215528: 0x4b0288fd  vmsubay.x   $ACC, $vf17, $vf2y
    ctx->pc = 0x215528u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21552c: 0x4b02888e  vmsubz.x    $vf2, $vf17, $vf2z
    ctx->pc = 0x21552cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215530: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x215530u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x215534: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x215534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215538: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215538u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21553c: 0x0  nop
    ctx->pc = 0x21553cu;
    // NOP
    // 0x215540: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215540u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215544: 0x0  nop
    ctx->pc = 0x215544u;
    // NOP
    // 0x215548: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x215548u;
    {
        const bool branch_taken_0x215548 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21554Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215548u;
            // 0x21554c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215548) {
            ctx->pc = 0x215554u;
            goto label_215554;
        }
    }
    ctx->pc = 0x215550u;
    // 0x215550: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x215550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_215554:
    // 0x215554: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x215554u;
    {
        const bool branch_taken_0x215554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215554) {
            ctx->pc = 0x215558u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215554u;
            // 0x215558: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2155F4u;
            goto label_2155f4;
        }
    }
    ctx->pc = 0x21555Cu;
    // 0x21555c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21555cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215560: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x215560u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215564: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x215564u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x215568: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x215568u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x21556c: 0x4b0110ea  vmul.x      $vf3, $vf2, $vf1
    ctx->pc = 0x21556cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x215570: 0x48a42000  qmtc2.ni    $a0, $vf4
    ctx->pc = 0x215570u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x215574: 0xda020020  lqc2        $vf2, 0x20($s0)
    ctx->pc = 0x215574u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215578: 0x4b032068  vadd.x      $vf1, $vf4, $vf3
    ctx->pc = 0x215578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21557c: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x21557cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215580: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x215580u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215584: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x215584u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x215588: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x215588u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21558c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21558cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215590: 0x0  nop
    ctx->pc = 0x215590u;
    // NOP
    // 0x215594: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x215594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215598: 0x0  nop
    ctx->pc = 0x215598u;
    // NOP
    // 0x21559c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21559Cu;
    {
        const bool branch_taken_0x21559c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21559c) {
            ctx->pc = 0x2155A8u;
            goto label_2155a8;
        }
    }
    ctx->pc = 0x2155A4u;
    // 0x2155a4: 0x4b0410ec  vsub.x      $vf3, $vf2, $vf4
    ctx->pc = 0x2155a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2155a8:
    // 0x2155a8: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x2155a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2155ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2155acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2155b0: 0x0  nop
    ctx->pc = 0x2155b0u;
    // NOP
    // 0x2155b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2155b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2155b8: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2155b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2155bc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2155bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2155c0: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2155c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2155c4: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2155c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2155c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2155c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2155cc: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x2155ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2155d0: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x2155d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2155d4: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x2155d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2155d8: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x2155d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2155dc: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x2155dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x2155e0: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x2155e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2155e4: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x2155e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x2155e8: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x2155e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2155ec: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2155ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2155f0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2155f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2155f4:
    // 0x2155f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2155f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2155f8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2155f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2155fc: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x2155fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x215600: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215604: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x215604u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x215608: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21560c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x21560cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x215610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215614: 0x10a4ffb9  beq         $a1, $a0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x215614u;
    {
        const bool branch_taken_0x215614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215614u;
            // 0x215618: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215614) {
            ctx->pc = 0x2154FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2154fc;
        }
    }
    ctx->pc = 0x21561Cu;
    // 0x21561c: 0x1000ff7d  b           . + 4 + (-0x83 << 2)
    ctx->pc = 0x21561Cu;
    {
        const bool branch_taken_0x21561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21561Cu;
            // 0x215620: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21561c) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215624u;
label_215624:
    // 0x215624: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x215624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215628: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x215628u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x21562c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x21562cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215630: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x215630u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215634: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x215634u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215638: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x215638u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21563c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x21563cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215640: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x215640u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x215644: 0x48a48000  qmtc2.ni    $a0, $vf16
    ctx->pc = 0x215644u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x215648: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x215648u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21564c: 0x4a000b38  vcallms     0x160
    ctx->pc = 0x21564cu;
    {     ctx->vu0_tpc = 0x160;     runtime->executeVU0Microprogram(rdram, ctx, 0x160); }
    // 0x215650: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x215650u;
    // PREF instruction (ignored)
    // 0x215654: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x215654u;
    SET_GPR_U32(ctx, 31, 0x21565Cu);
    ctx->pc = 0x215658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215654u;
            // 0x215658: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21565Cu; }
        if (ctx->pc != 0x21565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21565Cu; }
        if (ctx->pc != 0x21565Cu) { return; }
    }
    ctx->pc = 0x21565Cu;
label_21565c:
    // 0x21565c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x21565cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215660: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x215660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x215664: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x215664u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215668: 0x38420013  xori        $v0, $v0, 0x13
    ctx->pc = 0x215668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)19);
    // 0x21566c: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x21566Cu;
    {
        const bool branch_taken_0x21566c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x215670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21566Cu;
            // 0x215670: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21566c) {
            ctx->pc = 0x215410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215410;
        }
    }
    ctx->pc = 0x215674u;
    // 0x215674: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x215674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215678: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x215678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x21567c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x21567cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215680: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x215680u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215684: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x215684u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215688: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x215688u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21568c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x21568cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215690: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x215690u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x215694: 0x48a58000  qmtc2.ni    $a1, $vf16
    ctx->pc = 0x215694u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x215698: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x215698u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21569c: 0x4a000b38  vcallms     0x160
    ctx->pc = 0x21569cu;
    {     ctx->vu0_tpc = 0x160;     runtime->executeVU0Microprogram(rdram, ctx, 0x160); }
    // 0x2156a0: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x2156a0u;
    // PREF instruction (ignored)
    // 0x2156a4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2156A4u;
    SET_GPR_U32(ctx, 31, 0x2156ACu);
    ctx->pc = 0x2156A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2156A4u;
            // 0x2156a8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156ACu; }
        if (ctx->pc != 0x2156ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2156ACu; }
        if (ctx->pc != 0x2156ACu) { return; }
    }
    ctx->pc = 0x2156ACu;
label_2156ac:
    // 0x2156ac: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2156acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2156b0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x2156b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2156b4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2156b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2156b8: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x2156b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
    // 0x2156bc: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x2156BCu;
    {
        const bool branch_taken_0x2156bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2156C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2156BCu;
            // 0x2156c0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2156bc) {
            ctx->pc = 0x215410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215410;
        }
    }
    ctx->pc = 0x2156C4u;
label_2156c4:
    // 0x2156c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2156c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2156c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2156c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2156cc: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x2156ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2156d0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2156d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2156d4: 0xc6080080  lwc1        $f8, 0x80($s0)
    ctx->pc = 0x2156d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2156d8: 0xc6070088  lwc1        $f7, 0x88($s0)
    ctx->pc = 0x2156d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2156dc: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x2156dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2156e0: 0x44034000  mfc1        $v1, $f8
    ctx->pc = 0x2156e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2156e4: 0x44043800  mfc1        $a0, $f7
    ctx->pc = 0x2156e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2156e8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x2156e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2156ec: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x2156ecu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2156f0: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x2156f0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2156f4: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x2156f4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2156f8: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x2156f8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2156fc: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x2156fcu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215700: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x215700u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x215704: 0xda180060  lqc2        $vf24, 0x60($s0)
    ctx->pc = 0x215704u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x215708: 0xda190070  lqc2        $vf25, 0x70($s0)
    ctx->pc = 0x215708u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x21570c: 0x48a38001  qmtc2.i     $v1, $vf16
    ctx->pc = 0x21570cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x215710: 0x48287800  qmfc2.ni    $t0, $vf15
    ctx->pc = 0x215710u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x215714: 0x48a47800  qmtc2.ni    $a0, $vf15
    ctx->pc = 0x215714u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x215718: 0x48a57000  qmtc2.ni    $a1, $vf14
    ctx->pc = 0x215718u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x21571c: 0x4a0021b8  vcallms     0x430
    ctx->pc = 0x21571cu;
    {     ctx->vu0_tpc = 0x430;     runtime->executeVU0Microprogram(rdram, ctx, 0x430); }
    // 0x215720: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x215720u;
    // PREF instruction (ignored)
    // 0x215724: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x215724u;
    SET_GPR_U32(ctx, 31, 0x21572Cu);
    ctx->pc = 0x215728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215724u;
            // 0x215728: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21572Cu; }
        if (ctx->pc != 0x21572Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21572Cu; }
        if (ctx->pc != 0x21572Cu) { return; }
    }
    ctx->pc = 0x21572Cu;
label_21572c:
    // 0x21572c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x21572cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215730: 0x48287001  qmfc2.i     $t0, $vf14
    ctx->pc = 0x215730u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x215734: 0x4a003778  vcallms     0x6E8
    ctx->pc = 0x215734u;
    {     ctx->vu0_tpc = 0x6E8;     runtime->executeVU0Microprogram(rdram, ctx, 0x6E8); }
    // 0x215738: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x215738u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x21573c: 0x82030090  lb          $v1, 0x90($s0)
    ctx->pc = 0x21573cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x215740: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x215740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x215744: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x215744u;
    {
        const bool branch_taken_0x215744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215744u;
            // 0x215748: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215744) {
            ctx->pc = 0x2157BCu;
            goto label_2157bc;
        }
    }
    ctx->pc = 0x21574Cu;
label_21574c:
    // 0x21574c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21574cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215750: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215754: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x215754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x215758: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x215758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x21575c: 0xc6070060  lwc1        $f7, 0x60($s0)
    ctx->pc = 0x21575cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x215760: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x215760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215764: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x215764u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x215768: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x215768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x21576c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x21576cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215770: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x215770u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215774: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x215774u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215778: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x215778u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21577c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x21577cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215780: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x215780u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x215784: 0x48a38000  qmtc2.ni    $v1, $vf16
    ctx->pc = 0x215784u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x215788: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x215788u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21578c: 0x48a47000  qmtc2.ni    $a0, $vf14
    ctx->pc = 0x21578cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x215790: 0x4a002db8  vcallms     0x5B0
    ctx->pc = 0x215790u;
    {     ctx->vu0_tpc = 0x5B0;     runtime->executeVU0Microprogram(rdram, ctx, 0x5B0); }
    // 0x215794: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x215794u;
    // PREF instruction (ignored)
    // 0x215798: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x215798u;
    SET_GPR_U32(ctx, 31, 0x2157A0u);
    ctx->pc = 0x21579Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215798u;
            // 0x21579c: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157A0u; }
        if (ctx->pc != 0x2157A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2157A0u; }
        if (ctx->pc != 0x2157A0u) { return; }
    }
    ctx->pc = 0x2157A0u;
label_2157a0:
    // 0x2157a0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2157a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157a4: 0x48287001  qmfc2.i     $t0, $vf14
    ctx->pc = 0x2157a4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x2157a8: 0x4a003c78  vcallms     0x788
    ctx->pc = 0x2157a8u;
    {     ctx->vu0_tpc = 0x788;     runtime->executeVU0Microprogram(rdram, ctx, 0x788); }
    // 0x2157ac: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x2157acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x2157b0: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x2157b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2157b4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x2157b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2157b8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x2157b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2157bc:
    // 0x2157bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2157bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2157c0: 0x5062ff1e  beql        $v1, $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x2157C0u;
    {
        const bool branch_taken_0x2157c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2157c0) {
            ctx->pc = 0x2157C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2157C0u;
            // 0x2157c4: 0x96030004  lhu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21543Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21543c;
        }
    }
    ctx->pc = 0x2157C8u;
    // 0x2157c8: 0x1000ff12  b           . + 4 + (-0xEE << 2)
    ctx->pc = 0x2157C8u;
    {
        const bool branch_taken_0x2157c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2157CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2157C8u;
            // 0x2157cc: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2157c8) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x2157D0u;
label_2157d0:
    // 0x2157d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2157d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2157d4: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x2157d4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2157d8: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x2157d8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2157dc: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2157dcu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2157e0: 0x4bd8dabe  vmula.xyz   $ACC, $vf27, $vf24
    ctx->pc = 0x2157e0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[24]);
    // 0x2157e4: 0x4bd9f369  vmadd.xyz   $vf13, $vf30, $vf25
    ctx->pc = 0x2157e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2157e8: 0x4b1989bf  vmulaw.x    $ACC, $vf17, $vf25w
    ctx->pc = 0x2157e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2157ec: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2157ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2157f0: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x2157f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2157f4: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x2157f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2157f8: 0x48256800  qmfc2.ni    $a1, $vf13
    ctx->pc = 0x2157f8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2157fc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2157fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215800: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x215800u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215804: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x215804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215808: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x215808u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21580c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x21580cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x215810: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x215810u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215814: 0x0  nop
    ctx->pc = 0x215814u;
    // NOP
    // 0x215818: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x215818u;
    {
        const bool branch_taken_0x215818 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215818) {
            ctx->pc = 0x215838u;
            goto label_215838;
        }
    }
    ctx->pc = 0x215820u;
    // 0x215820: 0x0  nop
    ctx->pc = 0x215820u;
    // NOP
    // 0x215824: 0x0  nop
    ctx->pc = 0x215824u;
    // NOP
    // 0x215828: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x215828u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x21582c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x21582cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x215830: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x215830u;
    {
        const bool branch_taken_0x215830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215830u;
            // 0x215834: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215830) {
            ctx->pc = 0x215848u;
            goto label_215848;
        }
    }
    ctx->pc = 0x215838u;
label_215838:
    // 0x215838: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x21583c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x21583cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215840: 0x0  nop
    ctx->pc = 0x215840u;
    // NOP
    // 0x215844: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x215844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_215848:
    // 0x215848: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x215848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21584c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21584cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x215850: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x215850u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215854: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x215854u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215858: 0x0  nop
    ctx->pc = 0x215858u;
    // NOP
    // 0x21585c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x21585cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215860: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215860u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215864: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x215864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215868: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215868u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21586c: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x21586cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215870: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215870u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215874: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x215874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215878: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x215878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21587c: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x21587cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215880: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x215880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215884: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x215884u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x215888: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215888u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21588c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x21588cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x215890: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x215890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x215894: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x215898: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21589c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x21589cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2158a0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2158a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2158a4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2158a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2158a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2158a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2158ac: 0x10a4ffc8  beq         $a1, $a0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x2158ACu;
    {
        const bool branch_taken_0x2158ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2158B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2158ACu;
            // 0x2158b0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158ac) {
            ctx->pc = 0x2157D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2157d0;
        }
    }
    ctx->pc = 0x2158B4u;
    // 0x2158b4: 0x1000fed7  b           . + 4 + (-0x129 << 2)
    ctx->pc = 0x2158B4u;
    {
        const bool branch_taken_0x2158b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2158B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2158B4u;
            // 0x2158b8: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2158b4) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x2158BCu;
label_2158bc:
    // 0x2158bc: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x2158bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2158c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2158c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158c4: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x2158c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2158c8: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x2158c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2158cc: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x2158ccu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2158d0: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x2158d0u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2158d4: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2158d4u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2158d8: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x2158d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2158dc: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x2158dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2158e0: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x2158e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2158e4: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x2158e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2158e8: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x2158e8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x2158ec: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x2158ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2158f0: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x2158f0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x2158f4: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x2158f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2158f8: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x2158f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2158fc: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x2158fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215900: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x215900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x215904: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x215904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215908: 0x48245800  qmfc2.ni    $a0, $vf11
    ctx->pc = 0x215908u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x21590c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21590cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215910: 0x48256000  qmfc2.ni    $a1, $vf12
    ctx->pc = 0x215910u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x215914: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x215914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215918: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x215918u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x21591c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x21591cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x215920: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x215920u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x215924: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x215924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215928: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x215928u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x21592c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x21592cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x215930: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x215930u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x215934: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x215934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215938: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x215938u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21593c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x21593cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x215940: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x215940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x215944: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x215944u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215948: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x215948u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21594c: 0x0  nop
    ctx->pc = 0x21594cu;
    // NOP
    // 0x215950: 0x46041041  sub.s       $f1, $f2, $f4
    ctx->pc = 0x215950u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x215954: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x215954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215958: 0x0  nop
    ctx->pc = 0x215958u;
    // NOP
    // 0x21595c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x21595Cu;
    {
        const bool branch_taken_0x21595c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21595c) {
            ctx->pc = 0x215960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21595Cu;
            // 0x215960: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x215984u;
            goto label_215984;
        }
    }
    ctx->pc = 0x215964u;
    // 0x215964: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x215964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215968: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x215968u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x21596c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x21596cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x215970: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x215970u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x215974: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x215974u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215978: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x215978u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21597c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x21597Cu;
    {
        const bool branch_taken_0x21597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21597c) {
            ctx->pc = 0x2159B0u;
            goto label_2159b0;
        }
    }
    ctx->pc = 0x215984u;
label_215984:
    // 0x215984: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x215984u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x215988: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x215988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21598c: 0x0  nop
    ctx->pc = 0x21598cu;
    // NOP
    // 0x215990: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x215990u;
    {
        const bool branch_taken_0x215990 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215990) {
            ctx->pc = 0x215994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215990u;
            // 0x215994: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2159E4u;
            goto label_2159e4;
        }
    }
    ctx->pc = 0x215998u;
    // 0x215998: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x215998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21599c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21599cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2159a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2159a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2159a4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2159a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2159a8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2159a8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2159ac: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2159acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2159b0:
    // 0x2159b0: 0x0  nop
    ctx->pc = 0x2159b0u;
    // NOP
    // 0x2159b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2159b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2159b8: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2159b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2159bc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2159bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2159c0: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2159c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2159c4: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2159c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2159c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2159c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2159cc: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x2159ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2159d0: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x2159d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2159d4: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x2159d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x2159d8: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x2159d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2159dc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2159dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2159e0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2159e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2159e4:
    // 0x2159e4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2159e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2159e8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2159e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2159ec: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x2159ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2159f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2159f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2159f4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2159f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2159f8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2159f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2159fc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2159fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x215a00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215a00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215a04: 0x10a4ffad  beq         $a1, $a0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x215A04u;
    {
        const bool branch_taken_0x215a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215A04u;
            // 0x215a08: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a04) {
            ctx->pc = 0x2158BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2158bc;
        }
    }
    ctx->pc = 0x215A0Cu;
    // 0x215a0c: 0x1000fe81  b           . + 4 + (-0x17F << 2)
    ctx->pc = 0x215A0Cu;
    {
        const bool branch_taken_0x215a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215A0Cu;
            // 0x215a10: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215a0c) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215A14u;
label_215a14:
    // 0x215a14: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x215a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x215a18: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x215a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215a1c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x215a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215a20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x215a20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215a24: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x215a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215a28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x215a28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x215a2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215a2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215a30: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x215a30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x215a34: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x215a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215a38: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x215a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x215a3c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x215a3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x215a40: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x215a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215a44: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x215a44u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215a48: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x215a48u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215a4c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x215a4cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x215a50: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x215a50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x215a54: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x215a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x215a58: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x215a58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215a5c: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x215a5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x215a60: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x215a60u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x215a64: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x215a64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215a68: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x215a68u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x215a6c: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x215a6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215a70: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x215a70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x215a74: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x215a74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215a78: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x215a78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x215a7c: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x215a7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215a80: 0x48245800  qmfc2.ni    $a0, $vf11
    ctx->pc = 0x215a80u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x215a84: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x215a84u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215a88: 0x48256000  qmfc2.ni    $a1, $vf12
    ctx->pc = 0x215a88u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x215a8c: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x215a8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215a90: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x215a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x215a94: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x215a94u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x215a98: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x215a98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x215a9c: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x215a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215aa0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x215aa0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x215aa4: 0xc6060020  lwc1        $f6, 0x20($s0)
    ctx->pc = 0x215aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x215aa8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x215aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x215aac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x215aacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215ab0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x215ab0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x215ab4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x215ab4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x215ab8: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x215ab8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x215abc: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x215abcu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215ac0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x215ac0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215ac4: 0x0  nop
    ctx->pc = 0x215ac4u;
    // NOP
    // 0x215ac8: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x215ac8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x215acc: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x215accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215ad0: 0x0  nop
    ctx->pc = 0x215ad0u;
    // NOP
    // 0x215ad4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x215AD4u;
    {
        const bool branch_taken_0x215ad4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215ad4) {
            ctx->pc = 0x215AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215AD4u;
            // 0x215ad8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x215AF4u;
            goto label_215af4;
        }
    }
    ctx->pc = 0x215ADCu;
    // 0x215adc: 0x0  nop
    ctx->pc = 0x215adcu;
    // NOP
    // 0x215ae0: 0x0  nop
    ctx->pc = 0x215ae0u;
    // NOP
    // 0x215ae4: 0x46013003  div.s       $f0, $f6, $f1
    ctx->pc = 0x215ae4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[1];
    // 0x215ae8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x215ae8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x215aec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x215AECu;
    {
        const bool branch_taken_0x215aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215AECu;
            // 0x215af0: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215aec) {
            ctx->pc = 0x215B2Cu;
            goto label_215b2c;
        }
    }
    ctx->pc = 0x215AF4u;
label_215af4:
    // 0x215af4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x215af4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215af8: 0x0  nop
    ctx->pc = 0x215af8u;
    // NOP
    // 0x215afc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x215AFCu;
    {
        const bool branch_taken_0x215afc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215afc) {
            ctx->pc = 0x215B1Cu;
            goto label_215b1c;
        }
    }
    ctx->pc = 0x215B04u;
    // 0x215b04: 0x0  nop
    ctx->pc = 0x215b04u;
    // NOP
    // 0x215b08: 0x0  nop
    ctx->pc = 0x215b08u;
    // NOP
    // 0x215b0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x215b0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x215b10: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x215b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x215b14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x215B14u;
    {
        const bool branch_taken_0x215b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215B14u;
            // 0x215b18: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b14) {
            ctx->pc = 0x215B2Cu;
            goto label_215b2c;
        }
    }
    ctx->pc = 0x215B1Cu;
label_215b1c:
    // 0x215b1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215b1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215b20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215b20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215b24: 0x0  nop
    ctx->pc = 0x215b24u;
    // NOP
    // 0x215b28: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x215b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_215b2c:
    // 0x215b2c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x215b2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x215b30: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x215b30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x215b34: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x215b34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215b38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215b38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215b3c: 0x0  nop
    ctx->pc = 0x215b3cu;
    // NOP
    // 0x215b40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215b40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215b44: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215b44u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215b48: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x215b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215b4c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215b4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215b50: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215b50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215b54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215b54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215b58: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x215b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215b5c: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x215b5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215b60: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x215b60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215b64: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x215b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215b68: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x215b68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x215b6c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215b6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215b70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x215b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x215b74: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x215b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x215b78: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x215b78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215b7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215b80: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x215b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x215b84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215b84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215b88: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x215b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x215b8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215b90: 0x10a4ffa0  beq         $a1, $a0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x215B90u;
    {
        const bool branch_taken_0x215b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215B90u;
            // 0x215b94: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b90) {
            ctx->pc = 0x215A14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215a14;
        }
    }
    ctx->pc = 0x215B98u;
    // 0x215b98: 0x1000fe1e  b           . + 4 + (-0x1E2 << 2)
    ctx->pc = 0x215B98u;
    {
        const bool branch_taken_0x215b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215B98u;
            // 0x215b9c: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215b98) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215BA0u;
label_215ba0:
    // 0x215ba0: 0xda130000  lqc2        $vf19, 0x0($s0)
    ctx->pc = 0x215ba0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215ba4: 0xda140010  lqc2        $vf20, 0x10($s0)
    ctx->pc = 0x215ba4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215ba8: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x215ba8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x215bac: 0x4a001e78  vcallms     0x3C8
    ctx->pc = 0x215bacu;
    {     ctx->vu0_tpc = 0x3C8;     runtime->executeVU0Microprogram(rdram, ctx, 0x3C8); }
    // 0x215bb0: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x215bb0u;
    // PREF instruction (ignored)
    // 0x215bb4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x215BB4u;
    SET_GPR_U32(ctx, 31, 0x215BBCu);
    ctx->pc = 0x215BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215BB4u;
            // 0x215bb8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BBCu; }
        if (ctx->pc != 0x215BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215BBCu; }
        if (ctx->pc != 0x215BBCu) { return; }
    }
    ctx->pc = 0x215BBCu;
label_215bbc:
    // 0x215bbc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x215bbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215bc0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215bc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215bc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x215bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x215bc8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x215bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x215bcc: 0x82050020  lb          $a1, 0x20($s0)
    ctx->pc = 0x215bccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215bd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215bd4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x215bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x215bd8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215bd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215bdc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x215bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x215be0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215be4: 0x10a4ffee  beq         $a1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x215BE4u;
    {
        const bool branch_taken_0x215be4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215BE4u;
            // 0x215be8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215be4) {
            ctx->pc = 0x215BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215ba0;
        }
    }
    ctx->pc = 0x215BECu;
    // 0x215bec: 0x1000fe09  b           . + 4 + (-0x1F7 << 2)
    ctx->pc = 0x215BECu;
    {
        const bool branch_taken_0x215bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215BECu;
            // 0x215bf0: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215bec) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215BF4u;
label_215bf4:
    // 0x215bf4: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x215bf4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215bf8: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x215bf8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215bfc: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x215bfcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x215c00: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x215c00u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x215c04: 0x4a000038  vcallms     0x0
    ctx->pc = 0x215c04u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
    // 0x215c08: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x215c08u;
    // PREF instruction (ignored)
    // 0x215c0c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x215C0Cu;
    SET_GPR_U32(ctx, 31, 0x215C14u);
    ctx->pc = 0x215C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215C0Cu;
            // 0x215c10: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C14u; }
        if (ctx->pc != 0x215C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215C14u; }
        if (ctx->pc != 0x215C14u) { return; }
    }
    ctx->pc = 0x215C14u;
label_215c14:
    // 0x215c14: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x215c14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c18: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215c1c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x215c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x215c20: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x215c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x215c24: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x215c24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x215c28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215c2c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x215c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x215c30: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215c34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x215c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x215c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215c3c: 0x10a4ffed  beq         $a1, $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x215C3Cu;
    {
        const bool branch_taken_0x215c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215C3Cu;
            // 0x215c40: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c3c) {
            ctx->pc = 0x215BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215bf4;
        }
    }
    ctx->pc = 0x215C44u;
    // 0x215c44: 0x1000fdf3  b           . + 4 + (-0x20D << 2)
    ctx->pc = 0x215C44u;
    {
        const bool branch_taken_0x215c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215C44u;
            // 0x215c48: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215c44) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215C4Cu;
label_215c4c:
    // 0x215c4c: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x215c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x215c50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x215c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215c54: 0xc6050034  lwc1        $f5, 0x34($s0)
    ctx->pc = 0x215c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x215c58: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x215c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215c5c: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x215c5cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215c60: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x215c60u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215c64: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x215c64u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x215c68: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x215c68u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x215c6c: 0xda610040  lqc2        $vf1, 0x40($s3)
    ctx->pc = 0x215c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x215c70: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x215c70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x215c74: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x215c74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x215c78: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x215c78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x215c7c: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x215c7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215c80: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x215c80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215c84: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x215c84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x215c88: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x215c88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x215c8c: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x215c8cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x215c90: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x215c90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x215c94: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x215c94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x215c98: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x215c98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215c9c: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x215c9cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x215ca0: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x215ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x215ca4: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x215ca4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x215ca8: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x215ca8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215cac: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x215cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x215cb0: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x215cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215cb4: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x215cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x215cb8: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x215cb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215cbc: 0x48235800  qmfc2.ni    $v1, $vf11
    ctx->pc = 0x215cbcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x215cc0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x215cc0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215cc4: 0x48246000  qmfc2.ni    $a0, $vf12
    ctx->pc = 0x215cc4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x215cc8: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x215cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215ccc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x215cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x215cd0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x215cd0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x215cd4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x215cd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x215cd8: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x215cd8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x215cdc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x215cdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x215ce0: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x215ce0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215ce4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x215ce4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x215ce8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x215ce8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x215cec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x215cecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x215cf0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x215cf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x215cf4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x215cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x215cf8: 0x4b02086a  vmul.x      $vf1, $vf1, $vf2
    ctx->pc = 0x215cf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x215cfc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x215cfcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215d00: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215d04: 0x0  nop
    ctx->pc = 0x215d04u;
    // NOP
    // 0x215d08: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215d08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215d0c: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215d0cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215d10: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x215d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215d14: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215d18: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215d18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215d1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215d1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215d20: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x215d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215d24: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x215d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x215d28: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x215d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x215d2c: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x215d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215d30: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x215d30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x215d34: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x215d34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x215d38: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x215d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215d3c: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x215d3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215d40: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x215d40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x215d44: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215d44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215d48: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x215d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x215d4c: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x215d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x215d50: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x215d50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215d54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215d58: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x215d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x215d5c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215d5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215d60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x215d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x215d64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215d64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215d68: 0x10a4ffb8  beq         $a1, $a0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x215D68u;
    {
        const bool branch_taken_0x215d68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215D68u;
            // 0x215d6c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d68) {
            ctx->pc = 0x215C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215c4c;
        }
    }
    ctx->pc = 0x215D70u;
    // 0x215d70: 0x1000fda8  b           . + 4 + (-0x258 << 2)
    ctx->pc = 0x215D70u;
    {
        const bool branch_taken_0x215d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215D70u;
            // 0x215d74: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215d70) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215D78u;
label_215d78:
    // 0x215d78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x215d78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215d7c: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x215d7cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215d80: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x215d80u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215d84: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x215d84u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x215d88: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x215d88u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x215d8c: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x215d8cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x215d90: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x215d90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x215d94: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x215d94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x215d98: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x215d98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215d9c: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x215d9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x215da0: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x215da0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x215da4: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x215da4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x215da8: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x215da8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215dac: 0x48236800  qmfc2.ni    $v1, $vf13
    ctx->pc = 0x215dacu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x215db0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x215db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215db4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x215db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x215db8: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x215db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215dbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x215dbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x215dc0: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x215dc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x215dc4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x215dc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215dc8: 0x0  nop
    ctx->pc = 0x215dc8u;
    // NOP
    // 0x215dcc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x215DCCu;
    {
        const bool branch_taken_0x215dcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215dcc) {
            ctx->pc = 0x215DECu;
            goto label_215dec;
        }
    }
    ctx->pc = 0x215DD4u;
    // 0x215dd4: 0x0  nop
    ctx->pc = 0x215dd4u;
    // NOP
    // 0x215dd8: 0x0  nop
    ctx->pc = 0x215dd8u;
    // NOP
    // 0x215ddc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x215ddcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x215de0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x215de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x215de4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x215DE4u;
    {
        const bool branch_taken_0x215de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215DE4u;
            // 0x215de8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x215de4) {
            ctx->pc = 0x215DFCu;
            goto label_215dfc;
        }
    }
    ctx->pc = 0x215DECu;
label_215dec:
    // 0x215dec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x215decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x215df0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x215df0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215df4: 0x0  nop
    ctx->pc = 0x215df4u;
    // NOP
    // 0x215df8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x215df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_215dfc:
    // 0x215dfc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x215dfcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x215e00: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x215e00u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x215e04: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x215e04u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215e08: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x215e08u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215e0c: 0x0  nop
    ctx->pc = 0x215e0cu;
    // NOP
    // 0x215e10: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215e10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215e14: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215e14u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215e18: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x215e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215e1c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215e1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215e20: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215e24: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215e24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215e28: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x215e28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215e2c: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x215e2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x215e30: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x215e30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x215e34: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x215e34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215e38: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x215e38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x215e3c: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x215e3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x215e40: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x215e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215e44: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x215e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215e48: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x215e48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x215e4c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215e4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x215e50: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x215e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x215e54: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x215e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x215e58: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x215e58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215e5c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215e60: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x215e60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x215e64: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215e64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215e68: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x215e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x215e6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215e70: 0x10a4ffc1  beq         $a1, $a0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x215E70u;
    {
        const bool branch_taken_0x215e70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215E70u;
            // 0x215e74: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e70) {
            ctx->pc = 0x215D78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215d78;
        }
    }
    ctx->pc = 0x215E78u;
    // 0x215e78: 0x1000fd66  b           . + 4 + (-0x29A << 2)
    ctx->pc = 0x215E78u;
    {
        const bool branch_taken_0x215e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215E78u;
            // 0x215e7c: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215e78) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215E80u;
label_215e80:
    // 0x215e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x215e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215e84: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x215e84u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x215e88: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x215e88u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x215e8c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x215e8cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x215e90: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x215e90u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x215e94: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x215e94u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x215e98: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x215e98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x215e9c: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x215e9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x215ea0: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x215ea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215ea4: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x215ea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x215ea8: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x215ea8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x215eac: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x215eacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x215eb0: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x215eb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x215eb4: 0x48226800  qmfc2.ni    $v0, $vf13
    ctx->pc = 0x215eb4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x215eb8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x215eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215ebc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x215ebcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215ec0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x215ec0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x215ec4: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x215ec4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x215ec8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x215ec8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215ecc: 0x0  nop
    ctx->pc = 0x215eccu;
    // NOP
    // 0x215ed0: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x215ED0u;
    {
        const bool branch_taken_0x215ed0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215ed0) {
            ctx->pc = 0x215ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215ED0u;
            // 0x215ed4: 0xc6000034  lwc1        $f0, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x215F34u;
            goto label_215f34;
        }
    }
    ctx->pc = 0x215ED8u;
    // 0x215ed8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x215ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215edc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x215edcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x215ee0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x215ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x215ee4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x215ee4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x215ee8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x215ee8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215eec: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x215eecu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215ef0: 0x0  nop
    ctx->pc = 0x215ef0u;
    // NOP
    // 0x215ef4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215ef4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215ef8: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215ef8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215efc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x215efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215f00: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215f00u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215f04: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215f04u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215f08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215f0c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x215f0cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215f10: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x215f10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x215f14: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x215f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x215f18: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x215f18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215f1c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x215f1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x215f20: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x215f20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x215f24: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x215f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215f28: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x215f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215f2c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x215f2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x215f30: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x215f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_215f34:
    // 0x215f34: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x215f34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x215f38: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x215f38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215f3c: 0x0  nop
    ctx->pc = 0x215f3cu;
    // NOP
    // 0x215f40: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x215F40u;
    {
        const bool branch_taken_0x215f40 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x215f40) {
            ctx->pc = 0x215F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215F40u;
            // 0x215f44: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215FA4u;
            goto label_215fa4;
        }
    }
    ctx->pc = 0x215F48u;
    // 0x215f48: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x215f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215f4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x215f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x215f50: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x215f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x215f54: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x215f54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x215f58: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x215f58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x215f5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x215f5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x215f60: 0x0  nop
    ctx->pc = 0x215f60u;
    // NOP
    // 0x215f64: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x215f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x215f68: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x215f68u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x215f6c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x215f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215f70: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x215f70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215f74: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x215f74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x215f78: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215f78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215f7c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x215f7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x215f80: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x215f80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x215f84: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x215f84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x215f88: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x215f88u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x215f8c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x215f8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x215f90: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x215f90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x215f94: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x215f94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x215f98: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x215f98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x215f9c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x215f9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x215fa0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x215fa0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_215fa4:
    // 0x215fa4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x215fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x215fa8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x215fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x215fac: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x215facu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x215fb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x215fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x215fb4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x215fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x215fb8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x215fb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x215fbc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x215fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x215fc0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x215fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x215fc4: 0x10a4ffae  beq         $a1, $a0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x215FC4u;
    {
        const bool branch_taken_0x215fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x215FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215FC4u;
            // 0x215fc8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fc4) {
            ctx->pc = 0x215E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215e80;
        }
    }
    ctx->pc = 0x215FCCu;
    // 0x215fcc: 0x1000fd11  b           . + 4 + (-0x2EF << 2)
    ctx->pc = 0x215FCCu;
    {
        const bool branch_taken_0x215fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215FCCu;
            // 0x215fd0: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215fcc) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x215FD4u;
label_215fd4:
    // 0x215fd4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x215fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x215fd8: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x215fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215fdc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x215fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215fe0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x215fe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215fe4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x215fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215fe8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x215fe8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x215fec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x215fecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x215ff0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x215ff0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x215ff4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x215ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x215ff8: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x215ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x215ffc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x215ffcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x216000: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x216000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x216004: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x216004u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216008: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x216008u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21600c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x21600cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x216010: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x216010u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x216014: 0xda610040  lqc2        $vf1, 0x40($s3)
    ctx->pc = 0x216014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x216018: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x216018u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x21601c: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x21601cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x216020: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x216020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x216024: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x216024u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216028: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x216028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21602c: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x21602cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x216030: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x216030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x216034: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x216034u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x216038: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x216038u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x21603c: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x21603cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x216040: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x216040u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216044: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x216044u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x216048: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x216048u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x21604c: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x21604cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x216050: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x216050u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216054: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x216054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216058: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x216058u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21605c: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x21605cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216060: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x216060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216064: 0x48245800  qmfc2.ni    $a0, $vf11
    ctx->pc = 0x216064u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x216068: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x216068u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21606c: 0x48256000  qmfc2.ni    $a1, $vf12
    ctx->pc = 0x21606cu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x216070: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x216070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216074: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x216074u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x216078: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x216078u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21607c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x21607cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x216080: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x216080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x216084: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x216084u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x216088: 0xc6060030  lwc1        $f6, 0x30($s0)
    ctx->pc = 0x216088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21608c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21608cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x216090: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216090u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216094: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x216094u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x216098: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x216098u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x21609c: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x21609cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2160a0: 0x0  nop
    ctx->pc = 0x2160a0u;
    // NOP
    // 0x2160a4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2160A4u;
    {
        const bool branch_taken_0x2160a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2160a4) {
            ctx->pc = 0x2160A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2160A4u;
            // 0x2160a8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2160C4u;
            goto label_2160c4;
        }
    }
    ctx->pc = 0x2160ACu;
    // 0x2160ac: 0x0  nop
    ctx->pc = 0x2160acu;
    // NOP
    // 0x2160b0: 0x0  nop
    ctx->pc = 0x2160b0u;
    // NOP
    // 0x2160b4: 0x46023003  div.s       $f0, $f6, $f2
    ctx->pc = 0x2160b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[2];
    // 0x2160b8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2160b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2160bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2160BCu;
    {
        const bool branch_taken_0x2160bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160BCu;
            // 0x2160c0: 0xc6020030  lwc1        $f2, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160bc) {
            ctx->pc = 0x2160FCu;
            goto label_2160fc;
        }
    }
    ctx->pc = 0x2160C4u;
label_2160c4:
    // 0x2160c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2160c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2160c8: 0x0  nop
    ctx->pc = 0x2160c8u;
    // NOP
    // 0x2160cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2160CCu;
    {
        const bool branch_taken_0x2160cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2160cc) {
            ctx->pc = 0x2160ECu;
            goto label_2160ec;
        }
    }
    ctx->pc = 0x2160D4u;
    // 0x2160d4: 0x0  nop
    ctx->pc = 0x2160d4u;
    // NOP
    // 0x2160d8: 0x0  nop
    ctx->pc = 0x2160d8u;
    // NOP
    // 0x2160dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2160dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2160e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2160e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2160e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2160E4u;
    {
        const bool branch_taken_0x2160e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2160E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2160E4u;
            // 0x2160e8: 0xc4620004  lwc1        $f2, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2160e4) {
            ctx->pc = 0x2160FCu;
            goto label_2160fc;
        }
    }
    ctx->pc = 0x2160ECu;
label_2160ec:
    // 0x2160ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2160ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2160f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2160f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2160f4: 0x0  nop
    ctx->pc = 0x2160f4u;
    // NOP
    // 0x2160f8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2160f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2160fc:
    // 0x2160fc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2160fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x216100: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x216100u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x216104: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x216104u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21610c: 0x0  nop
    ctx->pc = 0x21610cu;
    // NOP
    // 0x216110: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x216110u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x216114: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x216114u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x216118: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x216118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21611c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21611cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216120: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x216120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216124: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216124u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216128: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x216128u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21612c: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x21612cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216130: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x216130u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216134: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x216134u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216138: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x216138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x21613c: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x21613cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x216140: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x216140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x216144: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x216144u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x216148: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x216148u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21614c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x21614cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216150: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x216150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x216154: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x216154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x216158: 0x82050050  lb          $a1, 0x50($s0)
    ctx->pc = 0x216158u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21615c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21615cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216160: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x216160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x216164: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216164u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216168: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x216168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21616c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21616cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216170: 0x10a4ff98  beq         $a1, $a0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x216170u;
    {
        const bool branch_taken_0x216170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216170u;
            // 0x216174: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216170) {
            ctx->pc = 0x215FD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215fd4;
        }
    }
    ctx->pc = 0x216178u;
    // 0x216178: 0x1000fca6  b           . + 4 + (-0x35A << 2)
    ctx->pc = 0x216178u;
    {
        const bool branch_taken_0x216178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21617Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216178u;
            // 0x21617c: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216178) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x216180u;
label_216180:
    // 0x216180: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216184: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x216184u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216188: 0xd8550010  lqc2        $vf21, 0x10($v0)
    ctx->pc = 0x216188u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21618c: 0xd8530020  lqc2        $vf19, 0x20($v0)
    ctx->pc = 0x21618cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x216190: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x216190u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x216194: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x216194u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x216198: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x216198u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x21619c: 0x4bd5eafd  vmsuba.xyz  $ACC, $vf21, $vf29
    ctx->pc = 0x21619cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[21]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2161a0: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x2161a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2161a4: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x2161a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2161a8: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x2161a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2161ac: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2161acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2161b0: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x2161b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2161b4: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x2161b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2161b8: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x2161b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2161bc: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x2161bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2161c0: 0x4b016b6a  vmul.x      $vf13, $vf13, $vf1
    ctx->pc = 0x2161c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x2161c4: 0x48246800  qmfc2.ni    $a0, $vf13
    ctx->pc = 0x2161c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2161c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2161c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2161cc: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2161ccu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2161d0: 0xd8550010  lqc2        $vf21, 0x10($v0)
    ctx->pc = 0x2161d0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2161d4: 0xd8530020  lqc2        $vf19, 0x20($v0)
    ctx->pc = 0x2161d4u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2161d8: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x2161d8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2161dc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2161dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2161e0: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2161e0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2161e4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2161e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2161e8: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2161e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2161ec: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2161ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2161f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2161f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2161f4: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x2161f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2161f8: 0x4bc6a8db  vmulw.xyz   $vf3, $vf21, $vf6w
    ctx->pc = 0x2161f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2161fc: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x2161fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216200: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x216200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216204: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x216204u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x216208: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x216208u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21620c: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x21620cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x216210: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x216210u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x216214: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x216214u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x216218: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x216218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21621c: 0x1000fc7c  b           . + 4 + (-0x384 << 2)
    ctx->pc = 0x21621Cu;
    {
        const bool branch_taken_0x21621c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21621Cu;
            // 0x216220: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21621c) {
            ctx->pc = 0x215410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215410;
        }
    }
    ctx->pc = 0x216224u;
label_216224:
    // 0x216224: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x216224u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x216228: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x216228u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21622c: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x21622cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x216230: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216230u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x216234: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x216234u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x216238: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x216238u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21623c: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x21623cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x216240: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x216240u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216244: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x216244u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x216248: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x216248u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
    // 0x21624c: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21624cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x216250: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x216250u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x216254: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x216254u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x216258: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216258u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x21625c: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x21625cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x216260: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x216260u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x216264: 0x1000fc6b  b           . + 4 + (-0x395 << 2)
    ctx->pc = 0x216264u;
    {
        const bool branch_taken_0x216264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216264u;
            // 0x216268: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216264) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x21626Cu;
label_21626c:
    // 0x21626c: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x21626cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x216270: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x216270u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x216274: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x216274u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x216278: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216278u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x21627c: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x21627cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x216280: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x216280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216284: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x216284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x216288: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x216288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x21628c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21628cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216290: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x216290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x216294: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x216294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x216298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21629c: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x21629cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2162a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2162a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2162a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2162a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2162a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2162a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2162ac: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2162acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2162b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2162b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2162b4: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2162b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2162b8: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x2162b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2162bc: 0xd8610040  lqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2162bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2162c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x2162c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2162c4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2162c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2162c8: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2162c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2162cc: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x2162ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2162d0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2162d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2162d4: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x2162d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2162d8: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2162d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2162dc: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2162dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2162e0: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x2162e0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2162e4: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x2162e4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2162e8: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x2162e8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2162ec: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x2162ecu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2162f0: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x2162f0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2162f4: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x2162f4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2162f8: 0x1000fc46  b           . + 4 + (-0x3BA << 2)
    ctx->pc = 0x2162F8u;
    {
        const bool branch_taken_0x2162f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2162FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2162F8u;
            // 0x2162fc: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2162f8) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x216300u;
label_216300:
    // 0x216300: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x216300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216304: 0x1000fc42  b           . + 4 + (-0x3BE << 2)
    ctx->pc = 0x216304u;
    {
        const bool branch_taken_0x216304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216304u;
            // 0x216308: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216304) {
            ctx->pc = 0x215410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215410;
        }
    }
    ctx->pc = 0x21630Cu;
label_21630c:
    // 0x21630c: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x21630cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x216310: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x216310u;
    SET_GPR_U32(ctx, 31, 0x216318u);
    ctx->pc = 0x216314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216310u;
            // 0x216314: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216318u; }
        if (ctx->pc != 0x216318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216318u; }
        if (ctx->pc != 0x216318u) { return; }
    }
    ctx->pc = 0x216318u;
label_216318:
    // 0x216318: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x216318u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21631c: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21631cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x216320: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x216320u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x216324: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216324u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x216328: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x216328u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x21632c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x21632Cu;
    {
        const bool branch_taken_0x21632c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21632Cu;
            // 0x216330: 0x7bb000c0  lq          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21632c) {
            ctx->pc = 0x216458u;
            goto label_216458;
        }
    }
    ctx->pc = 0x216334u;
label_216334:
    // 0x216334: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x216334u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x216338: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x216338u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21633c: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x21633cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x216340: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216340u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x216344: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x216344u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x216348: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x216348u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21634c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x21634Cu;
    SET_GPR_U32(ctx, 31, 0x216354u);
    ctx->pc = 0x216350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21634Cu;
            // 0x216350: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216354u; }
        if (ctx->pc != 0x216354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216354u; }
        if (ctx->pc != 0x216354u) { return; }
    }
    ctx->pc = 0x216354u;
label_216354:
    // 0x216354: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x216354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216358: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x216358u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21635c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x21635cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216360: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x216360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216364: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x216364u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216368: 0xc085146  jal         func_214518
    ctx->pc = 0x216368u;
    SET_GPR_U32(ctx, 31, 0x216370u);
    ctx->pc = 0x21636Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216368u;
            // 0x21636c: 0x27d4e7a0  addiu       $s4, $fp, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214518u;
    if (runtime->hasFunction(0x214518u)) {
        auto targetFn = runtime->lookupFunction(0x214518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216370u; }
        if (ctx->pc != 0x216370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214518_0x214518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216370u; }
        if (ctx->pc != 0x216370u) { return; }
    }
    ctx->pc = 0x216370u;
label_216370:
    // 0x216370: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x216370u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x216374: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x216374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216378: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21637c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x21637cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x216380: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x216380u;
    {
        const bool branch_taken_0x216380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216380u;
            // 0x216384: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216380) {
            ctx->pc = 0x216428u;
            goto label_216428;
        }
    }
    ctx->pc = 0x216388u;
label_216388:
    // 0x216388: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x216388u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21638c: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21638cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x216390: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x216390u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x216394: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216394u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x216398: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x216398u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x21639c: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x21639cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2163a0: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2163A0u;
    SET_GPR_U32(ctx, 31, 0x2163A8u);
    ctx->pc = 0x2163A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163A0u;
            // 0x2163a4: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163A8u; }
        if (ctx->pc != 0x2163A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163A8u; }
        if (ctx->pc != 0x2163A8u) { return; }
    }
    ctx->pc = 0x2163A8u;
label_2163a8:
    // 0x2163a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2163a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163ac: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2163acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163b0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2163b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2163b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163b8: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2163b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163bc: 0xc0851e4  jal         func_214790
    ctx->pc = 0x2163BCu;
    SET_GPR_U32(ctx, 31, 0x2163C4u);
    ctx->pc = 0x2163C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163BCu;
            // 0x2163c0: 0x27d4e7a0  addiu       $s4, $fp, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214790u;
    if (runtime->hasFunction(0x214790u)) {
        auto targetFn = runtime->lookupFunction(0x214790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163C4u; }
        if (ctx->pc != 0x2163C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214790_0x214790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163C4u; }
        if (ctx->pc != 0x2163C4u) { return; }
    }
    ctx->pc = 0x2163C4u;
label_2163c4:
    // 0x2163c4: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2163c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2163c8: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2163c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2163cc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2163CCu;
    {
        const bool branch_taken_0x2163cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2163D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2163CCu;
            // 0x2163d0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2163cc) {
            ctx->pc = 0x21641Cu;
            goto label_21641c;
        }
    }
    ctx->pc = 0x2163D4u;
label_2163d4:
    // 0x2163d4: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x2163d4u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x2163d8: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x2163d8u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x2163dc: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x2163dcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x2163e0: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x2163e0u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2163e4: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x2163e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2163e8: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x2163e8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2163ec: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2163ECu;
    SET_GPR_U32(ctx, 31, 0x2163F4u);
    ctx->pc = 0x2163F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2163ECu;
            // 0x2163f0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163F4u; }
        if (ctx->pc != 0x2163F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2163F4u; }
        if (ctx->pc != 0x2163F4u) { return; }
    }
    ctx->pc = 0x2163F4u;
label_2163f4:
    // 0x2163f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2163f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163f8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2163f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2163fc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2163fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216400: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x216400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216404: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x216404u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216408: 0xc085318  jal         func_214C60
    ctx->pc = 0x216408u;
    SET_GPR_U32(ctx, 31, 0x216410u);
    ctx->pc = 0x21640Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216408u;
            // 0x21640c: 0x27d4e7a0  addiu       $s4, $fp, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214C60u;
    if (runtime->hasFunction(0x214C60u)) {
        auto targetFn = runtime->lookupFunction(0x214C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216410u; }
        if (ctx->pc != 0x216410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214C60_0x214c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216410u; }
        if (ctx->pc != 0x216410u) { return; }
    }
    ctx->pc = 0x216410u;
label_216410:
    // 0x216410: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x216410u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216414: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x216414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x216418: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x216418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_21641c:
    // 0x21641c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x21641cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x216420: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x216420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x216424: 0xb18821  addu        $s1, $a1, $s1
    ctx->pc = 0x216424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_216428:
    // 0x216428: 0x4a31033c  vmove.w     $vf17, $vf0
    ctx->pc = 0x216428u;
    ctx->vu0_vf[17] = ctx->vu0_vf[0];
    // 0x21642c: 0x4bc00443  vaddw.xyz   $vf17, $vf0, $vf0w
    ctx->pc = 0x21642cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x216430: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x216430u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x216434: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x216434u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x216438: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x216438u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x21643c: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x21643cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x216440: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x216440u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x216444: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x216444u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x216448: 0x1000fbf2  b           . + 4 + (-0x40E << 2)
    ctx->pc = 0x216448u;
    {
        const bool branch_taken_0x216448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21644Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216448u;
            // 0x21644c: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216448) {
            ctx->pc = 0x215414u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_215414;
        }
    }
    ctx->pc = 0x216450u;
label_216450:
    // 0x216450: 0xac000000  sw          $zero, 0x0($zero)
    ctx->pc = 0x216450u;
    WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
    // 0x216454: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x216454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_216458:
    // 0x216458: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x216458u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21645c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x21645cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x216460: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x216460u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x216464: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x216464u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x216468: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x216468u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21646c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x21646cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x216470: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x216470u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x216474: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x216474u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216478: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x216478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21647c: 0x3e00008  jr          $ra
    ctx->pc = 0x21647Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x216480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21647Cu;
            // 0x216480: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x216484u;
    // 0x216484: 0x0  nop
    ctx->pc = 0x216484u;
    // NOP
}
