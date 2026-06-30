#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DF820
// Address: 0x4df820 - 0x4df950
void sub_004DF820_0x4df820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DF820_0x4df820");
#endif

    switch (ctx->pc) {
        case 0x4df820u: goto label_4df820;
        case 0x4df824u: goto label_4df824;
        case 0x4df828u: goto label_4df828;
        case 0x4df82cu: goto label_4df82c;
        case 0x4df830u: goto label_4df830;
        case 0x4df834u: goto label_4df834;
        case 0x4df838u: goto label_4df838;
        case 0x4df83cu: goto label_4df83c;
        case 0x4df840u: goto label_4df840;
        case 0x4df844u: goto label_4df844;
        case 0x4df848u: goto label_4df848;
        case 0x4df84cu: goto label_4df84c;
        case 0x4df850u: goto label_4df850;
        case 0x4df854u: goto label_4df854;
        case 0x4df858u: goto label_4df858;
        case 0x4df85cu: goto label_4df85c;
        case 0x4df860u: goto label_4df860;
        case 0x4df864u: goto label_4df864;
        case 0x4df868u: goto label_4df868;
        case 0x4df86cu: goto label_4df86c;
        case 0x4df870u: goto label_4df870;
        case 0x4df874u: goto label_4df874;
        case 0x4df878u: goto label_4df878;
        case 0x4df87cu: goto label_4df87c;
        case 0x4df880u: goto label_4df880;
        case 0x4df884u: goto label_4df884;
        case 0x4df888u: goto label_4df888;
        case 0x4df88cu: goto label_4df88c;
        case 0x4df890u: goto label_4df890;
        case 0x4df894u: goto label_4df894;
        case 0x4df898u: goto label_4df898;
        case 0x4df89cu: goto label_4df89c;
        case 0x4df8a0u: goto label_4df8a0;
        case 0x4df8a4u: goto label_4df8a4;
        case 0x4df8a8u: goto label_4df8a8;
        case 0x4df8acu: goto label_4df8ac;
        case 0x4df8b0u: goto label_4df8b0;
        case 0x4df8b4u: goto label_4df8b4;
        case 0x4df8b8u: goto label_4df8b8;
        case 0x4df8bcu: goto label_4df8bc;
        case 0x4df8c0u: goto label_4df8c0;
        case 0x4df8c4u: goto label_4df8c4;
        case 0x4df8c8u: goto label_4df8c8;
        case 0x4df8ccu: goto label_4df8cc;
        case 0x4df8d0u: goto label_4df8d0;
        case 0x4df8d4u: goto label_4df8d4;
        case 0x4df8d8u: goto label_4df8d8;
        case 0x4df8dcu: goto label_4df8dc;
        case 0x4df8e0u: goto label_4df8e0;
        case 0x4df8e4u: goto label_4df8e4;
        case 0x4df8e8u: goto label_4df8e8;
        case 0x4df8ecu: goto label_4df8ec;
        case 0x4df8f0u: goto label_4df8f0;
        case 0x4df8f4u: goto label_4df8f4;
        case 0x4df8f8u: goto label_4df8f8;
        case 0x4df8fcu: goto label_4df8fc;
        case 0x4df900u: goto label_4df900;
        case 0x4df904u: goto label_4df904;
        case 0x4df908u: goto label_4df908;
        case 0x4df90cu: goto label_4df90c;
        case 0x4df910u: goto label_4df910;
        case 0x4df914u: goto label_4df914;
        case 0x4df918u: goto label_4df918;
        case 0x4df91cu: goto label_4df91c;
        case 0x4df920u: goto label_4df920;
        case 0x4df924u: goto label_4df924;
        case 0x4df928u: goto label_4df928;
        case 0x4df92cu: goto label_4df92c;
        case 0x4df930u: goto label_4df930;
        case 0x4df934u: goto label_4df934;
        case 0x4df938u: goto label_4df938;
        case 0x4df93cu: goto label_4df93c;
        case 0x4df940u: goto label_4df940;
        case 0x4df944u: goto label_4df944;
        case 0x4df948u: goto label_4df948;
        case 0x4df94cu: goto label_4df94c;
        default: break;
    }

    ctx->pc = 0x4df820u;

label_4df820:
    // 0x4df820: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df824:
    // 0x4df824: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4df824u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_4df828:
    // 0x4df828: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4df828u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4df82c:
    // 0x4df82c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df82cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df830:
    // 0x4df830: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4df830u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_4df834:
    // 0x4df834: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4df834u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_4df838:
    // 0x4df838: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df83c:
    // 0x4df83c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4df83cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_4df840:
    // 0x4df840: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df844:
    // 0x4df844: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4df844u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4df848:
    // 0x4df848: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4df848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_4df84c:
    // 0x4df84c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4df84cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_4df850:
    // 0x4df850: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4df850u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4df854:
    // 0x4df854: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4df854u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4df858:
    // 0x4df858: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4df858u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_4df85c:
    // 0x4df85c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df85cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df860:
    // 0x4df860: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4df860u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_4df864:
    // 0x4df864: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4df864u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_4df868:
    // 0x4df868: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4df868u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_4df86c:
    // 0x4df86c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4df86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_4df870:
    // 0x4df870: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4df870u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_4df874:
    // 0x4df874: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4df874u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_4df878:
    // 0x4df878: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4df878u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_4df87c:
    // 0x4df87c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4df87cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_4df880:
    // 0x4df880: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4df880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_4df884:
    // 0x4df884: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4df884u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_4df888:
    // 0x4df888: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4df888u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4df88c:
    // 0x4df88c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4df88cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_4df890:
    // 0x4df890: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4df890u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_4df894:
    // 0x4df894: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4df894u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4df898:
    // 0x4df898: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4df898u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_4df89c:
    // 0x4df89c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4df89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_4df8a0:
    // 0x4df8a0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4df8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_4df8a4:
    // 0x4df8a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4df8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4df8a8:
    // 0x4df8a8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4df8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_4df8ac:
    // 0x4df8ac: 0x3e00008  jr          $ra
label_4df8b0:
    if (ctx->pc == 0x4DF8B0u) {
        ctx->pc = 0x4DF8B0u;
            // 0x4df8b0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x4DF8B4u;
        goto label_4df8b4;
    }
    ctx->pc = 0x4DF8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF8B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF8ACu;
            // 0x4df8b0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF8B4u;
label_4df8b4:
    // 0x4df8b4: 0x0  nop
    ctx->pc = 0x4df8b4u;
    // NOP
label_4df8b8:
    // 0x4df8b8: 0x0  nop
    ctx->pc = 0x4df8b8u;
    // NOP
label_4df8bc:
    // 0x4df8bc: 0x0  nop
    ctx->pc = 0x4df8bcu;
    // NOP
label_4df8c0:
    // 0x4df8c0: 0x3e00008  jr          $ra
label_4df8c4:
    if (ctx->pc == 0x4DF8C4u) {
        ctx->pc = 0x4DF8C8u;
        goto label_4df8c8;
    }
    ctx->pc = 0x4DF8C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF8C8u;
label_4df8c8:
    // 0x4df8c8: 0x0  nop
    ctx->pc = 0x4df8c8u;
    // NOP
label_4df8cc:
    // 0x4df8cc: 0x0  nop
    ctx->pc = 0x4df8ccu;
    // NOP
label_4df8d0:
    // 0x4df8d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4df8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4df8d4:
    // 0x4df8d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4df8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4df8d8:
    // 0x4df8d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4df8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4df8dc:
    // 0x4df8dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4df8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4df8e0:
    // 0x4df8e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4df8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4df8e4:
    // 0x4df8e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4df8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4df8e8:
    // 0x4df8e8: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x4df8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4df8ec:
    // 0x4df8ec: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_4df8f0:
    if (ctx->pc == 0x4DF8F0u) {
        ctx->pc = 0x4DF8F0u;
            // 0x4df8f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4DF8F4u;
        goto label_4df8f4;
    }
    ctx->pc = 0x4DF8ECu;
    {
        const bool branch_taken_0x4df8ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DF8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF8ECu;
            // 0x4df8f0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df8ec) {
            ctx->pc = 0x4DF928u;
            goto label_4df928;
        }
    }
    ctx->pc = 0x4DF8F4u;
label_4df8f4:
    // 0x4df8f4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4df8f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df8f8:
    // 0x4df8f8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4df8f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4df8fc:
    // 0x4df8fc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x4df8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_4df900:
    // 0x4df900: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4df900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4df904:
    // 0x4df904: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x4df904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4df908:
    // 0x4df908: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4df908u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4df90c:
    // 0x4df90c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4df90cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4df910:
    // 0x4df910: 0x320f809  jalr        $t9
label_4df914:
    if (ctx->pc == 0x4DF914u) {
        ctx->pc = 0x4DF918u;
        goto label_4df918;
    }
    ctx->pc = 0x4DF910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4DF918u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4DF918u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4DF918u; }
            if (ctx->pc != 0x4DF918u) { return; }
        }
        }
    }
    ctx->pc = 0x4DF918u;
label_4df918:
    // 0x4df918: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x4df918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_4df91c:
    // 0x4df91c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x4df91cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4df920:
    // 0x4df920: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_4df924:
    if (ctx->pc == 0x4DF924u) {
        ctx->pc = 0x4DF924u;
            // 0x4df924: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4DF928u;
        goto label_4df928;
    }
    ctx->pc = 0x4DF920u;
    {
        const bool branch_taken_0x4df920 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4DF924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF920u;
            // 0x4df924: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4df920) {
            ctx->pc = 0x4DF8FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4df8fc;
        }
    }
    ctx->pc = 0x4DF928u;
label_4df928:
    // 0x4df928: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4df928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4df92c:
    // 0x4df92c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4df92cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4df930:
    // 0x4df930: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4df930u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4df934:
    // 0x4df934: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4df934u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4df938:
    // 0x4df938: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4df938u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4df93c:
    // 0x4df93c: 0x3e00008  jr          $ra
label_4df940:
    if (ctx->pc == 0x4DF940u) {
        ctx->pc = 0x4DF940u;
            // 0x4df940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4DF944u;
        goto label_4df944;
    }
    ctx->pc = 0x4DF93Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DF940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DF93Cu;
            // 0x4df940: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DF944u;
label_4df944:
    // 0x4df944: 0x0  nop
    ctx->pc = 0x4df944u;
    // NOP
label_4df948:
    // 0x4df948: 0x0  nop
    ctx->pc = 0x4df948u;
    // NOP
label_4df94c:
    // 0x4df94c: 0x0  nop
    ctx->pc = 0x4df94cu;
    // NOP
}
