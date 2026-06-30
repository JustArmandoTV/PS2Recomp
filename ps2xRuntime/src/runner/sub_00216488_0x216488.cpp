#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00216488
// Address: 0x216488 - 0x218f68
void sub_00216488_0x216488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216488_0x216488");
#endif

    switch (ctx->pc) {
        case 0x2164d8u: goto label_2164d8;
        case 0x216510u: goto label_216510;
        case 0x216514u: goto label_216514;
        case 0x216560u: goto label_216560;
        case 0x2165c0u: goto label_2165c0;
        case 0x2165f0u: goto label_2165f0;
        case 0x216610u: goto label_216610;
        case 0x216614u: goto label_216614;
        case 0x21663cu: goto label_21663c;
        case 0x2166a4u: goto label_2166a4;
        case 0x2166c4u: goto label_2166c4;
        case 0x2166fcu: goto label_2166fc;
        case 0x21685cu: goto label_21685c;
        case 0x2168acu: goto label_2168ac;
        case 0x21692cu: goto label_21692c;
        case 0x2169a0u: goto label_2169a0;
        case 0x2169d0u: goto label_2169d0;
        case 0x216abcu: goto label_216abc;
        case 0x216c14u: goto label_216c14;
        case 0x216da0u: goto label_216da0;
        case 0x216dbcu: goto label_216dbc;
        case 0x216df4u: goto label_216df4;
        case 0x216e14u: goto label_216e14;
        case 0x216e4cu: goto label_216e4c;
        case 0x216f78u: goto label_216f78;
        case 0x217080u: goto label_217080;
        case 0x2171d4u: goto label_2171d4;
        case 0x217518u: goto label_217518;
        case 0x217554u: goto label_217554;
        case 0x217574u: goto label_217574;
        case 0x2175acu: goto label_2175ac;
        case 0x2175ccu: goto label_2175cc;
        case 0x2175fcu: goto label_2175fc;
        case 0x21761cu: goto label_21761c;
        case 0x217688u: goto label_217688;
        case 0x21768cu: goto label_21768c;
        case 0x217690u: goto label_217690;
        case 0x217760u: goto label_217760;
        case 0x217a20u: goto label_217a20;
        case 0x217a24u: goto label_217a24;
        case 0x217a70u: goto label_217a70;
        case 0x217b08u: goto label_217b08;
        case 0x217b60u: goto label_217b60;
        case 0x217b64u: goto label_217b64;
        case 0x217b8cu: goto label_217b8c;
        case 0x217bf4u: goto label_217bf4;
        case 0x217c14u: goto label_217c14;
        case 0x217c4cu: goto label_217c4c;
        case 0x217dacu: goto label_217dac;
        case 0x217dfcu: goto label_217dfc;
        case 0x217e7cu: goto label_217e7c;
        case 0x217ef0u: goto label_217ef0;
        case 0x217f20u: goto label_217f20;
        case 0x21800cu: goto label_21800c;
        case 0x218164u: goto label_218164;
        case 0x2182f0u: goto label_2182f0;
        case 0x21830cu: goto label_21830c;
        case 0x218344u: goto label_218344;
        case 0x218364u: goto label_218364;
        case 0x21839cu: goto label_21839c;
        case 0x2184c8u: goto label_2184c8;
        case 0x2185d0u: goto label_2185d0;
        case 0x218724u: goto label_218724;
        case 0x218a68u: goto label_218a68;
        case 0x218aa4u: goto label_218aa4;
        case 0x218ac0u: goto label_218ac0;
        case 0x218af8u: goto label_218af8;
        case 0x218b14u: goto label_218b14;
        case 0x218b44u: goto label_218b44;
        case 0x218b60u: goto label_218b60;
        case 0x218c30u: goto label_218c30;
        case 0x218c34u: goto label_218c34;
        case 0x218c38u: goto label_218c38;
        case 0x218d08u: goto label_218d08;
        default: break;
    }

    ctx->pc = 0x216488u;

    // 0x216488: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x216488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x21648c: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x21648cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x216490: 0x3c10006f  lui         $s0, 0x6F
    ctx->pc = 0x216490u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)111 << 16));
    // 0x216494: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x216494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x216498: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x216498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x21649c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21649cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164a0: 0x8202e798  lb          $v0, -0x1868($s0)
    ctx->pc = 0x2164a0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294961048)));
    // 0x2164a4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2164a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2164a8: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x2164a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x2164ac: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x2164acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x2164b0: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x2164b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x2164b4: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x2164b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x2164b8: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x2164b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x2164bc: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x2164bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x2164c0: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2164c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2164c4: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x2164c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
    // 0x2164c8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2164C8u;
    {
        const bool branch_taken_0x2164c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2164CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2164C8u;
            // 0x2164cc: 0xafa70044  sw          $a3, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164c8) {
            ctx->pc = 0x2164E8u;
            goto label_2164e8;
        }
    }
    ctx->pc = 0x2164D0u;
    // 0x2164d0: 0xc086406  jal         func_219018
    ctx->pc = 0x2164D0u;
    SET_GPR_U32(ctx, 31, 0x2164D8u);
    ctx->pc = 0x2164D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2164D0u;
            // 0x2164d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219018u;
    if (runtime->hasFunction(0x219018u)) {
        auto targetFn = runtime->lookupFunction(0x219018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164D8u; }
        if (ctx->pc != 0x2164D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219018_0x219018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2164D8u; }
        if (ctx->pc != 0x2164D8u) { return; }
    }
    ctx->pc = 0x2164D8u;
label_2164d8:
    // 0x2164d8: 0xa202e798  sb          $v0, -0x1868($s0)
    ctx->pc = 0x2164d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4294961048), (uint8_t)GPR_U32(ctx, 2));
    // 0x2164dc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2164dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x2164e0: 0x1040053b  beqz        $v0, . + 4 + (0x53B << 2)
    ctx->pc = 0x2164E0u;
    {
        const bool branch_taken_0x2164e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2164E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2164E0u;
            // 0x2164e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2164e0) {
            ctx->pc = 0x2179D0u;
            goto label_2179d0;
        }
    }
    ctx->pc = 0x2164E8u;
label_2164e8:
    // 0x2164e8: 0x4a31033c  vmove.w     $vf17, $vf0
    ctx->pc = 0x2164e8u;
    ctx->vu0_vf[17] = ctx->vu0_vf[0];
    // 0x2164ec: 0x4bc00443  vaddw.xyz   $vf17, $vf0, $vf0w
    ctx->pc = 0x2164ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x2164f0: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x2164f0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2164f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2164f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2164f8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2164f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2164fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2164fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x216500: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x216500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x216504: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x216504u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216508: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x216508u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21650c: 0x0  nop
    ctx->pc = 0x21650cu;
    // NOP
label_216510:
    // 0x216510: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x216510u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_216514:
    // 0x216514: 0x1087000b  beq         $a0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x216514u;
    {
        const bool branch_taken_0x216514 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 7));
        ctx->pc = 0x216518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216514u;
            // 0x216518: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216514) {
            ctx->pc = 0x216544u;
            goto label_216544;
        }
    }
    ctx->pc = 0x21651Cu;
    // 0x21651c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21651Cu;
    {
        const bool branch_taken_0x21651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21651c) {
            ctx->pc = 0x216534u;
            goto label_216534;
        }
    }
    ctx->pc = 0x216524u;
    // 0x216524: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x216524u;
    {
        const bool branch_taken_0x216524 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216524) {
            ctx->pc = 0x216554u;
            goto label_216554;
        }
    }
    ctx->pc = 0x21652Cu;
    // 0x21652c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x21652Cu;
    {
        const bool branch_taken_0x21652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21652c) {
            ctx->pc = 0x21658Cu;
            goto label_21658c;
        }
    }
    ctx->pc = 0x216534u;
label_216534:
    // 0x216534: 0x50860018  beql        $a0, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x216534u;
    {
        const bool branch_taken_0x216534 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x216534) {
            ctx->pc = 0x216538u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216534u;
            // 0x216538: 0xc6800138  lwc1        $f0, 0x138($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x216598u;
            goto label_216598;
        }
    }
    ctx->pc = 0x21653Cu;
    // 0x21653c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x21653Cu;
    {
        const bool branch_taken_0x21653c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21653c) {
            ctx->pc = 0x21658Cu;
            goto label_21658c;
        }
    }
    ctx->pc = 0x216544u;
label_216544:
    // 0x216544: 0xf8640040  sqc2        $vf4, 0x40($v1)
    ctx->pc = 0x216544u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x216548: 0xf8640050  sqc2        $vf4, 0x50($v1)
    ctx->pc = 0x216548u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21654c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x21654Cu;
    {
        const bool branch_taken_0x21654c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21654Cu;
            // 0x216550: 0x24630080  addiu       $v1, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21654c) {
            ctx->pc = 0x216510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216510;
        }
    }
    ctx->pc = 0x216554u;
label_216554:
    // 0x216554: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x216554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216558: 0xf8630040  sqc2        $vf3, 0x40($v1)
    ctx->pc = 0x216558u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x21655c: 0x0  nop
    ctx->pc = 0x21655cu;
    // NOP
label_216560:
    // 0x216560: 0xf8630050  sqc2        $vf3, 0x50($v1)
    ctx->pc = 0x216560u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x216564: 0xd8610010  lqc2        $vf1, 0x10($v1)
    ctx->pc = 0x216564u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216568: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x216568u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21656c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x21656cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216570: 0xf8610010  sqc2        $vf1, 0x10($v1)
    ctx->pc = 0x216570u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216574: 0x24630080  addiu       $v1, $v1, 0x80
    ctx->pc = 0x216574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    // 0x216578: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216578u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21657c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x21657Cu;
    {
        const bool branch_taken_0x21657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21657c) {
            ctx->pc = 0x216580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21657Cu;
            // 0x216580: 0xf8630040  sqc2        $vf3, 0x40($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216560u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216560;
        }
    }
    ctx->pc = 0x216584u;
    // 0x216584: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x216584u;
    {
        const bool branch_taken_0x216584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216584u;
            // 0x216588: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216584) {
            ctx->pc = 0x216514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216514;
        }
    }
    ctx->pc = 0x21658Cu;
label_21658c:
    // 0x21658c: 0xac000000  sw          $zero, 0x0($zero)
    ctx->pc = 0x21658cu;
    WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
    // 0x216590: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x216590u;
    {
        const bool branch_taken_0x216590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216590u;
            // 0x216594: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216590) {
            ctx->pc = 0x216514u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216514;
        }
    }
    ctx->pc = 0x216598u;
label_216598:
    // 0x216598: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x216598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x21659c: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x21659cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2165a0: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x2165a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x2165a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2165a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2165a8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2165a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2165ac: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x2165acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2165b0: 0x4be10040  vaddx.xyzw  $vf1, $vf0, $vf1x
    ctx->pc = 0x2165b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2165b4: 0x18400505  blez        $v0, . + 4 + (0x505 << 2)
    ctx->pc = 0x2165B4u;
    {
        const bool branch_taken_0x2165b4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2165B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2165B4u;
            // 0x2165b8: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2165b4) {
            ctx->pc = 0x2179CCu;
            goto label_2179cc;
        }
    }
    ctx->pc = 0x2165BCu;
    // 0x2165bc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x2165bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2165c0:
    // 0x2165c0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2165c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2165c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2165c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2165c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2165c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2165cc: 0x3c0b006f  lui         $t3, 0x6F
    ctx->pc = 0x2165ccu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)111 << 16));
    // 0x2165d0: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x2165d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x2165d4: 0x24a70001  addiu       $a3, $a1, 0x1
    ctx->pc = 0x2165d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2165d8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2165d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2165dc: 0x27be0030  addiu       $fp, $sp, 0x30
    ctx->pc = 0x2165dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2165e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x2165e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2165e4: 0x8e820130  lw          $v0, 0x130($s4)
    ctx->pc = 0x2165e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
    // 0x2165e8: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x2165e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
    // 0x2165ec: 0x0  nop
    ctx->pc = 0x2165ecu;
    // NOP
label_2165f0:
    // 0x2165f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2165f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2165f4: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x2165f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2165f8: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2165f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x2165fc: 0x2575e7a0  addiu       $s5, $t3, -0x1860
    ctx->pc = 0x2165fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961056));
    // 0x216600: 0x8fb00040  lw          $s0, 0x40($sp)
    ctx->pc = 0x216600u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x216604: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x216604u;
    {
        const bool branch_taken_0x216604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216604u;
            // 0x216608: 0x8fb10044  lw          $s1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216604) {
            ctx->pc = 0x21666Cu;
            goto label_21666c;
        }
    }
    ctx->pc = 0x21660Cu;
    // 0x21660c: 0x0  nop
    ctx->pc = 0x21660cu;
    // NOP
label_216610:
    // 0x216610: 0x82040000  lb          $a0, 0x0($s0)
    ctx->pc = 0x216610u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_216614:
    // 0x216614: 0x2c82001d  sltiu       $v0, $a0, 0x1D
    ctx->pc = 0x216614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x216618: 0x10400410  beqz        $v0, . + 4 + (0x410 << 2)
    ctx->pc = 0x216618u;
    {
        const bool branch_taken_0x216618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21661Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216618u;
            // 0x21661c: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216618) {
            ctx->pc = 0x21765Cu;
            goto label_21765c;
        }
    }
    ctx->pc = 0x216620u;
    // 0x216620: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x216620u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x216624: 0x2442e780  addiu       $v0, $v0, -0x1880
    ctx->pc = 0x216624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
    // 0x216628: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x216628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x21662c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x216630: 0x600008  jr          $v1
    ctx->pc = 0x216630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x216638u: goto label_216638;
            case 0x21669Cu: goto label_21669c;
            case 0x2166A4u: goto label_2166a4;
            case 0x2166FCu: goto label_2166fc;
            case 0x216824u: goto label_216824;
            case 0x2168C4u: goto label_2168c4;
            case 0x21694Cu: goto label_21694c;
            case 0x2169D0u: goto label_2169d0;
            case 0x216ABCu: goto label_216abc;
            case 0x216C14u: goto label_216c14;
            case 0x216DA0u: goto label_216da0;
            case 0x216DF4u: goto label_216df4;
            case 0x216E4Cu: goto label_216e4c;
            case 0x216F78u: goto label_216f78;
            case 0x217080u: goto label_217080;
            case 0x2171D4u: goto label_2171d4;
            case 0x217380u: goto label_217380;
            case 0x217424u: goto label_217424;
            case 0x21746Cu: goto label_21746c;
            case 0x217500u: goto label_217500;
            case 0x21750Cu: goto label_21750c;
            case 0x217534u: goto label_217534;
            case 0x21758Cu: goto label_21758c;
            case 0x2175DCu: goto label_2175dc;
            case 0x21765Cu: goto label_21765c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x216638u;
label_216638:
    // 0x216638: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x216638u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_21663c:
    // 0x21663c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x21663cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x216640: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x216640u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x216644: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x216644u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x216648: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x216648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x21664c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x21664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x216650: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x216650u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x216654: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x216654u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216658: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x216658u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21665c: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21665cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x216660: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x216660u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x216664: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216664u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x216668: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x216668u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_21666c:
    // 0x21666c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x21666cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x216670: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x216670u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x216674: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x216674u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x216678: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x216678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x21667c: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x21667cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x216680: 0x2c39021  addu        $s2, $s6, $v1
    ctx->pc = 0x216680u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x216684: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x216684u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x216688: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x216688u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x21668c: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x21668cu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x216690: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x216690u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x216694: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x216694u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x216698: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x216698u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_21669c:
    // 0x21669c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x21669Cu;
    {
        const bool branch_taken_0x21669c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21669Cu;
            // 0x2166a0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21669c) {
            ctx->pc = 0x216610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216610;
        }
    }
    ctx->pc = 0x2166A4u;
label_2166a4:
    // 0x2166a4: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x2166a4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2166a8: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x2166a8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2166ac: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x2166acu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2166b0: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x2166b0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2166b4: 0x4a000578  vcallms     0xA8
    ctx->pc = 0x2166b4u;
    {     ctx->vu0_tpc = 0xA8;     runtime->executeVU0Microprogram(rdram, ctx, 0xA8); }
    // 0x2166b8: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x2166b8u;
    // PREF instruction (ignored)
    // 0x2166bc: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2166BCu;
    SET_GPR_U32(ctx, 31, 0x2166C4u);
    ctx->pc = 0x2166C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2166BCu;
            // 0x2166c0: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166C4u; }
        if (ctx->pc != 0x2166C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2166C4u; }
        if (ctx->pc != 0x2166C4u) { return; }
    }
    ctx->pc = 0x2166C4u;
label_2166c4:
    // 0x2166c4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2166c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2166c8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2166c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2166cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2166ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2166d0: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2166d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2166d4: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x2166d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2166d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2166d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2166dc: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x2166dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2166e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2166e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2166e4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x2166e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2166e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2166e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2166ec: 0x10a4ffed  beq         $a1, $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2166ECu;
    {
        const bool branch_taken_0x2166ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2166F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166ECu;
            // 0x2166f0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166ec) {
            ctx->pc = 0x2166A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2166a4;
        }
    }
    ctx->pc = 0x2166F4u;
    // 0x2166f4: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x2166F4u;
    {
        const bool branch_taken_0x2166f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2166F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2166F4u;
            // 0x2166f8: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2166f4) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x2166FCu;
label_2166fc:
    // 0x2166fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2166fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216700: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x216700u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216704: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x216704u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216708: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x216708u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x21670c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x21670cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x216710: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x216710u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x216714: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x216714u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x216718: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x216718u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x21671c: 0x4bd4f0a9  vmadd.xyz   $vf2, $vf30, $vf20
    ctx->pc = 0x21671cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216720: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x216720u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x216724: 0x4b0288fc  vmsubax.x   $ACC, $vf17, $vf2x
    ctx->pc = 0x216724u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x216728: 0x4b0288fd  vmsubay.x   $ACC, $vf17, $vf2y
    ctx->pc = 0x216728u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x21672c: 0x4b02888e  vmsubz.x    $vf2, $vf17, $vf2z
    ctx->pc = 0x21672cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216730: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x216730u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x216734: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x216734u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21673c: 0x0  nop
    ctx->pc = 0x21673cu;
    // NOP
    // 0x216740: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x216740u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216744: 0x0  nop
    ctx->pc = 0x216744u;
    // NOP
    // 0x216748: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x216748u;
    {
        const bool branch_taken_0x216748 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x21674Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216748u;
            // 0x21674c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216748) {
            ctx->pc = 0x216754u;
            goto label_216754;
        }
    }
    ctx->pc = 0x216750u;
    // 0x216750: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x216750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_216754:
    // 0x216754: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x216754u;
    {
        const bool branch_taken_0x216754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216754) {
            ctx->pc = 0x216758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216754u;
            // 0x216758: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2167F4u;
            goto label_2167f4;
        }
    }
    ctx->pc = 0x21675Cu;
    // 0x21675c: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x21675cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216760: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x216760u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216764: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x216764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216768: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x216768u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21676c: 0x4b0110ea  vmul.x      $vf3, $vf2, $vf1
    ctx->pc = 0x21676cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216770: 0x48a32000  qmtc2.ni    $v1, $vf4
    ctx->pc = 0x216770u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x216774: 0xda020020  lqc2        $vf2, 0x20($s0)
    ctx->pc = 0x216774u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x216778: 0x4b032068  vadd.x      $vf1, $vf4, $vf3
    ctx->pc = 0x216778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21677c: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x21677cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216780: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x216780u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216784: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x216784u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x216788: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x216788u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21678c: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x21678cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216790: 0x0  nop
    ctx->pc = 0x216790u;
    // NOP
    // 0x216794: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x216794u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216798: 0x0  nop
    ctx->pc = 0x216798u;
    // NOP
    // 0x21679c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21679Cu;
    {
        const bool branch_taken_0x21679c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21679c) {
            ctx->pc = 0x2167A8u;
            goto label_2167a8;
        }
    }
    ctx->pc = 0x2167A4u;
    // 0x2167a4: 0x4b0410ec  vsub.x      $vf3, $vf2, $vf4
    ctx->pc = 0x2167a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_2167a8:
    // 0x2167a8: 0x48271800  qmfc2.ni    $a3, $vf3
    ctx->pc = 0x2167a8u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2167ac: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2167acu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2167b0: 0x0  nop
    ctx->pc = 0x2167b0u;
    // NOP
    // 0x2167b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2167b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2167b8: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2167b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2167bc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2167bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2167c0: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2167c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2167c4: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2167c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2167c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2167c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2167cc: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x2167ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2167d0: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x2167d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2167d4: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x2167d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2167d8: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x2167d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2167dc: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x2167dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x2167e0: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x2167e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2167e4: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x2167e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x2167e8: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x2167e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2167ec: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2167ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2167f0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2167f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2167f4:
    // 0x2167f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2167f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2167f8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2167f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2167fc: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x2167fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x216800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216804: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x216804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x216808: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21680c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x21680cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x216810: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216814: 0x10a4ffb9  beq         $a1, $a0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x216814u;
    {
        const bool branch_taken_0x216814 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216814u;
            // 0x216818: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216814) {
            ctx->pc = 0x2166FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2166fc;
        }
    }
    ctx->pc = 0x21681Cu;
    // 0x21681c: 0x1000ff7d  b           . + 4 + (-0x83 << 2)
    ctx->pc = 0x21681Cu;
    {
        const bool branch_taken_0x21681c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21681Cu;
            // 0x216820: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21681c) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x216824u;
label_216824:
    // 0x216824: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x216824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216828: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x216828u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21682c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x21682cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216830: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x216830u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216834: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x216834u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x216838: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x216838u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21683c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x21683cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x216840: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x216840u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x216844: 0x48a28000  qmtc2.ni    $v0, $vf16
    ctx->pc = 0x216844u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x216848: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x216848u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21684c: 0x4a000b38  vcallms     0x160
    ctx->pc = 0x21684cu;
    {     ctx->vu0_tpc = 0x160;     runtime->executeVU0Microprogram(rdram, ctx, 0x160); }
    // 0x216850: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x216850u;
    // PREF instruction (ignored)
    // 0x216854: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x216854u;
    SET_GPR_U32(ctx, 31, 0x21685Cu);
    ctx->pc = 0x216858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216854u;
            // 0x216858: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21685Cu; }
        if (ctx->pc != 0x21685Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21685Cu; }
        if (ctx->pc != 0x21685Cu) { return; }
    }
    ctx->pc = 0x21685Cu;
label_21685c:
    // 0x21685c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x21685cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216860: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x216860u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x216864: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x216864u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216868: 0x38420013  xori        $v0, $v0, 0x13
    ctx->pc = 0x216868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)19);
    // 0x21686c: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x21686Cu;
    {
        const bool branch_taken_0x21686c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21686Cu;
            // 0x216870: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21686c) {
            ctx->pc = 0x216610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216610;
        }
    }
    ctx->pc = 0x216874u;
    // 0x216874: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x216874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216878: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x216878u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x21687c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x21687cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216880: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x216880u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216884: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x216884u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x216888: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x216888u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21688c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x21688cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x216890: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x216890u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x216894: 0x48a38000  qmtc2.ni    $v1, $vf16
    ctx->pc = 0x216894u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x216898: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x216898u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21689c: 0x4a000b38  vcallms     0x160
    ctx->pc = 0x21689cu;
    {     ctx->vu0_tpc = 0x160;     runtime->executeVU0Microprogram(rdram, ctx, 0x160); }
    // 0x2168a0: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x2168a0u;
    // PREF instruction (ignored)
    // 0x2168a4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2168A4u;
    SET_GPR_U32(ctx, 31, 0x2168ACu);
    ctx->pc = 0x2168A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2168A4u;
            // 0x2168a8: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2168ACu; }
        if (ctx->pc != 0x2168ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2168ACu; }
        if (ctx->pc != 0x2168ACu) { return; }
    }
    ctx->pc = 0x2168ACu;
label_2168ac:
    // 0x2168ac: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2168acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2168b0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x2168b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2168b4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2168b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2168b8: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x2168b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
    // 0x2168bc: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x2168BCu;
    {
        const bool branch_taken_0x2168bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2168C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2168BCu;
            // 0x2168c0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2168bc) {
            ctx->pc = 0x216610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216610;
        }
    }
    ctx->pc = 0x2168C4u;
label_2168c4:
    // 0x2168c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2168c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2168c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2168c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2168cc: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x2168ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2168d0: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x2168d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x2168d4: 0xc6080080  lwc1        $f8, 0x80($s0)
    ctx->pc = 0x2168d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2168d8: 0xc6070088  lwc1        $f7, 0x88($s0)
    ctx->pc = 0x2168d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2168dc: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x2168dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2168e0: 0x44044000  mfc1        $a0, $f8
    ctx->pc = 0x2168e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2168e4: 0x44053800  mfc1        $a1, $f7
    ctx->pc = 0x2168e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2168e8: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2168e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2168ec: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x2168ecu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2168f0: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x2168f0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2168f4: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x2168f4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2168f8: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x2168f8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2168fc: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x2168fcu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x216900: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x216900u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x216904: 0xda180060  lqc2        $vf24, 0x60($s0)
    ctx->pc = 0x216904u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x216908: 0xda190070  lqc2        $vf25, 0x70($s0)
    ctx->pc = 0x216908u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x21690c: 0x48a48001  qmtc2.i     $a0, $vf16
    ctx->pc = 0x21690cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x216910: 0x48287800  qmfc2.ni    $t0, $vf15
    ctx->pc = 0x216910u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x216914: 0x48a57800  qmtc2.ni    $a1, $vf15
    ctx->pc = 0x216914u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x216918: 0x48a77000  qmtc2.ni    $a3, $vf14
    ctx->pc = 0x216918u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x21691c: 0x4a0021b8  vcallms     0x430
    ctx->pc = 0x21691cu;
    {     ctx->vu0_tpc = 0x430;     runtime->executeVU0Microprogram(rdram, ctx, 0x430); }
    // 0x216920: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x216920u;
    // PREF instruction (ignored)
    // 0x216924: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x216924u;
    SET_GPR_U32(ctx, 31, 0x21692Cu);
    ctx->pc = 0x216928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216924u;
            // 0x216928: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21692Cu; }
        if (ctx->pc != 0x21692Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21692Cu; }
        if (ctx->pc != 0x21692Cu) { return; }
    }
    ctx->pc = 0x21692Cu;
label_21692c:
    // 0x21692c: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x21692cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216930: 0x48287001  qmfc2.i     $t0, $vf14
    ctx->pc = 0x216930u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x216934: 0x4a003778  vcallms     0x6E8
    ctx->pc = 0x216934u;
    {     ctx->vu0_tpc = 0x6E8;     runtime->executeVU0Microprogram(rdram, ctx, 0x6E8); }
    // 0x216938: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x216938u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x21693c: 0x82030090  lb          $v1, 0x90($s0)
    ctx->pc = 0x21693cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x216940: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x216940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x216944: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x216944u;
    {
        const bool branch_taken_0x216944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216944u;
            // 0x216948: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216944) {
            ctx->pc = 0x2169BCu;
            goto label_2169bc;
        }
    }
    ctx->pc = 0x21694Cu;
label_21694c:
    // 0x21694c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21694cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216950: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216954: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x216954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x216958: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x216958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x21695c: 0xc6070060  lwc1        $f7, 0x60($s0)
    ctx->pc = 0x21695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x216960: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x216960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216964: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x216964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x216968: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x216968u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x21696c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x21696cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216970: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x216970u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216974: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x216974u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x216978: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x216978u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x21697c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x21697cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x216980: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x216980u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x216984: 0x48a38000  qmtc2.ni    $v1, $vf16
    ctx->pc = 0x216984u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x216988: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x216988u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21698c: 0x48a47000  qmtc2.ni    $a0, $vf14
    ctx->pc = 0x21698cu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x216990: 0x4a002db8  vcallms     0x5B0
    ctx->pc = 0x216990u;
    {     ctx->vu0_tpc = 0x5B0;     runtime->executeVU0Microprogram(rdram, ctx, 0x5B0); }
    // 0x216994: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x216994u;
    // PREF instruction (ignored)
    // 0x216998: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x216998u;
    SET_GPR_U32(ctx, 31, 0x2169A0u);
    ctx->pc = 0x21699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216998u;
            // 0x21699c: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2169A0u; }
        if (ctx->pc != 0x2169A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2169A0u; }
        if (ctx->pc != 0x2169A0u) { return; }
    }
    ctx->pc = 0x2169A0u;
label_2169a0:
    // 0x2169a0: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2169a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169a4: 0x48287001  qmfc2.i     $t0, $vf14
    ctx->pc = 0x2169a4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x2169a8: 0x4a003c78  vcallms     0x788
    ctx->pc = 0x2169a8u;
    {     ctx->vu0_tpc = 0x788;     runtime->executeVU0Microprogram(rdram, ctx, 0x788); }
    // 0x2169ac: 0xaea80000  sw          $t0, 0x0($s5)
    ctx->pc = 0x2169acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 8));
    // 0x2169b0: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x2169b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x2169b4: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x2169b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2169b8: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x2169b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_2169bc:
    // 0x2169bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2169bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2169c0: 0x5062ff1e  beql        $v1, $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x2169C0u;
    {
        const bool branch_taken_0x2169c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2169c0) {
            ctx->pc = 0x2169C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2169C0u;
            // 0x2169c4: 0x96030004  lhu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21663Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21663c;
        }
    }
    ctx->pc = 0x2169C8u;
    // 0x2169c8: 0x1000ff12  b           . + 4 + (-0xEE << 2)
    ctx->pc = 0x2169C8u;
    {
        const bool branch_taken_0x2169c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2169CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2169C8u;
            // 0x2169cc: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2169c8) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x2169D0u;
label_2169d0:
    // 0x2169d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2169d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169d4: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x2169d4u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2169d8: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x2169d8u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2169dc: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2169dcu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2169e0: 0x4bd8dabe  vmula.xyz   $ACC, $vf27, $vf24
    ctx->pc = 0x2169e0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[24]);
    // 0x2169e4: 0x4bd9f369  vmadd.xyz   $vf13, $vf30, $vf25
    ctx->pc = 0x2169e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2169e8: 0x4b1989bf  vmulaw.x    $ACC, $vf17, $vf25w
    ctx->pc = 0x2169e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2169ec: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2169ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2169f0: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x2169f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2169f4: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x2169f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2169f8: 0x48256800  qmfc2.ni    $a1, $vf13
    ctx->pc = 0x2169f8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2169fc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2169fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216a00: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x216a00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216a04: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x216a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216a08: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x216a08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x216a0c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x216a0cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x216a10: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x216a10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216a14: 0x0  nop
    ctx->pc = 0x216a14u;
    // NOP
    // 0x216a18: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x216A18u;
    {
        const bool branch_taken_0x216a18 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216a18) {
            ctx->pc = 0x216A38u;
            goto label_216a38;
        }
    }
    ctx->pc = 0x216A20u;
    // 0x216a20: 0x0  nop
    ctx->pc = 0x216a20u;
    // NOP
    // 0x216a24: 0x0  nop
    ctx->pc = 0x216a24u;
    // NOP
    // 0x216a28: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x216a28u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x216a2c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x216a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x216a30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x216A30u;
    {
        const bool branch_taken_0x216a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216A30u;
            // 0x216a34: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216a30) {
            ctx->pc = 0x216A48u;
            goto label_216a48;
        }
    }
    ctx->pc = 0x216A38u;
label_216a38:
    // 0x216a38: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216a38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216a3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216a3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216a40: 0x0  nop
    ctx->pc = 0x216a40u;
    // NOP
    // 0x216a44: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x216a44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_216a48:
    // 0x216a48: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x216a48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x216a4c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x216a4cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x216a50: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x216a50u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216a54: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216a54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216a58: 0x0  nop
    ctx->pc = 0x216a58u;
    // NOP
    // 0x216a5c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x216a5cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x216a60: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x216a60u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x216a64: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x216a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216a68: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x216a68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216a6c: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x216a6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216a70: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216a74: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x216a74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216a78: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x216a78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216a7c: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x216a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x216a80: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x216a80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x216a84: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x216a84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x216a88: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x216a88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216a8c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x216a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x216a90: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x216a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x216a94: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x216a94u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x216a98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216a9c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x216a9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x216aa0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216aa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216aa4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x216aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x216aa8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216aac: 0x10a4ffc8  beq         $a1, $a0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x216AACu;
    {
        const bool branch_taken_0x216aac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216AACu;
            // 0x216ab0: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216aac) {
            ctx->pc = 0x2169D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2169d0;
        }
    }
    ctx->pc = 0x216AB4u;
    // 0x216ab4: 0x1000fed7  b           . + 4 + (-0x129 << 2)
    ctx->pc = 0x216AB4u;
    {
        const bool branch_taken_0x216ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216AB4u;
            // 0x216ab8: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ab4) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x216ABCu;
label_216abc:
    // 0x216abc: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x216abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x216ac0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216ac0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216ac4: 0xc6840008  lwc1        $f4, 0x8($s4)
    ctx->pc = 0x216ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216ac8: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x216ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216acc: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x216accu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216ad0: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x216ad0u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216ad4: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x216ad4u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x216ad8: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x216ad8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x216adc: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x216adcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x216ae0: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x216ae0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216ae4: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x216ae4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x216ae8: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x216ae8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x216aec: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x216aecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216af0: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x216af0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x216af4: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x216af4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216af8: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x216af8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216afc: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x216afcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216b00: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x216b00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216b04: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x216b04u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216b08: 0x48235800  qmfc2.ni    $v1, $vf11
    ctx->pc = 0x216b08u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x216b0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x216b0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216b10: 0x48246000  qmfc2.ni    $a0, $vf12
    ctx->pc = 0x216b10u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x216b14: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x216b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216b18: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x216b18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x216b1c: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x216b1cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x216b20: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x216b20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x216b24: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x216b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216b28: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x216b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x216b2c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x216b2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x216b30: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x216b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x216b34: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216b38: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x216b38u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x216b3c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x216b3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x216b40: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x216b40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x216b44: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x216b44u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216b48: 0x44871000  mtc1        $a3, $f2
    ctx->pc = 0x216b48u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x216b4c: 0x0  nop
    ctx->pc = 0x216b4cu;
    // NOP
    // 0x216b50: 0x46041041  sub.s       $f1, $f2, $f4
    ctx->pc = 0x216b50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x216b54: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x216b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216b58: 0x0  nop
    ctx->pc = 0x216b58u;
    // NOP
    // 0x216b5c: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x216B5Cu;
    {
        const bool branch_taken_0x216b5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216b5c) {
            ctx->pc = 0x216B60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216B5Cu;
            // 0x216b60: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x216B84u;
            goto label_216b84;
        }
    }
    ctx->pc = 0x216B64u;
    // 0x216b64: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x216b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216b68: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x216b68u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x216b6c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x216b6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x216b70: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x216b70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x216b74: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x216b74u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216b78: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x216b78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216b7c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x216B7Cu;
    {
        const bool branch_taken_0x216b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x216b7c) {
            ctx->pc = 0x216BB0u;
            goto label_216bb0;
        }
    }
    ctx->pc = 0x216B84u;
label_216b84:
    // 0x216b84: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x216b84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x216b88: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x216b88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216b8c: 0x0  nop
    ctx->pc = 0x216b8cu;
    // NOP
    // 0x216b90: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x216B90u;
    {
        const bool branch_taken_0x216b90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216b90) {
            ctx->pc = 0x216B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216B90u;
            // 0x216b94: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x216BE4u;
            goto label_216be4;
        }
    }
    ctx->pc = 0x216B98u;
    // 0x216b98: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x216b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216b9c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x216b9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x216ba0: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x216ba0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216ba4: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x216ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x216ba8: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x216ba8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216bac: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x216bacu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_216bb0:
    // 0x216bb0: 0x0  nop
    ctx->pc = 0x216bb0u;
    // NOP
    // 0x216bb4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x216bb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x216bb8: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x216bb8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x216bbc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x216bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216bc0: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x216bc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216bc4: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x216bc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216bc8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216bc8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216bcc: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x216bccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216bd0: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x216bd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216bd4: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x216bd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x216bd8: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x216bd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x216bdc: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x216bdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x216be0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x216be0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_216be4:
    // 0x216be4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x216be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x216be8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x216be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x216bec: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x216becu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x216bf0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216bf4: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x216bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x216bf8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216bf8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216bfc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x216bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x216c00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216c04: 0x10a4ffad  beq         $a1, $a0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x216C04u;
    {
        const bool branch_taken_0x216c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216C04u;
            // 0x216c08: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c04) {
            ctx->pc = 0x216ABCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216abc;
        }
    }
    ctx->pc = 0x216C0Cu;
    // 0x216c0c: 0x1000fe81  b           . + 4 + (-0x17F << 2)
    ctx->pc = 0x216C0Cu;
    {
        const bool branch_taken_0x216c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216C0Cu;
            // 0x216c10: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216c0c) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x216C14u;
label_216c14:
    // 0x216c14: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x216c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x216c18: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x216c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216c1c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x216c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216c20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216c24: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x216c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216c28: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x216c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x216c2c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216c2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216c30: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x216c30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x216c34: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x216c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216c38: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x216c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x216c3c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x216c3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x216c40: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x216c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216c44: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x216c44u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216c48: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x216c48u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216c4c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x216c4cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x216c50: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x216c50u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x216c54: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x216c54u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x216c58: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x216c58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216c5c: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x216c5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x216c60: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x216c60u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x216c64: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x216c64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216c68: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x216c68u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x216c6c: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x216c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216c70: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x216c70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216c74: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x216c74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216c78: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x216c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216c7c: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x216c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216c80: 0x48275800  qmfc2.ni    $a3, $vf11
    ctx->pc = 0x216c80u;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x216c84: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x216c84u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216c88: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x216c88u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x216c8c: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x216c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216c90: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x216c90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x216c94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x216c94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x216c98: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x216c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x216c9c: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x216c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216ca0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x216ca0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x216ca4: 0xc6060020  lwc1        $f6, 0x20($s0)
    ctx->pc = 0x216ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x216ca8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x216ca8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x216cac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216cacu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216cb0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x216cb0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x216cb4: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x216cb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x216cb8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x216cb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x216cbc: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x216cbcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216cc0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x216cc0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216cc4: 0x0  nop
    ctx->pc = 0x216cc4u;
    // NOP
    // 0x216cc8: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x216cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x216ccc: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x216cccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216cd0: 0x0  nop
    ctx->pc = 0x216cd0u;
    // NOP
    // 0x216cd4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x216CD4u;
    {
        const bool branch_taken_0x216cd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216cd4) {
            ctx->pc = 0x216CD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x216CD4u;
            // 0x216cd8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x216CF4u;
            goto label_216cf4;
        }
    }
    ctx->pc = 0x216CDCu;
    // 0x216cdc: 0x0  nop
    ctx->pc = 0x216cdcu;
    // NOP
    // 0x216ce0: 0x0  nop
    ctx->pc = 0x216ce0u;
    // NOP
    // 0x216ce4: 0x46013003  div.s       $f0, $f6, $f1
    ctx->pc = 0x216ce4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[1];
    // 0x216ce8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x216ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x216cec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x216CECu;
    {
        const bool branch_taken_0x216cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216CECu;
            // 0x216cf0: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216cec) {
            ctx->pc = 0x216D2Cu;
            goto label_216d2c;
        }
    }
    ctx->pc = 0x216CF4u;
label_216cf4:
    // 0x216cf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x216cf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216cf8: 0x0  nop
    ctx->pc = 0x216cf8u;
    // NOP
    // 0x216cfc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x216CFCu;
    {
        const bool branch_taken_0x216cfc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216cfc) {
            ctx->pc = 0x216D1Cu;
            goto label_216d1c;
        }
    }
    ctx->pc = 0x216D04u;
    // 0x216d04: 0x0  nop
    ctx->pc = 0x216d04u;
    // NOP
    // 0x216d08: 0x0  nop
    ctx->pc = 0x216d08u;
    // NOP
    // 0x216d0c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x216d0cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x216d10: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x216d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x216d14: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x216D14u;
    {
        const bool branch_taken_0x216d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216D14u;
            // 0x216d18: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d14) {
            ctx->pc = 0x216D2Cu;
            goto label_216d2c;
        }
    }
    ctx->pc = 0x216D1Cu;
label_216d1c:
    // 0x216d1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216d20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216d20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216d24: 0x0  nop
    ctx->pc = 0x216d24u;
    // NOP
    // 0x216d28: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x216d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_216d2c:
    // 0x216d2c: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x216d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x216d30: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x216d30u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x216d34: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x216d34u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x216d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216d3c: 0x0  nop
    ctx->pc = 0x216d3cu;
    // NOP
    // 0x216d40: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x216d40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x216d44: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x216d44u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x216d48: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x216d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216d4c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x216d4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216d50: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x216d50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216d54: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216d54u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216d58: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x216d58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216d5c: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x216d5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216d60: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x216d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x216d64: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x216d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x216d68: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x216d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x216d6c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x216d6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216d70: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x216d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x216d74: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x216d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x216d78: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x216d78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x216d7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216d80: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x216d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x216d84: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216d84u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216d88: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x216d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x216d8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216d90: 0x10a4ffa0  beq         $a1, $a0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x216D90u;
    {
        const bool branch_taken_0x216d90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216D90u;
            // 0x216d94: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d90) {
            ctx->pc = 0x216C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216c14;
        }
    }
    ctx->pc = 0x216D98u;
    // 0x216d98: 0x1000fe1e  b           . + 4 + (-0x1E2 << 2)
    ctx->pc = 0x216D98u;
    {
        const bool branch_taken_0x216d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216D98u;
            // 0x216d9c: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216d98) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x216DA0u;
label_216da0:
    // 0x216da0: 0xda130000  lqc2        $vf19, 0x0($s0)
    ctx->pc = 0x216da0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216da4: 0xda140010  lqc2        $vf20, 0x10($s0)
    ctx->pc = 0x216da4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216da8: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x216da8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x216dac: 0x4a001e78  vcallms     0x3C8
    ctx->pc = 0x216dacu;
    {     ctx->vu0_tpc = 0x3C8;     runtime->executeVU0Microprogram(rdram, ctx, 0x3C8); }
    // 0x216db0: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x216db0u;
    // PREF instruction (ignored)
    // 0x216db4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x216DB4u;
    SET_GPR_U32(ctx, 31, 0x216DBCu);
    ctx->pc = 0x216DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216DB4u;
            // 0x216db8: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DBCu; }
        if (ctx->pc != 0x216DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216DBCu; }
        if (ctx->pc != 0x216DBCu) { return; }
    }
    ctx->pc = 0x216DBCu;
label_216dbc:
    // 0x216dbc: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x216dbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216dc0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x216dc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216dc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x216dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x216dc8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x216dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x216dcc: 0x82050020  lb          $a1, 0x20($s0)
    ctx->pc = 0x216dccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x216dd0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216dd4: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x216dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x216dd8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216dd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216ddc: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x216ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x216de0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216de0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216de4: 0x10a4ffee  beq         $a1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x216DE4u;
    {
        const bool branch_taken_0x216de4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216DE4u;
            // 0x216de8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216de4) {
            ctx->pc = 0x216DA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216da0;
        }
    }
    ctx->pc = 0x216DECu;
    // 0x216dec: 0x1000fe09  b           . + 4 + (-0x1F7 << 2)
    ctx->pc = 0x216DECu;
    {
        const bool branch_taken_0x216dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216DECu;
            // 0x216df0: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dec) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x216DF4u;
label_216df4:
    // 0x216df4: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x216df4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216df8: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x216df8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216dfc: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x216dfcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x216e00: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x216e00u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x216e04: 0x4a000038  vcallms     0x0
    ctx->pc = 0x216e04u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
    // 0x216e08: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x216e08u;
    // PREF instruction (ignored)
    // 0x216e0c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x216E0Cu;
    SET_GPR_U32(ctx, 31, 0x216E14u);
    ctx->pc = 0x216E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x216E0Cu;
            // 0x216e10: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E14u; }
        if (ctx->pc != 0x216E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x216E14u; }
        if (ctx->pc != 0x216E14u) { return; }
    }
    ctx->pc = 0x216E14u;
label_216e14:
    // 0x216e14: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x216e14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e18: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x216e18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216e1c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x216e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x216e20: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x216e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x216e24: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x216e24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x216e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216e2c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x216e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x216e30: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216e30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216e34: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x216e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x216e38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216e38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216e3c: 0x10a4ffed  beq         $a1, $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x216E3Cu;
    {
        const bool branch_taken_0x216e3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216E3Cu;
            // 0x216e40: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e3c) {
            ctx->pc = 0x216DF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216df4;
        }
    }
    ctx->pc = 0x216E44u;
    // 0x216e44: 0x1000fdf3  b           . + 4 + (-0x20D << 2)
    ctx->pc = 0x216E44u;
    {
        const bool branch_taken_0x216e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216E44u;
            // 0x216e48: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216e44) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x216E4Cu;
label_216e4c:
    // 0x216e4c: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x216e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x216e50: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216e50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216e54: 0xc6050034  lwc1        $f5, 0x34($s0)
    ctx->pc = 0x216e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x216e58: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x216e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216e5c: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x216e5cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216e60: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x216e60u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216e64: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x216e64u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x216e68: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x216e68u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x216e6c: 0xda610040  lqc2        $vf1, 0x40($s3)
    ctx->pc = 0x216e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x216e70: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x216e70u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x216e74: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x216e74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x216e78: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x216e78u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x216e7c: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x216e7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216e80: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x216e80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216e84: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x216e84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x216e88: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x216e88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x216e8c: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x216e8cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x216e90: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x216e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x216e94: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x216e94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x216e98: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x216e98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216e9c: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x216e9cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x216ea0: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x216ea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x216ea4: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x216ea4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x216ea8: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x216ea8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216eac: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x216eacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216eb0: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x216eb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216eb4: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x216eb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x216eb8: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x216eb8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216ebc: 0x48235800  qmfc2.ni    $v1, $vf11
    ctx->pc = 0x216ebcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x216ec0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x216ec0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216ec4: 0x48246000  qmfc2.ni    $a0, $vf12
    ctx->pc = 0x216ec4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x216ec8: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x216ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216ecc: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x216eccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x216ed0: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x216ed0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x216ed4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x216ed4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x216ed8: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x216ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x216edc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x216edcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x216ee0: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x216ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216ee4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x216ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x216ee8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x216ee8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x216eec: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x216eecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x216ef0: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x216ef0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x216ef4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x216ef4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x216ef8: 0x4b02086a  vmul.x      $vf1, $vf1, $vf2
    ctx->pc = 0x216ef8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x216efc: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x216efcu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x216f00: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x216f00u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216f04: 0x0  nop
    ctx->pc = 0x216f04u;
    // NOP
    // 0x216f08: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x216f08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x216f0c: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x216f0cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x216f10: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x216f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x216f14: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x216f14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216f18: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x216f18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x216f1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x216f1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x216f20: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x216f20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x216f24: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x216f24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x216f28: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x216f28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x216f2c: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x216f2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x216f30: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x216f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x216f34: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x216f34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x216f38: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x216f38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x216f3c: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x216f3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x216f40: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x216f40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x216f44: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x216f44u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x216f48: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x216f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x216f4c: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x216f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x216f50: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x216f50u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x216f54: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x216f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x216f58: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x216f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x216f5c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x216f5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x216f60: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x216f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x216f64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x216f64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x216f68: 0x10a4ffb8  beq         $a1, $a0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x216F68u;
    {
        const bool branch_taken_0x216f68 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x216F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F68u;
            // 0x216f6c: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f68) {
            ctx->pc = 0x216E4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216e4c;
        }
    }
    ctx->pc = 0x216F70u;
    // 0x216f70: 0x1000fda8  b           . + 4 + (-0x258 << 2)
    ctx->pc = 0x216F70u;
    {
        const bool branch_taken_0x216f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216F70u;
            // 0x216f74: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f70) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x216F78u;
label_216f78:
    // 0x216f78: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x216f78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x216f7c: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x216f7cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216f80: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x216f80u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x216f84: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x216f84u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x216f88: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x216f88u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x216f8c: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x216f8cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x216f90: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x216f90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x216f94: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x216f94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x216f98: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x216f98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216f9c: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x216f9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x216fa0: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x216fa0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x216fa4: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x216fa4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x216fa8: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x216fa8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x216fac: 0x48226800  qmfc2.ni    $v0, $vf13
    ctx->pc = 0x216facu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x216fb0: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x216fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x216fb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x216fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x216fb8: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x216fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x216fbc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x216fbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x216fc0: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x216fc0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x216fc4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x216fc4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x216fc8: 0x0  nop
    ctx->pc = 0x216fc8u;
    // NOP
    // 0x216fcc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x216FCCu;
    {
        const bool branch_taken_0x216fcc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x216fcc) {
            ctx->pc = 0x216FECu;
            goto label_216fec;
        }
    }
    ctx->pc = 0x216FD4u;
    // 0x216fd4: 0x0  nop
    ctx->pc = 0x216fd4u;
    // NOP
    // 0x216fd8: 0x0  nop
    ctx->pc = 0x216fd8u;
    // NOP
    // 0x216fdc: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x216fdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x216fe0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x216fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x216fe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x216FE4u;
    {
        const bool branch_taken_0x216fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x216FE4u;
            // 0x216fe8: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fe4) {
            ctx->pc = 0x216FFCu;
            goto label_216ffc;
        }
    }
    ctx->pc = 0x216FECu;
label_216fec:
    // 0x216fec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x216fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x216ff0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x216ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x216ff4: 0x0  nop
    ctx->pc = 0x216ff4u;
    // NOP
    // 0x216ff8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x216ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_216ffc:
    // 0x216ffc: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x216ffcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x217000: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x217000u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x217004: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x217004u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217008: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x217008u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21700c: 0x0  nop
    ctx->pc = 0x21700cu;
    // NOP
    // 0x217010: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x217010u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x217014: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x217014u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x217018: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x217018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21701c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21701cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217020: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x217020u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217024: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x217024u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x217028: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x217028u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21702c: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x21702cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217030: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x217030u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217034: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x217034u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217038: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x217038u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x21703c: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x21703cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x217040: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x217040u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x217044: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x217044u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x217048: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x217048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21704c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x21704cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217050: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x217050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x217054: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x217054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x217058: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x217058u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x21705c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21705cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217060: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x217060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x217064: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x217064u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217068: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x217068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x21706c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21706cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217070: 0x10a4ffc1  beq         $a1, $a0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x217070u;
    {
        const bool branch_taken_0x217070 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x217074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217070u;
            // 0x217074: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217070) {
            ctx->pc = 0x216F78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216f78;
        }
    }
    ctx->pc = 0x217078u;
    // 0x217078: 0x1000fd66  b           . + 4 + (-0x29A << 2)
    ctx->pc = 0x217078u;
    {
        const bool branch_taken_0x217078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21707Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217078u;
            // 0x21707c: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217078) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x217080u;
label_217080:
    // 0x217080: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217080u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217084: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x217084u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217088: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x217088u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21708c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x21708cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x217090: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x217090u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x217094: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x217094u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x217098: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x217098u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x21709c: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x21709cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2170a0: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x2170a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2170a4: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x2170a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2170a8: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2170a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2170ac: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x2170acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2170b0: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x2170b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2170b4: 0x48256800  qmfc2.ni    $a1, $vf13
    ctx->pc = 0x2170b4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2170b8: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x2170b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170bc: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x2170bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2170c0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x2170c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2170c4: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2170c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2170c8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x2170c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2170cc: 0x0  nop
    ctx->pc = 0x2170ccu;
    // NOP
    // 0x2170d0: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x2170D0u;
    {
        const bool branch_taken_0x2170d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2170d0) {
            ctx->pc = 0x2170D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2170D0u;
            // 0x2170d4: 0xc6000034  lwc1        $f0, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x217134u;
            goto label_217134;
        }
    }
    ctx->pc = 0x2170D8u;
    // 0x2170d8: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x2170d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2170dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2170dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2170e0: 0x44070800  mfc1        $a3, $f1
    ctx->pc = 0x2170e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2170e4: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x2170e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2170e8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2170e8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2170ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2170ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2170f0: 0x0  nop
    ctx->pc = 0x2170f0u;
    // NOP
    // 0x2170f4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2170f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2170f8: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2170f8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2170fc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2170fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217100: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x217100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217104: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x217104u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217108: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x217108u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21710c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x21710cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217110: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x217110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217114: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x217114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217118: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x217118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21711c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x21711cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x217120: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x217120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x217124: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x217124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x217128: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x217128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21712c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x21712cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x217130: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x217130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_217134:
    // 0x217134: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x217134u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x217138: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x217138u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21713c: 0x0  nop
    ctx->pc = 0x21713cu;
    // NOP
    // 0x217140: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x217140u;
    {
        const bool branch_taken_0x217140 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217140) {
            ctx->pc = 0x217144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217140u;
            // 0x217144: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2171A4u;
            goto label_2171a4;
        }
    }
    ctx->pc = 0x217148u;
    // 0x217148: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x217148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21714c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21714cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217150: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x217150u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x217154: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x217154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x217158: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x217158u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21715c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21715cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217160: 0x0  nop
    ctx->pc = 0x217160u;
    // NOP
    // 0x217164: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x217164u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x217168: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x217168u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x21716c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217170: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x217170u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217174: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x217174u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217178: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x217178u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21717c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x21717cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217180: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x217180u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217184: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x217184u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217188: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x217188u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21718c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x21718cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x217190: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x217190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x217194: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x217194u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x217198: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x217198u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21719c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x21719cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2171a0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2171a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2171a4:
    // 0x2171a4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2171a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2171a8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2171ac: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x2171acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2171b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2171b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2171b4: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2171b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2171b8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2171b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2171bc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2171c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2171c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2171c4: 0x10a4ffae  beq         $a1, $a0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x2171C4u;
    {
        const bool branch_taken_0x2171c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2171C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2171C4u;
            // 0x2171c8: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171c4) {
            ctx->pc = 0x217080u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217080;
        }
    }
    ctx->pc = 0x2171CCu;
    // 0x2171cc: 0x1000fd11  b           . + 4 + (-0x2EF << 2)
    ctx->pc = 0x2171CCu;
    {
        const bool branch_taken_0x2171cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2171CCu;
            // 0x2171d0: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171cc) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x2171D4u;
label_2171d4:
    // 0x2171d4: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x2171d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2171d8: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x2171d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2171dc: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2171dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2171e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2171e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2171e4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2171e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2171e8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2171e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2171ec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2171ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2171f0: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x2171f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2171f4: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2171f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2171f8: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x2171f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2171fc: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2171fcu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x217200: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x217200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x217204: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x217204u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217208: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x217208u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21720c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x21720cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x217210: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x217210u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x217214: 0xda610040  lqc2        $vf1, 0x40($s3)
    ctx->pc = 0x217214u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x217218: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x217218u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x21721c: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x21721cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x217220: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x217220u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x217224: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x217224u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217228: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x217228u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21722c: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x21722cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x217230: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x217230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x217234: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x217234u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x217238: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x217238u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x21723c: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x21723cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x217240: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x217240u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217244: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x217244u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x217248: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x217248u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x21724c: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x21724cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x217250: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x217250u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217254: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x217254u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x217258: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x217258u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21725c: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x21725cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x217260: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x217260u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217264: 0x48255800  qmfc2.ni    $a1, $vf11
    ctx->pc = 0x217264u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x217268: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x217268u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21726c: 0x48276000  qmfc2.ni    $a3, $vf12
    ctx->pc = 0x21726cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x217270: 0xc6800040  lwc1        $f0, 0x40($s4)
    ctx->pc = 0x217270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217274: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x217274u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x217278: 0x44872000  mtc1        $a3, $f4
    ctx->pc = 0x217278u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x21727c: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x21727cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x217280: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x217280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x217284: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x217284u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x217288: 0xc6060030  lwc1        $f6, 0x30($s0)
    ctx->pc = 0x217288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x21728c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x21728cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x217290: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x217290u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x217294: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x217294u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x217298: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x217298u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x21729c: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x21729cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2172a0: 0x0  nop
    ctx->pc = 0x2172a0u;
    // NOP
    // 0x2172a4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2172A4u;
    {
        const bool branch_taken_0x2172a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2172a4) {
            ctx->pc = 0x2172A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2172A4u;
            // 0x2172a8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2172C4u;
            goto label_2172c4;
        }
    }
    ctx->pc = 0x2172ACu;
    // 0x2172ac: 0x0  nop
    ctx->pc = 0x2172acu;
    // NOP
    // 0x2172b0: 0x0  nop
    ctx->pc = 0x2172b0u;
    // NOP
    // 0x2172b4: 0x46023003  div.s       $f0, $f6, $f2
    ctx->pc = 0x2172b4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[2];
    // 0x2172b8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2172b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2172bc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2172BCu;
    {
        const bool branch_taken_0x2172bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2172BCu;
            // 0x2172c0: 0xc6020030  lwc1        $f2, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172bc) {
            ctx->pc = 0x2172FCu;
            goto label_2172fc;
        }
    }
    ctx->pc = 0x2172C4u;
label_2172c4:
    // 0x2172c4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2172c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2172c8: 0x0  nop
    ctx->pc = 0x2172c8u;
    // NOP
    // 0x2172cc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2172CCu;
    {
        const bool branch_taken_0x2172cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2172cc) {
            ctx->pc = 0x2172ECu;
            goto label_2172ec;
        }
    }
    ctx->pc = 0x2172D4u;
    // 0x2172d4: 0x0  nop
    ctx->pc = 0x2172d4u;
    // NOP
    // 0x2172d8: 0x0  nop
    ctx->pc = 0x2172d8u;
    // NOP
    // 0x2172dc: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2172dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x2172e0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2172e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2172e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2172E4u;
    {
        const bool branch_taken_0x2172e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2172E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2172E4u;
            // 0x2172e8: 0xc4620004  lwc1        $f2, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e4) {
            ctx->pc = 0x2172FCu;
            goto label_2172fc;
        }
    }
    ctx->pc = 0x2172ECu;
label_2172ec:
    // 0x2172ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2172f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2172f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2172f4: 0x0  nop
    ctx->pc = 0x2172f4u;
    // NOP
    // 0x2172f8: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2172f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_2172fc:
    // 0x2172fc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2172fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x217300: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217300u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217304: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x217304u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217308: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x217308u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21730c: 0x0  nop
    ctx->pc = 0x21730cu;
    // NOP
    // 0x217310: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x217310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x217314: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x217314u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x217318: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x217318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21731c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21731cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217320: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x217320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217324: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x217324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x217328: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x217328u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21732c: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x21732cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217330: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x217330u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217334: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x217334u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217338: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x217338u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x21733c: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x21733cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x217340: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x217340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x217344: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x217344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x217348: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x217348u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21734c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x21734cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217350: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x217350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x217354: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x217354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x217358: 0x82050050  lb          $a1, 0x50($s0)
    ctx->pc = 0x217358u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21735c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21735cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217360: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x217360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x217364: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x217364u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217368: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x217368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x21736c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21736cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217370: 0x10a4ff98  beq         $a1, $a0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x217370u;
    {
        const bool branch_taken_0x217370 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x217374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217370u;
            // 0x217374: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217370) {
            ctx->pc = 0x2171D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2171d4;
        }
    }
    ctx->pc = 0x217378u;
    // 0x217378: 0x1000fca6  b           . + 4 + (-0x35A << 2)
    ctx->pc = 0x217378u;
    {
        const bool branch_taken_0x217378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21737Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217378u;
            // 0x21737c: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217378) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x217380u;
label_217380:
    // 0x217380: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217380u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217384: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x217384u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217388: 0xd8550010  lqc2        $vf21, 0x10($v0)
    ctx->pc = 0x217388u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21738c: 0xd8530020  lqc2        $vf19, 0x20($v0)
    ctx->pc = 0x21738cu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x217390: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x217390u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x217394: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x217394u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x217398: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x217398u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x21739c: 0x4bd5eafd  vmsuba.xyz  $ACC, $vf21, $vf29
    ctx->pc = 0x21739cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[21]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2173a0: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x2173a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2173a4: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x2173a4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2173a8: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x2173a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2173ac: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2173acu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2173b0: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x2173b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2173b4: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x2173b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2173b8: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x2173b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2173bc: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x2173bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2173c0: 0x4b016b6a  vmul.x      $vf13, $vf13, $vf1
    ctx->pc = 0x2173c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x2173c4: 0x48246800  qmfc2.ni    $a0, $vf13
    ctx->pc = 0x2173c4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2173c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2173c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2173cc: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2173ccu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2173d0: 0xd8550010  lqc2        $vf21, 0x10($v0)
    ctx->pc = 0x2173d0u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2173d4: 0xd8530020  lqc2        $vf19, 0x20($v0)
    ctx->pc = 0x2173d4u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2173d8: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x2173d8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2173dc: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2173dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2173e0: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2173e0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2173e4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2173e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2173e8: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2173e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2173ec: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2173ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2173f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2173f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2173f4: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x2173f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2173f8: 0x4bc6a8db  vmulw.xyz   $vf3, $vf21, $vf6w
    ctx->pc = 0x2173f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2173fc: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x2173fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217400: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x217400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217404: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x217404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x217408: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x217408u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21740c: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x21740cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x217410: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x217410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x217414: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x217414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x217418: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x217418u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21741c: 0x1000fc7c  b           . + 4 + (-0x384 << 2)
    ctx->pc = 0x21741Cu;
    {
        const bool branch_taken_0x21741c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21741Cu;
            // 0x217420: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21741c) {
            ctx->pc = 0x216610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216610;
        }
    }
    ctx->pc = 0x217424u;
label_217424:
    // 0x217424: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x217424u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217428: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x217428u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21742c: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x21742cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x217430: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217430u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x217434: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x217434u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x217438: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x217438u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21743c: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x21743cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x217440: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x217440u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217444: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x217444u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x217448: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x217448u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
    // 0x21744c: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21744cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x217450: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x217450u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x217454: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x217454u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x217458: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217458u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x21745c: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x21745cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x217460: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x217460u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x217464: 0x1000fc6b  b           . + 4 + (-0x395 << 2)
    ctx->pc = 0x217464u;
    {
        const bool branch_taken_0x217464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217464u;
            // 0x217468: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217464) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x21746Cu;
label_21746c:
    // 0x21746c: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x21746cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217470: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x217470u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217474: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x217474u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x217478: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217478u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x21747c: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x21747cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x217480: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x217480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217484: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x217484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x217488: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x217488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x21748c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21748cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217490: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x217490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x217494: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x217494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217498: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x217498u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21749c: 0xc6800030  lwc1        $f0, 0x30($s4)
    ctx->pc = 0x21749cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2174a0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2174a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2174a4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2174a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2174a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2174a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2174ac: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2174acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2174b0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2174b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2174b4: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2174b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2174b8: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x2174b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2174bc: 0xd8610040  lqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2174bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x2174c0: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x2174c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x2174c4: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x2174c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x2174c8: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2174c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2174cc: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x2174ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2174d0: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x2174d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2174d4: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x2174d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2174d8: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x2174d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2174dc: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x2174dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x2174e0: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x2174e0u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2174e4: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x2174e4u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2174e8: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x2174e8u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2174ec: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x2174ecu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2174f0: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x2174f0u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2174f4: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x2174f4u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2174f8: 0x1000fc46  b           . + 4 + (-0x3BA << 2)
    ctx->pc = 0x2174F8u;
    {
        const bool branch_taken_0x2174f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2174FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2174F8u;
            // 0x2174fc: 0x82040000  lb          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2174f8) {
            ctx->pc = 0x216614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216614;
        }
    }
    ctx->pc = 0x217500u;
label_217500:
    // 0x217500: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x217500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217504: 0x1000fc42  b           . + 4 + (-0x3BE << 2)
    ctx->pc = 0x217504u;
    {
        const bool branch_taken_0x217504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217504u;
            // 0x217508: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217504) {
            ctx->pc = 0x216610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216610;
        }
    }
    ctx->pc = 0x21750Cu;
label_21750c:
    // 0x21750c: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x21750cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x217510: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x217510u;
    SET_GPR_U32(ctx, 31, 0x217518u);
    ctx->pc = 0x217514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217510u;
            // 0x217514: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217518u; }
        if (ctx->pc != 0x217518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217518u; }
        if (ctx->pc != 0x217518u) { return; }
    }
    ctx->pc = 0x217518u;
label_217518:
    // 0x217518: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x217518u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21751c: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21751cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217520: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x217520u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x217524: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217524u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x217528: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x217528u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x21752c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x21752Cu;
    {
        const bool branch_taken_0x21752c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21752Cu;
            // 0x217530: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21752c) {
            ctx->pc = 0x217664u;
            goto label_217664;
        }
    }
    ctx->pc = 0x217534u;
label_217534:
    // 0x217534: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x217534u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217538: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x217538u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21753c: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x21753cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x217540: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217540u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x217544: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x217544u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x217548: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x217548u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x21754c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x21754Cu;
    SET_GPR_U32(ctx, 31, 0x217554u);
    ctx->pc = 0x217550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21754Cu;
            // 0x217550: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217554u; }
        if (ctx->pc != 0x217554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217554u; }
        if (ctx->pc != 0x217554u) { return; }
    }
    ctx->pc = 0x217554u;
label_217554:
    // 0x217554: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x217554u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217558: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x217558u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21755c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x21755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217560: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x217560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217564: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x217564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217568: 0x2575e7a0  addiu       $s5, $t3, -0x1860
    ctx->pc = 0x217568u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961056));
    // 0x21756c: 0xc085146  jal         func_214518
    ctx->pc = 0x21756Cu;
    SET_GPR_U32(ctx, 31, 0x217574u);
    ctx->pc = 0x217570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21756Cu;
            // 0x217570: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214518u;
    if (runtime->hasFunction(0x214518u)) {
        auto targetFn = runtime->lookupFunction(0x214518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217574u; }
        if (ctx->pc != 0x217574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214518_0x214518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217574u; }
        if (ctx->pc != 0x217574u) { return; }
    }
    ctx->pc = 0x217574u;
label_217574:
    // 0x217574: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x217574u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x217578: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x217578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x21757c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21757cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217580: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x217580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x217584: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x217584u;
    {
        const bool branch_taken_0x217584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217584u;
            // 0x217588: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217584) {
            ctx->pc = 0x217634u;
            goto label_217634;
        }
    }
    ctx->pc = 0x21758Cu;
label_21758c:
    // 0x21758c: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x21758cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217590: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x217590u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217594: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x217594u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x217598: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217598u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x21759c: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x21759cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2175a0: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x2175a0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2175a4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2175A4u;
    SET_GPR_U32(ctx, 31, 0x2175ACu);
    ctx->pc = 0x2175A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2175A4u;
            // 0x2175a8: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175ACu; }
        if (ctx->pc != 0x2175ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175ACu; }
        if (ctx->pc != 0x2175ACu) { return; }
    }
    ctx->pc = 0x2175ACu;
label_2175ac:
    // 0x2175ac: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2175acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175b0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2175b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2175b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175b8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2175b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175bc: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2175bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2175c0: 0x2575e7a0  addiu       $s5, $t3, -0x1860
    ctx->pc = 0x2175c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961056));
    // 0x2175c4: 0xc0851e4  jal         func_214790
    ctx->pc = 0x2175C4u;
    SET_GPR_U32(ctx, 31, 0x2175CCu);
    ctx->pc = 0x2175C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2175C4u;
            // 0x2175c8: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214790u;
    if (runtime->hasFunction(0x214790u)) {
        auto targetFn = runtime->lookupFunction(0x214790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175CCu; }
        if (ctx->pc != 0x2175CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214790_0x214790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175CCu; }
        if (ctx->pc != 0x2175CCu) { return; }
    }
    ctx->pc = 0x2175CCu;
label_2175cc:
    // 0x2175cc: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x2175ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2175d0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x2175d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2175d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2175D4u;
    {
        const bool branch_taken_0x2175d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2175D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2175D4u;
            // 0x2175d8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2175d4) {
            ctx->pc = 0x217628u;
            goto label_217628;
        }
    }
    ctx->pc = 0x2175DCu;
label_2175dc:
    // 0x2175dc: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x2175dcu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x2175e0: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x2175e0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x2175e4: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x2175e4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x2175e8: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x2175e8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2175ec: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x2175ecu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2175f0: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x2175f0u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2175f4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x2175F4u;
    SET_GPR_U32(ctx, 31, 0x2175FCu);
    ctx->pc = 0x2175F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2175F4u;
            // 0x2175f8: 0x2a0502d  daddu       $t2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175FCu; }
        if (ctx->pc != 0x2175FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2175FCu; }
        if (ctx->pc != 0x2175FCu) { return; }
    }
    ctx->pc = 0x2175FCu;
label_2175fc:
    // 0x2175fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2175fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217600: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x217600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217604: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x217604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217608: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x217608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21760c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x21760cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217610: 0x2575e7a0  addiu       $s5, $t3, -0x1860
    ctx->pc = 0x217610u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 11), 4294961056));
    // 0x217614: 0xc085318  jal         func_214C60
    ctx->pc = 0x217614u;
    SET_GPR_U32(ctx, 31, 0x21761Cu);
    ctx->pc = 0x217618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217614u;
            // 0x217618: 0x7fab0060  sq          $t3, 0x60($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214C60u;
    if (runtime->hasFunction(0x214C60u)) {
        auto targetFn = runtime->lookupFunction(0x214C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21761Cu; }
        if (ctx->pc != 0x21761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214C60_0x214c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21761Cu; }
        if (ctx->pc != 0x21761Cu) { return; }
    }
    ctx->pc = 0x21761Cu;
label_21761c:
    // 0x21761c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x21761cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217620: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x217620u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x217624: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x217624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_217628:
    // 0x217628: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x217628u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x21762c: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x21762cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x217630: 0xb18821  addu        $s1, $a1, $s1
    ctx->pc = 0x217630u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_217634:
    // 0x217634: 0x4a31033c  vmove.w     $vf17, $vf0
    ctx->pc = 0x217634u;
    ctx->vu0_vf[17] = ctx->vu0_vf[0];
    // 0x217638: 0x4bc00443  vaddw.xyz   $vf17, $vf0, $vf0w
    ctx->pc = 0x217638u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x21763c: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21763cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x217640: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x217640u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x217644: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x217644u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x217648: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217648u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x21764c: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x21764cu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x217650: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x217650u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x217654: 0x1000fbee  b           . + 4 + (-0x412 << 2)
    ctx->pc = 0x217654u;
    {
        const bool branch_taken_0x217654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217654u;
            // 0x217658: 0x7bab0060  lq          $t3, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217654) {
            ctx->pc = 0x216610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_216610;
        }
    }
    ctx->pc = 0x21765Cu;
label_21765c:
    // 0x21765c: 0xac000000  sw          $zero, 0x0($zero)
    ctx->pc = 0x21765cu;
    WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
    // 0x217660: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x217660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_217664:
    // 0x217664: 0x1c40fbe2  bgtz        $v0, . + 4 + (-0x41E << 2)
    ctx->pc = 0x217664u;
    {
        const bool branch_taken_0x217664 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x217668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217664u;
            // 0x217668: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217664) {
            ctx->pc = 0x2165F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2165f0;
        }
    }
    ctx->pc = 0x21766Cu;
    // 0x21766c: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x21766cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x217670: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x217670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217674: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x217674u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x217678: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x217678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x21767c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x21767cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217680: 0x1621026  xor         $v0, $t3, $v0
    ctx->pc = 0x217680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 2));
    // 0x217684: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x217684u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_217688:
    // 0x217688: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x217688u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_21768c:
    // 0x21768c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21768cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_217690:
    // 0x217690: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x217690u;
    {
        const bool branch_taken_0x217690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x217694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217690u;
            // 0x217694: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217690) {
            ctx->pc = 0x2176C0u;
            goto label_2176c0;
        }
    }
    ctx->pc = 0x217698u;
    // 0x217698: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217698u;
    {
        const bool branch_taken_0x217698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21769Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217698u;
            // 0x21769c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217698) {
            ctx->pc = 0x2176B0u;
            goto label_2176b0;
        }
    }
    ctx->pc = 0x2176A0u;
    // 0x2176a0: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x2176A0u;
    {
        const bool branch_taken_0x2176a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2176A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2176A0u;
            // 0x2176a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176a0) {
            ctx->pc = 0x217748u;
            goto label_217748;
        }
    }
    ctx->pc = 0x2176A8u;
    // 0x2176a8: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x2176A8u;
    {
        const bool branch_taken_0x2176a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2176a8) {
            ctx->pc = 0x217690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217690;
        }
    }
    ctx->pc = 0x2176B0u;
label_2176b0:
    // 0x2176b0: 0x506200bf  beql        $v1, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x2176B0u;
    {
        const bool branch_taken_0x2176b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2176b0) {
            ctx->pc = 0x2176B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2176B0u;
            // 0x2176b4: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2179B0u;
            goto label_2179b0;
        }
    }
    ctx->pc = 0x2176B8u;
    // 0x2176b8: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x2176B8u;
    {
        const bool branch_taken_0x2176b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2176BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2176B8u;
            // 0x2176bc: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2176b8) {
            ctx->pc = 0x21768Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21768c;
        }
    }
    ctx->pc = 0x2176C0u;
label_2176c0:
    // 0x2176c0: 0xd8a40040  lqc2        $vf4, 0x40($a1)
    ctx->pc = 0x2176c0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2176c4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x2176c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x2176c8: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x2176c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2176cc: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x2176ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x2176d0: 0xda810030  lqc2        $vf1, 0x30($s4)
    ctx->pc = 0x2176d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2176d4: 0x4be4116c  vsub.xyzw   $vf5, $vf2, $vf4
    ctx->pc = 0x2176d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2176d8: 0x4be021bf  vmulaw.xyzw $ACC, $vf4, $vf0w
    ctx->pc = 0x2176d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2176dc: 0x4be12908  vmaddx.xyzw $vf4, $vf5, $vf1x
    ctx->pc = 0x2176dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2176e0: 0xd8a30050  lqc2        $vf3, 0x50($a1)
    ctx->pc = 0x2176e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x2176e4: 0xf8a40040  sqc2        $vf4, 0x40($a1)
    ctx->pc = 0x2176e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2176e8: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2176e8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2176ec: 0x4be309ac  vsub.xyzw   $vf6, $vf1, $vf3
    ctx->pc = 0x2176ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2176f0: 0xda820030  lqc2        $vf2, 0x30($s4)
    ctx->pc = 0x2176f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x2176f4: 0x4be019bf  vmulaw.xyzw $ACC, $vf3, $vf0w
    ctx->pc = 0x2176f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2176f8: 0x4be230c8  vmaddx.xyzw $vf3, $vf6, $vf2x
    ctx->pc = 0x2176f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2176fc: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x2176fcu;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x217700: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217700u;
    {
        const bool branch_taken_0x217700 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x217704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217700u;
            // 0x217704: 0xf8a20050  sqc2        $vf2, 0x50($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217700) {
            ctx->pc = 0x217720u;
            goto label_217720;
        }
    }
    ctx->pc = 0x217708u;
    // 0x217708: 0x4be42968  vadd.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x217708u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21770c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x21770cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217710: 0x4be231a8  vadd.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x217710u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217714: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x217714u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217718: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217718u;
    {
        const bool branch_taken_0x217718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217718u;
            // 0x21771c: 0xf8a50010  sqc2        $vf5, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217718) {
            ctx->pc = 0x21773Cu;
            goto label_21773c;
        }
    }
    ctx->pc = 0x217720u;
label_217720:
    // 0x217720: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x217720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x217724: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x217724u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217728: 0xf8a40040  sqc2        $vf4, 0x40($a1)
    ctx->pc = 0x217728u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x21772c: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x21772cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x217730: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x217730u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217734: 0xf8a20050  sqc2        $vf2, 0x50($a1)
    ctx->pc = 0x217734u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217738: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x217738u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_21773c:
    // 0x21773c: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x21773cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x217740: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x217740u;
    {
        const bool branch_taken_0x217740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217740u;
            // 0x217744: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217740) {
            ctx->pc = 0x217688u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217688;
        }
    }
    ctx->pc = 0x217748u;
label_217748:
    // 0x217748: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x217748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x21774c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x21774cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x217750: 0x244ae880  addiu       $t2, $v0, -0x1780
    ctx->pc = 0x217750u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x217754: 0x2469d6e0  addiu       $t1, $v1, -0x2920
    ctx->pc = 0x217754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
    // 0x217758: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x217758u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x21775c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x21775cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_217760:
    // 0x217760: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x217760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x217764: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x217764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x217768: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x217768u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x21776c: 0xd8a30020  lqc2        $vf3, 0x20($a1)
    ctx->pc = 0x21776cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x217770: 0x24630064  addiu       $v1, $v1, 0x64
    ctx->pc = 0x217770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
    // 0x217774: 0x4be411fd  vabs.xyzw   $vf4, $vf2
    ctx->pc = 0x217774u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[2], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217778: 0x2833021  addu        $a2, $s4, $v1
    ctx->pc = 0x217778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x21777c: 0x4be519fd  vabs.xyzw   $vf5, $vf3
    ctx->pc = 0x21777cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217780: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x217780u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x217784: 0x4be2102c  vsub.xyzw   $vf0, $vf2, $vf2
    ctx->pc = 0x217784u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x217788: 0x4a0002ff  vnop
    ctx->pc = 0x217788u;
    // NOP operation, no action needed for VU0
    // 0x21778c: 0x4a0002ff  vnop
    ctx->pc = 0x21778cu;
    // NOP operation, no action needed for VU0
    // 0x217790: 0x4a0002ff  vnop
    ctx->pc = 0x217790u;
    // NOP operation, no action needed for VU0
    // 0x217794: 0x4a0002ff  vnop
    ctx->pc = 0x217794u;
    // NOP operation, no action needed for VU0
    // 0x217798: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x217798u;
    SET_GPR_U32(ctx, 3, ctx->vu0_cmsar3);
    // 0x21779c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x21779cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x2177a0: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x2177a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2177a4: 0x4be1282c  vsub.xyzw   $vf0, $vf5, $vf1
    ctx->pc = 0x2177a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x2177a8: 0x4a0002ff  vnop
    ctx->pc = 0x2177a8u;
    // NOP operation, no action needed for VU0
    // 0x2177ac: 0x4a0002ff  vnop
    ctx->pc = 0x2177acu;
    // NOP operation, no action needed for VU0
    // 0x2177b0: 0x4a0002ff  vnop
    ctx->pc = 0x2177b0u;
    // NOP operation, no action needed for VU0
    // 0x2177b4: 0x4a0002ff  vnop
    ctx->pc = 0x2177b4u;
    // NOP operation, no action needed for VU0
    // 0x2177b8: 0x48478800  cfc2.ni     $a3, $vi17
    ctx->pc = 0x2177b8u;
    SET_GPR_U32(ctx, 7, ctx->vu0_cmsar3);
    // 0x2177bc: 0x30e700f0  andi        $a3, $a3, 0xF0
    ctx->pc = 0x2177bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x2177c0: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x2177c0u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x2177c4: 0x4be1202c  vsub.xyzw   $vf0, $vf4, $vf1
    ctx->pc = 0x2177c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x2177c8: 0x4a0002ff  vnop
    ctx->pc = 0x2177c8u;
    // NOP operation, no action needed for VU0
    // 0x2177cc: 0x4a0002ff  vnop
    ctx->pc = 0x2177ccu;
    // NOP operation, no action needed for VU0
    // 0x2177d0: 0x4a0002ff  vnop
    ctx->pc = 0x2177d0u;
    // NOP operation, no action needed for VU0
    // 0x2177d4: 0x4a0002ff  vnop
    ctx->pc = 0x2177d4u;
    // NOP operation, no action needed for VU0
    // 0x2177d8: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x2177d8u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar3);
    // 0x2177dc: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x2177dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x2177e0: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x2177e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x2177e4: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x2177e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x2177e8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2177e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2177ec: 0x4be3182c  vsub.xyzw   $vf0, $vf3, $vf3
    ctx->pc = 0x2177ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x2177f0: 0x4a0002ff  vnop
    ctx->pc = 0x2177f0u;
    // NOP operation, no action needed for VU0
    // 0x2177f4: 0x4a0002ff  vnop
    ctx->pc = 0x2177f4u;
    // NOP operation, no action needed for VU0
    // 0x2177f8: 0x4a0002ff  vnop
    ctx->pc = 0x2177f8u;
    // NOP operation, no action needed for VU0
    // 0x2177fc: 0x4a0002ff  vnop
    ctx->pc = 0x2177fcu;
    // NOP operation, no action needed for VU0
    // 0x217800: 0x48478800  cfc2.ni     $a3, $vi17
    ctx->pc = 0x217800u;
    SET_GPR_U32(ctx, 7, ctx->vu0_cmsar3);
    // 0x217804: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x217804u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x217808: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x217808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21780c: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x21780cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x217810: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x217810u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x217814: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x217814u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x217818: 0x4be120d8  vmulx.xyzw  $vf3, $vf4, $vf1x
    ctx->pc = 0x217818u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21781c: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x21781cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217820: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x217820u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x217824: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x217824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x217828: 0x4be019bf  vmulaw.xyzw $ACC, $vf3, $vf0w
    ctx->pc = 0x217828u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x21782c: 0x4be228c8  vmaddx.xyzw $vf3, $vf5, $vf2x
    ctx->pc = 0x21782cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217830: 0x440b0000  mfc1        $t3, $f0
    ctx->pc = 0x217830u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 11, bits); }
    // 0x217834: 0x3042000e  andi        $v0, $v0, 0xE
    ctx->pc = 0x217834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)14);
    // 0x217838: 0x48ab0800  qmtc2.ni    $t3, $vf1
    ctx->pc = 0x217838u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 11));
    // 0x21783c: 0x4be10040  vaddx.xyzw  $vf1, $vf0, $vf1x
    ctx->pc = 0x21783cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217840: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217840u;
    {
        const bool branch_taken_0x217840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x217840) {
            ctx->pc = 0x217858u;
            goto label_217858;
        }
    }
    ctx->pc = 0x217848u;
    // 0x217848: 0x79220000  lq          $v0, 0x0($t1)
    ctx->pc = 0x217848u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x21784c: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x21784cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x217850: 0x79230000  lq          $v1, 0x0($t1)
    ctx->pc = 0x217850u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x217854: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x217854u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
label_217858:
    // 0x217858: 0x4be1182c  vsub.xyzw   $vf0, $vf3, $vf1
    ctx->pc = 0x217858u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x21785c: 0x4a0002ff  vnop
    ctx->pc = 0x21785cu;
    // NOP operation, no action needed for VU0
    // 0x217860: 0x4a0002ff  vnop
    ctx->pc = 0x217860u;
    // NOP operation, no action needed for VU0
    // 0x217864: 0x4a0002ff  vnop
    ctx->pc = 0x217864u;
    // NOP operation, no action needed for VU0
    // 0x217868: 0x4a0002ff  vnop
    ctx->pc = 0x217868u;
    // NOP operation, no action needed for VU0
    // 0x21786c: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x21786cu;
    SET_GPR_U32(ctx, 3, ctx->vu0_cmsar3);
    // 0x217870: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x217870u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    // 0x217874: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x217874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x217878: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x217878u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x21787c: 0x30e2000e  andi        $v0, $a3, 0xE
    ctx->pc = 0x21787cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)14);
    // 0x217880: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x217880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x217884: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x217884u;
    {
        const bool branch_taken_0x217884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217884) {
            ctx->pc = 0x217888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217884u;
            // 0x217888: 0x94c20010  lhu         $v0, 0x10($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21791Cu;
            goto label_21791c;
        }
    }
    ctx->pc = 0x21788Cu;
    // 0x21788c: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x21788cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217890: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x217890u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x217894: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217894u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217898: 0x4be10040  vaddx.xyzw  $vf1, $vf0, $vf1x
    ctx->pc = 0x217898u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21789c: 0x4be1182c  vsub.xyzw   $vf0, $vf3, $vf1
    ctx->pc = 0x21789cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x2178a0: 0x4a0002ff  vnop
    ctx->pc = 0x2178a0u;
    // NOP operation, no action needed for VU0
    // 0x2178a4: 0x4a0002ff  vnop
    ctx->pc = 0x2178a4u;
    // NOP operation, no action needed for VU0
    // 0x2178a8: 0x4a0002ff  vnop
    ctx->pc = 0x2178a8u;
    // NOP operation, no action needed for VU0
    // 0x2178ac: 0x4a0002ff  vnop
    ctx->pc = 0x2178acu;
    // NOP operation, no action needed for VU0
    // 0x2178b0: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x2178b0u;
    SET_GPR_U32(ctx, 3, ctx->vu0_cmsar3);
    // 0x2178b4: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x2178b4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    // 0x2178b8: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x2178b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2178bc: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x2178bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x2178c0: 0x30e2000e  andi        $v0, $a3, 0xE
    ctx->pc = 0x2178c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)14);
    // 0x2178c4: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x2178c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x2178c8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2178C8u;
    {
        const bool branch_taken_0x2178c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2178c8) {
            ctx->pc = 0x2178CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2178C8u;
            // 0x2178cc: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2178ECu;
            goto label_2178ec;
        }
    }
    ctx->pc = 0x2178D0u;
    // 0x2178d0: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2178d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2178d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2178D4u;
    {
        const bool branch_taken_0x2178d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2178D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2178D4u;
            // 0x2178d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178d4) {
            ctx->pc = 0x2178E0u;
            goto label_2178e0;
        }
    }
    ctx->pc = 0x2178DCu;
    // 0x2178dc: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2178dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_2178e0:
    // 0x2178e0: 0xf8a70020  sqc2        $vf7, 0x20($a1)
    ctx->pc = 0x2178e0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x2178e4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2178E4u;
    {
        const bool branch_taken_0x2178e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2178E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2178E4u;
            // 0x2178e8: 0xf8a70010  sqc2        $vf7, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2178e4) {
            ctx->pc = 0x217920u;
            goto label_217920;
        }
    }
    ctx->pc = 0x2178ECu;
label_2178ec:
    // 0x2178ec: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x2178ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2178f0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2178f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2178f4: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x2178f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x2178f8: 0xd8a20010  lqc2        $vf2, 0x10($a1)
    ctx->pc = 0x2178f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2178fc: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x2178fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217900: 0xf8a10020  sqc2        $vf1, 0x20($a1)
    ctx->pc = 0x217900u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217904: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x217904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217908: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x217908u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x21790c: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x21790cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x217910: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x217910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217914: 0xf8a20010  sqc2        $vf2, 0x10($a1)
    ctx->pc = 0x217914u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217918: 0x94c20010  lhu         $v0, 0x10($a2)
    ctx->pc = 0x217918u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 16)));
label_21791c:
    // 0x21791c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x21791cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_217920:
    // 0x217920: 0xd8a30040  lqc2        $vf3, 0x40($a1)
    ctx->pc = 0x217920u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x217924: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x217924u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x217928: 0xda820030  lqc2        $vf2, 0x30($s4)
    ctx->pc = 0x217928u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x21792c: 0x4be3096c  vsub.xyzw   $vf5, $vf1, $vf3
    ctx->pc = 0x21792cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217930: 0x4be019bf  vmulaw.xyzw $ACC, $vf3, $vf0w
    ctx->pc = 0x217930u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x217934: 0x4be228c8  vmaddx.xyzw $vf3, $vf5, $vf2x
    ctx->pc = 0x217934u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217938: 0xd8a40050  lqc2        $vf4, 0x50($a1)
    ctx->pc = 0x217938u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x21793c: 0xf8a30040  sqc2        $vf3, 0x40($a1)
    ctx->pc = 0x21793cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x217940: 0xd8a10020  lqc2        $vf1, 0x20($a1)
    ctx->pc = 0x217940u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x217944: 0x4be409ac  vsub.xyzw   $vf6, $vf1, $vf4
    ctx->pc = 0x217944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217948: 0xda820030  lqc2        $vf2, 0x30($s4)
    ctx->pc = 0x217948u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x21794c: 0x4be021bf  vmulaw.xyzw $ACC, $vf4, $vf0w
    ctx->pc = 0x21794cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x217950: 0x4be23108  vmaddx.xyzw $vf4, $vf6, $vf2x
    ctx->pc = 0x217950u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217954: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x217954u;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
    // 0x217958: 0x15000007  bnez        $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217958u;
    {
        const bool branch_taken_0x217958 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x21795Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217958u;
            // 0x21795c: 0xf8a20050  sqc2        $vf2, 0x50($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217958) {
            ctx->pc = 0x217978u;
            goto label_217978;
        }
    }
    ctx->pc = 0x217960u;
    // 0x217960: 0x4be32968  vadd.xyzw   $vf5, $vf5, $vf3
    ctx->pc = 0x217960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217964: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x217964u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217968: 0x4be231a8  vadd.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x217968u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21796c: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x21796cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217970: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x217970u;
    {
        const bool branch_taken_0x217970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217970u;
            // 0x217974: 0xf8a50010  sqc2        $vf5, 0x10($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217970) {
            ctx->pc = 0x217994u;
            goto label_217994;
        }
    }
    ctx->pc = 0x217978u;
label_217978:
    // 0x217978: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x217978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x21797c: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x21797cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217980: 0xf8a30040  sqc2        $vf3, 0x40($a1)
    ctx->pc = 0x217980u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x217984: 0xdbc10000  lqc2        $vf1, 0x0($fp)
    ctx->pc = 0x217984u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x217988: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x217988u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21798c: 0xf8a20050  sqc2        $vf2, 0x50($a1)
    ctx->pc = 0x21798cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217990: 0xf8a50010  sqc2        $vf5, 0x10($a1)
    ctx->pc = 0x217990u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_217994:
    // 0x217994: 0xf8a60020  sqc2        $vf6, 0x20($a1)
    ctx->pc = 0x217994u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x217998: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x217998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x21799c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x21799cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2179a0: 0x5040ff6f  beql        $v0, $zero, . + 4 + (-0x91 << 2)
    ctx->pc = 0x2179A0u;
    {
        const bool branch_taken_0x2179a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2179a0) {
            ctx->pc = 0x2179A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2179A0u;
            // 0x2179a4: 0x8ca30008  lw          $v1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217760;
        }
    }
    ctx->pc = 0x2179A8u;
    // 0x2179a8: 0x1000ff38  b           . + 4 + (-0xC8 << 2)
    ctx->pc = 0x2179A8u;
    {
        const bool branch_taken_0x2179a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2179ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2179A8u;
            // 0x2179ac: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2179a8) {
            ctx->pc = 0x21768Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21768c;
        }
    }
    ctx->pc = 0x2179B0u;
label_2179b0:
    // 0x2179b0: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x2179b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
    // 0x2179b4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2179b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x2179b8: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x2179b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
    // 0x2179bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2179bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2179c0: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x2179c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2179c4: 0x1440fafe  bnez        $v0, . + 4 + (-0x502 << 2)
    ctx->pc = 0x2179C4u;
    {
        const bool branch_taken_0x2179c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2179C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2179C4u;
            // 0x2179c8: 0x8fa50048  lw          $a1, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2179c4) {
            ctx->pc = 0x2165C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2165c0;
        }
    }
    ctx->pc = 0x2179CCu;
label_2179cc:
    // 0x2179cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2179ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2179d0:
    // 0x2179d0: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x2179d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2179d4: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x2179d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2179d8: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x2179d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2179dc: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x2179dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2179e0: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x2179e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2179e4: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x2179e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2179e8: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x2179e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2179ec: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x2179ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2179f0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2179f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2179f4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2179f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2179f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2179F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2179FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2179F8u;
            // 0x2179fc: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217A00u;
    // 0x217a00: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x217a00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x217a04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x217a04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x217a08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x217a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217a0c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x217a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217a10: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x217a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x217a14: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x217a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x217a18: 0x4be0012c  vsub.xyzw   $vf4, $vf0, $vf0
    ctx->pc = 0x217a18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217a1c: 0x0  nop
    ctx->pc = 0x217a1cu;
    // NOP
label_217a20:
    // 0x217a20: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x217a20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_217a24:
    // 0x217a24: 0x1067000b  beq         $v1, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x217A24u;
    {
        const bool branch_taken_0x217a24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x217A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217A24u;
            // 0x217a28: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a24) {
            ctx->pc = 0x217A54u;
            goto label_217a54;
        }
    }
    ctx->pc = 0x217A2Cu;
    // 0x217a2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217A2Cu;
    {
        const bool branch_taken_0x217a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a2c) {
            ctx->pc = 0x217A44u;
            goto label_217a44;
        }
    }
    ctx->pc = 0x217A34u;
    // 0x217a34: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x217A34u;
    {
        const bool branch_taken_0x217a34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a34) {
            ctx->pc = 0x217A64u;
            goto label_217a64;
        }
    }
    ctx->pc = 0x217A3Cu;
    // 0x217a3c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x217A3Cu;
    {
        const bool branch_taken_0x217a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a3c) {
            ctx->pc = 0x217A9Cu;
            goto label_217a9c;
        }
    }
    ctx->pc = 0x217A44u;
label_217a44:
    // 0x217a44: 0x10660018  beq         $v1, $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x217A44u;
    {
        const bool branch_taken_0x217a44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x217a44) {
            ctx->pc = 0x217AA8u;
            goto label_217aa8;
        }
    }
    ctx->pc = 0x217A4Cu;
    // 0x217a4c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x217A4Cu;
    {
        const bool branch_taken_0x217a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a4c) {
            ctx->pc = 0x217A9Cu;
            goto label_217a9c;
        }
    }
    ctx->pc = 0x217A54u;
label_217a54:
    // 0x217a54: 0xf8a40040  sqc2        $vf4, 0x40($a1)
    ctx->pc = 0x217a54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x217a58: 0xf8a40050  sqc2        $vf4, 0x50($a1)
    ctx->pc = 0x217a58u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x217a5c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x217A5Cu;
    {
        const bool branch_taken_0x217a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217A5Cu;
            // 0x217a60: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a5c) {
            ctx->pc = 0x217A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217a20;
        }
    }
    ctx->pc = 0x217A64u;
label_217a64:
    // 0x217a64: 0x4be000ec  vsub.xyzw   $vf3, $vf0, $vf0
    ctx->pc = 0x217a64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217a68: 0xf8a30040  sqc2        $vf3, 0x40($a1)
    ctx->pc = 0x217a68u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x217a6c: 0x0  nop
    ctx->pc = 0x217a6cu;
    // NOP
label_217a70:
    // 0x217a70: 0xf8a30050  sqc2        $vf3, 0x50($a1)
    ctx->pc = 0x217a70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 80), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x217a74: 0xd8a10010  lqc2        $vf1, 0x10($a1)
    ctx->pc = 0x217a74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x217a78: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x217a78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217a7c: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x217a7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217a80: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x217a80u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217a84: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x217a84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x217a88: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x217a88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x217a8c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x217A8Cu;
    {
        const bool branch_taken_0x217a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217a8c) {
            ctx->pc = 0x217A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217A8Cu;
            // 0x217a90: 0xf8a30040  sqc2        $vf3, 0x40($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 64), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217a70;
        }
    }
    ctx->pc = 0x217A94u;
    // 0x217a94: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x217A94u;
    {
        const bool branch_taken_0x217a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217A94u;
            // 0x217a98: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217a94) {
            ctx->pc = 0x217A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217a24;
        }
    }
    ctx->pc = 0x217A9Cu;
label_217a9c:
    // 0x217a9c: 0xac000000  sw          $zero, 0x0($zero)
    ctx->pc = 0x217a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
    // 0x217aa0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x217AA0u;
    {
        const bool branch_taken_0x217aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217AA0u;
            // 0x217aa4: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217aa0) {
            ctx->pc = 0x217A24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217a24;
        }
    }
    ctx->pc = 0x217AA8u;
label_217aa8:
    // 0x217aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x217AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x217AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217AA8u;
            // 0x217aac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x217AB0u;
    // 0x217ab0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x217ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x217ab4: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x217ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x217ab8: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x217ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
    // 0x217abc: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x217abcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x217ac0: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x217ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x217ac4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x217ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ac8: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x217ac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x217acc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x217accu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ad0: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x217ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x217ad4: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x217ad4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ad8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x217ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x217adc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x217adcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ae0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x217ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x217ae4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x217ae4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ae8: 0x8242e798  lb          $v0, -0x1868($s2)
    ctx->pc = 0x217ae8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294961048)));
    // 0x217aec: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x217aecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217af0: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x217af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x217af4: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x217af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x217af8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x217AF8u;
    {
        const bool branch_taken_0x217af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217AF8u;
            // 0x217afc: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217af8) {
            ctx->pc = 0x217B18u;
            goto label_217b18;
        }
    }
    ctx->pc = 0x217B00u;
    // 0x217b00: 0xc086406  jal         func_219018
    ctx->pc = 0x217B00u;
    SET_GPR_U32(ctx, 31, 0x217B08u);
    ctx->pc = 0x217B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217B00u;
            // 0x217b04: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x219018u;
    if (runtime->hasFunction(0x219018u)) {
        auto targetFn = runtime->lookupFunction(0x219018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B08u; }
        if (ctx->pc != 0x217B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00219018_0x219018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217B08u; }
        if (ctx->pc != 0x217B08u) { return; }
    }
    ctx->pc = 0x217B08u;
label_217b08:
    // 0x217b08: 0xa242e798  sb          $v0, -0x1868($s2)
    ctx->pc = 0x217b08u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 4294961048), (uint8_t)GPR_U32(ctx, 2));
    // 0x217b0c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x217b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x217b10: 0x10400425  beqz        $v0, . + 4 + (0x425 << 2)
    ctx->pc = 0x217B10u;
    {
        const bool branch_taken_0x217b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B10u;
            // 0x217b14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b10) {
            ctx->pc = 0x218BA8u;
            goto label_218ba8;
        }
    }
    ctx->pc = 0x217B18u;
label_217b18:
    // 0x217b18: 0x4a31033c  vmove.w     $vf17, $vf0
    ctx->pc = 0x217b18u;
    ctx->vu0_vf[17] = ctx->vu0_vf[0];
    // 0x217b1c: 0x4bc00443  vaddw.xyz   $vf17, $vf0, $vf0w
    ctx->pc = 0x217b1cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x217b20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217b20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217b24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217b24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217b28: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x217B28u;
    {
        const bool branch_taken_0x217b28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B28u;
            // 0x217b2c: 0xafb00000  sw          $s0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b28) {
            ctx->pc = 0x217B34u;
            goto label_217b34;
        }
    }
    ctx->pc = 0x217B30u;
    // 0x217b30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x217b30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_217b34:
    // 0x217b34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x217b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x217b38: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x217b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b3c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x217b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x217b40: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x217b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x217b44: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x217b44u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b48: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x217b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b4c: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x217b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x217b50: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x217b50u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217b54: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x217B54u;
    {
        const bool branch_taken_0x217b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B54u;
            // 0x217b58: 0x2454e7a0  addiu       $s4, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b54) {
            ctx->pc = 0x217BBCu;
            goto label_217bbc;
        }
    }
    ctx->pc = 0x217B5Cu;
    // 0x217b5c: 0x0  nop
    ctx->pc = 0x217b5cu;
    // NOP
label_217b60:
    // 0x217b60: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x217b60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_217b64:
    // 0x217b64: 0x2c62001d  sltiu       $v0, $v1, 0x1D
    ctx->pc = 0x217b64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x217b68: 0x1040040d  beqz        $v0, . + 4 + (0x40D << 2)
    ctx->pc = 0x217B68u;
    {
        const bool branch_taken_0x217b68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217B68u;
            // 0x217b6c: 0x3c020064  lui         $v0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217b68) {
            ctx->pc = 0x218BA0u;
            goto label_218ba0;
        }
    }
    ctx->pc = 0x217B70u;
    // 0x217b70: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x217b70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x217b74: 0x2442e800  addiu       $v0, $v0, -0x1800
    ctx->pc = 0x217b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961152));
    // 0x217b78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x217b78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217b7c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x217b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217b80: 0x800008  jr          $a0
    ctx->pc = 0x217B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x217B88u: goto label_217b88;
            case 0x217BECu: goto label_217bec;
            case 0x217BF4u: goto label_217bf4;
            case 0x217C4Cu: goto label_217c4c;
            case 0x217D74u: goto label_217d74;
            case 0x217E14u: goto label_217e14;
            case 0x217E9Cu: goto label_217e9c;
            case 0x217F20u: goto label_217f20;
            case 0x21800Cu: goto label_21800c;
            case 0x218164u: goto label_218164;
            case 0x2182F0u: goto label_2182f0;
            case 0x218344u: goto label_218344;
            case 0x21839Cu: goto label_21839c;
            case 0x2184C8u: goto label_2184c8;
            case 0x2185D0u: goto label_2185d0;
            case 0x218724u: goto label_218724;
            case 0x2188D0u: goto label_2188d0;
            case 0x218974u: goto label_218974;
            case 0x2189BCu: goto label_2189bc;
            case 0x218A50u: goto label_218a50;
            case 0x218A5Cu: goto label_218a5c;
            case 0x218A84u: goto label_218a84;
            case 0x218AD8u: goto label_218ad8;
            case 0x218B24u: goto label_218b24;
            case 0x218BA0u: goto label_218ba0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x217B88u;
label_217b88:
    // 0x217b88: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x217b88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_217b8c:
    // 0x217b8c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x217b8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x217b90: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x217b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x217b94: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x217b94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x217b98: 0x2c31821  addu        $v1, $s6, $v1
    ctx->pc = 0x217b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x217b9c: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x217b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x217ba0: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x217ba0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x217ba4: 0x8c490010  lw          $t1, 0x10($v0)
    ctx->pc = 0x217ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x217ba8: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x217ba8u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217bac: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x217bacu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x217bb0: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x217bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x217bb4: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x217bb8: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x217bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
label_217bbc:
    // 0x217bbc: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x217bbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x217bc0: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x217bc0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x217bc4: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x217bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
    // 0x217bc8: 0x319c0  sll         $v1, $v1, 7
    ctx->pc = 0x217bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x217bcc: 0x2c29821  addu        $s3, $s6, $v0
    ctx->pc = 0x217bccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x217bd0: 0x2c39021  addu        $s2, $s6, $v1
    ctx->pc = 0x217bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x217bd4: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x217bd4u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x217bd8: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x217bd8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x217bdc: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x217bdcu;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x217be0: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x217be0u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x217be4: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x217be4u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x217be8: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x217be8u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
label_217bec:
    // 0x217bec: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x217BECu;
    {
        const bool branch_taken_0x217bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217BECu;
            // 0x217bf0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217bec) {
            ctx->pc = 0x217B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b60;
        }
    }
    ctx->pc = 0x217BF4u;
label_217bf4:
    // 0x217bf4: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x217bf4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217bf8: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x217bf8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217bfc: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x217bfcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217c00: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x217c00u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x217c04: 0x4a000578  vcallms     0xA8
    ctx->pc = 0x217c04u;
    {     ctx->vu0_tpc = 0xA8;     runtime->executeVU0Microprogram(rdram, ctx, 0xA8); }
    // 0x217c08: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x217c08u;
    // PREF instruction (ignored)
    // 0x217c0c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x217C0Cu;
    SET_GPR_U32(ctx, 31, 0x217C14u);
    ctx->pc = 0x217C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217C0Cu;
            // 0x217c10: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C14u; }
        if (ctx->pc != 0x217C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217C14u; }
        if (ctx->pc != 0x217C14u) { return; }
    }
    ctx->pc = 0x217C14u;
label_217c14:
    // 0x217c14: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x217c14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c18: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x217c18u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217c1c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x217c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x217c20: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x217c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x217c24: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x217c24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x217c28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x217c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217c2c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x217c2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x217c30: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x217c30u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217c34: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x217c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x217c38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217c38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217c3c: 0x10a4ffed  beq         $a1, $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x217C3Cu;
    {
        const bool branch_taken_0x217c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x217C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217C3Cu;
            // 0x217c40: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c3c) {
            ctx->pc = 0x217BF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217bf4;
        }
    }
    ctx->pc = 0x217C44u;
    // 0x217c44: 0x1000ffc7  b           . + 4 + (-0x39 << 2)
    ctx->pc = 0x217C44u;
    {
        const bool branch_taken_0x217c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217C44u;
            // 0x217c48: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c44) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x217C4Cu;
label_217c4c:
    // 0x217c4c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217c4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217c50: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x217c50u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217c54: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x217c54u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x217c58: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x217c58u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x217c5c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x217c5cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x217c60: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x217c60u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x217c64: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x217c64u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x217c68: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x217c68u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x217c6c: 0x4bd4f0a9  vmadd.xyz   $vf2, $vf30, $vf20
    ctx->pc = 0x217c6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217c70: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x217c70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x217c74: 0x4b0288fc  vmsubax.x   $ACC, $vf17, $vf2x
    ctx->pc = 0x217c74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217c78: 0x4b0288fd  vmsubay.x   $ACC, $vf17, $vf2y
    ctx->pc = 0x217c78u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217c7c: 0x4b02888e  vmsubz.x    $vf2, $vf17, $vf2z
    ctx->pc = 0x217c7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217c80: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x217c80u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217c84: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x217c84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217c88: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x217c88u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217c8c: 0x0  nop
    ctx->pc = 0x217c8cu;
    // NOP
    // 0x217c90: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x217c90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217c94: 0x0  nop
    ctx->pc = 0x217c94u;
    // NOP
    // 0x217c98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x217C98u;
    {
        const bool branch_taken_0x217c98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x217C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217C98u;
            // 0x217c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217c98) {
            ctx->pc = 0x217CA4u;
            goto label_217ca4;
        }
    }
    ctx->pc = 0x217CA0u;
    // 0x217ca0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x217ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_217ca4:
    // 0x217ca4: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x217CA4u;
    {
        const bool branch_taken_0x217ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217ca4) {
            ctx->pc = 0x217CA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217CA4u;
            // 0x217ca8: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217D44u;
            goto label_217d44;
        }
    }
    ctx->pc = 0x217CACu;
    // 0x217cac: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x217cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217cb0: 0xda010010  lqc2        $vf1, 0x10($s0)
    ctx->pc = 0x217cb0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217cb4: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x217cb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217cb8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x217cb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x217cbc: 0x4b0110ea  vmul.x      $vf3, $vf2, $vf1
    ctx->pc = 0x217cbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217cc0: 0x48a52000  qmtc2.ni    $a1, $vf4
    ctx->pc = 0x217cc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x217cc4: 0xda020020  lqc2        $vf2, 0x20($s0)
    ctx->pc = 0x217cc4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217cc8: 0x4b032068  vadd.x      $vf1, $vf4, $vf3
    ctx->pc = 0x217cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x217ccc: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x217cccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217cd0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x217cd0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217cd4: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x217cd4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x217cd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x217cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217cdc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x217cdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217ce0: 0x0  nop
    ctx->pc = 0x217ce0u;
    // NOP
    // 0x217ce4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x217ce4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217ce8: 0x0  nop
    ctx->pc = 0x217ce8u;
    // NOP
    // 0x217cec: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x217CECu;
    {
        const bool branch_taken_0x217cec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217cec) {
            ctx->pc = 0x217CF8u;
            goto label_217cf8;
        }
    }
    ctx->pc = 0x217CF4u;
    // 0x217cf4: 0x4b0410ec  vsub.x      $vf3, $vf2, $vf4
    ctx->pc = 0x217cf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
label_217cf8:
    // 0x217cf8: 0x48241800  qmfc2.ni    $a0, $vf3
    ctx->pc = 0x217cf8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x217cfc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x217cfcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217d00: 0x0  nop
    ctx->pc = 0x217d00u;
    // NOP
    // 0x217d04: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x217d04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x217d08: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x217d08u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x217d0c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x217d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217d10: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x217d10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217d14: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x217d14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217d18: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x217d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x217d1c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x217d1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x217d20: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x217d20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x217d24: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x217d24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x217d28: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x217d28u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217d2c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x217d2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x217d30: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x217d30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x217d34: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x217d34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x217d38: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x217d38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x217d3c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x217d3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x217d40: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x217d40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_217d44:
    // 0x217d44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x217d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x217d48: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x217d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x217d4c: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x217d4cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x217d50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x217d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217d54: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x217d54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x217d58: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x217d58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217d5c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x217d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x217d60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217d64: 0x10a4ffb9  beq         $a1, $a0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x217D64u;
    {
        const bool branch_taken_0x217d64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x217D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D64u;
            // 0x217d68: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d64) {
            ctx->pc = 0x217C4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217c4c;
        }
    }
    ctx->pc = 0x217D6Cu;
    // 0x217d6c: 0x1000ff7d  b           . + 4 + (-0x83 << 2)
    ctx->pc = 0x217D6Cu;
    {
        const bool branch_taken_0x217d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217D6Cu;
            // 0x217d70: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217d6c) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x217D74u;
label_217d74:
    // 0x217d74: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x217d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217d78: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x217d78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x217d7c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x217d7cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217d80: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x217d80u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217d84: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x217d84u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217d88: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x217d88u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x217d8c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x217d8cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x217d90: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x217d90u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x217d94: 0x48a58000  qmtc2.ni    $a1, $vf16
    ctx->pc = 0x217d94u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x217d98: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x217d98u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x217d9c: 0x4a000b38  vcallms     0x160
    ctx->pc = 0x217d9cu;
    {     ctx->vu0_tpc = 0x160;     runtime->executeVU0Microprogram(rdram, ctx, 0x160); }
    // 0x217da0: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x217da0u;
    // PREF instruction (ignored)
    // 0x217da4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x217DA4u;
    SET_GPR_U32(ctx, 31, 0x217DACu);
    ctx->pc = 0x217DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217DA4u;
            // 0x217da8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DACu; }
        if (ctx->pc != 0x217DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DACu; }
        if (ctx->pc != 0x217DACu) { return; }
    }
    ctx->pc = 0x217DACu;
label_217dac:
    // 0x217dac: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x217dacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217db0: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x217db0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x217db4: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x217db4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217db8: 0x38420013  xori        $v0, $v0, 0x13
    ctx->pc = 0x217db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)19);
    // 0x217dbc: 0x1440ff68  bnez        $v0, . + 4 + (-0x98 << 2)
    ctx->pc = 0x217DBCu;
    {
        const bool branch_taken_0x217dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217DBCu;
            // 0x217dc0: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217dbc) {
            ctx->pc = 0x217B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b60;
        }
    }
    ctx->pc = 0x217DC4u;
    // 0x217dc4: 0xc6000060  lwc1        $f0, 0x60($s0)
    ctx->pc = 0x217dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217dc8: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x217dc8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x217dcc: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x217dccu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217dd0: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x217dd0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217dd4: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x217dd4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217dd8: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x217dd8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x217ddc: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x217ddcu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x217de0: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x217de0u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x217de4: 0x48a28000  qmtc2.ni    $v0, $vf16
    ctx->pc = 0x217de4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217de8: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x217de8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x217dec: 0x4a000b38  vcallms     0x160
    ctx->pc = 0x217decu;
    {     ctx->vu0_tpc = 0x160;     runtime->executeVU0Microprogram(rdram, ctx, 0x160); }
    // 0x217df0: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x217df0u;
    // PREF instruction (ignored)
    // 0x217df4: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x217DF4u;
    SET_GPR_U32(ctx, 31, 0x217DFCu);
    ctx->pc = 0x217DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217DF4u;
            // 0x217df8: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DFCu; }
        if (ctx->pc != 0x217DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217DFCu; }
        if (ctx->pc != 0x217DFCu) { return; }
    }
    ctx->pc = 0x217DFCu;
label_217dfc:
    // 0x217dfc: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x217dfcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e00: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x217e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x217e04: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x217e04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217e08: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x217e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
    // 0x217e0c: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x217E0Cu;
    {
        const bool branch_taken_0x217e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x217E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217E0Cu;
            // 0x217e10: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e0c) {
            ctx->pc = 0x217B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b60;
        }
    }
    ctx->pc = 0x217E14u;
label_217e14:
    // 0x217e14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217e14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217e18: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217e18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217e1c: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x217e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x217e20: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x217e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x217e24: 0xc6080080  lwc1        $f8, 0x80($s0)
    ctx->pc = 0x217e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x217e28: 0xc6070088  lwc1        $f7, 0x88($s0)
    ctx->pc = 0x217e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x217e2c: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x217e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217e30: 0x44034000  mfc1        $v1, $f8
    ctx->pc = 0x217e30u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[8], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x217e34: 0x44043800  mfc1        $a0, $f7
    ctx->pc = 0x217e34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x217e38: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x217e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x217e3c: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x217e3cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217e40: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x217e40u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217e44: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x217e44u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217e48: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x217e48u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x217e4c: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x217e4cu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x217e50: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x217e50u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x217e54: 0xda180060  lqc2        $vf24, 0x60($s0)
    ctx->pc = 0x217e54u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x217e58: 0xda190070  lqc2        $vf25, 0x70($s0)
    ctx->pc = 0x217e58u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x217e5c: 0x48a38001  qmtc2.i     $v1, $vf16
    ctx->pc = 0x217e5cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x217e60: 0x48287800  qmfc2.ni    $t0, $vf15
    ctx->pc = 0x217e60u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x217e64: 0x48a47800  qmtc2.ni    $a0, $vf15
    ctx->pc = 0x217e64u;
    ctx->vu0_vf[15] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x217e68: 0x48a57000  qmtc2.ni    $a1, $vf14
    ctx->pc = 0x217e68u;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x217e6c: 0x4a0021b8  vcallms     0x430
    ctx->pc = 0x217e6cu;
    {     ctx->vu0_tpc = 0x430;     runtime->executeVU0Microprogram(rdram, ctx, 0x430); }
    // 0x217e70: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x217e70u;
    // PREF instruction (ignored)
    // 0x217e74: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x217E74u;
    SET_GPR_U32(ctx, 31, 0x217E7Cu);
    ctx->pc = 0x217E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217E74u;
            // 0x217e78: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E7Cu; }
        if (ctx->pc != 0x217E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217E7Cu; }
        if (ctx->pc != 0x217E7Cu) { return; }
    }
    ctx->pc = 0x217E7Cu;
label_217e7c:
    // 0x217e7c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x217e7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217e80: 0x48287001  qmfc2.i     $t0, $vf14
    ctx->pc = 0x217e80u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x217e84: 0x4a003778  vcallms     0x6E8
    ctx->pc = 0x217e84u;
    {     ctx->vu0_tpc = 0x6E8;     runtime->executeVU0Microprogram(rdram, ctx, 0x6E8); }
    // 0x217e88: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x217e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x217e8c: 0x82030090  lb          $v1, 0x90($s0)
    ctx->pc = 0x217e8cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x217e90: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x217e90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x217e94: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x217E94u;
    {
        const bool branch_taken_0x217e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217E94u;
            // 0x217e98: 0x26100090  addiu       $s0, $s0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217e94) {
            ctx->pc = 0x217F0Cu;
            goto label_217f0c;
        }
    }
    ctx->pc = 0x217E9Cu;
label_217e9c:
    // 0x217e9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217ea4: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x217ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x217ea8: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x217ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x217eac: 0xc6070060  lwc1        $f7, 0x60($s0)
    ctx->pc = 0x217eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x217eb0: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x217eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217eb4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x217eb4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x217eb8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x217eb8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x217ebc: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x217ebcu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217ec0: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x217ec0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x217ec4: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x217ec4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x217ec8: 0xda150030  lqc2        $vf21, 0x30($s0)
    ctx->pc = 0x217ec8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x217ecc: 0xda160040  lqc2        $vf22, 0x40($s0)
    ctx->pc = 0x217eccu;
    ctx->vu0_vf[22] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x217ed0: 0xda170050  lqc2        $vf23, 0x50($s0)
    ctx->pc = 0x217ed0u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x217ed4: 0x48a38000  qmtc2.ni    $v1, $vf16
    ctx->pc = 0x217ed4u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x217ed8: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x217ed8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x217edc: 0x48a47000  qmtc2.ni    $a0, $vf14
    ctx->pc = 0x217edcu;
    ctx->vu0_vf[14] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x217ee0: 0x4a002db8  vcallms     0x5B0
    ctx->pc = 0x217ee0u;
    {     ctx->vu0_tpc = 0x5B0;     runtime->executeVU0Microprogram(rdram, ctx, 0x5B0); }
    // 0x217ee4: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x217ee4u;
    // PREF instruction (ignored)
    // 0x217ee8: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x217EE8u;
    SET_GPR_U32(ctx, 31, 0x217EF0u);
    ctx->pc = 0x217EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x217EE8u;
            // 0x217eec: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EF0u; }
        if (ctx->pc != 0x217EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x217EF0u; }
        if (ctx->pc != 0x217EF0u) { return; }
    }
    ctx->pc = 0x217EF0u;
label_217ef0:
    // 0x217ef0: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x217ef0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217ef4: 0x48287001  qmfc2.i     $t0, $vf14
    ctx->pc = 0x217ef4u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x217ef8: 0x4a003c78  vcallms     0x788
    ctx->pc = 0x217ef8u;
    {     ctx->vu0_tpc = 0x788;     runtime->executeVU0Microprogram(rdram, ctx, 0x788); }
    // 0x217efc: 0xae880000  sw          $t0, 0x0($s4)
    ctx->pc = 0x217efcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 8));
    // 0x217f00: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x217f00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x217f04: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x217f04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x217f08: 0x26100070  addiu       $s0, $s0, 0x70
    ctx->pc = 0x217f08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_217f0c:
    // 0x217f0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x217f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x217f10: 0x5062ff1e  beql        $v1, $v0, . + 4 + (-0xE2 << 2)
    ctx->pc = 0x217F10u;
    {
        const bool branch_taken_0x217f10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x217f10) {
            ctx->pc = 0x217F14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x217F10u;
            // 0x217f14: 0x96030004  lhu         $v1, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x217B8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b8c;
        }
    }
    ctx->pc = 0x217F18u;
    // 0x217f18: 0x1000ff12  b           . + 4 + (-0xEE << 2)
    ctx->pc = 0x217F18u;
    {
        const bool branch_taken_0x217f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217F18u;
            // 0x217f1c: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f18) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x217F20u;
label_217f20:
    // 0x217f20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x217f20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217f24: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x217f24u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x217f28: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x217f28u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x217f2c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x217f2cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x217f30: 0x4bd8dabe  vmula.xyz   $ACC, $vf27, $vf24
    ctx->pc = 0x217f30u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[24]);
    // 0x217f34: 0x4bd9f369  vmadd.xyz   $vf13, $vf30, $vf25
    ctx->pc = 0x217f34u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217f38: 0x4b1989bf  vmulaw.x    $ACC, $vf17, $vf25w
    ctx->pc = 0x217f38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[25], ctx->vu0_vf[25], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x217f3c: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x217f3cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217f40: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x217f40u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x217f44: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x217f44u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x217f48: 0x48256800  qmfc2.ni    $a1, $vf13
    ctx->pc = 0x217f48u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x217f4c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x217f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x217f50: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x217f50u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x217f54: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x217f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x217f58: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x217f58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x217f5c: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x217f5cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x217f60: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x217f60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x217f64: 0x0  nop
    ctx->pc = 0x217f64u;
    // NOP
    // 0x217f68: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x217F68u;
    {
        const bool branch_taken_0x217f68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x217f68) {
            ctx->pc = 0x217F88u;
            goto label_217f88;
        }
    }
    ctx->pc = 0x217F70u;
    // 0x217f70: 0x0  nop
    ctx->pc = 0x217f70u;
    // NOP
    // 0x217f74: 0x0  nop
    ctx->pc = 0x217f74u;
    // NOP
    // 0x217f78: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x217f78u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x217f7c: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x217f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x217f80: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x217F80u;
    {
        const bool branch_taken_0x217f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217F80u;
            // 0x217f84: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x217f80) {
            ctx->pc = 0x217F98u;
            goto label_217f98;
        }
    }
    ctx->pc = 0x217F88u;
label_217f88:
    // 0x217f88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x217f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x217f8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x217f8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217f90: 0x0  nop
    ctx->pc = 0x217f90u;
    // NOP
    // 0x217f94: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x217f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_217f98:
    // 0x217f98: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x217f98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x217f9c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x217f9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x217fa0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x217fa0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x217fa4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x217fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x217fa8: 0x0  nop
    ctx->pc = 0x217fa8u;
    // NOP
    // 0x217fac: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x217facu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x217fb0: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x217fb0u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x217fb4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x217fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x217fb8: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x217fb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217fbc: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x217fbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217fc0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x217fc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x217fc4: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x217fc4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x217fc8: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x217fc8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x217fcc: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x217fccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x217fd0: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x217fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x217fd4: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x217fd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x217fd8: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x217fd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x217fdc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x217fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x217fe0: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x217fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x217fe4: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x217fe4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x217fe8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x217fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x217fec: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x217fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x217ff0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x217ff0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x217ff4: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x217ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x217ff8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x217ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x217ffc: 0x10a4ffc8  beq         $a1, $a0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x217FFCu;
    {
        const bool branch_taken_0x217ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x218000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x217FFCu;
            // 0x218000: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217ffc) {
            ctx->pc = 0x217F20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217f20;
        }
    }
    ctx->pc = 0x218004u;
    // 0x218004: 0x1000fed7  b           . + 4 + (-0x129 << 2)
    ctx->pc = 0x218004u;
    {
        const bool branch_taken_0x218004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218004u;
            // 0x218008: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218004) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x21800Cu;
label_21800c:
    // 0x21800c: 0xc6050028  lwc1        $f5, 0x28($s0)
    ctx->pc = 0x21800cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x218010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x218010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218014: 0xc6a40008  lwc1        $f4, 0x8($s5)
    ctx->pc = 0x218014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218018: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x218018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21801c: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x21801cu;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218020: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x218020u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x218024: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x218024u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x218028: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x218028u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x21802c: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x21802cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x218030: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x218030u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218034: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x218034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x218038: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x218038u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x21803c: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x21803cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218040: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x218040u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x218044: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x218044u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218048: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x218048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x21804c: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x21804cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218050: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x218050u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x218054: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x218054u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218058: 0x48245800  qmfc2.ni    $a0, $vf11
    ctx->pc = 0x218058u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x21805c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x21805cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218060: 0x48256000  qmfc2.ni    $a1, $vf12
    ctx->pc = 0x218060u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x218064: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x218064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218068: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x218068u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x21806c: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x21806cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x218070: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x218070u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x218074: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x218074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218078: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x218078u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x21807c: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x21807cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x218080: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x218080u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x218084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218088: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x218088u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x21808c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x21808cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x218090: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x218090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x218094: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x218094u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218098: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x218098u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21809c: 0x0  nop
    ctx->pc = 0x21809cu;
    // NOP
    // 0x2180a0: 0x46041041  sub.s       $f1, $f2, $f4
    ctx->pc = 0x2180a0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x2180a4: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x2180a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2180a8: 0x0  nop
    ctx->pc = 0x2180a8u;
    // NOP
    // 0x2180ac: 0x45020009  bc1fl       . + 4 + (0x9 << 2)
    ctx->pc = 0x2180ACu;
    {
        const bool branch_taken_0x2180ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2180ac) {
            ctx->pc = 0x2180B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2180ACu;
            // 0x2180b0: 0xc6000024  lwc1        $f0, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x2180D4u;
            goto label_2180d4;
        }
    }
    ctx->pc = 0x2180B4u;
    // 0x2180b4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2180b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2180b8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2180b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2180bc: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x2180bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x2180c0: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x2180c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x2180c4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x2180c4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2180c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2180c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2180cc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2180CCu;
    {
        const bool branch_taken_0x2180cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2180cc) {
            ctx->pc = 0x218100u;
            goto label_218100;
        }
    }
    ctx->pc = 0x2180D4u;
label_2180d4:
    // 0x2180d4: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x2180d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2180d8: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x2180d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2180dc: 0x0  nop
    ctx->pc = 0x2180dcu;
    // NOP
    // 0x2180e0: 0x45020014  bc1fl       . + 4 + (0x14 << 2)
    ctx->pc = 0x2180E0u;
    {
        const bool branch_taken_0x2180e0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2180e0) {
            ctx->pc = 0x2180E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2180E0u;
            // 0x2180e4: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218134u;
            goto label_218134;
        }
    }
    ctx->pc = 0x2180E8u;
    // 0x2180e8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2180e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2180ec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2180ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2180f0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2180f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2180f4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x2180f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x2180f8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2180f8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2180fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2180fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_218100:
    // 0x218100: 0x0  nop
    ctx->pc = 0x218100u;
    // NOP
    // 0x218104: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x218104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218108: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x218108u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x21810c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21810cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218110: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x218110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218114: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x218114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218118: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x218118u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21811c: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x21811cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218120: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x218120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218124: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x218124u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x218128: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x218128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21812c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x21812cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x218130: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x218130u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_218134:
    // 0x218134: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x218134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x218138: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x218138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x21813c: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x21813cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x218140: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218144: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x218144u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x218148: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x218148u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21814c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x21814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x218150: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218154: 0x10a4ffad  beq         $a1, $a0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x218154u;
    {
        const bool branch_taken_0x218154 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x218158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218154u;
            // 0x218158: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218154) {
            ctx->pc = 0x21800Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21800c;
        }
    }
    ctx->pc = 0x21815Cu;
    // 0x21815c: 0x1000fe81  b           . + 4 + (-0x17F << 2)
    ctx->pc = 0x21815Cu;
    {
        const bool branch_taken_0x21815c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21815Cu;
            // 0x218160: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21815c) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x218164u;
label_218164:
    // 0x218164: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x218164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x218168: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x218168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21816c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x21816cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218170: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x218170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218174: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x218174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218178: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x218178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21817c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21817cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218180: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x218180u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x218184: 0xc602001c  lwc1        $f2, 0x1C($s0)
    ctx->pc = 0x218184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218188: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x218188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21818c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x21818cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x218190: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x218190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x218194: 0xd8580000  lqc2        $vf24, 0x0($v0)
    ctx->pc = 0x218194u;
    ctx->vu0_vf[24] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218198: 0xd8590010  lqc2        $vf25, 0x10($v0)
    ctx->pc = 0x218198u;
    ctx->vu0_vf[25] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21819c: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x21819cu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2181a0: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x2181a0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2181a4: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x2181a4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2181a8: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x2181a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2181ac: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x2181acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2181b0: 0x4bd832be  vmula.xyz   $ACC, $vf6, $vf24
    ctx->pc = 0x2181b0u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[24]);
    // 0x2181b4: 0x4bd942e9  vmadd.xyz   $vf11, $vf8, $vf25
    ctx->pc = 0x2181b4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2181b8: 0x4bd81abe  vmula.xyz   $ACC, $vf3, $vf24
    ctx->pc = 0x2181b8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[24]);
    // 0x2181bc: 0x4bd92329  vmadd.xyz   $vf12, $vf4, $vf25
    ctx->pc = 0x2181bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[25]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2181c0: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x2181c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2181c4: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x2181c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2181c8: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x2181c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2181cc: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x2181ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2181d0: 0x48245800  qmfc2.ni    $a0, $vf11
    ctx->pc = 0x2181d0u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2181d4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2181d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2181d8: 0x48256000  qmfc2.ni    $a1, $vf12
    ctx->pc = 0x2181d8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2181dc: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2181dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2181e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2181e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2181e4: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x2181e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2181e8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2181e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2181ec: 0xc604000c  lwc1        $f4, 0xC($s0)
    ctx->pc = 0x2181ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2181f0: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2181f0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2181f4: 0xc6060020  lwc1        $f6, 0x20($s0)
    ctx->pc = 0x2181f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2181f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2181f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2181fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2181fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x218200: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x218200u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x218204: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x218204u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x218208: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x218208u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21820c: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x21820cu;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218210: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x218210u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218214: 0x0  nop
    ctx->pc = 0x218214u;
    // NOP
    // 0x218218: 0x46040042  mul.s       $f1, $f0, $f4
    ctx->pc = 0x218218u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x21821c: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x21821cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218220: 0x0  nop
    ctx->pc = 0x218220u;
    // NOP
    // 0x218224: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x218224u;
    {
        const bool branch_taken_0x218224 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218224) {
            ctx->pc = 0x218228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218224u;
            // 0x218228: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x218244u;
            goto label_218244;
        }
    }
    ctx->pc = 0x21822Cu;
    // 0x21822c: 0x0  nop
    ctx->pc = 0x21822cu;
    // NOP
    // 0x218230: 0x0  nop
    ctx->pc = 0x218230u;
    // NOP
    // 0x218234: 0x46013003  div.s       $f0, $f6, $f1
    ctx->pc = 0x218234u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[1];
    // 0x218238: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21823c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21823Cu;
    {
        const bool branch_taken_0x21823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21823Cu;
            // 0x218240: 0xc6010020  lwc1        $f1, 0x20($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21823c) {
            ctx->pc = 0x21827Cu;
            goto label_21827c;
        }
    }
    ctx->pc = 0x218244u;
label_218244:
    // 0x218244: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x218244u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218248: 0x0  nop
    ctx->pc = 0x218248u;
    // NOP
    // 0x21824c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21824Cu;
    {
        const bool branch_taken_0x21824c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21824c) {
            ctx->pc = 0x21826Cu;
            goto label_21826c;
        }
    }
    ctx->pc = 0x218254u;
    // 0x218254: 0x0  nop
    ctx->pc = 0x218254u;
    // NOP
    // 0x218258: 0x0  nop
    ctx->pc = 0x218258u;
    // NOP
    // 0x21825c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x21825cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x218260: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x218264: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218264u;
    {
        const bool branch_taken_0x218264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218264u;
            // 0x218268: 0xc4610004  lwc1        $f1, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218264) {
            ctx->pc = 0x21827Cu;
            goto label_21827c;
        }
    }
    ctx->pc = 0x21826Cu;
label_21826c:
    // 0x21826c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21826cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218270: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218274: 0x0  nop
    ctx->pc = 0x218274u;
    // NOP
    // 0x218278: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218278u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_21827c:
    // 0x21827c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x21827cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x218280: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x218280u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x218284: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x218284u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21828c: 0x0  nop
    ctx->pc = 0x21828cu;
    // NOP
    // 0x218290: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x218290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218294: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x218294u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x218298: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x218298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21829c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21829cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2182a0: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2182a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2182a4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2182a4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2182a8: 0x4bc5c16a  vmul.xyz    $vf5, $vf24, $vf5
    ctx->pc = 0x2182a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[24], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2182ac: 0x4bc6c9aa  vmul.xyz    $vf6, $vf25, $vf6
    ctx->pc = 0x2182acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[25], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2182b0: 0x4bc5dee8  vadd.xyz    $vf27, $vf27, $vf5
    ctx->pc = 0x2182b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x2182b4: 0x4bc6f7a8  vadd.xyz    $vf30, $vf30, $vf6
    ctx->pc = 0x2182b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2182b8: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2182b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2182bc: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2182bcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2182c0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2182c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2182c4: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2182c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2182c8: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x2182c8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2182cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2182ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2182d0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2182d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2182d4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2182d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2182d8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2182d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2182dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2182dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2182e0: 0x10a4ffa0  beq         $a1, $a0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x2182E0u;
    {
        const bool branch_taken_0x2182e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2182E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2182E0u;
            // 0x2182e4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182e0) {
            ctx->pc = 0x218164u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218164;
        }
    }
    ctx->pc = 0x2182E8u;
    // 0x2182e8: 0x1000fe1e  b           . + 4 + (-0x1E2 << 2)
    ctx->pc = 0x2182E8u;
    {
        const bool branch_taken_0x2182e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2182ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2182E8u;
            // 0x2182ec: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2182e8) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x2182F0u;
label_2182f0:
    // 0x2182f0: 0xda130000  lqc2        $vf19, 0x0($s0)
    ctx->pc = 0x2182f0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2182f4: 0xda140010  lqc2        $vf20, 0x10($s0)
    ctx->pc = 0x2182f4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2182f8: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x2182f8u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x2182fc: 0x4a001e78  vcallms     0x3C8
    ctx->pc = 0x2182fcu;
    {     ctx->vu0_tpc = 0x3C8;     runtime->executeVU0Microprogram(rdram, ctx, 0x3C8); }
    // 0x218300: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x218300u;
    // PREF instruction (ignored)
    // 0x218304: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x218304u;
    SET_GPR_U32(ctx, 31, 0x21830Cu);
    ctx->pc = 0x218308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218304u;
            // 0x218308: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21830Cu; }
        if (ctx->pc != 0x21830Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21830Cu; }
        if (ctx->pc != 0x21830Cu) { return; }
    }
    ctx->pc = 0x21830Cu;
label_21830c:
    // 0x21830c: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x21830cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218310: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x218310u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218314: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x218314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x218318: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x218318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x21831c: 0x82050020  lb          $a1, 0x20($s0)
    ctx->pc = 0x21831cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x218320: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218324: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x218324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x218328: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x218328u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21832c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x21832cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x218330: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218330u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218334: 0x10a4ffee  beq         $a1, $a0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x218334u;
    {
        const bool branch_taken_0x218334 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x218338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218334u;
            // 0x218338: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218334) {
            ctx->pc = 0x2182F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2182f0;
        }
    }
    ctx->pc = 0x21833Cu;
    // 0x21833c: 0x1000fe09  b           . + 4 + (-0x1F7 << 2)
    ctx->pc = 0x21833Cu;
    {
        const bool branch_taken_0x21833c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21833Cu;
            // 0x218340: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21833c) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x218344u;
label_218344:
    // 0x218344: 0xda120000  lqc2        $vf18, 0x0($s0)
    ctx->pc = 0x218344u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218348: 0xda130010  lqc2        $vf19, 0x10($s0)
    ctx->pc = 0x218348u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21834c: 0xda140020  lqc2        $vf20, 0x20($s0)
    ctx->pc = 0x21834cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x218350: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x218350u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x218354: 0x4a000038  vcallms     0x0
    ctx->pc = 0x218354u;
    {     ctx->vu0_tpc = 0x0;     runtime->executeVU0Microprogram(rdram, ctx, 0x0); }
    // 0x218358: 0xce0000c0  pref        0x00, 0xC0($s0)
    ctx->pc = 0x218358u;
    // PREF instruction (ignored)
    // 0x21835c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x21835Cu;
    SET_GPR_U32(ctx, 31, 0x218364u);
    ctx->pc = 0x218360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21835Cu;
            // 0x218360: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218364u; }
        if (ctx->pc != 0x218364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218364u; }
        if (ctx->pc != 0x218364u) { return; }
    }
    ctx->pc = 0x218364u;
label_218364:
    // 0x218364: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x218364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218368: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x218368u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21836c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x21836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x218370: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x218370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x218374: 0x82050030  lb          $a1, 0x30($s0)
    ctx->pc = 0x218374u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x218378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21837c: 0x26100030  addiu       $s0, $s0, 0x30
    ctx->pc = 0x21837cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x218380: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x218380u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x218384: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x218384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x218388: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218388u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21838c: 0x10a4ffed  beq         $a1, $a0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21838Cu;
    {
        const bool branch_taken_0x21838c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x218390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21838Cu;
            // 0x218390: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21838c) {
            ctx->pc = 0x218344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218344;
        }
    }
    ctx->pc = 0x218394u;
    // 0x218394: 0x1000fdf3  b           . + 4 + (-0x20D << 2)
    ctx->pc = 0x218394u;
    {
        const bool branch_taken_0x218394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218394u;
            // 0x218398: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218394) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x21839Cu;
label_21839c:
    // 0x21839c: 0xc6040030  lwc1        $f4, 0x30($s0)
    ctx->pc = 0x21839cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2183a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2183a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183a4: 0xc6050034  lwc1        $f5, 0x34($s0)
    ctx->pc = 0x2183a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2183a8: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2183a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2183ac: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2183acu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2183b0: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x2183b0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2183b4: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x2183b4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2183b8: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2183b8u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2183bc: 0xda610040  lqc2        $vf1, 0x40($s3)
    ctx->pc = 0x2183bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2183c0: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x2183c0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x2183c4: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x2183c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2183c8: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x2183c8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x2183cc: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x2183ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2183d0: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x2183d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2183d4: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x2183d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x2183d8: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x2183d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x2183dc: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x2183dcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x2183e0: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x2183e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2183e4: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x2183e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2183e8: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x2183e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2183ec: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x2183ecu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x2183f0: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x2183f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2183f4: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x2183f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2183f8: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x2183f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2183fc: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x2183fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x218400: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x218400u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218404: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x218404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x218408: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x218408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x21840c: 0x48235800  qmfc2.ni    $v1, $vf11
    ctx->pc = 0x21840cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x218410: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x218410u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218414: 0x48246000  qmfc2.ni    $a0, $vf12
    ctx->pc = 0x218414u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x218418: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x218418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21841c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x21841cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x218420: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x218420u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x218424: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x218424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x218428: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x218428u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x21842c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x21842cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x218430: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x218430u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218434: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x218434u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x218438: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x218438u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x21843c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x21843cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x218440: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x218440u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x218444: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x218444u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x218448: 0x4b02086a  vmul.x      $vf1, $vf1, $vf2
    ctx->pc = 0x218448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21844c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x21844cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218450: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x218450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218454: 0x0  nop
    ctx->pc = 0x218454u;
    // NOP
    // 0x218458: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x218458u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x21845c: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x21845cu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x218460: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x218460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218464: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x218464u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218468: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x218468u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21846c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21846cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218470: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x218470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218474: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x218474u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218478: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x218478u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x21847c: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x21847cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218480: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x218480u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x218484: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x218484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x218488: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x218488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x21848c: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x21848cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x218490: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x218490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x218494: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x218494u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x218498: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x218498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x21849c: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x21849cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2184a0: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x2184a0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2184a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2184a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2184a8: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2184a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2184ac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2184acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2184b0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2184b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2184b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2184b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2184b8: 0x10a4ffb8  beq         $a1, $a0, . + 4 + (-0x48 << 2)
    ctx->pc = 0x2184B8u;
    {
        const bool branch_taken_0x2184b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2184BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2184B8u;
            // 0x2184bc: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184b8) {
            ctx->pc = 0x21839Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21839c;
        }
    }
    ctx->pc = 0x2184C0u;
    // 0x2184c0: 0x1000fda8  b           . + 4 + (-0x258 << 2)
    ctx->pc = 0x2184C0u;
    {
        const bool branch_taken_0x2184c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2184C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2184C0u;
            // 0x2184c4: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2184c0) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x2184C8u;
label_2184c8:
    // 0x2184c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2184c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2184cc: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2184ccu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2184d0: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x2184d0u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2184d4: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x2184d4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2184d8: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2184d8u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2184dc: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x2184dcu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x2184e0: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x2184e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2184e4: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x2184e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2184e8: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x2184e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2184ec: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x2184ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2184f0: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2184f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2184f4: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x2184f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2184f8: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x2184f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2184fc: 0x48236800  qmfc2.ni    $v1, $vf13
    ctx->pc = 0x2184fcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x218500: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x218500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218504: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x218504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x218508: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x218508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21850c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21850cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218510: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x218510u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x218514: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x218514u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218518: 0x0  nop
    ctx->pc = 0x218518u;
    // NOP
    // 0x21851c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21851Cu;
    {
        const bool branch_taken_0x21851c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21851c) {
            ctx->pc = 0x21853Cu;
            goto label_21853c;
        }
    }
    ctx->pc = 0x218524u;
    // 0x218524: 0x0  nop
    ctx->pc = 0x218524u;
    // NOP
    // 0x218528: 0x0  nop
    ctx->pc = 0x218528u;
    // NOP
    // 0x21852c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x21852cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
    // 0x218530: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x218534: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218534u;
    {
        const bool branch_taken_0x218534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218534u;
            // 0x218538: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218534) {
            ctx->pc = 0x21854Cu;
            goto label_21854c;
        }
    }
    ctx->pc = 0x21853Cu;
label_21853c:
    // 0x21853c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21853cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218540: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218540u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218544: 0x0  nop
    ctx->pc = 0x218544u;
    // NOP
    // 0x218548: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_21854c:
    // 0x21854c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x21854cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x218550: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x218550u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x218554: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x218554u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218558: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x218558u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21855c: 0x0  nop
    ctx->pc = 0x21855cu;
    // NOP
    // 0x218560: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x218560u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218564: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x218564u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x218568: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x218568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21856c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21856cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218570: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x218570u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218574: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x218574u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218578: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x218578u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21857c: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x21857cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218580: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x218580u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218584: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x218584u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218588: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x218588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x21858c: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x21858cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x218590: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x218590u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x218594: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x218594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x218598: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x218598u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21859c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x21859cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2185a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2185a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2185a4: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2185a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2185a8: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x2185a8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2185ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2185acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2185b0: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x2185b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x2185b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2185b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2185b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2185b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2185bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2185bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2185c0: 0x10a4ffc1  beq         $a1, $a0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2185C0u;
    {
        const bool branch_taken_0x2185c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2185C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2185C0u;
            // 0x2185c4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185c0) {
            ctx->pc = 0x2184C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2184c8;
        }
    }
    ctx->pc = 0x2185C8u;
    // 0x2185c8: 0x1000fd66  b           . + 4 + (-0x29A << 2)
    ctx->pc = 0x2185C8u;
    {
        const bool branch_taken_0x2185c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2185CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2185C8u;
            // 0x2185cc: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2185c8) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x2185D0u;
label_2185d0:
    // 0x2185d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2185d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2185d4: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2185d4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2185d8: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x2185d8u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2185dc: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x2185dcu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2185e0: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2185e0u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2185e4: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x2185e4u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x2185e8: 0x4bd2eafd  vmsuba.xyz  $ACC, $vf18, $vf29
    ctx->pc = 0x2185e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2185ec: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x2185ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2185f0: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x2185f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2185f4: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x2185f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2185f8: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2185f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x2185fc: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x2185fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x218600: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x218600u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218604: 0x48226800  qmfc2.ni    $v0, $vf13
    ctx->pc = 0x218604u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x218608: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x218608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21860c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x21860cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x218610: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x218610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x218614: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x218614u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x218618: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x218618u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21861c: 0x0  nop
    ctx->pc = 0x21861cu;
    // NOP
    // 0x218620: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x218620u;
    {
        const bool branch_taken_0x218620 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218620) {
            ctx->pc = 0x218624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218620u;
            // 0x218624: 0xc6000034  lwc1        $f0, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x218684u;
            goto label_218684;
        }
    }
    ctx->pc = 0x218628u;
    // 0x218628: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x218628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21862c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21862cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x218630: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x218630u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x218634: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x218634u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x218638: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x218638u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21863c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x21863cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218640: 0x0  nop
    ctx->pc = 0x218640u;
    // NOP
    // 0x218644: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x218644u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218648: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x218648u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x21864c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x21864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218650: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x218650u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218654: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x218654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x218658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x21865c: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x21865cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218660: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x218660u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218664: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x218664u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218668: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x218668u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21866c: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x21866cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x218670: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x218670u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x218674: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x218674u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x218678: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x218678u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x21867c: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x21867cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x218680: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x218680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_218684:
    // 0x218684: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x218684u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x218688: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x218688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x21868c: 0x0  nop
    ctx->pc = 0x21868cu;
    // NOP
    // 0x218690: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x218690u;
    {
        const bool branch_taken_0x218690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x218690) {
            ctx->pc = 0x218694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218690u;
            // 0x218694: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2186F4u;
            goto label_2186f4;
        }
    }
    ctx->pc = 0x218698u;
    // 0x218698: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x218698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21869c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x21869cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2186a0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x2186a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x2186a4: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x2186a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x2186a8: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2186a8u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2186ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2186acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2186b0: 0x0  nop
    ctx->pc = 0x2186b0u;
    // NOP
    // 0x2186b4: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x2186b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x2186b8: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x2186b8u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x2186bc: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x2186bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2186c0: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x2186c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2186c4: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x2186c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x2186c8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2186c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2186cc: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x2186ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2186d0: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x2186d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2186d4: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x2186d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x2186d8: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x2186d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x2186dc: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x2186dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x2186e0: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x2186e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x2186e4: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x2186e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x2186e8: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x2186e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x2186ec: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x2186ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2186f0: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x2186f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2186f4:
    // 0x2186f4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2186f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2186f8: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2186f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2186fc: 0x82050040  lb          $a1, 0x40($s0)
    ctx->pc = 0x2186fcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x218700: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x218700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x218704: 0x26100040  addiu       $s0, $s0, 0x40
    ctx->pc = 0x218704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x218708: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x218708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21870c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x21870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x218710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218714: 0x10a4ffae  beq         $a1, $a0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x218714u;
    {
        const bool branch_taken_0x218714 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x218718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218714u;
            // 0x218718: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218714) {
            ctx->pc = 0x2185D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2185d0;
        }
    }
    ctx->pc = 0x21871Cu;
    // 0x21871c: 0x1000fd11  b           . + 4 + (-0x2EF << 2)
    ctx->pc = 0x21871Cu;
    {
        const bool branch_taken_0x21871c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21871Cu;
            // 0x218720: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21871c) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x218724u;
label_218724:
    // 0x218724: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x218724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x218728: 0xc6e20004  lwc1        $f2, 0x4($s7)
    ctx->pc = 0x218728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x21872c: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x21872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x218730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218734: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x218734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218738: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x218738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21873c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x21873cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218740: 0xe6210008  swc1        $f1, 0x8($s1)
    ctx->pc = 0x218740u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x218744: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x218744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x218748: 0xc465000c  lwc1        $f5, 0xC($v1)
    ctx->pc = 0x218748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21874c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x21874cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x218750: 0xc4630010  lwc1        $f3, 0x10($v1)
    ctx->pc = 0x218750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x218754: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x218754u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218758: 0xd8530010  lqc2        $vf19, 0x10($v0)
    ctx->pc = 0x218758u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x21875c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x21875cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x218760: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x218760u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x218764: 0xda610040  lqc2        $vf1, 0x40($s3)
    ctx->pc = 0x218764u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x218768: 0xda630050  lqc2        $vf3, 0x50($s3)
    ctx->pc = 0x218768u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x21876c: 0xda420040  lqc2        $vf2, 0x40($s2)
    ctx->pc = 0x21876cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x218770: 0xda440050  lqc2        $vf4, 0x50($s2)
    ctx->pc = 0x218770u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x218774: 0x4bc1d16c  vsub.xyz    $vf5, $vf26, $vf1
    ctx->pc = 0x218774u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[26], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218778: 0x4bc3d9ac  vsub.xyz    $vf6, $vf27, $vf3
    ctx->pc = 0x218778u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x21877c: 0x4bc2e9ec  vsub.xyz    $vf7, $vf29, $vf2
    ctx->pc = 0x21877cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x218780: 0x4bc4f22c  vsub.xyz    $vf8, $vf30, $vf4
    ctx->pc = 0x218780u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[30], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x218784: 0x4bd22abe  vmula.xyz   $ACC, $vf5, $vf18
    ctx->pc = 0x218784u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[18]);
    // 0x218788: 0x4bd23afd  vmsuba.xyz  $ACC, $vf18, $vf7
    ctx->pc = 0x218788u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x21878c: 0x4bd332bd  vmadda.xyz  $ACC, $vf6, $vf19
    ctx->pc = 0x21878cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x218790: 0x4bd442e9  vmadd.xyz   $vf11, $vf8, $vf20
    ctx->pc = 0x218790u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218794: 0x4bd20abe  vmula.xyz   $ACC, $vf1, $vf18
    ctx->pc = 0x218794u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[18]);
    // 0x218798: 0x4bd212fd  vmsuba.xyz  $ACC, $vf18, $vf2
    ctx->pc = 0x218798u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[18]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x21879c: 0x4bd31abd  vmadda.xyz  $ACC, $vf3, $vf19
    ctx->pc = 0x21879cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2187a0: 0x4bd42329  vmadd.xyz   $vf12, $vf4, $vf20
    ctx->pc = 0x2187a0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2187a4: 0x4b0b583d  vadday.x    $ACC, $vf11, $vf11y
    ctx->pc = 0x2187a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2187a8: 0x4b0b8aca  vmaddz.x    $vf11, $vf17, $vf11z
    ctx->pc = 0x2187a8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2187ac: 0x4b0c603d  vadday.x    $ACC, $vf12, $vf12y
    ctx->pc = 0x2187acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[12], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = res; }
    // 0x2187b0: 0x4b0c8b0a  vmaddz.x    $vf12, $vf17, $vf12z
    ctx->pc = 0x2187b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[12], ctx->vu0_vf[12], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2187b4: 0x48245800  qmfc2.ni    $a0, $vf11
    ctx->pc = 0x2187b4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x2187b8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2187b8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2187bc: 0x48256000  qmfc2.ni    $a1, $vf12
    ctx->pc = 0x2187bcu;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x2187c0: 0xc6a00040  lwc1        $f0, 0x40($s5)
    ctx->pc = 0x2187c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2187c4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x2187c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x2187c8: 0x44852000  mtc1        $a1, $f4
    ctx->pc = 0x2187c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2187cc: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2187ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2187d0: 0xc603001c  lwc1        $f3, 0x1C($s0)
    ctx->pc = 0x2187d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2187d4: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x2187d4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x2187d8: 0xc6060030  lwc1        $f6, 0x30($s0)
    ctx->pc = 0x2187d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2187dc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2187dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x2187e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2187e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2187e4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2187e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2187e8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x2187e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x2187ec: 0x46023034  c.lt.s      $f6, $f2
    ctx->pc = 0x2187ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2187f0: 0x0  nop
    ctx->pc = 0x2187f0u;
    // NOP
    // 0x2187f4: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2187F4u;
    {
        const bool branch_taken_0x2187f4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2187f4) {
            ctx->pc = 0x2187F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2187F4u;
            // 0x2187f8: 0xc4600004  lwc1        $f0, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x218814u;
            goto label_218814;
        }
    }
    ctx->pc = 0x2187FCu;
    // 0x2187fc: 0x0  nop
    ctx->pc = 0x2187fcu;
    // NOP
    // 0x218800: 0x0  nop
    ctx->pc = 0x218800u;
    // NOP
    // 0x218804: 0x46023003  div.s       $f0, $f6, $f2
    ctx->pc = 0x218804u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[6] * 0.0f); } else ctx->f[0] = ctx->f[6] / ctx->f[2];
    // 0x218808: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x21880c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x21880Cu;
    {
        const bool branch_taken_0x21880c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21880Cu;
            // 0x218810: 0xc6020030  lwc1        $f2, 0x30($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x21880c) {
            ctx->pc = 0x21884Cu;
            goto label_21884c;
        }
    }
    ctx->pc = 0x218814u;
label_218814:
    // 0x218814: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x218814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x218818: 0x0  nop
    ctx->pc = 0x218818u;
    // NOP
    // 0x21881c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x21881Cu;
    {
        const bool branch_taken_0x21881c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x21881c) {
            ctx->pc = 0x21883Cu;
            goto label_21883c;
        }
    }
    ctx->pc = 0x218824u;
    // 0x218824: 0x0  nop
    ctx->pc = 0x218824u;
    // NOP
    // 0x218828: 0x0  nop
    ctx->pc = 0x218828u;
    // NOP
    // 0x21882c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x21882cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x218830: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x218834: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x218834u;
    {
        const bool branch_taken_0x218834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218834u;
            // 0x218838: 0xc4620004  lwc1        $f2, 0x4($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x218834) {
            ctx->pc = 0x21884Cu;
            goto label_21884c;
        }
    }
    ctx->pc = 0x21883Cu;
label_21883c:
    // 0x21883c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x21883cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218840: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218840u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x218844: 0x0  nop
    ctx->pc = 0x218844u;
    // NOP
    // 0x218848: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x218848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_21884c:
    // 0x21884c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x21884cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x218850: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x218850u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x218854: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x218854u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218858: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x218858u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21885c: 0x0  nop
    ctx->pc = 0x21885cu;
    // NOP
    // 0x218860: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x218860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218864: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x218864u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x218868: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x218868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21886c: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x21886cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218870: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x218870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218874: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x218874u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218878: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x218878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21887c: 0x4bc690db  vmulw.xyz   $vf3, $vf18, $vf6w
    ctx->pc = 0x21887cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218880: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x218880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218884: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x218884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218888: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x218888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x21888c: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x21888cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x218890: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x218890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x218894: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x218894u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x218898: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x218898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x21889c: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x21889cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2188a0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x2188a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x2188a4: 0x2442c1d0  addiu       $v0, $v0, -0x3E30
    ctx->pc = 0x2188a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951376));
    // 0x2188a8: 0x82050050  lb          $a1, 0x50($s0)
    ctx->pc = 0x2188a8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2188ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2188acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2188b0: 0x26100050  addiu       $s0, $s0, 0x50
    ctx->pc = 0x2188b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x2188b4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2188b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2188b8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x2188b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2188bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2188bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2188c0: 0x10a4ff98  beq         $a1, $a0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x2188C0u;
    {
        const bool branch_taken_0x2188c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x2188C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2188C0u;
            // 0x2188c4: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188c0) {
            ctx->pc = 0x218724u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218724;
        }
    }
    ctx->pc = 0x2188C8u;
    // 0x2188c8: 0x1000fca6  b           . + 4 + (-0x35A << 2)
    ctx->pc = 0x2188C8u;
    {
        const bool branch_taken_0x2188c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2188CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2188C8u;
            // 0x2188cc: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2188c8) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x2188D0u;
label_2188d0:
    // 0x2188d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2188d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2188d4: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x2188d4u;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2188d8: 0xd8550010  lqc2        $vf21, 0x10($v0)
    ctx->pc = 0x2188d8u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2188dc: 0xd8530020  lqc2        $vf19, 0x20($v0)
    ctx->pc = 0x2188dcu;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x2188e0: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x2188e0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2188e4: 0x48200001  qmfc2.i     $zero, $vf0
    ctx->pc = 0x2188e4u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2188e8: 0x4bd2d2be  vmula.xyz   $ACC, $vf26, $vf18
    ctx->pc = 0x2188e8u;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[26], ctx->vu0_vf[18]);
    // 0x2188ec: 0x4bd5eafd  vmsuba.xyz  $ACC, $vf21, $vf29
    ctx->pc = 0x2188ecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[29], ctx->vu0_vf[21]); ctx->vu0_acc = PS2_VSUB(ctx->vu0_acc, mul_res); }
    // 0x2188f0: 0x4bd3dabd  vmadda.xyz  $ACC, $vf27, $vf19
    ctx->pc = 0x2188f0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[27], ctx->vu0_vf[19]); ctx->vu0_acc = PS2_VADD(ctx->vu0_acc, mul_res); }
    // 0x2188f4: 0x4bd4f369  vmadd.xyz   $vf13, $vf30, $vf20
    ctx->pc = 0x2188f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[30], ctx->vu0_vf[20]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x2188f8: 0x4b1289bf  vmulaw.x    $ACC, $vf17, $vf18w
    ctx->pc = 0x2188f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[18], ctx->vu0_vf[18], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x2188fc: 0x4b0d88fc  vmsubax.x   $ACC, $vf17, $vf13x
    ctx->pc = 0x2188fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x218900: 0x4b0d88fd  vmsubay.x   $ACC, $vf17, $vf13y
    ctx->pc = 0x218900u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x218904: 0x4b0d8b4e  vmsubz.x    $vf13, $vf17, $vf13z
    ctx->pc = 0x218904u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[17], _mm_shuffle_ps(ctx->vu0_vf[13], ctx->vu0_vf[13], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = _mm_blendv_ps(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218908: 0xda010020  lqc2        $vf1, 0x20($s0)
    ctx->pc = 0x218908u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x21890c: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x21890cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218910: 0x4b016b6a  vmul.x      $vf13, $vf13, $vf1
    ctx->pc = 0x218910u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[13], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x218914: 0x48246800  qmfc2.ni    $a0, $vf13
    ctx->pc = 0x218914u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x218918: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x218918u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21891c: 0xd8520000  lqc2        $vf18, 0x0($v0)
    ctx->pc = 0x21891cu;
    ctx->vu0_vf[18] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218920: 0xd8550010  lqc2        $vf21, 0x10($v0)
    ctx->pc = 0x218920u;
    ctx->vu0_vf[21] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x218924: 0xd8530020  lqc2        $vf19, 0x20($v0)
    ctx->pc = 0x218924u;
    ctx->vu0_vf[19] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x218928: 0xd8540030  lqc2        $vf20, 0x30($v0)
    ctx->pc = 0x218928u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21892c: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x21892cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x218930: 0x48a88000  qmtc2.ni    $t0, $vf16
    ctx->pc = 0x218930u;
    ctx->vu0_vf[16] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x218934: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x218934u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218938: 0x4bf0e158  vmulx.xyzw  $vf5, $vf28, $vf16x
    ctx->pc = 0x218938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[28], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x21893c: 0x4bf0f998  vmulx.xyzw  $vf6, $vf31, $vf16x
    ctx->pc = 0x21893cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[16], ctx->vu0_vf[16], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218940: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x218940u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x218944: 0x4bc5909b  vmulw.xyz   $vf2, $vf18, $vf5w
    ctx->pc = 0x218944u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[18], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218948: 0x4bc6a8db  vmulw.xyz   $vf3, $vf21, $vf6w
    ctx->pc = 0x218948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[21], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x21894c: 0x4bc5992a  vmul.xyz    $vf4, $vf19, $vf5
    ctx->pc = 0x21894cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[19], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218950: 0x4bc6a16a  vmul.xyz    $vf5, $vf20, $vf6
    ctx->pc = 0x218950u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[20], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218954: 0x4bc2d6a8  vadd.xyz    $vf26, $vf26, $vf2
    ctx->pc = 0x218954u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[26], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = PS2_VBLEND(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x218958: 0x4bc3ef6c  vsub.xyz    $vf29, $vf29, $vf3
    ctx->pc = 0x218958u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x21895c: 0x4bc4dee8  vadd.xyz    $vf27, $vf27, $vf4
    ctx->pc = 0x21895cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x218960: 0x4bc5f7a8  vadd.xyz    $vf30, $vf30, $vf5
    ctx->pc = 0x218960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x218964: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x218964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x218968: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x218968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x21896c: 0x1000fc7c  b           . + 4 + (-0x384 << 2)
    ctx->pc = 0x21896Cu;
    {
        const bool branch_taken_0x21896c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21896Cu;
            // 0x218970: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21896c) {
            ctx->pc = 0x217B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b60;
        }
    }
    ctx->pc = 0x218974u;
label_218974:
    // 0x218974: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x218974u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218978: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x218978u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x21897c: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x21897cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x218980: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x218980u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x218984: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x218984u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x218988: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x218988u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21898c: 0x7e620030  sq          $v0, 0x30($s3)
    ctx->pc = 0x21898cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), GPR_VEC(ctx, 2));
    // 0x218990: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x218990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x218994: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x218994u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x218998: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x218998u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
    // 0x21899c: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x21899cu;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2189a0: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x2189a0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x2189a4: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x2189a4u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x2189a8: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x2189a8u;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2189ac: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x2189acu;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2189b0: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x2189b0u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2189b4: 0x1000fc6b  b           . + 4 + (-0x395 << 2)
    ctx->pc = 0x2189B4u;
    {
        const bool branch_taken_0x2189b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2189B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2189B4u;
            // 0x2189b8: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2189b4) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x2189BCu;
label_2189bc:
    // 0x2189bc: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x2189bcu;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x2189c0: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x2189c0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x2189c4: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x2189c4u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x2189c8: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x2189c8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x2189cc: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x2189ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x2189d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2189d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2189d4: 0xafb30010  sw          $s3, 0x10($sp)
    ctx->pc = 0x2189d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 19));
    // 0x2189d8: 0xafb20014  sw          $s2, 0x14($sp)
    ctx->pc = 0x2189d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 18));
    // 0x2189dc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2189dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2189e0: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2189e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2189e4: 0xc6e10000  lwc1        $f1, 0x0($s7)
    ctx->pc = 0x2189e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2189e8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2189e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2189ec: 0xc6a00030  lwc1        $f0, 0x30($s5)
    ctx->pc = 0x2189ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2189f0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2189f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2189f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2189f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2189f8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2189f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2189fc: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2189fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x218a00: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x218a00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x218a04: 0xd8630010  lqc2        $vf3, 0x10($v1)
    ctx->pc = 0x218a04u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x218a08: 0x4be418e8  vadd.xyzw   $vf3, $vf3, $vf4
    ctx->pc = 0x218a08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218a0c: 0xd8610040  lqc2        $vf1, 0x40($v1)
    ctx->pc = 0x218a0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x218a10: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x218a10u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x218a14: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x218a14u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x218a18: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x218a18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x218a1c: 0x4be22098  vmulx.xyzw  $vf2, $vf4, $vf2x
    ctx->pc = 0x218a1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218a20: 0x4be20868  vadd.xyzw   $vf1, $vf1, $vf2
    ctx->pc = 0x218a20u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218a24: 0x4be218e8  vadd.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x218a24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218a28: 0xf8610040  sqc2        $vf1, 0x40($v1)
    ctx->pc = 0x218a28u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218a2c: 0xf8630010  sqc2        $vf3, 0x10($v1)
    ctx->pc = 0x218a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x218a30: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x218a30u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x218a34: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x218a34u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x218a38: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x218a38u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x218a3c: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x218a3cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x218a40: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x218a40u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x218a44: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x218a44u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218a48: 0x1000fc46  b           . + 4 + (-0x3BA << 2)
    ctx->pc = 0x218A48u;
    {
        const bool branch_taken_0x218a48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218A48u;
            // 0x218a4c: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a48) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x218A50u;
label_218a50:
    // 0x218a50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x218a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218a54: 0x1000fc42  b           . + 4 + (-0x3BE << 2)
    ctx->pc = 0x218A54u;
    {
        const bool branch_taken_0x218a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218A54u;
            // 0x218a58: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a54) {
            ctx->pc = 0x217B60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b60;
        }
    }
    ctx->pc = 0x218A5Cu;
label_218a5c:
    // 0x218a5c: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x218a5cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x218a60: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x218A60u;
    SET_GPR_U32(ctx, 31, 0x218A68u);
    ctx->pc = 0x218A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A60u;
            // 0x218a64: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A68u; }
        if (ctx->pc != 0x218A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218A68u; }
        if (ctx->pc != 0x218A68u) { return; }
    }
    ctx->pc = 0x218A68u;
label_218a68:
    // 0x218a68: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x218a68u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218a6c: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x218a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218a70: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x218a70u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x218a74: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x218a74u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x218a78: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x218a78u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x218a7c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x218A7Cu;
    {
        const bool branch_taken_0x218a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218A7Cu;
            // 0x218a80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218a7c) {
            ctx->pc = 0x218BA8u;
            goto label_218ba8;
        }
    }
    ctx->pc = 0x218A84u;
label_218a84:
    // 0x218a84: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x218a84u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218a88: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x218a88u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218a8c: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x218a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x218a90: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x218a90u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x218a94: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x218a94u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x218a98: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x218a98u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x218a9c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x218A9Cu;
    SET_GPR_U32(ctx, 31, 0x218AA4u);
    ctx->pc = 0x218AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218A9Cu;
            // 0x218aa0: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AA4u; }
        if (ctx->pc != 0x218AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AA4u; }
        if (ctx->pc != 0x218AA4u) { return; }
    }
    ctx->pc = 0x218AA4u;
label_218aa4:
    // 0x218aa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218aa8: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x218aa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218aac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x218aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ab0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x218ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ab4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x218ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218ab8: 0xc085146  jal         func_214518
    ctx->pc = 0x218AB8u;
    SET_GPR_U32(ctx, 31, 0x218AC0u);
    ctx->pc = 0x218ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218AB8u;
            // 0x218abc: 0x27d4e7a0  addiu       $s4, $fp, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214518u;
    if (runtime->hasFunction(0x214518u)) {
        auto targetFn = runtime->lookupFunction(0x214518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AC0u; }
        if (ctx->pc != 0x218AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214518_0x214518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AC0u; }
        if (ctx->pc != 0x218AC0u) { return; }
    }
    ctx->pc = 0x218AC0u;
label_218ac0:
    // 0x218ac0: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x218ac0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x218ac4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x218ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218ac8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x218ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x218acc: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x218accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x218ad0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x218AD0u;
    {
        const bool branch_taken_0x218ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218AD0u;
            // 0x218ad4: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ad0) {
            ctx->pc = 0x218B78u;
            goto label_218b78;
        }
    }
    ctx->pc = 0x218AD8u;
label_218ad8:
    // 0x218ad8: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x218ad8u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218adc: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x218adcu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218ae0: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x218ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x218ae4: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x218ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x218ae8: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x218ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x218aec: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x218aecu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x218af0: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x218AF0u;
    SET_GPR_U32(ctx, 31, 0x218AF8u);
    ctx->pc = 0x218AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218AF0u;
            // 0x218af4: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AF8u; }
        if (ctx->pc != 0x218AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218AF8u; }
        if (ctx->pc != 0x218AF8u) { return; }
    }
    ctx->pc = 0x218AF8u;
label_218af8:
    // 0x218af8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218af8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218afc: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x218afcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x218b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b04: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x218b04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b08: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x218b08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b0c: 0xc0851e4  jal         func_214790
    ctx->pc = 0x218B0Cu;
    SET_GPR_U32(ctx, 31, 0x218B14u);
    ctx->pc = 0x218B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B0Cu;
            // 0x218b10: 0x27d4e7a0  addiu       $s4, $fp, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214790u;
    if (runtime->hasFunction(0x214790u)) {
        auto targetFn = runtime->lookupFunction(0x214790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B14u; }
        if (ctx->pc != 0x218B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214790_0x214790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B14u; }
        if (ctx->pc != 0x218B14u) { return; }
    }
    ctx->pc = 0x218B14u;
label_218b14:
    // 0x218b14: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x218b14u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x218b18: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x218b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x218b1c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x218B1Cu;
    {
        const bool branch_taken_0x218b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B1Cu;
            // 0x218b20: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b1c) {
            ctx->pc = 0x218B6Cu;
            goto label_218b6c;
        }
    }
    ctx->pc = 0x218B24u;
label_218b24:
    // 0x218b24: 0x4820d001  qmfc2.i     $zero, $vf26
    ctx->pc = 0x218b24u;
    SET_GPR_VEC(ctx, 0, _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218b28: 0xfa7a0010  sqc2        $vf26, 0x10($s3)
    ctx->pc = 0x218b28u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[26]));
    // 0x218b2c: 0xfa7b0020  sqc2        $vf27, 0x20($s3)
    ctx->pc = 0x218b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[27]));
    // 0x218b30: 0xfa5d0010  sqc2        $vf29, 0x10($s2)
    ctx->pc = 0x218b30u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x218b34: 0xfa5e0020  sqc2        $vf30, 0x20($s2)
    ctx->pc = 0x218b34u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x218b38: 0x48287801  qmfc2.i     $t0, $vf15
    ctx->pc = 0x218b38u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x218b3c: 0xc0863ec  jal         func_218FB0
    ctx->pc = 0x218B3Cu;
    SET_GPR_U32(ctx, 31, 0x218B44u);
    ctx->pc = 0x218B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B3Cu;
            // 0x218b40: 0x280502d  daddu       $t2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x218FB0u;
    if (runtime->hasFunction(0x218FB0u)) {
        auto targetFn = runtime->lookupFunction(0x218FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B44u; }
        if (ctx->pc != 0x218B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00218FB0_0x218fb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B44u; }
        if (ctx->pc != 0x218B44u) { return; }
    }
    ctx->pc = 0x218B44u;
label_218b44:
    // 0x218b44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x218b44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b48: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x218b48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x218b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b50: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x218b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b54: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x218b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218b58: 0xc085318  jal         func_214C60
    ctx->pc = 0x218B58u;
    SET_GPR_U32(ctx, 31, 0x218B60u);
    ctx->pc = 0x218B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x218B58u;
            // 0x218b5c: 0x27d4e7a0  addiu       $s4, $fp, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4294961056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214C60u;
    if (runtime->hasFunction(0x214C60u)) {
        auto targetFn = runtime->lookupFunction(0x214C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B60u; }
        if (ctx->pc != 0x218B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214C60_0x214c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x218B60u; }
        if (ctx->pc != 0x218B60u) { return; }
    }
    ctx->pc = 0x218B60u;
label_218b60:
    // 0x218b60: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x218b60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x218b64: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x218b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x218b68: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x218b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_218b6c:
    // 0x218b6c: 0x432818  mult        $a1, $v0, $v1
    ctx->pc = 0x218b6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x218b70: 0x2048021  addu        $s0, $s0, $a0
    ctx->pc = 0x218b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x218b74: 0xb18821  addu        $s1, $a1, $s1
    ctx->pc = 0x218b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_218b78:
    // 0x218b78: 0x4a31033c  vmove.w     $vf17, $vf0
    ctx->pc = 0x218b78u;
    ctx->vu0_vf[17] = ctx->vu0_vf[0];
    // 0x218b7c: 0x4bc00443  vaddw.xyz   $vf17, $vf0, $vf0w
    ctx->pc = 0x218b7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = _mm_blendv_ps(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x218b80: 0xda7a0010  lqc2        $vf26, 0x10($s3)
    ctx->pc = 0x218b80u;
    ctx->vu0_vf[26] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x218b84: 0xda7b0020  lqc2        $vf27, 0x20($s3)
    ctx->pc = 0x218b84u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x218b88: 0xda7c0030  lqc2        $vf28, 0x30($s3)
    ctx->pc = 0x218b88u;
    ctx->vu0_vf[28] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x218b8c: 0xda5d0010  lqc2        $vf29, 0x10($s2)
    ctx->pc = 0x218b8cu;
    ctx->vu0_vf[29] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x218b90: 0xda5e0020  lqc2        $vf30, 0x20($s2)
    ctx->pc = 0x218b90u;
    ctx->vu0_vf[30] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x218b94: 0xda5f0030  lqc2        $vf31, 0x30($s2)
    ctx->pc = 0x218b94u;
    ctx->vu0_vf[31] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x218b98: 0x1000fbf2  b           . + 4 + (-0x40E << 2)
    ctx->pc = 0x218B98u;
    {
        const bool branch_taken_0x218b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218B98u;
            // 0x218b9c: 0x82030000  lb          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218b98) {
            ctx->pc = 0x217B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_217b64;
        }
    }
    ctx->pc = 0x218BA0u;
label_218ba0:
    // 0x218ba0: 0xac000000  sw          $zero, 0x0($zero)
    ctx->pc = 0x218ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 0), 0), GPR_U32(ctx, 0));
    // 0x218ba4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218ba8:
    // 0x218ba8: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x218ba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x218bac: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x218bacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x218bb0: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x218bb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x218bb4: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x218bb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x218bb8: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x218bb8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x218bbc: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x218bbcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218bc0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x218bc0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x218bc4: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x218bc4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x218bc8: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x218bc8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x218bcc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x218bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x218bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x218BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218BD0u;
            // 0x218bd4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218BD8u;
    // 0x218bd8: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x218bd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bdc: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x218bdcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x218be0: 0x79230010  lq          $v1, 0x10($t1)
    ctx->pc = 0x218be0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x218be4: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x218be4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x218be8: 0xc5200138  lwc1        $f0, 0x138($t1)
    ctx->pc = 0x218be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218bec: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x218becu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218bf0: 0xc5210040  lwc1        $f1, 0x40($t1)
    ctx->pc = 0x218bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218bf4: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x218bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x218bf8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x218bf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x218bfc: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x218bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
    // 0x218c00: 0x8d22012c  lw          $v0, 0x12C($t1)
    ctx->pc = 0x218c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 300)));
    // 0x218c04: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x218c04u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x218c08: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x218c08u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x218c0c: 0x4be10040  vaddx.xyzw  $vf1, $vf0, $vf1x
    ctx->pc = 0x218c0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218c10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x218c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x218c14: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x218c14u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x218c18: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x218C18u;
    {
        const bool branch_taken_0x218c18 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x218C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218C18u;
            // 0x218c1c: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c18) {
            ctx->pc = 0x218C28u;
            goto label_218c28;
        }
    }
    ctx->pc = 0x218C20u;
    // 0x218c20: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x218c20u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218c24: 0xa10b0000  sb          $t3, 0x0($t0)
    ctx->pc = 0x218c24u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 11));
label_218c28:
    // 0x218c28: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x218c28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x218c2c: 0x27ac0020  addiu       $t4, $sp, 0x20
    ctx->pc = 0x218c2cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_218c30:
    // 0x218c30: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x218c30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_218c34:
    // 0x218c34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_218c38:
    // 0x218c38: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x218C38u;
    {
        const bool branch_taken_0x218c38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x218C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218C38u;
            // 0x218c3c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c38) {
            ctx->pc = 0x218C68u;
            goto label_218c68;
        }
    }
    ctx->pc = 0x218C40u;
    // 0x218c40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218C40u;
    {
        const bool branch_taken_0x218c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218C40u;
            // 0x218c44: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c40) {
            ctx->pc = 0x218C58u;
            goto label_218c58;
        }
    }
    ctx->pc = 0x218C48u;
    // 0x218c48: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x218C48u;
    {
        const bool branch_taken_0x218c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218C48u;
            // 0x218c4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c48) {
            ctx->pc = 0x218CF0u;
            goto label_218cf0;
        }
    }
    ctx->pc = 0x218C50u;
    // 0x218c50: 0x1000fff9  b           . + 4 + (-0x7 << 2)
    ctx->pc = 0x218C50u;
    {
        const bool branch_taken_0x218c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218c50) {
            ctx->pc = 0x218C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218c38;
        }
    }
    ctx->pc = 0x218C58u;
label_218c58:
    // 0x218c58: 0x506200bf  beql        $v1, $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x218C58u;
    {
        const bool branch_taken_0x218c58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x218c58) {
            ctx->pc = 0x218C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218C58u;
            // 0x218c5c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218F58u;
            goto label_218f58;
        }
    }
    ctx->pc = 0x218C60u;
    // 0x218c60: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x218C60u;
    {
        const bool branch_taken_0x218c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218C60u;
            // 0x218c64: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218c60) {
            ctx->pc = 0x218C34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218c34;
        }
    }
    ctx->pc = 0x218C68u;
label_218c68:
    // 0x218c68: 0xd8c40040  lqc2        $vf4, 0x40($a2)
    ctx->pc = 0x218c68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x218c6c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x218c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x218c70: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x218c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x218c74: 0x24420350  addiu       $v0, $v0, 0x350
    ctx->pc = 0x218c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
    // 0x218c78: 0xd9210030  lqc2        $vf1, 0x30($t1)
    ctx->pc = 0x218c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x218c7c: 0x4be4116c  vsub.xyzw   $vf5, $vf2, $vf4
    ctx->pc = 0x218c7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218c80: 0x4be021bf  vmulaw.xyzw $ACC, $vf4, $vf0w
    ctx->pc = 0x218c80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x218c84: 0x4be12908  vmaddx.xyzw $vf4, $vf5, $vf1x
    ctx->pc = 0x218c84u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218c88: 0xd8c30050  lqc2        $vf3, 0x50($a2)
    ctx->pc = 0x218c88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x218c8c: 0xf8c40040  sqc2        $vf4, 0x40($a2)
    ctx->pc = 0x218c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218c90: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x218c90u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x218c94: 0x4be309ac  vsub.xyzw   $vf6, $vf1, $vf3
    ctx->pc = 0x218c94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218c98: 0xd9220030  lqc2        $vf2, 0x30($t1)
    ctx->pc = 0x218c98u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x218c9c: 0x4be019bf  vmulaw.xyzw $ACC, $vf3, $vf0w
    ctx->pc = 0x218c9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x218ca0: 0x4be230c8  vmaddx.xyzw $vf3, $vf6, $vf2x
    ctx->pc = 0x218ca0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218ca4: 0x4be21b3c  vmove.xyzw  $vf2, $vf3
    ctx->pc = 0x218ca4u;
    ctx->vu0_vf[2] = ctx->vu0_vf[3];
    // 0x218ca8: 0x15600007  bnez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x218CA8u;
    {
        const bool branch_taken_0x218ca8 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x218CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218CA8u;
            // 0x218cac: 0xf8c20050  sqc2        $vf2, 0x50($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ca8) {
            ctx->pc = 0x218CC8u;
            goto label_218cc8;
        }
    }
    ctx->pc = 0x218CB0u;
    // 0x218cb0: 0x4be42968  vadd.xyzw   $vf5, $vf5, $vf4
    ctx->pc = 0x218cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218cb4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x218cb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x218cb8: 0x4be231a8  vadd.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x218cb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218cbc: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x218cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218cc0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218CC0u;
    {
        const bool branch_taken_0x218cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218CC0u;
            // 0x218cc4: 0xf8c50010  sqc2        $vf5, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218cc0) {
            ctx->pc = 0x218CE4u;
            goto label_218ce4;
        }
    }
    ctx->pc = 0x218CC8u;
label_218cc8:
    // 0x218cc8: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x218cc8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x218ccc: 0x4be1212a  vmul.xyzw   $vf4, $vf4, $vf1
    ctx->pc = 0x218cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218cd0: 0xf8c40040  sqc2        $vf4, 0x40($a2)
    ctx->pc = 0x218cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x218cd4: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x218cd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x218cd8: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x218cd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218cdc: 0xf8c20050  sqc2        $vf2, 0x50($a2)
    ctx->pc = 0x218cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x218ce0: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x218ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_218ce4:
    // 0x218ce4: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x218ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x218ce8: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
    ctx->pc = 0x218CE8u;
    {
        const bool branch_taken_0x218ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218CE8u;
            // 0x218cec: 0x24c60080  addiu       $a2, $a2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218ce8) {
            ctx->pc = 0x218C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218c30;
        }
    }
    ctx->pc = 0x218CF0u;
label_218cf0:
    // 0x218cf0: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x218cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x218cf4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x218cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x218cf8: 0x244de880  addiu       $t5, $v0, -0x1780
    ctx->pc = 0x218cf8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
    // 0x218cfc: 0x2468d6e0  addiu       $t0, $v1, -0x2920
    ctx->pc = 0x218cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956768));
    // 0x218d00: 0x4be001ec  vsub.xyzw   $vf7, $vf0, $vf0
    ctx->pc = 0x218d00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x218d04: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x218d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_218d08:
    // 0x218d08: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x218d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x218d0c: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x218d0cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x218d10: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x218d10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x218d14: 0xd8c30020  lqc2        $vf3, 0x20($a2)
    ctx->pc = 0x218d14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x218d18: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x218d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
    // 0x218d1c: 0x4be411fd  vabs.xyzw   $vf4, $vf2
    ctx->pc = 0x218d1cu;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[2], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x218d20: 0x1222821  addu        $a1, $t1, $v0
    ctx->pc = 0x218d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x218d24: 0x4be519fd  vabs.xyzw   $vf5, $vf3
    ctx->pc = 0x218d24u;
    { __m128 res = _mm_and_ps(ctx->vu0_vf[3], _mm_castsi128_ps(_mm_set1_epi32(0x7FFFFFFF))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218d28: 0xd9a10000  lqc2        $vf1, 0x0($t5)
    ctx->pc = 0x218d28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x218d2c: 0x4be2102c  vsub.xyzw   $vf0, $vf2, $vf2
    ctx->pc = 0x218d2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x218d30: 0x4a0002ff  vnop
    ctx->pc = 0x218d30u;
    // NOP operation, no action needed for VU0
    // 0x218d34: 0x4a0002ff  vnop
    ctx->pc = 0x218d34u;
    // NOP operation, no action needed for VU0
    // 0x218d38: 0x4a0002ff  vnop
    ctx->pc = 0x218d38u;
    // NOP operation, no action needed for VU0
    // 0x218d3c: 0x4a0002ff  vnop
    ctx->pc = 0x218d3cu;
    // NOP operation, no action needed for VU0
    // 0x218d40: 0x48428800  cfc2.ni     $v0, $vi17
    ctx->pc = 0x218d40u;
    SET_GPR_U32(ctx, 2, ctx->vu0_cmsar3);
    // 0x218d44: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x218d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x218d48: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x218d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218d4c: 0x4be1282c  vsub.xyzw   $vf0, $vf5, $vf1
    ctx->pc = 0x218d4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x218d50: 0x4a0002ff  vnop
    ctx->pc = 0x218d50u;
    // NOP operation, no action needed for VU0
    // 0x218d54: 0x4a0002ff  vnop
    ctx->pc = 0x218d54u;
    // NOP operation, no action needed for VU0
    // 0x218d58: 0x4a0002ff  vnop
    ctx->pc = 0x218d58u;
    // NOP operation, no action needed for VU0
    // 0x218d5c: 0x4a0002ff  vnop
    ctx->pc = 0x218d5cu;
    // NOP operation, no action needed for VU0
    // 0x218d60: 0x48478800  cfc2.ni     $a3, $vi17
    ctx->pc = 0x218d60u;
    SET_GPR_U32(ctx, 7, ctx->vu0_cmsar3);
    // 0x218d64: 0x30e700f0  andi        $a3, $a3, 0xF0
    ctx->pc = 0x218d64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)240);
    // 0x218d68: 0x73903  sra         $a3, $a3, 4
    ctx->pc = 0x218d68u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 4));
    // 0x218d6c: 0x4be1202c  vsub.xyzw   $vf0, $vf4, $vf1
    ctx->pc = 0x218d6cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x218d70: 0x4a0002ff  vnop
    ctx->pc = 0x218d70u;
    // NOP operation, no action needed for VU0
    // 0x218d74: 0x4a0002ff  vnop
    ctx->pc = 0x218d74u;
    // NOP operation, no action needed for VU0
    // 0x218d78: 0x4a0002ff  vnop
    ctx->pc = 0x218d78u;
    // NOP operation, no action needed for VU0
    // 0x218d7c: 0x4a0002ff  vnop
    ctx->pc = 0x218d7cu;
    // NOP operation, no action needed for VU0
    // 0x218d80: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x218d80u;
    SET_GPR_U32(ctx, 3, ctx->vu0_cmsar3);
    // 0x218d84: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x218d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
    // 0x218d88: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x218d88u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
    // 0x218d8c: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x218d8cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x218d90: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x218d90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x218d94: 0x4be3182c  vsub.xyzw   $vf0, $vf3, $vf3
    ctx->pc = 0x218d94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x218d98: 0x4a0002ff  vnop
    ctx->pc = 0x218d98u;
    // NOP operation, no action needed for VU0
    // 0x218d9c: 0x4a0002ff  vnop
    ctx->pc = 0x218d9cu;
    // NOP operation, no action needed for VU0
    // 0x218da0: 0x4a0002ff  vnop
    ctx->pc = 0x218da0u;
    // NOP operation, no action needed for VU0
    // 0x218da4: 0x4a0002ff  vnop
    ctx->pc = 0x218da4u;
    // NOP operation, no action needed for VU0
    // 0x218da8: 0x48478800  cfc2.ni     $a3, $vi17
    ctx->pc = 0x218da8u;
    SET_GPR_U32(ctx, 7, ctx->vu0_cmsar3);
    // 0x218dac: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x218dacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x218db0: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x218db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218db4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x218db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x218db8: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x218db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x218dbc: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x218dbcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x218dc0: 0x4be120d8  vmulx.xyzw  $vf3, $vf4, $vf1x
    ctx->pc = 0x218dc0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218dc4: 0xc5200000  lwc1        $f0, 0x0($t1)
    ctx->pc = 0x218dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218dc8: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x218dc8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x218dcc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x218dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x218dd0: 0x4be019bf  vmulaw.xyzw $ACC, $vf3, $vf0w
    ctx->pc = 0x218dd0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x218dd4: 0x4be228c8  vmaddx.xyzw $vf3, $vf5, $vf2x
    ctx->pc = 0x218dd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218dd8: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x218dd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x218ddc: 0x3063000e  andi        $v1, $v1, 0xE
    ctx->pc = 0x218ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)14);
    // 0x218de0: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x218de0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x218de4: 0x4be10040  vaddx.xyzw  $vf1, $vf0, $vf1x
    ctx->pc = 0x218de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218de8: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x218DE8u;
    {
        const bool branch_taken_0x218de8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x218de8) {
            ctx->pc = 0x218E00u;
            goto label_218e00;
        }
    }
    ctx->pc = 0x218DF0u;
    // 0x218df0: 0x79020000  lq          $v0, 0x0($t0)
    ctx->pc = 0x218df0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x218df4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x218df4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x218df8: 0x79030000  lq          $v1, 0x0($t0)
    ctx->pc = 0x218df8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x218dfc: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x218dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_218e00:
    // 0x218e00: 0x4be1182c  vsub.xyzw   $vf0, $vf3, $vf1
    ctx->pc = 0x218e00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x218e04: 0x4a0002ff  vnop
    ctx->pc = 0x218e04u;
    // NOP operation, no action needed for VU0
    // 0x218e08: 0x4a0002ff  vnop
    ctx->pc = 0x218e08u;
    // NOP operation, no action needed for VU0
    // 0x218e0c: 0x4a0002ff  vnop
    ctx->pc = 0x218e0cu;
    // NOP operation, no action needed for VU0
    // 0x218e10: 0x4a0002ff  vnop
    ctx->pc = 0x218e10u;
    // NOP operation, no action needed for VU0
    // 0x218e14: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x218e14u;
    SET_GPR_U32(ctx, 3, ctx->vu0_cmsar3);
    // 0x218e18: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x218e18u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    // 0x218e1c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x218e1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x218e20: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x218e20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x218e24: 0x30e2000e  andi        $v0, $a3, 0xE
    ctx->pc = 0x218e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)14);
    // 0x218e28: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x218e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x218e2c: 0x54400025  bnel        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x218E2Cu;
    {
        const bool branch_taken_0x218e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218e2c) {
            ctx->pc = 0x218E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218E2Cu;
            // 0x218e30: 0x94a20010  lhu         $v0, 0x10($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218EC4u;
            goto label_218ec4;
        }
    }
    ctx->pc = 0x218E34u;
    // 0x218e34: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x218e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218e38: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x218e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x218e3c: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x218e3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x218e40: 0x4be10040  vaddx.xyzw  $vf1, $vf0, $vf1x
    ctx->pc = 0x218e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218e44: 0x4be1182c  vsub.xyzw   $vf0, $vf3, $vf1
    ctx->pc = 0x218e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[0] = PS2_VBLEND(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x218e48: 0x4a0002ff  vnop
    ctx->pc = 0x218e48u;
    // NOP operation, no action needed for VU0
    // 0x218e4c: 0x4a0002ff  vnop
    ctx->pc = 0x218e4cu;
    // NOP operation, no action needed for VU0
    // 0x218e50: 0x4a0002ff  vnop
    ctx->pc = 0x218e50u;
    // NOP operation, no action needed for VU0
    // 0x218e54: 0x4a0002ff  vnop
    ctx->pc = 0x218e54u;
    // NOP operation, no action needed for VU0
    // 0x218e58: 0x48438800  cfc2.ni     $v1, $vi17
    ctx->pc = 0x218e58u;
    SET_GPR_U32(ctx, 3, ctx->vu0_cmsar3);
    // 0x218e5c: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x218e5cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
    // 0x218e60: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x218e60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x218e64: 0x30e7000f  andi        $a3, $a3, 0xF
    ctx->pc = 0x218e64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x218e68: 0x30e2000e  andi        $v0, $a3, 0xE
    ctx->pc = 0x218e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)14);
    // 0x218e6c: 0x3842000e  xori        $v0, $v0, 0xE
    ctx->pc = 0x218e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)14);
    // 0x218e70: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x218E70u;
    {
        const bool branch_taken_0x218e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x218e70) {
            ctx->pc = 0x218E74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218E70u;
            // 0x218e74: 0xc4a00008  lwc1        $f0, 0x8($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x218E94u;
            goto label_218e94;
        }
    }
    ctx->pc = 0x218E78u;
    // 0x218e78: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x218e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x218e7c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x218E7Cu;
    {
        const bool branch_taken_0x218e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218E7Cu;
            // 0x218e80: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e7c) {
            ctx->pc = 0x218E88u;
            goto label_218e88;
        }
    }
    ctx->pc = 0x218E84u;
    // 0x218e84: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x218e84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_218e88:
    // 0x218e88: 0xf8c70020  sqc2        $vf7, 0x20($a2)
    ctx->pc = 0x218e88u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x218e8c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x218E8Cu;
    {
        const bool branch_taken_0x218e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218E8Cu;
            // 0x218e90: 0xf8c70010  sqc2        $vf7, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[7]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218e8c) {
            ctx->pc = 0x218EC8u;
            goto label_218ec8;
        }
    }
    ctx->pc = 0x218E94u;
label_218e94:
    // 0x218e94: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x218e94u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x218e98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x218e98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x218e9c: 0x48a31800  qmtc2.ni    $v1, $vf3
    ctx->pc = 0x218e9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x218ea0: 0xd8c20010  lqc2        $vf2, 0x10($a2)
    ctx->pc = 0x218ea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x218ea4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x218ea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x218ea8: 0xf8c10020  sqc2        $vf1, 0x20($a2)
    ctx->pc = 0x218ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x218eac: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x218eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218eb0: 0x440e0000  mfc1        $t6, $f0
    ctx->pc = 0x218eb0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 14, bits); }
    // 0x218eb4: 0x48ae0800  qmtc2.ni    $t6, $vf1
    ctx->pc = 0x218eb4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 14));
    // 0x218eb8: 0x4be11098  vmulx.xyzw  $vf2, $vf2, $vf1x
    ctx->pc = 0x218eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218ebc: 0xf8c20010  sqc2        $vf2, 0x10($a2)
    ctx->pc = 0x218ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x218ec0: 0x94a20010  lhu         $v0, 0x10($a1)
    ctx->pc = 0x218ec0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 16)));
label_218ec4:
    // 0x218ec4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x218ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_218ec8:
    // 0x218ec8: 0xd8c30040  lqc2        $vf3, 0x40($a2)
    ctx->pc = 0x218ec8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x218ecc: 0xd8c10010  lqc2        $vf1, 0x10($a2)
    ctx->pc = 0x218eccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x218ed0: 0xd9220030  lqc2        $vf2, 0x30($t1)
    ctx->pc = 0x218ed0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x218ed4: 0x4be3096c  vsub.xyzw   $vf5, $vf1, $vf3
    ctx->pc = 0x218ed4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218ed8: 0x4be019bf  vmulaw.xyzw $ACC, $vf3, $vf0w
    ctx->pc = 0x218ed8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x218edc: 0x4be228c8  vmaddx.xyzw $vf3, $vf5, $vf2x
    ctx->pc = 0x218edcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218ee0: 0xd8c40050  lqc2        $vf4, 0x50($a2)
    ctx->pc = 0x218ee0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x218ee4: 0xf8c30040  sqc2        $vf3, 0x40($a2)
    ctx->pc = 0x218ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x218ee8: 0xd8c10020  lqc2        $vf1, 0x20($a2)
    ctx->pc = 0x218ee8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x218eec: 0x4be409ac  vsub.xyzw   $vf6, $vf1, $vf4
    ctx->pc = 0x218eecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218ef0: 0xd9220030  lqc2        $vf2, 0x30($t1)
    ctx->pc = 0x218ef0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x218ef4: 0x4be021bf  vmulaw.xyzw $ACC, $vf4, $vf0w
    ctx->pc = 0x218ef4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); ctx->vu0_acc = res; }
    // 0x218ef8: 0x4be23108  vmaddx.xyzw $vf4, $vf6, $vf2x
    ctx->pc = 0x218ef8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x218efc: 0x4be2233c  vmove.xyzw  $vf2, $vf4
    ctx->pc = 0x218efcu;
    ctx->vu0_vf[2] = ctx->vu0_vf[4];
    // 0x218f00: 0x15600007  bnez        $t3, . + 4 + (0x7 << 2)
    ctx->pc = 0x218F00u;
    {
        const bool branch_taken_0x218f00 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x218F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F00u;
            // 0x218f04: 0xf8c20050  sqc2        $vf2, 0x50($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f00) {
            ctx->pc = 0x218F20u;
            goto label_218f20;
        }
    }
    ctx->pc = 0x218F08u;
    // 0x218f08: 0x4be32968  vadd.xyzw   $vf5, $vf5, $vf3
    ctx->pc = 0x218f08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218f0c: 0xd9810000  lqc2        $vf1, 0x0($t4)
    ctx->pc = 0x218f0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x218f10: 0x4be231a8  vadd.xyzw   $vf6, $vf6, $vf2
    ctx->pc = 0x218f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x218f14: 0x4be12968  vadd.xyzw   $vf5, $vf5, $vf1
    ctx->pc = 0x218f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x218f18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x218F18u;
    {
        const bool branch_taken_0x218f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F18u;
            // 0x218f1c: 0xf8c50010  sqc2        $vf5, 0x10($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f18) {
            ctx->pc = 0x218F3Cu;
            goto label_218f3c;
        }
    }
    ctx->pc = 0x218F20u;
label_218f20:
    // 0x218f20: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x218f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x218f24: 0x4be118ea  vmul.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x218f24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x218f28: 0xf8c30040  sqc2        $vf3, 0x40($a2)
    ctx->pc = 0x218f28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x218f2c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x218f2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x218f30: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x218f30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x218f34: 0xf8c20050  sqc2        $vf2, 0x50($a2)
    ctx->pc = 0x218f34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x218f38: 0xf8c50010  sqc2        $vf5, 0x10($a2)
    ctx->pc = 0x218f38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[5]));
label_218f3c:
    // 0x218f3c: 0xf8c60020  sqc2        $vf6, 0x20($a2)
    ctx->pc = 0x218f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x218f40: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x218f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x218f44: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x218f44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x218f48: 0x5040ff6f  beql        $v0, $zero, . + 4 + (-0x91 << 2)
    ctx->pc = 0x218F48u;
    {
        const bool branch_taken_0x218f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x218f48) {
            ctx->pc = 0x218F4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x218F48u;
            // 0x218f4c: 0x8cc20008  lw          $v0, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x218D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218d08;
        }
    }
    ctx->pc = 0x218F50u;
    // 0x218f50: 0x1000ff38  b           . + 4 + (-0xC8 << 2)
    ctx->pc = 0x218F50u;
    {
        const bool branch_taken_0x218f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x218F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F50u;
            // 0x218f54: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x218f50) {
            ctx->pc = 0x218C34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_218c34;
        }
    }
    ctx->pc = 0x218F58u;
label_218f58:
    // 0x218f58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x218f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x218f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x218F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x218F5Cu;
            // 0x218f60: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x218F64u;
    // 0x218f64: 0x0  nop
    ctx->pc = 0x218f64u;
    // NOP
}
