#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00519770
// Address: 0x519770 - 0x5198a0
void sub_00519770_0x519770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00519770_0x519770");
#endif

    switch (ctx->pc) {
        case 0x519770u: goto label_519770;
        case 0x519774u: goto label_519774;
        case 0x519778u: goto label_519778;
        case 0x51977cu: goto label_51977c;
        case 0x519780u: goto label_519780;
        case 0x519784u: goto label_519784;
        case 0x519788u: goto label_519788;
        case 0x51978cu: goto label_51978c;
        case 0x519790u: goto label_519790;
        case 0x519794u: goto label_519794;
        case 0x519798u: goto label_519798;
        case 0x51979cu: goto label_51979c;
        case 0x5197a0u: goto label_5197a0;
        case 0x5197a4u: goto label_5197a4;
        case 0x5197a8u: goto label_5197a8;
        case 0x5197acu: goto label_5197ac;
        case 0x5197b0u: goto label_5197b0;
        case 0x5197b4u: goto label_5197b4;
        case 0x5197b8u: goto label_5197b8;
        case 0x5197bcu: goto label_5197bc;
        case 0x5197c0u: goto label_5197c0;
        case 0x5197c4u: goto label_5197c4;
        case 0x5197c8u: goto label_5197c8;
        case 0x5197ccu: goto label_5197cc;
        case 0x5197d0u: goto label_5197d0;
        case 0x5197d4u: goto label_5197d4;
        case 0x5197d8u: goto label_5197d8;
        case 0x5197dcu: goto label_5197dc;
        case 0x5197e0u: goto label_5197e0;
        case 0x5197e4u: goto label_5197e4;
        case 0x5197e8u: goto label_5197e8;
        case 0x5197ecu: goto label_5197ec;
        case 0x5197f0u: goto label_5197f0;
        case 0x5197f4u: goto label_5197f4;
        case 0x5197f8u: goto label_5197f8;
        case 0x5197fcu: goto label_5197fc;
        case 0x519800u: goto label_519800;
        case 0x519804u: goto label_519804;
        case 0x519808u: goto label_519808;
        case 0x51980cu: goto label_51980c;
        case 0x519810u: goto label_519810;
        case 0x519814u: goto label_519814;
        case 0x519818u: goto label_519818;
        case 0x51981cu: goto label_51981c;
        case 0x519820u: goto label_519820;
        case 0x519824u: goto label_519824;
        case 0x519828u: goto label_519828;
        case 0x51982cu: goto label_51982c;
        case 0x519830u: goto label_519830;
        case 0x519834u: goto label_519834;
        case 0x519838u: goto label_519838;
        case 0x51983cu: goto label_51983c;
        case 0x519840u: goto label_519840;
        case 0x519844u: goto label_519844;
        case 0x519848u: goto label_519848;
        case 0x51984cu: goto label_51984c;
        case 0x519850u: goto label_519850;
        case 0x519854u: goto label_519854;
        case 0x519858u: goto label_519858;
        case 0x51985cu: goto label_51985c;
        case 0x519860u: goto label_519860;
        case 0x519864u: goto label_519864;
        case 0x519868u: goto label_519868;
        case 0x51986cu: goto label_51986c;
        case 0x519870u: goto label_519870;
        case 0x519874u: goto label_519874;
        case 0x519878u: goto label_519878;
        case 0x51987cu: goto label_51987c;
        case 0x519880u: goto label_519880;
        case 0x519884u: goto label_519884;
        case 0x519888u: goto label_519888;
        case 0x51988cu: goto label_51988c;
        case 0x519890u: goto label_519890;
        case 0x519894u: goto label_519894;
        case 0x519898u: goto label_519898;
        case 0x51989cu: goto label_51989c;
        default: break;
    }

    ctx->pc = 0x519770u;

label_519770:
    // 0x519770: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x519770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_519774:
    // 0x519774: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x519774u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_519778:
    // 0x519778: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x519778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_51977c:
    // 0x51977c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x51977cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_519780:
    // 0x519780: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x519780u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_519784:
    // 0x519784: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x519784u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_519788:
    // 0x519788: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x519788u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_51978c:
    // 0x51978c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x51978cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_519790:
    // 0x519790: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x519790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_519794:
    // 0x519794: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x519794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_519798:
    // 0x519798: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x519798u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_51979c:
    // 0x51979c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x51979cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_5197a0:
    // 0x5197a0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x5197a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_5197a4:
    // 0x5197a4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x5197a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_5197a8:
    // 0x5197a8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x5197a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_5197ac:
    // 0x5197ac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5197acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5197b0:
    // 0x5197b0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x5197b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_5197b4:
    // 0x5197b4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x5197b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_5197b8:
    // 0x5197b8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x5197b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_5197bc:
    // 0x5197bc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x5197bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_5197c0:
    // 0x5197c0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x5197c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_5197c4:
    // 0x5197c4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x5197c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_5197c8:
    // 0x5197c8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x5197c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_5197cc:
    // 0x5197cc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x5197ccu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_5197d0:
    // 0x5197d0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x5197d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_5197d4:
    // 0x5197d4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x5197d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_5197d8:
    // 0x5197d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5197d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5197dc:
    // 0x5197dc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x5197dcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_5197e0:
    // 0x5197e0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x5197e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_5197e4:
    // 0x5197e4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x5197e4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_5197e8:
    // 0x5197e8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x5197e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_5197ec:
    // 0x5197ec: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x5197ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_5197f0:
    // 0x5197f0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x5197f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_5197f4:
    // 0x5197f4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x5197f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_5197f8:
    // 0x5197f8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x5197f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_5197fc:
    // 0x5197fc: 0x3e00008  jr          $ra
label_519800:
    if (ctx->pc == 0x519800u) {
        ctx->pc = 0x519800u;
            // 0x519800: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x519804u;
        goto label_519804;
    }
    ctx->pc = 0x5197FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5197FCu;
            // 0x519800: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519804u;
label_519804:
    // 0x519804: 0x0  nop
    ctx->pc = 0x519804u;
    // NOP
label_519808:
    // 0x519808: 0x0  nop
    ctx->pc = 0x519808u;
    // NOP
label_51980c:
    // 0x51980c: 0x0  nop
    ctx->pc = 0x51980cu;
    // NOP
label_519810:
    // 0x519810: 0x3e00008  jr          $ra
label_519814:
    if (ctx->pc == 0x519814u) {
        ctx->pc = 0x519818u;
        goto label_519818;
    }
    ctx->pc = 0x519810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519818u;
label_519818:
    // 0x519818: 0x0  nop
    ctx->pc = 0x519818u;
    // NOP
label_51981c:
    // 0x51981c: 0x0  nop
    ctx->pc = 0x51981cu;
    // NOP
label_519820:
    // 0x519820: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x519820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_519824:
    // 0x519824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x519824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_519828:
    // 0x519828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x519828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_51982c:
    // 0x51982c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x51982cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_519830:
    // 0x519830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x519830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_519834:
    // 0x519834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x519834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_519838:
    // 0x519838: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x519838u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_51983c:
    // 0x51983c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_519840:
    if (ctx->pc == 0x519840u) {
        ctx->pc = 0x519840u;
            // 0x519840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x519844u;
        goto label_519844;
    }
    ctx->pc = 0x51983Cu;
    {
        const bool branch_taken_0x51983c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x519840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51983Cu;
            // 0x519840: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51983c) {
            ctx->pc = 0x519878u;
            goto label_519878;
        }
    }
    ctx->pc = 0x519844u;
label_519844:
    // 0x519844: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x519844u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_519848:
    // 0x519848: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x519848u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51984c:
    // 0x51984c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x51984cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_519850:
    // 0x519850: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x519850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_519854:
    // 0x519854: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x519854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_519858:
    // 0x519858: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x519858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_51985c:
    // 0x51985c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x51985cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_519860:
    // 0x519860: 0x320f809  jalr        $t9
label_519864:
    if (ctx->pc == 0x519864u) {
        ctx->pc = 0x519868u;
        goto label_519868;
    }
    ctx->pc = 0x519860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x519868u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x519868u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x519868u; }
            if (ctx->pc != 0x519868u) { return; }
        }
        }
    }
    ctx->pc = 0x519868u;
label_519868:
    // 0x519868: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x519868u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_51986c:
    // 0x51986c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x51986cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_519870:
    // 0x519870: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_519874:
    if (ctx->pc == 0x519874u) {
        ctx->pc = 0x519874u;
            // 0x519874: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x519878u;
        goto label_519878;
    }
    ctx->pc = 0x519870u;
    {
        const bool branch_taken_0x519870 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x519874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x519870u;
            // 0x519874: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x519870) {
            ctx->pc = 0x51984Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_51984c;
        }
    }
    ctx->pc = 0x519878u;
label_519878:
    // 0x519878: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x519878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_51987c:
    // 0x51987c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x51987cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_519880:
    // 0x519880: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x519880u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_519884:
    // 0x519884: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x519884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_519888:
    // 0x519888: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x519888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_51988c:
    // 0x51988c: 0x3e00008  jr          $ra
label_519890:
    if (ctx->pc == 0x519890u) {
        ctx->pc = 0x519890u;
            // 0x519890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x519894u;
        goto label_519894;
    }
    ctx->pc = 0x51988Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x519890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51988Cu;
            // 0x519890: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x519894u;
label_519894:
    // 0x519894: 0x0  nop
    ctx->pc = 0x519894u;
    // NOP
label_519898:
    // 0x519898: 0x0  nop
    ctx->pc = 0x519898u;
    // NOP
label_51989c:
    // 0x51989c: 0x0  nop
    ctx->pc = 0x51989cu;
    // NOP
}
