#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00318530
// Address: 0x318530 - 0x318940
void sub_00318530_0x318530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00318530_0x318530");
#endif

    switch (ctx->pc) {
        case 0x318598u: goto label_318598;
        case 0x3185d8u: goto label_3185d8;
        case 0x3185f8u: goto label_3185f8;
        case 0x318614u: goto label_318614;
        case 0x318628u: goto label_318628;
        case 0x318638u: goto label_318638;
        case 0x318648u: goto label_318648;
        case 0x318654u: goto label_318654;
        case 0x318690u: goto label_318690;
        case 0x318798u: goto label_318798;
        case 0x3187d8u: goto label_3187d8;
        case 0x3187f8u: goto label_3187f8;
        case 0x318804u: goto label_318804;
        case 0x318838u: goto label_318838;
        case 0x3188d0u: goto label_3188d0;
        case 0x3188dcu: goto label_3188dc;
        case 0x3188e8u: goto label_3188e8;
        default: break;
    }

    ctx->pc = 0x318530u;

    // 0x318530: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x318530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x318534: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x318534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x318538: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x318538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x31853c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x31853cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x318540: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x318540u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318544: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x318544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x318548: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x318548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x31854c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x31854cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318550: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x318550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x318554: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x318554u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318558: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x318558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x31855c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x31855cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x318560: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x318560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x318564: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x318564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x318568: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x318568u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x31856c: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x31856cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x318570: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x318570u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x318574: 0xafa800cc  sw          $t0, 0xCC($sp)
    ctx->pc = 0x318574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 8));
    // 0x318578: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x318578u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31857c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x31857cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x318580: 0x94a20012  lhu         $v0, 0x12($a1)
    ctx->pc = 0x318580u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 18)));
    // 0x318584: 0x8c770008  lw          $s7, 0x8($v1)
    ctx->pc = 0x318584u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x318588: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x318588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x31858c: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x31858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
    // 0x318590: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x318590u;
    SET_GPR_U32(ctx, 31, 0x318598u);
    ctx->pc = 0x318594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318590u;
            // 0x318594: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318598u; }
        if (ctx->pc != 0x318598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318598u; }
        if (ctx->pc != 0x318598u) { return; }
    }
    ctx->pc = 0x318598u;
label_318598:
    // 0x318598: 0x3c034248  lui         $v1, 0x4248
    ctx->pc = 0x318598u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16968 << 16));
    // 0x31859c: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x31859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x3185a0: 0xafa3015c  sw          $v1, 0x15C($sp)
    ctx->pc = 0x3185a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 3));
    // 0x3185a4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3185a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3185a8: 0x8ec40008  lw          $a0, 0x8($s6)
    ctx->pc = 0x3185a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3185ac: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x3185acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3185b0: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x3185b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x3185b4: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x3185b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3185b8: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x3185b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x3185bc: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x3185bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3185c0: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x3185c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x3185c4: 0x138980  sll         $s1, $s3, 6
    ctx->pc = 0x3185c4u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 19), 6));
    // 0x3185c8: 0x731823  subu        $v1, $v1, $s3
    ctx->pc = 0x3185c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x3185cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3185ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3185d0: 0x91a021  addu        $s4, $a0, $s1
    ctx->pc = 0x3185d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x3185d4: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x3185d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3185d8:
    // 0x3185d8: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x3185d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3185dc: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x3185dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3185e0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x3185e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3185e4: 0x144000a0  bnez        $v0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x3185E4u;
    {
        const bool branch_taken_0x3185e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3185e4) {
            ctx->pc = 0x318868u;
            goto label_318868;
        }
    }
    ctx->pc = 0x3185ECu;
    // 0x3185ec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x3185ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x3185f0: 0xc05277c  jal         func_149DF0
    ctx->pc = 0x3185F0u;
    SET_GPR_U32(ctx, 31, 0x3185F8u);
    ctx->pc = 0x3185F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3185F0u;
            // 0x3185f4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DF0u;
    if (runtime->hasFunction(0x149DF0u)) {
        auto targetFn = runtime->lookupFunction(0x149DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3185F8u; }
        if (ctx->pc != 0x3185F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DF0_0x149df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3185F8u; }
        if (ctx->pc != 0x3185F8u) { return; }
    }
    ctx->pc = 0x3185F8u;
label_3185f8:
    // 0x3185f8: 0x1040009b  beqz        $v0, . + 4 + (0x9B << 2)
    ctx->pc = 0x3185F8u;
    {
        const bool branch_taken_0x3185f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3185f8) {
            ctx->pc = 0x318868u;
            goto label_318868;
        }
    }
    ctx->pc = 0x318600u;
    // 0x318600: 0x96820000  lhu         $v0, 0x0($s4)
    ctx->pc = 0x318600u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x318604: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x318604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x318608: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x318608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x31860c: 0xc04cc04  jal         func_133010
    ctx->pc = 0x31860Cu;
    SET_GPR_U32(ctx, 31, 0x318614u);
    ctx->pc = 0x318610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31860Cu;
            // 0x318610: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318614u; }
        if (ctx->pc != 0x318614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318614u; }
        if (ctx->pc != 0x318614u) { return; }
    }
    ctx->pc = 0x318614u;
label_318614:
    // 0x318614: 0x96820002  lhu         $v0, 0x2($s4)
    ctx->pc = 0x318614u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x318618: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x318618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x31861c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x31861cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x318620: 0xc04cc04  jal         func_133010
    ctx->pc = 0x318620u;
    SET_GPR_U32(ctx, 31, 0x318628u);
    ctx->pc = 0x318624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318620u;
            // 0x318624: 0x2e22821  addu        $a1, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318628u; }
        if (ctx->pc != 0x318628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318628u; }
        if (ctx->pc != 0x318628u) { return; }
    }
    ctx->pc = 0x318628u;
label_318628:
    // 0x318628: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x318628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x31862c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x31862cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x318630: 0xc04cc90  jal         func_133240
    ctx->pc = 0x318630u;
    SET_GPR_U32(ctx, 31, 0x318638u);
    ctx->pc = 0x318634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318630u;
            // 0x318634: 0x27a60160  addiu       $a2, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318638u; }
        if (ctx->pc != 0x318638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318638u; }
        if (ctx->pc != 0x318638u) { return; }
    }
    ctx->pc = 0x318638u;
label_318638:
    // 0x318638: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x318638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x31863c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x31863cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x318640: 0xc04cc90  jal         func_133240
    ctx->pc = 0x318640u;
    SET_GPR_U32(ctx, 31, 0x318648u);
    ctx->pc = 0x318644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318640u;
            // 0x318644: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318648u; }
        if (ctx->pc != 0x318648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318648u; }
        if (ctx->pc != 0x318648u) { return; }
    }
    ctx->pc = 0x318648u;
label_318648:
    // 0x318648: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x318648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x31864c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x31864Cu;
    SET_GPR_U32(ctx, 31, 0x318654u);
    ctx->pc = 0x318650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31864Cu;
            // 0x318650: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318654u; }
        if (ctx->pc != 0x318654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318654u; }
        if (ctx->pc != 0x318654u) { return; }
    }
    ctx->pc = 0x318654u;
label_318654:
    // 0x318654: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x318654u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x318658: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31865c: 0xc7a00100  lwc1        $f0, 0x100($sp)
    ctx->pc = 0x31865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318660: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x318660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x318664: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x318664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318668: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x318668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x31866c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x31866cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x318670: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x318670u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
    // 0x318674: 0xc7a00108  lwc1        $f0, 0x108($sp)
    ctx->pc = 0x318674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318678: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x318678u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x31867c: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x31867cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x318680: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x318680u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x318684: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x318684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x318688: 0xc04cc08  jal         func_133020
    ctx->pc = 0x318688u;
    SET_GPR_U32(ctx, 31, 0x318690u);
    ctx->pc = 0x31868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318688u;
            // 0x31868c: 0xe7a000e8  swc1        $f0, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318690u; }
        if (ctx->pc != 0x318690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318690u; }
        if (ctx->pc != 0x318690u) { return; }
    }
    ctx->pc = 0x318690u;
label_318690:
    // 0x318690: 0x0  nop
    ctx->pc = 0x318690u;
    // NOP
    // 0x318694: 0x0  nop
    ctx->pc = 0x318694u;
    // NOP
    // 0x318698: 0x461501c3  div.s       $f7, $f0, $f21
    ctx->pc = 0x318698u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[7] = ctx->f[0] / ctx->f[21];
    // 0x31869c: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x31869cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3186a0: 0x0  nop
    ctx->pc = 0x3186a0u;
    // NOP
    // 0x3186a4: 0x46072836  c.le.s      $f5, $f7
    ctx->pc = 0x3186a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3186a8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3186A8u;
    {
        const bool branch_taken_0x3186a8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3186ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3186A8u;
            // 0x3186ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186a8) {
            ctx->pc = 0x3186B4u;
            goto label_3186b4;
        }
    }
    ctx->pc = 0x3186B0u;
    // 0x3186b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3186b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3186b4:
    // 0x3186b4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x3186b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3186b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3186b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3186bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3186bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186c0: 0x0  nop
    ctx->pc = 0x3186c0u;
    // NOP
    // 0x3186c4: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x3186c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3186c8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3186C8u;
    {
        const bool branch_taken_0x3186c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3186CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3186C8u;
            // 0x3186cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186c8) {
            ctx->pc = 0x3186D4u;
            goto label_3186d4;
        }
    }
    ctx->pc = 0x3186D0u;
    // 0x3186d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3186d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3186d4:
    // 0x3186d4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3186d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3186d8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x3186d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3186dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3186dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3186e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3186e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186e4: 0x0  nop
    ctx->pc = 0x3186e4u;
    // NOP
    // 0x3186e8: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3186e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3186ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3186ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3186f0: 0x0  nop
    ctx->pc = 0x3186f0u;
    // NOP
    // 0x3186f4: 0x46003836  c.le.s      $f7, $f0
    ctx->pc = 0x3186f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3186f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3186F8u;
    {
        const bool branch_taken_0x3186f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3186FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3186F8u;
            // 0x3186fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3186f8) {
            ctx->pc = 0x318704u;
            goto label_318704;
        }
    }
    ctx->pc = 0x318700u;
    // 0x318700: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x318700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318704:
    // 0x318704: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x318704u;
    {
        const bool branch_taken_0x318704 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x318704) {
            ctx->pc = 0x318708u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x318704u;
            // 0x318708: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x318718u;
            goto label_318718;
        }
    }
    ctx->pc = 0x31870Cu;
    // 0x31870c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x31870cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318710: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x318710u;
    {
        const bool branch_taken_0x318710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x318714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318710u;
            // 0x318714: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x318710) {
            ctx->pc = 0x318730u;
            goto label_318730;
        }
    }
    ctx->pc = 0x318718u;
label_318718:
    // 0x318718: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x318718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x31871c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x31871cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x318720: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x318720u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x318724: 0x0  nop
    ctx->pc = 0x318724u;
    // NOP
    // 0x318728: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x318728u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x31872c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x31872cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_318730:
    // 0x318730: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x318730u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x318734: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x318738: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x318738u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x31873c: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x31873cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
    // 0x318740: 0x4601389c  madd.s      $f2, $f7, $f1
    ctx->pc = 0x318740u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[1]));
    // 0x318744: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x318744u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318748: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x318748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x31874c: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x31874cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x318750: 0x4602081a  mula.s      $f1, $f2
    ctx->pc = 0x318750u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x318754: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x318754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318758: 0x4607295c  madd.s      $f5, $f5, $f7
    ctx->pc = 0x318758u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[7]));
    // 0x31875c: 0xc7a40100  lwc1        $f4, 0x100($sp)
    ctx->pc = 0x31875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x318760: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x318760u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x318764: 0xc7a20164  lwc1        $f2, 0x164($sp)
    ctx->pc = 0x318764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318768: 0x4605211c  madd.s      $f4, $f4, $f5
    ctx->pc = 0x318768u;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
    // 0x31876c: 0xc7a30104  lwc1        $f3, 0x104($sp)
    ctx->pc = 0x31876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x318770: 0x46023018  adda.s      $f6, $f2
    ctx->pc = 0x318770u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
    // 0x318774: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x318774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318778: 0x4605189c  madd.s      $f2, $f3, $f5
    ctx->pc = 0x318778u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[5]));
    // 0x31877c: 0xc7a10108  lwc1        $f1, 0x108($sp)
    ctx->pc = 0x31877cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318780: 0x46003018  adda.s      $f6, $f0
    ctx->pc = 0x318780u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x318784: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x318784u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x318788: 0x4605081c  madd.s      $f0, $f1, $f5
    ctx->pc = 0x318788u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[5]));
    // 0x31878c: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x31878cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x318790: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x318790u;
    SET_GPR_U32(ctx, 31, 0x318798u);
    ctx->pc = 0x318794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318790u;
            // 0x318794: 0xe7a00138  swc1        $f0, 0x138($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318798u; }
        if (ctx->pc != 0x318798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318798u; }
        if (ctx->pc != 0x318798u) { return; }
    }
    ctx->pc = 0x318798u;
label_318798:
    // 0x318798: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x318798u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x31879c: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x31879cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3187a0: 0x45000031  bc1f        . + 4 + (0x31 << 2)
    ctx->pc = 0x3187A0u;
    {
        const bool branch_taken_0x3187a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3187a0) {
            ctx->pc = 0x318868u;
            goto label_318868;
        }
    }
    ctx->pc = 0x3187A8u;
    // 0x3187a8: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x3187a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3187ac: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3187acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3187b0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3187b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3187b4: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x3187b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3187b8: 0x518021  addu        $s0, $v0, $s1
    ctx->pc = 0x3187b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3187bc: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x3187bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x3187c0: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3187c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3187c4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3187c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3187c8: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x3187c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3187cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3187ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3187d0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3187D0u;
    SET_GPR_U32(ctx, 31, 0x3187D8u);
    ctx->pc = 0x3187D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3187D0u;
            // 0x3187d4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3187D8u; }
        if (ctx->pc != 0x3187D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3187D8u; }
        if (ctx->pc != 0x3187D8u) { return; }
    }
    ctx->pc = 0x3187D8u;
label_3187d8:
    // 0x3187d8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x3187d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3187dc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x3187dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x3187e0: 0x8ec50008  lw          $a1, 0x8($s6)
    ctx->pc = 0x3187e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x3187e4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3187e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3187e8: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x3187e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3187ec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x3187ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3187f0: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3187F0u;
    SET_GPR_U32(ctx, 31, 0x3187F8u);
    ctx->pc = 0x3187F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3187F0u;
            // 0x3187f4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3187F8u; }
        if (ctx->pc != 0x3187F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3187F8u; }
        if (ctx->pc != 0x3187F8u) { return; }
    }
    ctx->pc = 0x3187F8u;
label_3187f8:
    // 0x3187f8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x3187f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x3187fc: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3187FCu;
    SET_GPR_U32(ctx, 31, 0x318804u);
    ctx->pc = 0x318800u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3187FCu;
            // 0x318800: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318804u; }
        if (ctx->pc != 0x318804u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318804u; }
        if (ctx->pc != 0x318804u) { return; }
    }
    ctx->pc = 0x318804u;
label_318804:
    // 0x318804: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x318804u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x318808: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x318808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x31880c: 0xc7a20120  lwc1        $f2, 0x120($sp)
    ctx->pc = 0x31880cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x318810: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x318810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x318814: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x318814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x318818: 0xc7a00128  lwc1        $f0, 0x128($sp)
    ctx->pc = 0x318818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x31881c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x31881cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x318820: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x318820u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x318824: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x318824u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x318828: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x318828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x31882c: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x31882cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x318830: 0xc04cc08  jal         func_133020
    ctx->pc = 0x318830u;
    SET_GPR_U32(ctx, 31, 0x318838u);
    ctx->pc = 0x318834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318830u;
            // 0x318834: 0xe7a00128  swc1        $f0, 0x128($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318838u; }
        if (ctx->pc != 0x318838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318838u; }
        if (ctx->pc != 0x318838u) { return; }
    }
    ctx->pc = 0x318838u;
label_318838:
    // 0x318838: 0x0  nop
    ctx->pc = 0x318838u;
    // NOP
    // 0x31883c: 0x0  nop
    ctx->pc = 0x31883cu;
    // NOP
    // 0x318840: 0x46150043  div.s       $f1, $f0, $f21
    ctx->pc = 0x318840u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[21];
    // 0x318844: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x318844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x318848: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x318848u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31884c: 0x0  nop
    ctx->pc = 0x31884cu;
    // NOP
    // 0x318850: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x318850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x318854: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x318854u;
    {
        const bool branch_taken_0x318854 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x318854) {
            ctx->pc = 0x318868u;
            goto label_318868;
        }
    }
    ctx->pc = 0x31885Cu;
    // 0x31885c: 0x4600b506  mov.s       $f20, $f22
    ctx->pc = 0x31885cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[22]);
    // 0x318860: 0xa7d30012  sh          $s3, 0x12($fp)
    ctx->pc = 0x318860u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 18), (uint16_t)GPR_U32(ctx, 19));
    // 0x318864: 0x0  nop
    ctx->pc = 0x318864u;
    // NOP
label_318868:
    // 0x318868: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x318868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31886c: 0x2694ffc0  addiu       $s4, $s4, -0x40
    ctx->pc = 0x31886cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967232));
    // 0x318870: 0x2652ffe4  addiu       $s2, $s2, -0x1C
    ctx->pc = 0x318870u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967268));
    // 0x318874: 0x2631ffc0  addiu       $s1, $s1, -0x40
    ctx->pc = 0x318874u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967232));
    // 0x318878: 0x1c40ff57  bgtz        $v0, . + 4 + (-0xA9 << 2)
    ctx->pc = 0x318878u;
    {
        const bool branch_taken_0x318878 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x31887Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318878u;
            // 0x31887c: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318878) {
            ctx->pc = 0x3185D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3185d8;
        }
    }
    ctx->pc = 0x318880u;
    // 0x318880: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x318880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x318884: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x318884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x318888: 0x97c20012  lhu         $v0, 0x12($fp)
    ctx->pc = 0x318888u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x31888c: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31888Cu;
    {
        const bool branch_taken_0x31888c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x31888c) {
            ctx->pc = 0x318890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x31888Cu;
            // 0x318890: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3188A0u;
            goto label_3188a0;
        }
    }
    ctx->pc = 0x318894u;
    // 0x318894: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x318894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x318898: 0xa7c20014  sh          $v0, 0x14($fp)
    ctx->pc = 0x318898u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 20), (uint16_t)GPR_U32(ctx, 2));
    // 0x31889c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x31889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_3188a0:
    // 0x3188a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3188a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3188a4: 0x97c30012  lhu         $v1, 0x12($fp)
    ctx->pc = 0x3188a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 18)));
    // 0x3188a8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x3188a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3188ac: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x3188acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x3188b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3188b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3188b4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x3188b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x3188b8: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x3188b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3188bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x3188bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x3188c0: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x3188c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x3188c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3188c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3188c8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x3188C8u;
    SET_GPR_U32(ctx, 31, 0x3188D0u);
    ctx->pc = 0x3188CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3188C8u;
            // 0x3188cc: 0x2e23021  addu        $a2, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188D0u; }
        if (ctx->pc != 0x3188D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188D0u; }
        if (ctx->pc != 0x3188D0u) { return; }
    }
    ctx->pc = 0x3188D0u;
label_3188d0:
    // 0x3188d0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x3188d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x3188d4: 0xc04cc44  jal         func_133110
    ctx->pc = 0x3188D4u;
    SET_GPR_U32(ctx, 31, 0x3188DCu);
    ctx->pc = 0x3188D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3188D4u;
            // 0x3188d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188DCu; }
        if (ctx->pc != 0x3188DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188DCu; }
        if (ctx->pc != 0x3188DCu) { return; }
    }
    ctx->pc = 0x3188DCu;
label_3188dc:
    // 0x3188dc: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x3188dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3188e0: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3188E0u;
    SET_GPR_U32(ctx, 31, 0x3188E8u);
    ctx->pc = 0x3188E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3188E0u;
            // 0x3188e4: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188E8u; }
        if (ctx->pc != 0x3188E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3188E8u; }
        if (ctx->pc != 0x3188E8u) { return; }
    }
    ctx->pc = 0x3188E8u;
label_3188e8:
    // 0x3188e8: 0xe7c00018  swc1        $f0, 0x18($fp)
    ctx->pc = 0x3188e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 24), bits); }
    // 0x3188ec: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x3188ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
    // 0x3188f0: 0xc7c00018  lwc1        $f0, 0x18($fp)
    ctx->pc = 0x3188f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3188f4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3188f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3188f8: 0x0  nop
    ctx->pc = 0x3188f8u;
    // NOP
    // 0x3188fc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3188fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x318900: 0xe7c0001c  swc1        $f0, 0x1C($fp)
    ctx->pc = 0x318900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 28), bits); }
    // 0x318904: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x318904u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x318908: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x318908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x31890c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x31890cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x318910: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x318910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x318914: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x318914u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x318918: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x318918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31891c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x31891cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x318920: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x318920u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x318924: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x318924u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x318928: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x318928u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31892c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31892cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x318930: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x318930u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x318934: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x318934u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x318938: 0x3e00008  jr          $ra
    ctx->pc = 0x318938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318938u;
            // 0x31893c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x318940u;
}
