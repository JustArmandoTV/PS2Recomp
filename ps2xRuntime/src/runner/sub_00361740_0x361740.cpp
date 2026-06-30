#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00361740
// Address: 0x361740 - 0x361a80
void sub_00361740_0x361740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00361740_0x361740");
#endif

    switch (ctx->pc) {
        case 0x361778u: goto label_361778;
        case 0x3617bcu: goto label_3617bc;
        case 0x3617dcu: goto label_3617dc;
        case 0x3617f0u: goto label_3617f0;
        case 0x3618bcu: goto label_3618bc;
        case 0x3618d8u: goto label_3618d8;
        case 0x361974u: goto label_361974;
        case 0x361994u: goto label_361994;
        default: break;
    }

    ctx->pc = 0x361740u;

    // 0x361740: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x361740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x361744: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x361744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x361748: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x361748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x36174c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36174cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x361750: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x361750u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361754: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x361754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x361758: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x361758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36175c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36175cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x361760: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x361760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361764: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x361764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x361768: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x361768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x36176c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x36176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361770: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x361770u;
    {
        const bool branch_taken_0x361770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x361774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361770u;
            // 0x361774: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x361770) {
            ctx->pc = 0x361798u;
            goto label_361798;
        }
    }
    ctx->pc = 0x361778u;
label_361778:
    // 0x361778: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x361778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36177c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36177cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x361780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x361780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x361784: 0x0  nop
    ctx->pc = 0x361784u;
    // NOP
    // 0x361788: 0x0  nop
    ctx->pc = 0x361788u;
    // NOP
    // 0x36178c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36178Cu;
    {
        const bool branch_taken_0x36178c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36178c) {
            ctx->pc = 0x361778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_361778;
        }
    }
    ctx->pc = 0x361794u;
    // 0x361794: 0x0  nop
    ctx->pc = 0x361794u;
    // NOP
label_361798:
    // 0x361798: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x361798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x36179c: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x36179cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x3617a0: 0x440019  multu       $v0, $a0
    ctx->pc = 0x3617a0u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3617a4: 0x1010  mfhi        $v0
    ctx->pc = 0x3617a4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x3617a8: 0x28842  srl         $s1, $v0, 1
    ctx->pc = 0x3617a8u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x3617ac: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x3617acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x3617b0: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x3617b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x3617b4: 0xc040138  jal         func_1004E0
    ctx->pc = 0x3617B4u;
    SET_GPR_U32(ctx, 31, 0x3617BCu);
    ctx->pc = 0x3617B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3617B4u;
            // 0x3617b8: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3617BCu; }
        if (ctx->pc != 0x3617BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3617BCu; }
        if (ctx->pc != 0x3617BCu) { return; }
    }
    ctx->pc = 0x3617BCu;
label_3617bc:
    // 0x3617bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x3617bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x3617c0: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x3617c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x3617c4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3617c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617c8: 0x24a51a60  addiu       $a1, $a1, 0x1A60
    ctx->pc = 0x3617c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
    // 0x3617cc: 0x24c6ab30  addiu       $a2, $a2, -0x54D0
    ctx->pc = 0x3617ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945584));
    // 0x3617d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x3617d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3617d4: 0xc040840  jal         func_102100
    ctx->pc = 0x3617D4u;
    SET_GPR_U32(ctx, 31, 0x3617DCu);
    ctx->pc = 0x3617D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3617D4u;
            // 0x3617d8: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3617DCu; }
        if (ctx->pc != 0x3617DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3617DCu; }
        if (ctx->pc != 0x3617DCu) { return; }
    }
    ctx->pc = 0x3617DCu;
label_3617dc:
    // 0x3617dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3617dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617e0: 0x26850004  addiu       $a1, $s4, 0x4
    ctx->pc = 0x3617e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x3617e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3617e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3617e8: 0xc075128  jal         func_1D44A0
    ctx->pc = 0x3617E8u;
    SET_GPR_U32(ctx, 31, 0x3617F0u);
    ctx->pc = 0x3617ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3617E8u;
            // 0x3617ec: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3617F0u; }
        if (ctx->pc != 0x3617F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3617F0u; }
        if (ctx->pc != 0x3617F0u) { return; }
    }
    ctx->pc = 0x3617F0u;
label_3617f0:
    // 0x3617f0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3617f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3617f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3617f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3617f8: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x3617f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x3617fc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x3617fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x361800: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361800u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361804: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361804u;
    {
        const bool branch_taken_0x361804 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361804) {
            ctx->pc = 0x361808u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361804u;
            // 0x361808: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361818u;
            goto label_361818;
        }
    }
    ctx->pc = 0x36180Cu;
    // 0x36180c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36180cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361810: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x361810u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
    // 0x361814: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361818:
    // 0x361818: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36181c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x36181cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361820: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361824: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361824u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361828: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361828u;
    {
        const bool branch_taken_0x361828 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361828) {
            ctx->pc = 0x36182Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361828u;
            // 0x36182c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36183Cu;
            goto label_36183c;
        }
    }
    ctx->pc = 0x361830u;
    // 0x361830: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361830u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361834: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361838: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_36183c:
    // 0x36183c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36183cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361840: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x361840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361844: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361848: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361848u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36184c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36184Cu;
    {
        const bool branch_taken_0x36184c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36184c) {
            ctx->pc = 0x361850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36184Cu;
            // 0x361850: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361860u;
            goto label_361860;
        }
    }
    ctx->pc = 0x361854u;
    // 0x361854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361858: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x361858u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x36185c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x36185cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361860:
    // 0x361860: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361864: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x361864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x361868: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x36186c: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x36186cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361870: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361870u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x361874: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361874u;
    {
        const bool branch_taken_0x361874 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361874) {
            ctx->pc = 0x361878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361874u;
            // 0x361878: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361888u;
            goto label_361888;
        }
    }
    ctx->pc = 0x36187Cu;
    // 0x36187c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36187cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361880: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x361880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
    // 0x361884: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x361884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_361888:
    // 0x361888: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36188c: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x36188cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x361890: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x361890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x361894: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x361894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x361898: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x361898u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x36189c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x36189Cu;
    {
        const bool branch_taken_0x36189c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36189c) {
            ctx->pc = 0x3618A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36189Cu;
            // 0x3618a0: 0x26120010  addiu       $s2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3618B0u;
            goto label_3618b0;
        }
    }
    ctx->pc = 0x3618A4u;
    // 0x3618a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3618a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3618a8: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3618a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
    // 0x3618ac: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x3618acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_3618b0:
    // 0x3618b0: 0x2630ffff  addiu       $s0, $s1, -0x1
    ctx->pc = 0x3618b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3618b4: 0x12000052  beqz        $s0, . + 4 + (0x52 << 2)
    ctx->pc = 0x3618B4u;
    {
        const bool branch_taken_0x3618b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3618b4) {
            ctx->pc = 0x361A00u;
            goto label_361a00;
        }
    }
    ctx->pc = 0x3618BCu;
label_3618bc:
    // 0x3618bc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x3618bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x3618c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3618c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618c4: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x3618c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x3618c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3618c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3618cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3618ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3618d0: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x3618D0u;
    SET_GPR_U32(ctx, 31, 0x3618D8u);
    ctx->pc = 0x3618D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3618D0u;
            // 0x3618d4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3618D8u; }
        if (ctx->pc != 0x3618D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3618D8u; }
        if (ctx->pc != 0x3618D8u) { return; }
    }
    ctx->pc = 0x3618D8u;
label_3618d8:
    // 0x3618d8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3618d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3618dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3618dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3618e0: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3618e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
    // 0x3618e4: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3618e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x3618e8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3618e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3618ec: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x3618ECu;
    {
        const bool branch_taken_0x3618ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3618ec) {
            ctx->pc = 0x361900u;
            goto label_361900;
        }
    }
    ctx->pc = 0x3618F4u;
    // 0x3618f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3618f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3618f8: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3618f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
    // 0x3618fc: 0x0  nop
    ctx->pc = 0x3618fcu;
    // NOP
label_361900:
    // 0x361900: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x361900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x361904: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361908: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x361908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
    // 0x36190c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x36190cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x361910: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361910u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x361914: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x361914u;
    {
        const bool branch_taken_0x361914 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361914) {
            ctx->pc = 0x361928u;
            goto label_361928;
        }
    }
    ctx->pc = 0x36191Cu;
    // 0x36191c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36191cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361920: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x361920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
    // 0x361924: 0x0  nop
    ctx->pc = 0x361924u;
    // NOP
label_361928:
    // 0x361928: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x361928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x36192c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361930: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x361930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
    // 0x361934: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x361934u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x361938: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x361938u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x36193c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x36193Cu;
    {
        const bool branch_taken_0x36193c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x36193c) {
            ctx->pc = 0x361950u;
            goto label_361950;
        }
    }
    ctx->pc = 0x361944u;
    // 0x361944: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x361944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x361948: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x361948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
    // 0x36194c: 0x0  nop
    ctx->pc = 0x36194cu;
    // NOP
label_361950:
    // 0x361950: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361954: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x361954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x361958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x361958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36195c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x36195cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361960: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x361960u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x361964: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361968: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x36196c: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x36196Cu;
    SET_GPR_U32(ctx, 31, 0x361974u);
    ctx->pc = 0x361970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36196Cu;
            // 0x361970: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361974u; }
        if (ctx->pc != 0x361974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361974u; }
        if (ctx->pc != 0x361974u) { return; }
    }
    ctx->pc = 0x361974u;
label_361974:
    // 0x361974: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x361974u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361978: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x361978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x36197c: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x36197cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x361980: 0xae820020  sw          $v0, 0x20($s4)
    ctx->pc = 0x361980u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 2));
    // 0x361984: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x361984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x361988: 0x8e83001c  lw          $v1, 0x1C($s4)
    ctx->pc = 0x361988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x36198c: 0xc074ea0  jal         func_1D3A80
    ctx->pc = 0x36198Cu;
    SET_GPR_U32(ctx, 31, 0x361994u);
    ctx->pc = 0x361990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36198Cu;
            // 0x361990: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3A80u;
    if (runtime->hasFunction(0x1D3A80u)) {
        auto targetFn = runtime->lookupFunction(0x1D3A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361994u; }
        if (ctx->pc != 0x361994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3A80_0x1d3a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x361994u; }
        if (ctx->pc != 0x361994u) { return; }
    }
    ctx->pc = 0x361994u;
label_361994:
    // 0x361994: 0x8e840020  lw          $a0, 0x20($s4)
    ctx->pc = 0x361994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x361998: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36199c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x36199cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x3619a0: 0xae840020  sw          $a0, 0x20($s4)
    ctx->pc = 0x3619a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 32), GPR_U32(ctx, 4));
    // 0x3619a4: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3619a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3619a8: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x3619a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x3619ac: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3619acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3619b0: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x3619b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3619b4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3619b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3619b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3619B8u;
    {
        const bool branch_taken_0x3619b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619b8) {
            ctx->pc = 0x3619C8u;
            goto label_3619c8;
        }
    }
    ctx->pc = 0x3619C0u;
    // 0x3619c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3619c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3619c4: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x3619c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_3619c8:
    // 0x3619c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3619c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3619cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3619ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3619d0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x3619d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x3619d4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x3619d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3619d8: 0x932018  mult        $a0, $a0, $s3
    ctx->pc = 0x3619d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3619dc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x3619dcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3619e0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x3619E0u;
    {
        const bool branch_taken_0x3619e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3619e0) {
            ctx->pc = 0x3619F0u;
            goto label_3619f0;
        }
    }
    ctx->pc = 0x3619E8u;
    // 0x3619e8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3619e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3619ec: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x3619ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_3619f0:
    // 0x3619f0: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3619f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x3619f4: 0x1600ffb1  bnez        $s0, . + 4 + (-0x4F << 2)
    ctx->pc = 0x3619F4u;
    {
        const bool branch_taken_0x3619f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3619F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3619F4u;
            // 0x3619f8: 0x26520010  addiu       $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3619f4) {
            ctx->pc = 0x3618BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3618bc;
        }
    }
    ctx->pc = 0x3619FCu;
    // 0x3619fc: 0x0  nop
    ctx->pc = 0x3619fcu;
    // NOP
label_361a00:
    // 0x361a00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361a04: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x361a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
    // 0x361a08: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x361a08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x361a0c: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x361A0Cu;
    {
        const bool branch_taken_0x361a0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a0c) {
            ctx->pc = 0x361A1Cu;
            goto label_361a1c;
        }
    }
    ctx->pc = 0x361A14u;
    // 0x361a14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361a14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361a18: 0xac73e3c8  sw          $s3, -0x1C38($v1)
    ctx->pc = 0x361a18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 19));
label_361a1c:
    // 0x361a1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361a20: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x361a20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x361a24: 0x73082b  sltu        $at, $v1, $s3
    ctx->pc = 0x361a24u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x361a28: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x361A28u;
    {
        const bool branch_taken_0x361a28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x361a28) {
            ctx->pc = 0x361A2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x361A28u;
            // 0x361a2c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x361A3Cu;
            goto label_361a3c;
        }
    }
    ctx->pc = 0x361A30u;
    // 0x361a30: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x361a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x361a34: 0xac73e3d0  sw          $s3, -0x1C30($v1)
    ctx->pc = 0x361a34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 19));
    // 0x361a38: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x361a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_361a3c:
    // 0x361a3c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x361a3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x361a40: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x361a40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x361a44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x361a44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x361a48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x361a48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x361a4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x361a4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x361a50: 0x3e00008  jr          $ra
    ctx->pc = 0x361A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361A50u;
            // 0x361a54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361A58u;
    // 0x361a58: 0x0  nop
    ctx->pc = 0x361a58u;
    // NOP
    // 0x361a5c: 0x0  nop
    ctx->pc = 0x361a5cu;
    // NOP
    // 0x361a60: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x361a60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x361a64: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x361a64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x361a68: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x361a68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x361a6c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x361a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x361a70: 0x3e00008  jr          $ra
    ctx->pc = 0x361A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x361A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x361A70u;
            // 0x361a74: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x361A78u;
    // 0x361a78: 0x0  nop
    ctx->pc = 0x361a78u;
    // NOP
    // 0x361a7c: 0x0  nop
    ctx->pc = 0x361a7cu;
    // NOP
}
