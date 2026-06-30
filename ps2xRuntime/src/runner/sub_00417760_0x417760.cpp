#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00417760
// Address: 0x417760 - 0x417940
void sub_00417760_0x417760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417760_0x417760");
#endif

    switch (ctx->pc) {
        case 0x417788u: goto label_417788;
        case 0x4177a8u: goto label_4177a8;
        case 0x4177f4u: goto label_4177f4;
        case 0x417810u: goto label_417810;
        case 0x417834u: goto label_417834;
        case 0x417850u: goto label_417850;
        case 0x417870u: goto label_417870;
        case 0x4178d0u: goto label_4178d0;
        case 0x4178dcu: goto label_4178dc;
        case 0x4178e8u: goto label_4178e8;
        case 0x4178f4u: goto label_4178f4;
        case 0x417900u: goto label_417900;
        case 0x41790cu: goto label_41790c;
        case 0x417924u: goto label_417924;
        default: break;
    }

    ctx->pc = 0x417760u;

    // 0x417760: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x417760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x417764: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x417764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x417768: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x417768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x41776c: 0x34468a88  ori         $a2, $v0, 0x8A88
    ctx->pc = 0x41776cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35464);
    // 0x417770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x417770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x417774: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x417774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x417778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x417778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41777c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x41777cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417780: 0xc105e88  jal         func_417A20
    ctx->pc = 0x417780u;
    SET_GPR_U32(ctx, 31, 0x417788u);
    ctx->pc = 0x417784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417780u;
            // 0x417784: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x417A20u;
    if (runtime->hasFunction(0x417A20u)) {
        auto targetFn = runtime->lookupFunction(0x417A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417788u; }
        if (ctx->pc != 0x417788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00417A20_0x417a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417788u; }
        if (ctx->pc != 0x417788u) { return; }
    }
    ctx->pc = 0x417788u;
label_417788:
    // 0x417788: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x417788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x41778c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x41778cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x417790: 0x2463b4b0  addiu       $v1, $v1, -0x4B50
    ctx->pc = 0x417790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948016));
    // 0x417794: 0x2442b4e8  addiu       $v0, $v0, -0x4B18
    ctx->pc = 0x417794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948072));
    // 0x417798: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x417798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x41779c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x41779cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4177a0: 0xc105e84  jal         func_417A10
    ctx->pc = 0x4177A0u;
    SET_GPR_U32(ctx, 31, 0x4177A8u);
    ctx->pc = 0x4177A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4177A0u;
            // 0x4177a4: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x417A10u;
    if (runtime->hasFunction(0x417A10u)) {
        auto targetFn = runtime->lookupFunction(0x417A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4177A8u; }
        if (ctx->pc != 0x4177A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00417A10_0x417a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4177A8u; }
        if (ctx->pc != 0x4177A8u) { return; }
    }
    ctx->pc = 0x4177A8u;
label_4177a8:
    // 0x4177a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x4177a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x4177ac: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x4177acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4177b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4177b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4177b4: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x4177b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x4177b8: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x4177b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x4177bc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4177bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x4177c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4177c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4177c4: 0x2442b438  addiu       $v0, $v0, -0x4BC8
    ctx->pc = 0x4177c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947896));
    // 0x4177c8: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4177c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
    // 0x4177cc: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4177ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x4177d0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4177d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x4177d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4177d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x4177d8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x4177d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x4177dc: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x4177dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
    // 0x4177e0: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x4177e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x4177e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4177e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x4177e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4177e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x4177ec: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x4177ECu;
    SET_GPR_U32(ctx, 31, 0x4177F4u);
    ctx->pc = 0x4177F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4177ECu;
            // 0x4177f0: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4177F4u; }
        if (ctx->pc != 0x4177F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4177F4u; }
        if (ctx->pc != 0x4177F4u) { return; }
    }
    ctx->pc = 0x4177F4u;
label_4177f4:
    // 0x4177f4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x4177f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x4177f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4177f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4177fc: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4177FCu;
    {
        const bool branch_taken_0x4177fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x417800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4177FCu;
            // 0x417800: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4177fc) {
            ctx->pc = 0x417814u;
            goto label_417814;
        }
    }
    ctx->pc = 0x417804u;
    // 0x417804: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x417804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x417808: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x417808u;
    SET_GPR_U32(ctx, 31, 0x417810u);
    ctx->pc = 0x41780Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417808u;
            // 0x41780c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417810u; }
        if (ctx->pc != 0x417810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417810u; }
        if (ctx->pc != 0x417810u) { return; }
    }
    ctx->pc = 0x417810u;
label_417810:
    // 0x417810: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x417810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417814:
    // 0x417814: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x417814u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
    // 0x417818: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x417818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x41781c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x41781cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x417820: 0x23980  sll         $a3, $v0, 6
    ctx->pc = 0x417820u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x417824: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x417824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x417828: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x417828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x41782c: 0xc040140  jal         func_100500
    ctx->pc = 0x41782Cu;
    SET_GPR_U32(ctx, 31, 0x417834u);
    ctx->pc = 0x417830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41782Cu;
            // 0x417830: 0x26320084  addiu       $s2, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417834u; }
        if (ctx->pc != 0x417834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417834u; }
        if (ctx->pc != 0x417834u) { return; }
    }
    ctx->pc = 0x417834u;
label_417834:
    // 0x417834: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x417834u;
    {
        const bool branch_taken_0x417834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x417834) {
            ctx->pc = 0x417838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x417834u;
            // 0x417838: 0xae22008c  sw          $v0, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x417854u;
            goto label_417854;
        }
    }
    ctx->pc = 0x41783Cu;
    // 0x41783c: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x41783cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x417840: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x417840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417844: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x417844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417848: 0xc0b4554  jal         func_2D1550
    ctx->pc = 0x417848u;
    SET_GPR_U32(ctx, 31, 0x417850u);
    ctx->pc = 0x41784Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417848u;
            // 0x41784c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1550u;
    if (runtime->hasFunction(0x2D1550u)) {
        auto targetFn = runtime->lookupFunction(0x2D1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417850u; }
        if (ctx->pc != 0x417850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1550_0x2d1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417850u; }
        if (ctx->pc != 0x417850u) { return; }
    }
    ctx->pc = 0x417850u;
label_417850:
    // 0x417850: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x417850u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_417854:
    // 0x417854: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x417854u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417858: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x417858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41785c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x41785cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x417860: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x417860u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417864: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x417864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417868: 0x3e00008  jr          $ra
    ctx->pc = 0x417868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41786Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417868u;
            // 0x41786c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x417870u;
label_417870:
    // 0x417870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x417870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x417874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x417874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x417878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x417878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x41787c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x417880: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x417880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417884: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x417884u;
    {
        const bool branch_taken_0x417884 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x417888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417884u;
            // 0x417888: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417884) {
            ctx->pc = 0x417924u;
            goto label_417924;
        }
    }
    ctx->pc = 0x41788Cu;
    // 0x41788c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x41788cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x417890: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x417890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x417894: 0x2463b4b0  addiu       $v1, $v1, -0x4B50
    ctx->pc = 0x417894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948016));
    // 0x417898: 0x2442b4e8  addiu       $v0, $v0, -0x4B18
    ctx->pc = 0x417898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948072));
    // 0x41789c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x41789cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4178a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4178A0u;
    {
        const bool branch_taken_0x4178a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4178A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4178A0u;
            // 0x4178a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4178a0) {
            ctx->pc = 0x41790Cu;
            goto label_41790c;
        }
    }
    ctx->pc = 0x4178A8u;
    // 0x4178a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4178a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4178ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4178acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4178b0: 0x2463b460  addiu       $v1, $v1, -0x4BA0
    ctx->pc = 0x4178b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947936));
    // 0x4178b4: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x4178b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
    // 0x4178b8: 0x2442b498  addiu       $v0, $v0, -0x4B68
    ctx->pc = 0x4178b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
    // 0x4178bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4178bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4178c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x4178c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x4178c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4178c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x4178c8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x4178C8u;
    SET_GPR_U32(ctx, 31, 0x4178D0u);
    ctx->pc = 0x4178CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4178C8u;
            // 0x4178cc: 0x24a56be0  addiu       $a1, $a1, 0x6BE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178D0u; }
        if (ctx->pc != 0x4178D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178D0u; }
        if (ctx->pc != 0x4178D0u) { return; }
    }
    ctx->pc = 0x4178D0u;
label_4178d0:
    // 0x4178d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4178d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x4178d4: 0xc0a8cf8  jal         func_2A33E0
    ctx->pc = 0x4178D4u;
    SET_GPR_U32(ctx, 31, 0x4178DCu);
    ctx->pc = 0x4178D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4178D4u;
            // 0x4178d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178DCu; }
        if (ctx->pc != 0x4178DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178DCu; }
        if (ctx->pc != 0x4178DCu) { return; }
    }
    ctx->pc = 0x4178DCu;
label_4178dc:
    // 0x4178dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x4178dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x4178e0: 0xc105e68  jal         func_4179A0
    ctx->pc = 0x4178E0u;
    SET_GPR_U32(ctx, 31, 0x4178E8u);
    ctx->pc = 0x4178E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4178E0u;
            // 0x4178e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4179A0u;
    if (runtime->hasFunction(0x4179A0u)) {
        auto targetFn = runtime->lookupFunction(0x4179A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178E8u; }
        if (ctx->pc != 0x4178E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004179A0_0x4179a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178E8u; }
        if (ctx->pc != 0x4178E8u) { return; }
    }
    ctx->pc = 0x4178E8u;
label_4178e8:
    // 0x4178e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4178e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x4178ec: 0xc105e68  jal         func_4179A0
    ctx->pc = 0x4178ECu;
    SET_GPR_U32(ctx, 31, 0x4178F4u);
    ctx->pc = 0x4178F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4178ECu;
            // 0x4178f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4179A0u;
    if (runtime->hasFunction(0x4179A0u)) {
        auto targetFn = runtime->lookupFunction(0x4179A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178F4u; }
        if (ctx->pc != 0x4178F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004179A0_0x4179a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4178F4u; }
        if (ctx->pc != 0x4178F4u) { return; }
    }
    ctx->pc = 0x4178F4u;
label_4178f4:
    // 0x4178f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x4178f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x4178f8: 0xc105e50  jal         func_417940
    ctx->pc = 0x4178F8u;
    SET_GPR_U32(ctx, 31, 0x417900u);
    ctx->pc = 0x4178FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4178F8u;
            // 0x4178fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x417940u;
    if (runtime->hasFunction(0x417940u)) {
        auto targetFn = runtime->lookupFunction(0x417940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417900u; }
        if (ctx->pc != 0x417900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00417940_0x417940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417900u; }
        if (ctx->pc != 0x417900u) { return; }
    }
    ctx->pc = 0x417900u;
label_417900:
    // 0x417900: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x417900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417904: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x417904u;
    SET_GPR_U32(ctx, 31, 0x41790Cu);
    ctx->pc = 0x417908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417904u;
            // 0x417908: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41790Cu; }
        if (ctx->pc != 0x41790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41790Cu; }
        if (ctx->pc != 0x41790Cu) { return; }
    }
    ctx->pc = 0x41790Cu;
label_41790c:
    // 0x41790c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x41790cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x417910: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x417910u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x417914: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x417914u;
    {
        const bool branch_taken_0x417914 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x417914) {
            ctx->pc = 0x417918u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x417914u;
            // 0x417918: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x417928u;
            goto label_417928;
        }
    }
    ctx->pc = 0x41791Cu;
    // 0x41791c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x41791Cu;
    SET_GPR_U32(ctx, 31, 0x417924u);
    ctx->pc = 0x417920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41791Cu;
            // 0x417920: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417924u; }
        if (ctx->pc != 0x417924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417924u; }
        if (ctx->pc != 0x417924u) { return; }
    }
    ctx->pc = 0x417924u;
label_417924:
    // 0x417924: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417928:
    // 0x417928: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x417928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41792c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41792cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417930: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x417930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x417934: 0x3e00008  jr          $ra
    ctx->pc = 0x417934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417934u;
            // 0x417938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41793Cu;
    // 0x41793c: 0x0  nop
    ctx->pc = 0x41793cu;
    // NOP
}
