#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00210688
// Address: 0x210688 - 0x210da0
void sub_00210688_0x210688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210688_0x210688");
#endif

    switch (ctx->pc) {
        case 0x2106e8u: goto label_2106e8;
        case 0x2106f0u: goto label_2106f0;
        case 0x210768u: goto label_210768;
        case 0x2107f0u: goto label_2107f0;
        case 0x210858u: goto label_210858;
        case 0x210a00u: goto label_210a00;
        case 0x210a20u: goto label_210a20;
        case 0x210b50u: goto label_210b50;
        case 0x210b90u: goto label_210b90;
        case 0x210d28u: goto label_210d28;
        case 0x210d58u: goto label_210d58;
        default: break;
    }

    ctx->pc = 0x210688u;

    // 0x210688: 0x27bdfe40  addiu       $sp, $sp, -0x1C0
    ctx->pc = 0x210688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966848));
    // 0x21068c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210690: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x210690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x210694: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x210694u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210698: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x210698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x21069c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x21069cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106a0: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x2106a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x2106a4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2106a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106a8: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x2106a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x2106ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2106acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2106b0: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x2106b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x2106b4: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x2106b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x2106b8: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x2106b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x2106bc: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x2106bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x2106c0: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x2106c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x2106c4: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x2106c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x2106c8: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2106c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x2106cc: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x2106ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
    // 0x2106d0: 0xafa600cc  sw          $a2, 0xCC($sp)
    ctx->pc = 0x2106d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 6));
    // 0x2106d4: 0xafa800d0  sw          $t0, 0xD0($sp)
    ctx->pc = 0x2106d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 8));
    // 0x2106d8: 0xafa900d4  sw          $t1, 0xD4($sp)
    ctx->pc = 0x2106d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 9));
    // 0x2106dc: 0xafab00d8  sw          $t3, 0xD8($sp)
    ctx->pc = 0x2106dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 11));
    // 0x2106e0: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2106e4: 0x0  nop
    ctx->pc = 0x2106e4u;
    // NOP
label_2106e8:
    // 0x2106e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2106e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2106ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2106ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2106f0:
    // 0x2106f0: 0x0  nop
    ctx->pc = 0x2106f0u;
    // NOP
    // 0x2106f4: 0x0  nop
    ctx->pc = 0x2106f4u;
    // NOP
    // 0x2106f8: 0x0  nop
    ctx->pc = 0x2106f8u;
    // NOP
    // 0x2106fc: 0x0  nop
    ctx->pc = 0x2106fcu;
    // NOP
    // 0x210700: 0x1444fffb  bne         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x210700u;
    {
        const bool branch_taken_0x210700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x210704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210700u;
            // 0x210704: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210700) {
            ctx->pc = 0x2106F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2106f0;
        }
    }
    ctx->pc = 0x210708u;
    // 0x210708: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x210708u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21070c: 0x5444fff6  bnel        $v0, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x21070Cu;
    {
        const bool branch_taken_0x21070c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x21070c) {
            ctx->pc = 0x210710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21070Cu;
            // 0x210710: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2106E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2106e8;
        }
    }
    ctx->pc = 0x210714u;
    // 0x210714: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x210714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x210718: 0x702d  daddu       $t6, $zero, $zero
    ctx->pc = 0x210718u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21071c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x21071cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210720: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x210720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210724: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x210724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210728: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x210728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21072c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x21072cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210730: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x210730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210734: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x210734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210738: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x210738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21073c: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x21073cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210740: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x210740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210744: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x210744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210748: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x210748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21074c: 0x18400170  blez        $v0, . + 4 + (0x170 << 2)
    ctx->pc = 0x21074Cu;
    {
        const bool branch_taken_0x21074c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x210750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21074Cu;
            // 0x210750: 0xafbd00c0  sw          $sp, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21074c) {
            ctx->pc = 0x210D10u;
            goto label_210d10;
        }
    }
    ctx->pc = 0x210754u;
    // 0x210754: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x210754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x210758: 0x48390800  qmfc2.ni    $t9, $vf1
    ctx->pc = 0x210758u;
    SET_GPR_VEC(ctx, 25, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21075c: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x21075cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x210760: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x210760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x210764: 0x0  nop
    ctx->pc = 0x210764u;
    // NOP
label_210768:
    // 0x210768: 0xe4880  sll         $t1, $t6, 2
    ctx->pc = 0x210768u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 14), 2));
    // 0x21076c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x21076cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x210770: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x210770u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210774: 0x400013  mtlo        $v0
    ctx->pc = 0x210774u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x210778: 0xafa900e8  sw          $t1, 0xE8($sp)
    ctx->pc = 0x210778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 9));
    // 0x21077c: 0x240203c0  addiu       $v0, $zero, 0x3C0
    ctx->pc = 0x21077cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x210780: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x210780u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x210784: 0x71c23800  madd        $a3, $t6, $v0
    ctx->pc = 0x210784u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x210788: 0xafa00100  sw          $zero, 0x100($sp)
    ctx->pc = 0x210788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
    // 0x21078c: 0xe1040  sll         $v0, $t6, 1
    ctx->pc = 0x21078cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 1));
    // 0x210790: 0x2e00013  mtlo        $s7
    ctx->pc = 0x210790u;
    ctx->lo = GPR_U64(ctx, 23);
    // 0x210794: 0x4ef021  addu        $fp, $v0, $t6
    ctx->pc = 0x210794u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
    // 0x210798: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x210798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x21079c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2107a0: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x2107a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x2107a4: 0x73c20000  madd        $zero, $fp, $v0
    ctx->pc = 0x2107a4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x2107a8: 0x24e70240  addiu       $a3, $a3, 0x240
    ctx->pc = 0x2107a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 576));
    // 0x2107ac: 0x24e50060  addiu       $a1, $a3, 0x60
    ctx->pc = 0x2107acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
    // 0x2107b0: 0x24f20090  addiu       $s2, $a3, 0x90
    ctx->pc = 0x2107b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 144));
    // 0x2107b4: 0xafa500ec  sw          $a1, 0xEC($sp)
    ctx->pc = 0x2107b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 5));
    // 0x2107b8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2107b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107bc: 0xafb200dc  sw          $s2, 0xDC($sp)
    ctx->pc = 0x2107bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 18));
    // 0x2107c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2107c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107c4: 0x1012  mflo        $v0
    ctx->pc = 0x2107c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2107c8: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2107c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x2107cc: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2107ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2107d0: 0x3c21818  mult        $v1, $fp, $v0
    ctx->pc = 0x2107d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2107d4: 0x25c20001  addiu       $v0, $t6, 0x1
    ctx->pc = 0x2107d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x2107d8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2107d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x2107dc: 0x77a821  addu        $s5, $v1, $s7
    ctx->pc = 0x2107dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x2107e0: 0x1e1940  sll         $v1, $fp, 5
    ctx->pc = 0x2107e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 5));
    // 0x2107e4: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x2107e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2107e8: 0xafb300f8  sw          $s3, 0xF8($sp)
    ctx->pc = 0x2107e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 19));
    // 0x2107ec: 0x0  nop
    ctx->pc = 0x2107ecu;
    // NOP
label_2107f0:
    // 0x2107f0: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2107f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2107f4: 0x29820003  slti        $v0, $t4, 0x3
    ctx->pc = 0x2107f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2107f8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2107F8u;
    {
        const bool branch_taken_0x2107f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2107F8u;
            // 0x2107fc: 0xc1880  sll         $v1, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107f8) {
            ctx->pc = 0x210948u;
            goto label_210948;
        }
    }
    ctx->pc = 0x210800u;
    // 0x210800: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x210804: 0xe33021  addu        $a2, $a3, $v1
    ctx->pc = 0x210804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x210808: 0x8fa90104  lw          $t1, 0x104($sp)
    ctx->pc = 0x210808u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x21080c: 0xf12821  addu        $a1, $a3, $s1
    ctx->pc = 0x21080cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 17)));
    // 0x210810: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x210810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x210814: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x210814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x210818: 0x122c021  addu        $t8, $t1, $v0
    ctx->pc = 0x210818u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x21081c: 0xc2140  sll         $a0, $t4, 5
    ctx->pc = 0x21081cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 12), 5));
    // 0x210820: 0x8fa200f8  lw          $v0, 0xF8($sp)
    ctx->pc = 0x210820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x210824: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x210824u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x210828: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x210828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x21082c: 0x1257821  addu        $t7, $t1, $a1
    ctx->pc = 0x21082cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x210830: 0x825821  addu        $t3, $a0, $v0
    ctx->pc = 0x210830u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x210834: 0x2266821  addu        $t5, $s1, $a2
    ctx->pc = 0x210834u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x210838: 0x8fa400d4  lw          $a0, 0xD4($sp)
    ctx->pc = 0x210838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x21083c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x21083cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210840: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x210840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x210844: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x210844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210848: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x210848u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x21084c: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x210850: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210854: 0x0  nop
    ctx->pc = 0x210854u;
    // NOP
label_210858:
    // 0x210858: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x210858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x21085c: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x21085cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x210860: 0x8d420004  lw          $v0, 0x4($t2)
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
    // 0x210864: 0x29040003  slti        $a0, $t0, 0x3
    ctx->pc = 0x210864u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x210868: 0xafa40110  sw          $a0, 0x110($sp)
    ctx->pc = 0x210868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 4));
    // 0x21086c: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x21086cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x210870: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x210870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x210874: 0xd8670030  lqc2        $vf7, 0x30($v1)
    ctx->pc = 0x210874u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210878: 0xd8460030  lqc2        $vf6, 0x30($v0)
    ctx->pc = 0x210878u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21087c: 0x4be70103  vaddw.xyzw  $vf4, $vf0, $vf7w
    ctx->pc = 0x21087cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x210880: 0xd8a80000  lqc2        $vf8, 0x0($a1)
    ctx->pc = 0x210880u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x210884: 0x4be60143  vaddw.xyzw  $vf5, $vf0, $vf6w
    ctx->pc = 0x210884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x210888: 0xd8a90010  lqc2        $vf9, 0x10($a1)
    ctx->pc = 0x210888u;
    ctx->vu0_vf[9] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x21088c: 0xd8aa0020  lqc2        $vf10, 0x20($a1)
    ctx->pc = 0x21088cu;
    ctx->vu0_vf[10] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x210890: 0xd8c30000  lqc2        $vf3, 0x0($a2)
    ctx->pc = 0x210890u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x210894: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x210898: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x210898u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x21089c: 0x4be818ea  vmul.xyzw   $vf3, $vf3, $vf8
    ctx->pc = 0x21089cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[8]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2108a0: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x2108a0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2108a4: 0x4be910aa  vmul.xyzw   $vf2, $vf2, $vf9
    ctx->pc = 0x2108a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[9]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2108a8: 0x4bea086a  vmul.xyzw   $vf1, $vf1, $vf10
    ctx->pc = 0x2108a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[10]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2108ac: 0x4be3296a  vmul.xyzw   $vf5, $vf5, $vf3
    ctx->pc = 0x2108acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2108b0: 0x4be3212a  vmul.xyzw   $vf4, $vf4, $vf3
    ctx->pc = 0x2108b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2108b4: 0x4be6086a  vmul.xyzw   $vf1, $vf1, $vf6
    ctx->pc = 0x2108b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2108b8: 0x4be710aa  vmul.xyzw   $vf2, $vf2, $vf7
    ctx->pc = 0x2108b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[7]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2108bc: 0x4be52128  vadd.xyzw   $vf4, $vf4, $vf5
    ctx->pc = 0x2108bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2108c0: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x2108c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2108c4: 0x4be410a8  vadd.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x2108c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2108c8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x2108c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2108cc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x2108ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2108d0: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x2108d0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2108d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2108d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2108d8: 0x0  nop
    ctx->pc = 0x2108d8u;
    // NOP
    // 0x2108dc: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x2108dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x2108e0: 0xe5e00000  swc1        $f0, 0x0($t7)
    ctx->pc = 0x2108e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 0), bits); }
    // 0x2108e4: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x2108e4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x2108e8: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x2108e8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x2108ec: 0xd9610000  lqc2        $vf1, 0x0($t3)
    ctx->pc = 0x2108ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2108f0: 0xd9640010  lqc2        $vf4, 0x10($t3)
    ctx->pc = 0x2108f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x2108f4: 0xd9220000  lqc2        $vf2, 0x0($t1)
    ctx->pc = 0x2108f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x2108f8: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2108f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x2108fc: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x2108fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x210900: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x210900u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210904: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x210904u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210908: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x210908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x21090c: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x21090cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x210910: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x210910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210914: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x210914u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210918: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x210918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21091c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x21091cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210920: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x210920u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210924: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x210924u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x210928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21092c: 0x0  nop
    ctx->pc = 0x21092cu;
    // NOP
    // 0x210930: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x210930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x210934: 0xe7000000  swc1        $f0, 0x0($t8)
    ctx->pc = 0x210934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 24), 0), bits); }
    // 0x210938: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x210938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x21093c: 0x8fa30110  lw          $v1, 0x110($sp)
    ctx->pc = 0x21093cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x210940: 0x1460ffc5  bnez        $v1, . + 4 + (-0x3B << 2)
    ctx->pc = 0x210940u;
    {
        const bool branch_taken_0x210940 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x210944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210940u;
            // 0x210944: 0x27180004  addiu       $t8, $t8, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210940) {
            ctx->pc = 0x210858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210858;
        }
    }
    ctx->pc = 0x210948u;
label_210948:
    // 0x210948: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x210948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x21094c: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x21094cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x210950: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x210950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x210954: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x210954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x210958: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x210958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x21095c: 0x8fa90100  lw          $t1, 0x100($sp)
    ctx->pc = 0x21095cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x210960: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x210960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210964: 0x2441821  addu        $v1, $s2, $a0
    ctx->pc = 0x210964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x210968: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x210968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21096c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x21096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x210970: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x210970u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x210974: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x210974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
    // 0x210978: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x210978u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x21097c: 0xafa90100  sw          $t1, 0x100($sp)
    ctx->pc = 0x21097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 9));
    // 0x210980: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x210980u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x210984: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x210984u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x210988: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x210988u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x21098c: 0x26b50030  addiu       $s5, $s5, 0x30
    ctx->pc = 0x21098cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 48));
    // 0x210990: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x210990u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x210994: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x210994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x210998: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x210998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x21099c: 0xafa40104  sw          $a0, 0x104($sp)
    ctx->pc = 0x21099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 4));
    // 0x2109a0: 0x29840003  slti        $a0, $t4, 0x3
    ctx->pc = 0x2109a0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2109a4: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2109a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2109a8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2109a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2109ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2109acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2109b0: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2109b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2109b4: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2109b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2109b8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2109b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2109bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2109bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2109c0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2109c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2109c4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2109c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2109c8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2109c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2109cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2109ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2109d0: 0x1480ff87  bnez        $a0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x2109D0u;
    {
        const bool branch_taken_0x2109d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2109D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2109D0u;
            // 0x2109d4: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109d0) {
            ctx->pc = 0x2107F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2107f0;
        }
    }
    ctx->pc = 0x2109D8u;
    // 0x2109d8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2109d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2109dc: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x2109dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x2109e0: 0x3c20018  mult        $zero, $fp, $v0
    ctx->pc = 0x2109e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x2109e4: 0x8fb000ec  lw          $s0, 0xEC($sp)
    ctx->pc = 0x2109e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x2109e8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x2109e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x2109ec: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2109ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2109f0: 0x436821  addu        $t5, $v0, $v1
    ctx->pc = 0x2109f0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2109f4: 0x7812  mflo        $t7
    ctx->pc = 0x2109f4u;
    SET_GPR_U64(ctx, 15, ctx->lo);
    // 0x2109f8: 0x3cc1021  addu        $v0, $fp, $t4
    ctx->pc = 0x2109f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
    // 0x2109fc: 0x0  nop
    ctx->pc = 0x2109fcu;
    // NOP
label_210a00:
    // 0x210a00: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x210a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x210a04: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x210a04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x210a08: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x210a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x210a0c: 0x25840001  addiu       $a0, $t4, 0x1
    ctx->pc = 0x210a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x210a10: 0x455821  addu        $t3, $v0, $a1
    ctx->pc = 0x210a10u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x210a14: 0x2033021  addu        $a2, $s0, $v1
    ctx->pc = 0x210a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x210a18: 0x1f72821  addu        $a1, $t7, $s7
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 23)));
    // 0x210a1c: 0x240c0002  addiu       $t4, $zero, 0x2
    ctx->pc = 0x210a1cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_210a20:
    // 0x210a20: 0x8da30000  lw          $v1, 0x0($t5)
    ctx->pc = 0x210a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x210a24: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x210a24u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x210a28: 0x8da20004  lw          $v0, 0x4($t5)
    ctx->pc = 0x210a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x210a2c: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x210a2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x210a30: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x210a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x210a34: 0xd8a40020  lqc2        $vf4, 0x20($a1)
    ctx->pc = 0x210a34u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x210a38: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x210a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x210a3c: 0xd9620000  lqc2        $vf2, 0x0($t3)
    ctx->pc = 0x210a3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x210a40: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x210a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x210a44: 0xd9630010  lqc2        $vf3, 0x10($t3)
    ctx->pc = 0x210a44u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x210a48: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x210a48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210a4c: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x210a4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210a50: 0xd8610030  lqc2        $vf1, 0x30($v1)
    ctx->pc = 0x210a50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210a54: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x210a54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x210a58: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x210a58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210a5c: 0x4be418ea  vmul.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x210a5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210a60: 0x4be310a8  vadd.xyzw   $vf2, $vf2, $vf3
    ctx->pc = 0x210a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210a64: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x210a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210a68: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x210a68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210a6c: 0x48290800  qmfc2.ni    $t1, $vf1
    ctx->pc = 0x210a6cu;
    SET_GPR_VEC(ctx, 9, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x210a70: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x210a70u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210a74: 0x0  nop
    ctx->pc = 0x210a74u;
    // NOP
    // 0x210a78: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x210a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x210a7c: 0x581ffe8  bgez        $t4, . + 4 + (-0x18 << 2)
    ctx->pc = 0x210A7Cu;
    {
        const bool branch_taken_0x210a7c = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x210A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A7Cu;
            // 0x210a80: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a7c) {
            ctx->pc = 0x210A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210a20;
        }
    }
    ctx->pc = 0x210A84u;
    // 0x210a84: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x210a84u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a88: 0x29820003  slti        $v0, $t4, 0x3
    ctx->pc = 0x210a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x210a8c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x210A8Cu;
    {
        const bool branch_taken_0x210a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210A8Cu;
            // 0x210a90: 0x3cc1021  addu        $v0, $fp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a8c) {
            ctx->pc = 0x210A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210a00;
        }
    }
    ctx->pc = 0x210A94u;
    // 0x210a94: 0x8fbe00f0  lw          $fp, 0xF0($sp)
    ctx->pc = 0x210a94u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x210a98: 0xc4e10060  lwc1        $f1, 0x60($a3)
    ctx->pc = 0x210a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210a9c: 0xc4e20074  lwc1        $f2, 0x74($a3)
    ctx->pc = 0x210a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x210aa0: 0x1de102a  slt         $v0, $t6, $fp
    ctx->pc = 0x210aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x210aa4: 0xc4e30088  lwc1        $f3, 0x88($a3)
    ctx->pc = 0x210aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x210aa8: 0xc4e40070  lwc1        $f4, 0x70($a3)
    ctx->pc = 0x210aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x210aac: 0xc4e50064  lwc1        $f5, 0x64($a3)
    ctx->pc = 0x210aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x210ab0: 0xc4e60080  lwc1        $f6, 0x80($a3)
    ctx->pc = 0x210ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x210ab4: 0xc4e70068  lwc1        $f7, 0x68($a3)
    ctx->pc = 0x210ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x210ab8: 0xc4e80084  lwc1        $f8, 0x84($a3)
    ctx->pc = 0x210ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x210abc: 0xc4e00078  lwc1        $f0, 0x78($a3)
    ctx->pc = 0x210abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210ac0: 0xe4e10030  swc1        $f1, 0x30($a3)
    ctx->pc = 0x210ac0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
    // 0x210ac4: 0xe4e00054  swc1        $f0, 0x54($a3)
    ctx->pc = 0x210ac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 84), bits); }
    // 0x210ac8: 0xe4e20044  swc1        $f2, 0x44($a3)
    ctx->pc = 0x210ac8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 68), bits); }
    // 0x210acc: 0xe4e30058  swc1        $f3, 0x58($a3)
    ctx->pc = 0x210accu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 88), bits); }
    // 0x210ad0: 0xe4e40034  swc1        $f4, 0x34($a3)
    ctx->pc = 0x210ad0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 52), bits); }
    // 0x210ad4: 0xe4e50040  swc1        $f5, 0x40($a3)
    ctx->pc = 0x210ad4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
    // 0x210ad8: 0xe4e60038  swc1        $f6, 0x38($a3)
    ctx->pc = 0x210ad8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
    // 0x210adc: 0xe4e70050  swc1        $f7, 0x50($a3)
    ctx->pc = 0x210adcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 80), bits); }
    // 0x210ae0: 0xe4e80048  swc1        $f8, 0x48($a3)
    ctx->pc = 0x210ae0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 72), bits); }
    // 0x210ae4: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x210ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x210ae8: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x210ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x210aec: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x210AECu;
    {
        const bool branch_taken_0x210aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210AECu;
            // 0x210af0: 0xace0005c  sw          $zero, 0x5C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210aec) {
            ctx->pc = 0x210CB8u;
            goto label_210cb8;
        }
    }
    ctx->pc = 0x210AF4u;
    // 0x210af4: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x210af8: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x210af8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x210afc: 0x8fa300e4  lw          $v1, 0xE4($sp)
    ctx->pc = 0x210afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
    // 0x210b00: 0x400013  mtlo        $v0
    ctx->pc = 0x210b00u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x210b04: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x210b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x210b08: 0x240203c0  addiu       $v0, $zero, 0x3C0
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x210b0c: 0x6e8021  addu        $s0, $v1, $t6
    ctx->pc = 0x210b0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
    // 0x210b10: 0x71c2c000  madd        $t8, $t6, $v0
    ctx->pc = 0x210b10u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 24, (int32_t)result); }
    // 0x210b14: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x210b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x210b18: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x210b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x210b1c: 0x2024818  mult        $t1, $s0, $v0
    ctx->pc = 0x210b1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x210b20: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x210b20u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x210b24: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x210b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b28: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x210b2c: 0x27180300  addiu       $t8, $t8, 0x300
    ctx->pc = 0x210b2cu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 768));
    // 0x210b30: 0x271e0090  addiu       $fp, $t8, 0x90
    ctx->pc = 0x210b30u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 24), 144));
    // 0x210b34: 0x27150030  addiu       $s5, $t8, 0x30
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 24), 48));
    // 0x210b38: 0xafa900f4  sw          $t1, 0xF4($sp)
    ctx->pc = 0x210b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 9));
    // 0x210b3c: 0x27140060  addiu       $s4, $t8, 0x60
    ctx->pc = 0x210b3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 24), 96));
    // 0x210b40: 0xafbe0114  sw          $fp, 0x114($sp)
    ctx->pc = 0x210b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 30));
    // 0x210b44: 0x26e90090  addiu       $t1, $s7, 0x90
    ctx->pc = 0x210b44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 23), 144));
    // 0x210b48: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x210b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x210b4c: 0x0  nop
    ctx->pc = 0x210b4cu;
    // NOP
label_210b50:
    // 0x210b50: 0x8fbe00d0  lw          $fp, 0xD0($sp)
    ctx->pc = 0x210b50u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x210b54: 0x4a2818  mult        $a1, $v0, $t2
    ctx->pc = 0x210b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x210b58: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210b5c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x210b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x210b60: 0x3037021  addu        $t6, $t8, $v1
    ctx->pc = 0x210b60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 3)));
    // 0x210b64: 0x5e3021  addu        $a2, $v0, $fp
    ctx->pc = 0x210b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x210b68: 0x2836821  addu        $t5, $s4, $v1
    ctx->pc = 0x210b68u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x210b6c: 0x8fa20114  lw          $v0, 0x114($sp)
    ctx->pc = 0x210b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x210b70: 0x2a36021  addu        $t4, $s5, $v1
    ctx->pc = 0x210b70u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x210b74: 0xb79021  addu        $s2, $a1, $s7
    ctx->pc = 0x210b74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 23)));
    // 0x210b78: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x210b78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x210b7c: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x210b7cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210b80: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x210b80u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b84: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x210b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x210b88: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x210b88u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210b8c: 0x693821  addu        $a3, $v1, $t1
    ctx->pc = 0x210b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_210b90:
    // 0x210b90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x210b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x210b94: 0x20f2821  addu        $a1, $s0, $t7
    ctx->pc = 0x210b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x210b98: 0xd8e60000  lqc2        $vf6, 0x0($a3)
    ctx->pc = 0x210b98u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x210b9c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x210b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ba0: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x210ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x210ba4: 0xd8e50010  lqc2        $vf5, 0x10($a3)
    ctx->pc = 0x210ba4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x210ba8: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x210ba8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210bac: 0x41140  sll         $v0, $a0, 5
    ctx->pc = 0x210bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x210bb0: 0xd9020000  lqc2        $vf2, 0x0($t0)
    ctx->pc = 0x210bb0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x210bb4: 0x4be4003f  vaddaw.xyzw $ACC, $vf0, $vf4w
    ctx->pc = 0x210bb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x210bb8: 0x4be000cf  vmsubw.xyzw $vf3, $vf0, $vf0w
    ctx->pc = 0x210bb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x210bbc: 0xd9010020  lqc2        $vf1, 0x20($t0)
    ctx->pc = 0x210bbcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x210bc0: 0x4be610aa  vmul.xyzw   $vf2, $vf2, $vf6
    ctx->pc = 0x210bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210bc4: 0x4be5086a  vmul.xyzw   $vf1, $vf1, $vf5
    ctx->pc = 0x210bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210bc8: 0x8fbe00d0  lw          $fp, 0xD0($sp)
    ctx->pc = 0x210bc8u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x210bcc: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x210bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210bd0: 0x4be4086a  vmul.xyzw   $vf1, $vf1, $vf4
    ctx->pc = 0x210bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210bd4: 0x4be3086c  vsub.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x210bd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210bd8: 0x5e2821  addu        $a1, $v0, $fp
    ctx->pc = 0x210bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x210bdc: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x210bdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210be0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x210be0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x210be4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x210be4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210be8: 0x483e1000  qmfc2.ni    $fp, $vf2
    ctx->pc = 0x210be8u;
    SET_GPR_VEC(ctx, 30, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x210bec: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x210becu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x210bf0: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x210bf0u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210bf4: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x210bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x210bf8: 0x8af018  mult        $fp, $a0, $t2
    ctx->pc = 0x210bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x210bfc: 0xe5c00000  swc1        $f0, 0x0($t6)
    ctx->pc = 0x210bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 0), bits); }
    // 0x210c00: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x210c00u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x210c04: 0xd8a30060  lqc2        $vf3, 0x60($a1)
    ctx->pc = 0x210c04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x210c08: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x210c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x210c0c: 0x3d72021  addu        $a0, $fp, $s7
    ctx->pc = 0x210c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 23)));
    // 0x210c10: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x210c10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210c14: 0x4be3086a  vmul.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x210c14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210c18: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x210c18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210c1c: 0x29e50003  slti        $a1, $t7, 0x3
    ctx->pc = 0x210c1cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x210c20: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x210c20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210c24: 0x4b0118c2  vaddz.x     $vf3, $vf3, $vf1z
    ctx->pc = 0x210c24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210c28: 0x483e1800  qmfc2.ni    $fp, $vf3
    ctx->pc = 0x210c28u;
    SET_GPR_VEC(ctx, 30, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210c2c: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x210c2cu;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210c30: 0x0  nop
    ctx->pc = 0x210c30u;
    // NOP
    // 0x210c34: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x210c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x210c38: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x210c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x210c3c: 0xd8430060  lqc2        $vf3, 0x60($v0)
    ctx->pc = 0x210c3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x210c40: 0xda410020  lqc2        $vf1, 0x20($s2)
    ctx->pc = 0x210c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x210c44: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x210c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210c48: 0x4be3086a  vmul.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x210c48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210c4c: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x210c4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210c50: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x210c50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210c54: 0x4b0118c2  vaddz.x     $vf3, $vf3, $vf1z
    ctx->pc = 0x210c54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210c58: 0x48221800  qmfc2.ni    $v0, $vf3
    ctx->pc = 0x210c58u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210c5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x210c5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210c60: 0x0  nop
    ctx->pc = 0x210c60u;
    // NOP
    // 0x210c64: 0xe5800000  swc1        $f0, 0x0($t4)
    ctx->pc = 0x210c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 0), bits); }
    // 0x210c68: 0x258c0010  addiu       $t4, $t4, 0x10
    ctx->pc = 0x210c68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x210c6c: 0xd88300a0  lqc2        $vf3, 0xA0($a0)
    ctx->pc = 0x210c6cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x210c70: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x210c70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x210c74: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x210c74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x210c78: 0x4be3086a  vmul.xyzw   $vf1, $vf1, $vf3
    ctx->pc = 0x210c78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210c7c: 0x4be2086a  vmul.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x210c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x210c80: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x210c80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210c84: 0x4b0118c2  vaddz.x     $vf3, $vf3, $vf1z
    ctx->pc = 0x210c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x210c88: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x210c88u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x210c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x210c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210c90: 0x0  nop
    ctx->pc = 0x210c90u;
    // NOP
    // 0x210c94: 0xe5a00000  swc1        $f0, 0x0($t5)
    ctx->pc = 0x210c94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 0), bits); }
    // 0x210c98: 0x14a0ffbd  bnez        $a1, . + 4 + (-0x43 << 2)
    ctx->pc = 0x210C98u;
    {
        const bool branch_taken_0x210c98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x210C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210C98u;
            // 0x210c9c: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c98) {
            ctx->pc = 0x210B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210b90;
        }
    }
    ctx->pc = 0x210CA0u;
    // 0x210ca0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x210ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ca4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x210ca4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x210ca8: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x210CA8u;
    {
        const bool branch_taken_0x210ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210CA8u;
            // 0x210cac: 0x2041021  addu        $v0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ca8) {
            ctx->pc = 0x210B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210b50;
        }
    }
    ctx->pc = 0x210CB0u;
    // 0x210cb0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x210CB0u;
    {
        const bool branch_taken_0x210cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210CB0u;
            // 0x210cb4: 0x8fae00e0  lw          $t6, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cb0) {
            ctx->pc = 0x210D00u;
            goto label_210d00;
        }
    }
    ctx->pc = 0x210CB8u;
label_210cb8:
    // 0x210cb8: 0x8fa300d8  lw          $v1, 0xD8($sp)
    ctx->pc = 0x210cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x210cbc: 0x600013  mtlo        $v1
    ctx->pc = 0x210cbcu;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x210cc0: 0x240303c0  addiu       $v1, $zero, 0x3C0
    ctx->pc = 0x210cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x210cc4: 0x71c31000  madd        $v0, $t6, $v1
    ctx->pc = 0x210cc4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x210cc8: 0x24420300  addiu       $v0, $v0, 0x300
    ctx->pc = 0x210cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 768));
    // 0x210ccc: 0x7c5900b0  sq          $t9, 0xB0($v0)
    ctx->pc = 0x210cccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), GPR_VEC(ctx, 25));
    // 0x210cd0: 0x7c590000  sq          $t9, 0x0($v0)
    ctx->pc = 0x210cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 25));
    // 0x210cd4: 0x7c590010  sq          $t9, 0x10($v0)
    ctx->pc = 0x210cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 25));
    // 0x210cd8: 0x7c590020  sq          $t9, 0x20($v0)
    ctx->pc = 0x210cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 25));
    // 0x210cdc: 0x7c590030  sq          $t9, 0x30($v0)
    ctx->pc = 0x210cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 25));
    // 0x210ce0: 0x7c590040  sq          $t9, 0x40($v0)
    ctx->pc = 0x210ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 25));
    // 0x210ce4: 0x7c590050  sq          $t9, 0x50($v0)
    ctx->pc = 0x210ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 25));
    // 0x210ce8: 0x7c590060  sq          $t9, 0x60($v0)
    ctx->pc = 0x210ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 25));
    // 0x210cec: 0x7c590070  sq          $t9, 0x70($v0)
    ctx->pc = 0x210cecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 25));
    // 0x210cf0: 0x7c590080  sq          $t9, 0x80($v0)
    ctx->pc = 0x210cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 25));
    // 0x210cf4: 0x7c590090  sq          $t9, 0x90($v0)
    ctx->pc = 0x210cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 25));
    // 0x210cf8: 0x7c5900a0  sq          $t9, 0xA0($v0)
    ctx->pc = 0x210cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), GPR_VEC(ctx, 25));
    // 0x210cfc: 0x8fae00e0  lw          $t6, 0xE0($sp)
    ctx->pc = 0x210cfcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_210d00:
    // 0x210d00: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x210d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x210d04: 0x1c4102a  slt         $v0, $t6, $a0
    ctx->pc = 0x210d04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x210d08: 0x1440fe97  bnez        $v0, . + 4 + (-0x169 << 2)
    ctx->pc = 0x210D08u;
    {
        const bool branch_taken_0x210d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D08u;
            // 0x210d0c: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d08) {
            ctx->pc = 0x210768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210768;
        }
    }
    ctx->pc = 0x210D10u;
label_210d10:
    // 0x210d10: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x210d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x210d14: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x210D14u;
    {
        const bool branch_taken_0x210d14 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x210D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D14u;
            // 0x210d18: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d14) {
            ctx->pc = 0x210D6Cu;
            goto label_210d6c;
        }
    }
    ctx->pc = 0x210D1Cu;
    // 0x210d1c: 0x241103c0  addiu       $s1, $zero, 0x3C0
    ctx->pc = 0x210d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 960));
    // 0x210d20: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x210d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x210d24: 0x0  nop
    ctx->pc = 0x210d24u;
    // NOP
label_210d28:
    // 0x210d28: 0x25d00001  addiu       $s0, $t6, 0x1
    ctx->pc = 0x210d28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
    // 0x210d2c: 0x8fa300c4  lw          $v1, 0xC4($sp)
    ctx->pc = 0x210d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x210d30: 0xe3180  sll         $a2, $t6, 6
    ctx->pc = 0x210d30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 14), 6));
    // 0x210d34: 0x400013  mtlo        $v0
    ctx->pc = 0x210d34u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x210d38: 0x8fa900cc  lw          $t1, 0xCC($sp)
    ctx->pc = 0x210d38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x210d3c: 0x71d12800  madd        $a1, $t6, $s1
    ctx->pc = 0x210d3cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 17); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x210d40: 0x702023  subu        $a0, $v1, $s0
    ctx->pc = 0x210d40u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x210d44: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x210d44u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x210d48: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x210d48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x210d4c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x210d4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d50: 0xc0843de  jal         func_210F78
    ctx->pc = 0x210D50u;
    SET_GPR_U32(ctx, 31, 0x210D58u);
    ctx->pc = 0x210D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x210D50u;
            // 0x210d54: 0x27a800c0  addiu       $t0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x210F78u;
    if (runtime->hasFunction(0x210F78u)) {
        auto targetFn = runtime->lookupFunction(0x210F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210D58u; }
        if (ctx->pc != 0x210D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00210F78_0x210f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x210D58u; }
        if (ctx->pc != 0x210D58u) { return; }
    }
    ctx->pc = 0x210D58u;
label_210d58:
    // 0x210d58: 0x8fbe00c4  lw          $fp, 0xC4($sp)
    ctx->pc = 0x210d58u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x210d5c: 0x200702d  daddu       $t6, $s0, $zero
    ctx->pc = 0x210d5cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d60: 0x1de102a  slt         $v0, $t6, $fp
    ctx->pc = 0x210d60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x210d64: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x210D64u;
    {
        const bool branch_taken_0x210d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D64u;
            // 0x210d68: 0x8fa200d8  lw          $v0, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d64) {
            ctx->pc = 0x210D28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_210d28;
        }
    }
    ctx->pc = 0x210D6Cu;
label_210d6c:
    // 0x210d6c: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x210d6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x210d70: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x210d70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x210d74: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x210d74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x210d78: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x210d78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x210d7c: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x210d7cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x210d80: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x210d80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x210d84: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x210d84u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x210d88: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x210d88u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x210d8c: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x210d8cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x210d90: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x210d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x210d94: 0x3e00008  jr          $ra
    ctx->pc = 0x210D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x210D94u;
            // 0x210d98: 0x27bd01c0  addiu       $sp, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x210D9Cu;
    // 0x210d9c: 0x0  nop
    ctx->pc = 0x210d9cu;
    // NOP
}
