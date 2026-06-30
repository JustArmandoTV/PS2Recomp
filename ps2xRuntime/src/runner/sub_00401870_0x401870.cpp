#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00401870
// Address: 0x401870 - 0x4019d0
void sub_00401870_0x401870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00401870_0x401870");
#endif

    switch (ctx->pc) {
        case 0x4018fcu: goto label_4018fc;
        case 0x401908u: goto label_401908;
        case 0x401934u: goto label_401934;
        case 0x401960u: goto label_401960;
        default: break;
    }

    ctx->pc = 0x401870u;

    // 0x401870: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x401870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x401874: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x401874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x401878: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x401878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x40187c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x40187cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x401880: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x401880u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401884: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x401884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x401888: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x401888u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40188c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40188cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x401890: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x401890u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401894: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x401894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x401898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x401898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x40189c: 0x16b40003  bne         $s5, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x40189Cu;
    {
        const bool branch_taken_0x40189c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x4018A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40189Cu;
            // 0x4018a0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40189c) {
            ctx->pc = 0x4018ACu;
            goto label_4018ac;
        }
    }
    ctx->pc = 0x4018A4u;
    // 0x4018a4: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x4018A4u;
    {
        const bool branch_taken_0x4018a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4018A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4018A4u;
            // 0x4018a8: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4018a4) {
            ctx->pc = 0x4019A0u;
            goto label_4019a0;
        }
    }
    ctx->pc = 0x4018ACu;
label_4018ac:
    // 0x4018ac: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x4018acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x4018b0: 0x3c022aaa  lui         $v0, 0x2AAA
    ctx->pc = 0x4018b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10922 << 16));
    // 0x4018b4: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x4018b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x4018b8: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x4018b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x4018bc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x4018bcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4018c0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4018c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x4018c4: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4018c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4018c8: 0x648821  addu        $s1, $v1, $a0
    ctx->pc = 0x4018c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4018cc: 0x2341823  subu        $v1, $s1, $s4
    ctx->pc = 0x4018ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x4018d0: 0x430018  mult        $zero, $v0, $v1
    ctx->pc = 0x4018d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4018d4: 0x1010  mfhi        $v0
    ctx->pc = 0x4018d4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x4018d8: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x4018d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x4018dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x4018dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x4018e0: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x4018e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4018e4: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x4018E4u;
    {
        const bool branch_taken_0x4018e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4018e4) {
            ctx->pc = 0x401918u;
            goto label_401918;
        }
    }
    ctx->pc = 0x4018ECu;
    // 0x4018ec: 0x291082b  sltu        $at, $s4, $s1
    ctx->pc = 0x4018ecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4018f0: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x4018f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4018f4: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x4018F4u;
    {
        const bool branch_taken_0x4018f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4018F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4018F4u;
            // 0x4018f8: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4018f4) {
            ctx->pc = 0x401918u;
            goto label_401918;
        }
    }
    ctx->pc = 0x4018FCu;
label_4018fc:
    // 0x4018fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4018fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401900: 0xc1007d8  jal         func_401F60
    ctx->pc = 0x401900u;
    SET_GPR_U32(ctx, 31, 0x401908u);
    ctx->pc = 0x401904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x401900u;
            // 0x401904: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x401F60u;
    if (runtime->hasFunction(0x401F60u)) {
        auto targetFn = runtime->lookupFunction(0x401F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401908u; }
        if (ctx->pc != 0x401908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00401F60_0x401f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401908u; }
        if (ctx->pc != 0x401908u) { return; }
    }
    ctx->pc = 0x401908u;
label_401908:
    // 0x401908: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x401908u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x40190c: 0x271102b  sltu        $v0, $s3, $s1
    ctx->pc = 0x40190cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x401910: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x401910u;
    {
        const bool branch_taken_0x401910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x401914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x401910u;
            // 0x401914: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x401910) {
            ctx->pc = 0x4018FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4018fc;
        }
    }
    ctx->pc = 0x401918u;
label_401918:
    // 0x401918: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x401918u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x40191c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x40191cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x401920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x401920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x401924: 0x2a28021  addu        $s0, $s5, $v0
    ctx->pc = 0x401924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x401928: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x401928u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x40192c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
    ctx->pc = 0x40192Cu;
    {
        const bool branch_taken_0x40192c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x40192c) {
            ctx->pc = 0x401970u;
            goto label_401970;
        }
    }
    ctx->pc = 0x401934u;
label_401934:
    // 0x401934: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x401934u;
    {
        const bool branch_taken_0x401934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x401934) {
            ctx->pc = 0x401960u;
            goto label_401960;
        }
    }
    ctx->pc = 0x40193Cu;
    // 0x40193c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x40193Cu;
    {
        const bool branch_taken_0x40193c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x40193c) {
            ctx->pc = 0x401960u;
            goto label_401960;
        }
    }
    ctx->pc = 0x401944u;
    // 0x401944: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x401944u;
    {
        const bool branch_taken_0x401944 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x401944) {
            ctx->pc = 0x401960u;
            goto label_401960;
        }
    }
    ctx->pc = 0x40194Cu;
    // 0x40194c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x40194cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x401950: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x401950u;
    {
        const bool branch_taken_0x401950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x401950) {
            ctx->pc = 0x401960u;
            goto label_401960;
        }
    }
    ctx->pc = 0x401958u;
    // 0x401958: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x401958u;
    SET_GPR_U32(ctx, 31, 0x401960u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401960u; }
        if (ctx->pc != 0x401960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x401960u; }
        if (ctx->pc != 0x401960u) { return; }
    }
    ctx->pc = 0x401960u;
label_401960:
    // 0x401960: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x401960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x401964: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x401964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x401968: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x401968u;
    {
        const bool branch_taken_0x401968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x401968) {
            ctx->pc = 0x401934u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_401934;
        }
    }
    ctx->pc = 0x401970u;
label_401970:
    // 0x401970: 0x3c032aaa  lui         $v1, 0x2AAA
    ctx->pc = 0x401970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)10922 << 16));
    // 0x401974: 0x2952023  subu        $a0, $s4, $s5
    ctx->pc = 0x401974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
    // 0x401978: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x401978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
    // 0x40197c: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x40197cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x401980: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x401980u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x401984: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x401984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x401988: 0x2010  mfhi        $a0
    ctx->pc = 0x401988u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x40198c: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x40198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x401990: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x401990u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x401994: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x401994u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x401998: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x401998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x40199c: 0xaec30004  sw          $v1, 0x4($s6)
    ctx->pc = 0x40199cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 3));
label_4019a0:
    // 0x4019a0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x4019a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4019a4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4019a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4019a8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4019a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4019ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4019acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4019b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4019b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4019b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4019b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4019b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4019b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4019bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4019bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4019c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4019C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4019C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4019C0u;
            // 0x4019c4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4019C8u;
    // 0x4019c8: 0x0  nop
    ctx->pc = 0x4019c8u;
    // NOP
    // 0x4019cc: 0x0  nop
    ctx->pc = 0x4019ccu;
    // NOP
}
