#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0050E7B0
// Address: 0x50e7b0 - 0x50e990
void sub_0050E7B0_0x50e7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0050E7B0_0x50e7b0");
#endif

    switch (ctx->pc) {
        case 0x50e7b0u: goto label_50e7b0;
        case 0x50e7b4u: goto label_50e7b4;
        case 0x50e7b8u: goto label_50e7b8;
        case 0x50e7bcu: goto label_50e7bc;
        case 0x50e7c0u: goto label_50e7c0;
        case 0x50e7c4u: goto label_50e7c4;
        case 0x50e7c8u: goto label_50e7c8;
        case 0x50e7ccu: goto label_50e7cc;
        case 0x50e7d0u: goto label_50e7d0;
        case 0x50e7d4u: goto label_50e7d4;
        case 0x50e7d8u: goto label_50e7d8;
        case 0x50e7dcu: goto label_50e7dc;
        case 0x50e7e0u: goto label_50e7e0;
        case 0x50e7e4u: goto label_50e7e4;
        case 0x50e7e8u: goto label_50e7e8;
        case 0x50e7ecu: goto label_50e7ec;
        case 0x50e7f0u: goto label_50e7f0;
        case 0x50e7f4u: goto label_50e7f4;
        case 0x50e7f8u: goto label_50e7f8;
        case 0x50e7fcu: goto label_50e7fc;
        case 0x50e800u: goto label_50e800;
        case 0x50e804u: goto label_50e804;
        case 0x50e808u: goto label_50e808;
        case 0x50e80cu: goto label_50e80c;
        case 0x50e810u: goto label_50e810;
        case 0x50e814u: goto label_50e814;
        case 0x50e818u: goto label_50e818;
        case 0x50e81cu: goto label_50e81c;
        case 0x50e820u: goto label_50e820;
        case 0x50e824u: goto label_50e824;
        case 0x50e828u: goto label_50e828;
        case 0x50e82cu: goto label_50e82c;
        case 0x50e830u: goto label_50e830;
        case 0x50e834u: goto label_50e834;
        case 0x50e838u: goto label_50e838;
        case 0x50e83cu: goto label_50e83c;
        case 0x50e840u: goto label_50e840;
        case 0x50e844u: goto label_50e844;
        case 0x50e848u: goto label_50e848;
        case 0x50e84cu: goto label_50e84c;
        case 0x50e850u: goto label_50e850;
        case 0x50e854u: goto label_50e854;
        case 0x50e858u: goto label_50e858;
        case 0x50e85cu: goto label_50e85c;
        case 0x50e860u: goto label_50e860;
        case 0x50e864u: goto label_50e864;
        case 0x50e868u: goto label_50e868;
        case 0x50e86cu: goto label_50e86c;
        case 0x50e870u: goto label_50e870;
        case 0x50e874u: goto label_50e874;
        case 0x50e878u: goto label_50e878;
        case 0x50e87cu: goto label_50e87c;
        case 0x50e880u: goto label_50e880;
        case 0x50e884u: goto label_50e884;
        case 0x50e888u: goto label_50e888;
        case 0x50e88cu: goto label_50e88c;
        case 0x50e890u: goto label_50e890;
        case 0x50e894u: goto label_50e894;
        case 0x50e898u: goto label_50e898;
        case 0x50e89cu: goto label_50e89c;
        case 0x50e8a0u: goto label_50e8a0;
        case 0x50e8a4u: goto label_50e8a4;
        case 0x50e8a8u: goto label_50e8a8;
        case 0x50e8acu: goto label_50e8ac;
        case 0x50e8b0u: goto label_50e8b0;
        case 0x50e8b4u: goto label_50e8b4;
        case 0x50e8b8u: goto label_50e8b8;
        case 0x50e8bcu: goto label_50e8bc;
        case 0x50e8c0u: goto label_50e8c0;
        case 0x50e8c4u: goto label_50e8c4;
        case 0x50e8c8u: goto label_50e8c8;
        case 0x50e8ccu: goto label_50e8cc;
        case 0x50e8d0u: goto label_50e8d0;
        case 0x50e8d4u: goto label_50e8d4;
        case 0x50e8d8u: goto label_50e8d8;
        case 0x50e8dcu: goto label_50e8dc;
        case 0x50e8e0u: goto label_50e8e0;
        case 0x50e8e4u: goto label_50e8e4;
        case 0x50e8e8u: goto label_50e8e8;
        case 0x50e8ecu: goto label_50e8ec;
        case 0x50e8f0u: goto label_50e8f0;
        case 0x50e8f4u: goto label_50e8f4;
        case 0x50e8f8u: goto label_50e8f8;
        case 0x50e8fcu: goto label_50e8fc;
        case 0x50e900u: goto label_50e900;
        case 0x50e904u: goto label_50e904;
        case 0x50e908u: goto label_50e908;
        case 0x50e90cu: goto label_50e90c;
        case 0x50e910u: goto label_50e910;
        case 0x50e914u: goto label_50e914;
        case 0x50e918u: goto label_50e918;
        case 0x50e91cu: goto label_50e91c;
        case 0x50e920u: goto label_50e920;
        case 0x50e924u: goto label_50e924;
        case 0x50e928u: goto label_50e928;
        case 0x50e92cu: goto label_50e92c;
        case 0x50e930u: goto label_50e930;
        case 0x50e934u: goto label_50e934;
        case 0x50e938u: goto label_50e938;
        case 0x50e93cu: goto label_50e93c;
        case 0x50e940u: goto label_50e940;
        case 0x50e944u: goto label_50e944;
        case 0x50e948u: goto label_50e948;
        case 0x50e94cu: goto label_50e94c;
        case 0x50e950u: goto label_50e950;
        case 0x50e954u: goto label_50e954;
        case 0x50e958u: goto label_50e958;
        case 0x50e95cu: goto label_50e95c;
        case 0x50e960u: goto label_50e960;
        case 0x50e964u: goto label_50e964;
        case 0x50e968u: goto label_50e968;
        case 0x50e96cu: goto label_50e96c;
        case 0x50e970u: goto label_50e970;
        case 0x50e974u: goto label_50e974;
        case 0x50e978u: goto label_50e978;
        case 0x50e97cu: goto label_50e97c;
        case 0x50e980u: goto label_50e980;
        case 0x50e984u: goto label_50e984;
        case 0x50e988u: goto label_50e988;
        case 0x50e98cu: goto label_50e98c;
        default: break;
    }

    ctx->pc = 0x50e7b0u;

label_50e7b0:
    // 0x50e7b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x50e7b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_50e7b4:
    // 0x50e7b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x50e7b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_50e7b8:
    // 0x50e7b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x50e7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_50e7bc:
    // 0x50e7bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x50e7bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_50e7c0:
    // 0x50e7c0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x50e7c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_50e7c4:
    // 0x50e7c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x50e7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_50e7c8:
    // 0x50e7c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x50e7c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50e7cc:
    // 0x50e7cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x50e7ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_50e7d0:
    // 0x50e7d0: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x50e7d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_50e7d4:
    // 0x50e7d4: 0x3c1000af  lui         $s0, 0xAF
    ctx->pc = 0x50e7d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)175 << 16));
label_50e7d8:
    // 0x50e7d8: 0x26100e80  addiu       $s0, $s0, 0xE80
    ctx->pc = 0x50e7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3712));
label_50e7dc:
    // 0x50e7dc: 0x8e630128  lw          $v1, 0x128($s3)
    ctx->pc = 0x50e7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_50e7e0:
    // 0x50e7e0: 0x12430015  beq         $s2, $v1, . + 4 + (0x15 << 2)
label_50e7e4:
    if (ctx->pc == 0x50E7E4u) {
        ctx->pc = 0x50E7E8u;
        goto label_50e7e8;
    }
    ctx->pc = 0x50E7E0u;
    {
        const bool branch_taken_0x50e7e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x50e7e0) {
            ctx->pc = 0x50E838u;
            goto label_50e838;
        }
    }
    ctx->pc = 0x50E7E8u;
label_50e7e8:
    // 0x50e7e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50e7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50e7ec:
    // 0x50e7ec: 0x8c650e80  lw          $a1, 0xE80($v1)
    ctx->pc = 0x50e7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_50e7f0:
    // 0x50e7f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x50e7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e7f4:
    // 0x50e7f4: 0x2432004  sllv        $a0, $v1, $s2
    ctx->pc = 0x50e7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 18) & 0x1F));
label_50e7f8:
    // 0x50e7f8: 0x8ca30ccc  lw          $v1, 0xCCC($a1)
    ctx->pc = 0x50e7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3276)));
label_50e7fc:
    // 0x50e7fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x50e7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_50e800:
    // 0x50e800: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_50e804:
    if (ctx->pc == 0x50E804u) {
        ctx->pc = 0x50E804u;
            // 0x50e804: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x50E808u;
        goto label_50e808;
    }
    ctx->pc = 0x50E800u;
    {
        const bool branch_taken_0x50e800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50E804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E800u;
            // 0x50e804: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e800) {
            ctx->pc = 0x50E838u;
            goto label_50e838;
        }
    }
    ctx->pc = 0x50E808u;
label_50e808:
    // 0x50e808: 0x24c402c0  addiu       $a0, $a2, 0x2C0
    ctx->pc = 0x50e808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 704));
label_50e80c:
    // 0x50e80c: 0xc04cc34  jal         func_1330D0
label_50e810:
    if (ctx->pc == 0x50E810u) {
        ctx->pc = 0x50E810u;
            // 0x50e810: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x50E814u;
        goto label_50e814;
    }
    ctx->pc = 0x50E80Cu;
    SET_GPR_U32(ctx, 31, 0x50E814u);
    ctx->pc = 0x50E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E80Cu;
            // 0x50e810: 0x26650010  addiu       $a1, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E814u; }
        if (ctx->pc != 0x50E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E814u; }
        if (ctx->pc != 0x50E814u) { return; }
    }
    ctx->pc = 0x50E814u;
label_50e814:
    // 0x50e814: 0x3c034010  lui         $v1, 0x4010
    ctx->pc = 0x50e814u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16400 << 16));
label_50e818:
    // 0x50e818: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x50e818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_50e81c:
    // 0x50e81c: 0x0  nop
    ctx->pc = 0x50e81cu;
    // NOP
label_50e820:
    // 0x50e820: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x50e820u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_50e824:
    // 0x50e824: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_50e828:
    if (ctx->pc == 0x50E828u) {
        ctx->pc = 0x50E82Cu;
        goto label_50e82c;
    }
    ctx->pc = 0x50E824u;
    {
        const bool branch_taken_0x50e824 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x50e824) {
            ctx->pc = 0x50E838u;
            goto label_50e838;
        }
    }
    ctx->pc = 0x50E82Cu;
label_50e82c:
    // 0x50e82c: 0x8e63012c  lw          $v1, 0x12C($s3)
    ctx->pc = 0x50e82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_50e830:
    // 0x50e830: 0x12430009  beq         $s2, $v1, . + 4 + (0x9 << 2)
label_50e834:
    if (ctx->pc == 0x50E834u) {
        ctx->pc = 0x50E834u;
            // 0x50e834: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E838u;
        goto label_50e838;
    }
    ctx->pc = 0x50E830u;
    {
        const bool branch_taken_0x50e830 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x50E834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E830u;
            // 0x50e834: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e830) {
            ctx->pc = 0x50E858u;
            goto label_50e858;
        }
    }
    ctx->pc = 0x50E838u;
label_50e838:
    // 0x50e838: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x50e838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_50e83c:
    // 0x50e83c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x50e83cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_50e840:
    // 0x50e840: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x50e840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_50e844:
    // 0x50e844: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x50e844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_50e848:
    // 0x50e848: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x50e848u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_50e84c:
    // 0x50e84c: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_50e850:
    if (ctx->pc == 0x50E850u) {
        ctx->pc = 0x50E850u;
            // 0x50e850: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x50E854u;
        goto label_50e854;
    }
    ctx->pc = 0x50E84Cu;
    {
        const bool branch_taken_0x50e84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x50E850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E84Cu;
            // 0x50e850: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50e84c) {
            ctx->pc = 0x50E7DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_50e7dc;
        }
    }
    ctx->pc = 0x50E854u;
label_50e854:
    // 0x50e854: 0x0  nop
    ctx->pc = 0x50e854u;
    // NOP
label_50e858:
    // 0x50e858: 0x6220045  bltzl       $s1, . + 4 + (0x45 << 2)
label_50e85c:
    if (ctx->pc == 0x50E85Cu) {
        ctx->pc = 0x50E85Cu;
            // 0x50e85c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x50E860u;
        goto label_50e860;
    }
    ctx->pc = 0x50E858u;
    {
        const bool branch_taken_0x50e858 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x50e858) {
            ctx->pc = 0x50E85Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E858u;
            // 0x50e85c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E970u;
            goto label_50e970;
        }
    }
    ctx->pc = 0x50E860u;
label_50e860:
    // 0x50e860: 0x8e650128  lw          $a1, 0x128($s3)
    ctx->pc = 0x50e860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 296)));
label_50e864:
    // 0x50e864: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x50e864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_50e868:
    // 0x50e868: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x50e868u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_50e86c:
    // 0x50e86c: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x50e86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_50e870:
    // 0x50e870: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x50e870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_50e874:
    // 0x50e874: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x50e874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_50e878:
    // 0x50e878: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x50e878u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_50e87c:
    // 0x50e87c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x50e87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_50e880:
    // 0x50e880: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x50e880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_50e884:
    // 0x50e884: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x50e884u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_50e888:
    // 0x50e888: 0xae6500a4  sw          $a1, 0xA4($s3)
    ctx->pc = 0x50e888u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 5));
label_50e88c:
    // 0x50e88c: 0xc13b8e8  jal         func_4EE3A0
label_50e890:
    if (ctx->pc == 0x50E890u) {
        ctx->pc = 0x50E890u;
            // 0x50e890: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x50E894u;
        goto label_50e894;
    }
    ctx->pc = 0x50E88Cu;
    SET_GPR_U32(ctx, 31, 0x50E894u);
    ctx->pc = 0x50E890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E88Cu;
            // 0x50e890: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EE3A0u;
    if (runtime->hasFunction(0x4EE3A0u)) {
        auto targetFn = runtime->lookupFunction(0x4EE3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E894u; }
        if (ctx->pc != 0x50E894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EE3A0_0x4ee3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E894u; }
        if (ctx->pc != 0x50E894u) { return; }
    }
    ctx->pc = 0x50E894u;
label_50e894:
    // 0x50e894: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x50e894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_50e898:
    // 0x50e898: 0xc0e32a4  jal         func_38CA90
label_50e89c:
    if (ctx->pc == 0x50E89Cu) {
        ctx->pc = 0x50E89Cu;
            // 0x50e89c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x50E8A0u;
        goto label_50e8a0;
    }
    ctx->pc = 0x50E898u;
    SET_GPR_U32(ctx, 31, 0x50E8A0u);
    ctx->pc = 0x50E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E898u;
            // 0x50e89c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8A0u; }
        if (ctx->pc != 0x50E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8A0u; }
        if (ctx->pc != 0x50E8A0u) { return; }
    }
    ctx->pc = 0x50E8A0u;
label_50e8a0:
    // 0x50e8a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x50e8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e8a4:
    // 0x50e8a4: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x50e8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_50e8a8:
    // 0x50e8a8: 0xc0e082c  jal         func_3820B0
label_50e8ac:
    if (ctx->pc == 0x50E8ACu) {
        ctx->pc = 0x50E8ACu;
            // 0x50e8ac: 0xae6200b4  sw          $v0, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x50E8B0u;
        goto label_50e8b0;
    }
    ctx->pc = 0x50E8A8u;
    SET_GPR_U32(ctx, 31, 0x50E8B0u);
    ctx->pc = 0x50E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E8A8u;
            // 0x50e8ac: 0xae6200b4  sw          $v0, 0xB4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8B0u; }
        if (ctx->pc != 0x50E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8B0u; }
        if (ctx->pc != 0x50E8B0u) { return; }
    }
    ctx->pc = 0x50E8B0u;
label_50e8b0:
    // 0x50e8b0: 0xc0e0828  jal         func_3820A0
label_50e8b4:
    if (ctx->pc == 0x50E8B4u) {
        ctx->pc = 0x50E8B4u;
            // 0x50e8b4: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->pc = 0x50E8B8u;
        goto label_50e8b8;
    }
    ctx->pc = 0x50E8B0u;
    SET_GPR_U32(ctx, 31, 0x50E8B8u);
    ctx->pc = 0x50E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E8B0u;
            // 0x50e8b4: 0x2664006c  addiu       $a0, $s3, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8B8u; }
        if (ctx->pc != 0x50E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8B8u; }
        if (ctx->pc != 0x50E8B8u) { return; }
    }
    ctx->pc = 0x50E8B8u;
label_50e8b8:
    // 0x50e8b8: 0x8e62009c  lw          $v0, 0x9C($s3)
    ctx->pc = 0x50e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_50e8bc:
    // 0x50e8bc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_50e8c0:
    if (ctx->pc == 0x50E8C0u) {
        ctx->pc = 0x50E8C0u;
            // 0x50e8c0: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->pc = 0x50E8C4u;
        goto label_50e8c4;
    }
    ctx->pc = 0x50E8BCu;
    {
        const bool branch_taken_0x50e8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e8bc) {
            ctx->pc = 0x50E8C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E8BCu;
            // 0x50e8c0: 0x8e640050  lw          $a0, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E8F4u;
            goto label_50e8f4;
        }
    }
    ctx->pc = 0x50E8C4u;
label_50e8c4:
    // 0x50e8c4: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x50e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_50e8c8:
    // 0x50e8c8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x50e8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_50e8cc:
    // 0x50e8cc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_50e8d0:
    if (ctx->pc == 0x50E8D0u) {
        ctx->pc = 0x50E8D4u;
        goto label_50e8d4;
    }
    ctx->pc = 0x50E8CCu;
    {
        const bool branch_taken_0x50e8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e8cc) {
            ctx->pc = 0x50E8F0u;
            goto label_50e8f0;
        }
    }
    ctx->pc = 0x50E8D4u;
label_50e8d4:
    // 0x50e8d4: 0xc0dc408  jal         func_371020
label_50e8d8:
    if (ctx->pc == 0x50E8D8u) {
        ctx->pc = 0x50E8D8u;
            // 0x50e8d8: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x50E8DCu;
        goto label_50e8dc;
    }
    ctx->pc = 0x50E8D4u;
    SET_GPR_U32(ctx, 31, 0x50E8DCu);
    ctx->pc = 0x50E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E8D4u;
            // 0x50e8d8: 0x26640050  addiu       $a0, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8DCu; }
        if (ctx->pc != 0x50E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8DCu; }
        if (ctx->pc != 0x50E8DCu) { return; }
    }
    ctx->pc = 0x50E8DCu;
label_50e8dc:
    // 0x50e8dc: 0xc0e0824  jal         func_382090
label_50e8e0:
    if (ctx->pc == 0x50E8E0u) {
        ctx->pc = 0x50E8E0u;
            // 0x50e8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E8E4u;
        goto label_50e8e4;
    }
    ctx->pc = 0x50E8DCu;
    SET_GPR_U32(ctx, 31, 0x50E8E4u);
    ctx->pc = 0x50E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E8DCu;
            // 0x50e8e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8E4u; }
        if (ctx->pc != 0x50E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8E4u; }
        if (ctx->pc != 0x50E8E4u) { return; }
    }
    ctx->pc = 0x50E8E4u;
label_50e8e4:
    // 0x50e8e4: 0x8e64009c  lw          $a0, 0x9C($s3)
    ctx->pc = 0x50e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
label_50e8e8:
    // 0x50e8e8: 0xc0e081c  jal         func_382070
label_50e8ec:
    if (ctx->pc == 0x50E8ECu) {
        ctx->pc = 0x50E8ECu;
            // 0x50e8ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E8F0u;
        goto label_50e8f0;
    }
    ctx->pc = 0x50E8E8u;
    SET_GPR_U32(ctx, 31, 0x50E8F0u);
    ctx->pc = 0x50E8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E8E8u;
            // 0x50e8ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8F0u; }
        if (ctx->pc != 0x50E8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E8F0u; }
        if (ctx->pc != 0x50E8F0u) { return; }
    }
    ctx->pc = 0x50E8F0u;
label_50e8f0:
    // 0x50e8f0: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x50e8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_50e8f4:
    // 0x50e8f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x50e8f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50e8f8:
    // 0x50e8f8: 0xc0e080c  jal         func_382030
label_50e8fc:
    if (ctx->pc == 0x50E8FCu) {
        ctx->pc = 0x50E8FCu;
            // 0x50e8fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x50E900u;
        goto label_50e900;
    }
    ctx->pc = 0x50E8F8u;
    SET_GPR_U32(ctx, 31, 0x50E900u);
    ctx->pc = 0x50E8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E8F8u;
            // 0x50e8fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E900u; }
        if (ctx->pc != 0x50E900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E900u; }
        if (ctx->pc != 0x50E900u) { return; }
    }
    ctx->pc = 0x50E900u;
label_50e900:
    // 0x50e900: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x50e900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_50e904:
    // 0x50e904: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x50e904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50e908:
    // 0x50e908: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x50e908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_50e90c:
    // 0x50e90c: 0xc08914c  jal         func_224530
label_50e910:
    if (ctx->pc == 0x50E910u) {
        ctx->pc = 0x50E910u;
            // 0x50e910: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E914u;
        goto label_50e914;
    }
    ctx->pc = 0x50E90Cu;
    SET_GPR_U32(ctx, 31, 0x50E914u);
    ctx->pc = 0x50E910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E90Cu;
            // 0x50e910: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E914u; }
        if (ctx->pc != 0x50E914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E914u; }
        if (ctx->pc != 0x50E914u) { return; }
    }
    ctx->pc = 0x50E914u;
label_50e914:
    // 0x50e914: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x50e914u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_50e918:
    // 0x50e918: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x50e918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_50e91c:
    // 0x50e91c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x50e91cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_50e920:
    // 0x50e920: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x50e920u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_50e924:
    // 0x50e924: 0xc0b6df0  jal         func_2DB7C0
label_50e928:
    if (ctx->pc == 0x50E928u) {
        ctx->pc = 0x50E928u;
            // 0x50e928: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x50E92Cu;
        goto label_50e92c;
    }
    ctx->pc = 0x50E924u;
    SET_GPR_U32(ctx, 31, 0x50E92Cu);
    ctx->pc = 0x50E928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E924u;
            // 0x50e928: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E92Cu; }
        if (ctx->pc != 0x50E92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E92Cu; }
        if (ctx->pc != 0x50E92Cu) { return; }
    }
    ctx->pc = 0x50E92Cu;
label_50e92c:
    // 0x50e92c: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x50e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_50e930:
    // 0x50e930: 0xc0e07f8  jal         func_381FE0
label_50e934:
    if (ctx->pc == 0x50E934u) {
        ctx->pc = 0x50E934u;
            // 0x50e934: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x50E938u;
        goto label_50e938;
    }
    ctx->pc = 0x50E930u;
    SET_GPR_U32(ctx, 31, 0x50E938u);
    ctx->pc = 0x50E934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E930u;
            // 0x50e934: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E938u; }
        if (ctx->pc != 0x50E938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E938u; }
        if (ctx->pc != 0x50E938u) { return; }
    }
    ctx->pc = 0x50E938u;
label_50e938:
    // 0x50e938: 0x8e640050  lw          $a0, 0x50($s3)
    ctx->pc = 0x50e938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_50e93c:
    // 0x50e93c: 0xc0dc3f4  jal         func_370FD0
label_50e940:
    if (ctx->pc == 0x50E940u) {
        ctx->pc = 0x50E940u;
            // 0x50e940: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x50E944u;
        goto label_50e944;
    }
    ctx->pc = 0x50E93Cu;
    SET_GPR_U32(ctx, 31, 0x50E944u);
    ctx->pc = 0x50E940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x50E93Cu;
            // 0x50e940: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E944u; }
        if (ctx->pc != 0x50E944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50E944u; }
        if (ctx->pc != 0x50E944u) { return; }
    }
    ctx->pc = 0x50E944u;
label_50e944:
    // 0x50e944: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x50e944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_50e948:
    // 0x50e948: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x50e948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_50e94c:
    // 0x50e94c: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
label_50e950:
    if (ctx->pc == 0x50E950u) {
        ctx->pc = 0x50E950u;
            // 0x50e950: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x50E954u;
        goto label_50e954;
    }
    ctx->pc = 0x50E94Cu;
    {
        const bool branch_taken_0x50e94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x50e94c) {
            ctx->pc = 0x50E950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x50E94Cu;
            // 0x50e950: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x50E968u;
            goto label_50e968;
        }
    }
    ctx->pc = 0x50E954u;
label_50e954:
    // 0x50e954: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x50e954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_50e958:
    // 0x50e958: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x50e958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_50e95c:
    // 0x50e95c: 0x320f809  jalr        $t9
label_50e960:
    if (ctx->pc == 0x50E960u) {
        ctx->pc = 0x50E960u;
            // 0x50e960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x50E964u;
        goto label_50e964;
    }
    ctx->pc = 0x50E95Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x50E964u);
        ctx->pc = 0x50E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E95Cu;
            // 0x50e960: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x50E964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x50E964u; }
            if (ctx->pc != 0x50E964u) { return; }
        }
        }
    }
    ctx->pc = 0x50E964u;
label_50e964:
    // 0x50e964: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x50e964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_50e968:
    // 0x50e968: 0xae630124  sw          $v1, 0x124($s3)
    ctx->pc = 0x50e968u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 292), GPR_U32(ctx, 3));
label_50e96c:
    // 0x50e96c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x50e96cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_50e970:
    // 0x50e970: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x50e970u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_50e974:
    // 0x50e974: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x50e974u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_50e978:
    // 0x50e978: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x50e978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_50e97c:
    // 0x50e97c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x50e97cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_50e980:
    // 0x50e980: 0x3e00008  jr          $ra
label_50e984:
    if (ctx->pc == 0x50E984u) {
        ctx->pc = 0x50E984u;
            // 0x50e984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x50E988u;
        goto label_50e988;
    }
    ctx->pc = 0x50E980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50E984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50E980u;
            // 0x50e984: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50E988u;
label_50e988:
    // 0x50e988: 0x0  nop
    ctx->pc = 0x50e988u;
    // NOP
label_50e98c:
    // 0x50e98c: 0x0  nop
    ctx->pc = 0x50e98cu;
    // NOP
}
