#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002248F0
// Address: 0x2248f0 - 0x224a40
void sub_002248F0_0x2248f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002248F0_0x2248f0");
#endif

    switch (ctx->pc) {
        case 0x2248f0u: goto label_2248f0;
        case 0x2248f4u: goto label_2248f4;
        case 0x2248f8u: goto label_2248f8;
        case 0x2248fcu: goto label_2248fc;
        case 0x224900u: goto label_224900;
        case 0x224904u: goto label_224904;
        case 0x224908u: goto label_224908;
        case 0x22490cu: goto label_22490c;
        case 0x224910u: goto label_224910;
        case 0x224914u: goto label_224914;
        case 0x224918u: goto label_224918;
        case 0x22491cu: goto label_22491c;
        case 0x224920u: goto label_224920;
        case 0x224924u: goto label_224924;
        case 0x224928u: goto label_224928;
        case 0x22492cu: goto label_22492c;
        case 0x224930u: goto label_224930;
        case 0x224934u: goto label_224934;
        case 0x224938u: goto label_224938;
        case 0x22493cu: goto label_22493c;
        case 0x224940u: goto label_224940;
        case 0x224944u: goto label_224944;
        case 0x224948u: goto label_224948;
        case 0x22494cu: goto label_22494c;
        case 0x224950u: goto label_224950;
        case 0x224954u: goto label_224954;
        case 0x224958u: goto label_224958;
        case 0x22495cu: goto label_22495c;
        case 0x224960u: goto label_224960;
        case 0x224964u: goto label_224964;
        case 0x224968u: goto label_224968;
        case 0x22496cu: goto label_22496c;
        case 0x224970u: goto label_224970;
        case 0x224974u: goto label_224974;
        case 0x224978u: goto label_224978;
        case 0x22497cu: goto label_22497c;
        case 0x224980u: goto label_224980;
        case 0x224984u: goto label_224984;
        case 0x224988u: goto label_224988;
        case 0x22498cu: goto label_22498c;
        case 0x224990u: goto label_224990;
        case 0x224994u: goto label_224994;
        case 0x224998u: goto label_224998;
        case 0x22499cu: goto label_22499c;
        case 0x2249a0u: goto label_2249a0;
        case 0x2249a4u: goto label_2249a4;
        case 0x2249a8u: goto label_2249a8;
        case 0x2249acu: goto label_2249ac;
        case 0x2249b0u: goto label_2249b0;
        case 0x2249b4u: goto label_2249b4;
        case 0x2249b8u: goto label_2249b8;
        case 0x2249bcu: goto label_2249bc;
        case 0x2249c0u: goto label_2249c0;
        case 0x2249c4u: goto label_2249c4;
        case 0x2249c8u: goto label_2249c8;
        case 0x2249ccu: goto label_2249cc;
        case 0x2249d0u: goto label_2249d0;
        case 0x2249d4u: goto label_2249d4;
        case 0x2249d8u: goto label_2249d8;
        case 0x2249dcu: goto label_2249dc;
        case 0x2249e0u: goto label_2249e0;
        case 0x2249e4u: goto label_2249e4;
        case 0x2249e8u: goto label_2249e8;
        case 0x2249ecu: goto label_2249ec;
        case 0x2249f0u: goto label_2249f0;
        case 0x2249f4u: goto label_2249f4;
        case 0x2249f8u: goto label_2249f8;
        case 0x2249fcu: goto label_2249fc;
        case 0x224a00u: goto label_224a00;
        case 0x224a04u: goto label_224a04;
        case 0x224a08u: goto label_224a08;
        case 0x224a0cu: goto label_224a0c;
        case 0x224a10u: goto label_224a10;
        case 0x224a14u: goto label_224a14;
        case 0x224a18u: goto label_224a18;
        case 0x224a1cu: goto label_224a1c;
        case 0x224a20u: goto label_224a20;
        case 0x224a24u: goto label_224a24;
        case 0x224a28u: goto label_224a28;
        case 0x224a2cu: goto label_224a2c;
        case 0x224a30u: goto label_224a30;
        case 0x224a34u: goto label_224a34;
        case 0x224a38u: goto label_224a38;
        case 0x224a3cu: goto label_224a3c;
        default: break;
    }

    ctx->pc = 0x2248f0u;

label_2248f0:
    // 0x2248f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2248f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2248f4:
    // 0x2248f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2248f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2248f8:
    // 0x2248f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2248f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2248fc:
    // 0x2248fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2248fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_224900:
    // 0x224900: 0x8c900008  lw          $s0, 0x8($a0)
    ctx->pc = 0x224900u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_224904:
    // 0x224904: 0x12000048  beqz        $s0, . + 4 + (0x48 << 2)
label_224908:
    if (ctx->pc == 0x224908u) {
        ctx->pc = 0x224908u;
            // 0x224908: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22490Cu;
        goto label_22490c;
    }
    ctx->pc = 0x224904u;
    {
        const bool branch_taken_0x224904 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x224908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224904u;
            // 0x224908: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224904) {
            ctx->pc = 0x224A28u;
            goto label_224a28;
        }
    }
    ctx->pc = 0x22490Cu;
label_22490c:
    // 0x22490c: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x22490cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_224910:
    // 0x224910: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_224914:
    if (ctx->pc == 0x224914u) {
        ctx->pc = 0x224914u;
            // 0x224914: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x224918u;
        goto label_224918;
    }
    ctx->pc = 0x224910u;
    {
        const bool branch_taken_0x224910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224910) {
            ctx->pc = 0x224914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224910u;
            // 0x224914: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x224938u;
            goto label_224938;
        }
    }
    ctx->pc = 0x224918u;
label_224918:
    // 0x224918: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x224918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_22491c:
    // 0x22491c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22491cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_224920:
    // 0x224920: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x224920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_224924:
    // 0x224924: 0xa3a20038  sb          $v0, 0x38($sp)
    ctx->pc = 0x224924u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 56), (uint8_t)GPR_U32(ctx, 2));
label_224928:
    // 0x224928: 0xc08d1cc  jal         func_234730
label_22492c:
    if (ctx->pc == 0x22492Cu) {
        ctx->pc = 0x22492Cu;
            // 0x22492c: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->pc = 0x224930u;
        goto label_224930;
    }
    ctx->pc = 0x224928u;
    SET_GPR_U32(ctx, 31, 0x224930u);
    ctx->pc = 0x22492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224928u;
            // 0x22492c: 0xafb1003c  sw          $s1, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234730u;
    if (runtime->hasFunction(0x234730u)) {
        auto targetFn = runtime->lookupFunction(0x234730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224930u; }
        if (ctx->pc != 0x224930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234730_0x234730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224930u; }
        if (ctx->pc != 0x224930u) { return; }
    }
    ctx->pc = 0x224930u;
label_224930:
    // 0x224930: 0x1000003e  b           . + 4 + (0x3E << 2)
label_224934:
    if (ctx->pc == 0x224934u) {
        ctx->pc = 0x224934u;
            // 0x224934: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x224938u;
        goto label_224938;
    }
    ctx->pc = 0x224930u;
    {
        const bool branch_taken_0x224930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x224934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224930u;
            // 0x224934: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224930) {
            ctx->pc = 0x224A2Cu;
            goto label_224a2c;
        }
    }
    ctx->pc = 0x224938u;
label_224938:
    // 0x224938: 0x27a3004c  addiu       $v1, $sp, 0x4C
    ctx->pc = 0x224938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_22493c:
    // 0x22493c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22493cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_224940:
    // 0x224940: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x224940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_224944:
    // 0x224944: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_224948:
    if (ctx->pc == 0x224948u) {
        ctx->pc = 0x224948u;
            // 0x224948: 0xae040084  sw          $a0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
        ctx->pc = 0x22494Cu;
        goto label_22494c;
    }
    ctx->pc = 0x224944u;
    {
        const bool branch_taken_0x224944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x224948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224944u;
            // 0x224948: 0xae040084  sw          $a0, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224944) {
            ctx->pc = 0x224968u;
            goto label_224968;
        }
    }
    ctx->pc = 0x22494Cu;
label_22494c:
    // 0x22494c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x22494cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_224950:
    // 0x224950: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x224950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_224954:
    // 0x224954: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x224954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_224958:
    // 0x224958: 0x0  nop
    ctx->pc = 0x224958u;
    // NOP
label_22495c:
    // 0x22495c: 0x0  nop
    ctx->pc = 0x22495cu;
    // NOP
label_224960:
    // 0x224960: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_224964:
    if (ctx->pc == 0x224964u) {
        ctx->pc = 0x224968u;
        goto label_224968;
    }
    ctx->pc = 0x224960u;
    {
        const bool branch_taken_0x224960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x224960) {
            ctx->pc = 0x22494Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22494c;
        }
    }
    ctx->pc = 0x224968u;
label_224968:
    // 0x224968: 0xafb1004c  sw          $s1, 0x4C($sp)
    ctx->pc = 0x224968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 17));
label_22496c:
    // 0x22496c: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x22496cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_224970:
    // 0x224970: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x224970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_224974:
    // 0x224974: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x224974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_224978:
    // 0x224978: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x224978u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22497c:
    // 0x22497c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22497cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_224980:
    // 0x224980: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x224980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_224984:
    // 0x224984: 0x320f809  jalr        $t9
label_224988:
    if (ctx->pc == 0x224988u) {
        ctx->pc = 0x224988u;
            // 0x224988: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22498Cu;
        goto label_22498c;
    }
    ctx->pc = 0x224984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22498Cu);
        ctx->pc = 0x224988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224984u;
            // 0x224988: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22498Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22498Cu; }
            if (ctx->pc != 0x22498Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22498Cu;
label_22498c:
    // 0x22498c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x22498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_224990:
    // 0x224990: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_224994:
    if (ctx->pc == 0x224994u) {
        ctx->pc = 0x224994u;
            // 0x224994: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->pc = 0x224998u;
        goto label_224998;
    }
    ctx->pc = 0x224990u;
    {
        const bool branch_taken_0x224990 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x224990) {
            ctx->pc = 0x224994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x224990u;
            // 0x224994: 0x27a40044  addiu       $a0, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2249ACu;
            goto label_2249ac;
        }
    }
    ctx->pc = 0x224998u;
label_224998:
    // 0x224998: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x224998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_22499c:
    // 0x22499c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22499cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2249a0:
    // 0x2249a0: 0xc08d8d4  jal         func_236350
label_2249a4:
    if (ctx->pc == 0x2249A4u) {
        ctx->pc = 0x2249A4u;
            // 0x2249a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2249A8u;
        goto label_2249a8;
    }
    ctx->pc = 0x2249A0u;
    SET_GPR_U32(ctx, 31, 0x2249A8u);
    ctx->pc = 0x2249A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249A0u;
            // 0x2249a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236350u;
    if (runtime->hasFunction(0x236350u)) {
        auto targetFn = runtime->lookupFunction(0x236350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249A8u; }
        if (ctx->pc != 0x2249A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00236350_0x236350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249A8u; }
        if (ctx->pc != 0x2249A8u) { return; }
    }
    ctx->pc = 0x2249A8u;
label_2249a8:
    // 0x2249a8: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x2249a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2249ac:
    // 0x2249ac: 0xc088b68  jal         func_222DA0
label_2249b0:
    if (ctx->pc == 0x2249B0u) {
        ctx->pc = 0x2249B0u;
            // 0x2249b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2249B4u;
        goto label_2249b4;
    }
    ctx->pc = 0x2249ACu;
    SET_GPR_U32(ctx, 31, 0x2249B4u);
    ctx->pc = 0x2249B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249ACu;
            // 0x2249b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DA0u;
    if (runtime->hasFunction(0x222DA0u)) {
        auto targetFn = runtime->lookupFunction(0x222DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249B4u; }
        if (ctx->pc != 0x2249B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DA0_0x222da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249B4u; }
        if (ctx->pc != 0x2249B4u) { return; }
    }
    ctx->pc = 0x2249B4u;
label_2249b4:
    // 0x2249b4: 0x27a30044  addiu       $v1, $sp, 0x44
    ctx->pc = 0x2249b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_2249b8:
    // 0x2249b8: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2249b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2249bc:
    // 0x2249bc: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
label_2249c0:
    if (ctx->pc == 0x2249C0u) {
        ctx->pc = 0x2249C0u;
            // 0x2249c0: 0x8e030084  lw          $v1, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x2249C4u;
        goto label_2249c4;
    }
    ctx->pc = 0x2249BCu;
    {
        const bool branch_taken_0x2249bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2249bc) {
            ctx->pc = 0x2249C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2249BCu;
            // 0x2249c0: 0x8e030084  lw          $v1, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2249FCu;
            goto label_2249fc;
        }
    }
    ctx->pc = 0x2249C4u;
label_2249c4:
    // 0x2249c4: 0x820200d3  lb          $v0, 0xD3($s0)
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 211)));
label_2249c8:
    // 0x2249c8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2249cc:
    if (ctx->pc == 0x2249CCu) {
        ctx->pc = 0x2249CCu;
            // 0x2249cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2249D0u;
        goto label_2249d0;
    }
    ctx->pc = 0x2249C8u;
    {
        const bool branch_taken_0x2249c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2249c8) {
            ctx->pc = 0x2249CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2249C8u;
            // 0x2249cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2249F0u;
            goto label_2249f0;
        }
    }
    ctx->pc = 0x2249D0u;
label_2249d0:
    // 0x2249d0: 0x922200a8  lbu         $v0, 0xA8($s1)
    ctx->pc = 0x2249d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 168)));
label_2249d4:
    // 0x2249d4: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x2249d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_2249d8:
    // 0x2249d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2249d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2249dc:
    // 0x2249dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2249e0:
    if (ctx->pc == 0x2249E0u) {
        ctx->pc = 0x2249E4u;
        goto label_2249e4;
    }
    ctx->pc = 0x2249DCu;
    {
        const bool branch_taken_0x2249dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2249dc) {
            ctx->pc = 0x2249ECu;
            goto label_2249ec;
        }
    }
    ctx->pc = 0x2249E4u;
label_2249e4:
    // 0x2249e4: 0xc088b74  jal         func_222DD0
label_2249e8:
    if (ctx->pc == 0x2249E8u) {
        ctx->pc = 0x2249E8u;
            // 0x2249e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2249ECu;
        goto label_2249ec;
    }
    ctx->pc = 0x2249E4u;
    SET_GPR_U32(ctx, 31, 0x2249ECu);
    ctx->pc = 0x2249E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249E4u;
            // 0x2249e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249ECu; }
        if (ctx->pc != 0x2249ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249ECu; }
        if (ctx->pc != 0x2249ECu) { return; }
    }
    ctx->pc = 0x2249ECu;
label_2249ec:
    // 0x2249ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2249ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2249f0:
    // 0x2249f0: 0xc08ea58  jal         func_23A960
label_2249f4:
    if (ctx->pc == 0x2249F4u) {
        ctx->pc = 0x2249F4u;
            // 0x2249f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2249F8u;
        goto label_2249f8;
    }
    ctx->pc = 0x2249F0u;
    SET_GPR_U32(ctx, 31, 0x2249F8u);
    ctx->pc = 0x2249F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2249F0u;
            // 0x2249f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A960u;
    if (runtime->hasFunction(0x23A960u)) {
        auto targetFn = runtime->lookupFunction(0x23A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249F8u; }
        if (ctx->pc != 0x2249F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A960_0x23a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2249F8u; }
        if (ctx->pc != 0x2249F8u) { return; }
    }
    ctx->pc = 0x2249F8u;
label_2249f8:
    // 0x2249f8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x2249f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_2249fc:
    // 0x2249fc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2249fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_224a00:
    // 0x224a00: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_224a04:
    if (ctx->pc == 0x224A04u) {
        ctx->pc = 0x224A04u;
            // 0x224a04: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->pc = 0x224A08u;
        goto label_224a08;
    }
    ctx->pc = 0x224A00u;
    {
        const bool branch_taken_0x224a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x224A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A00u;
            // 0x224a04: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x224a00) {
            ctx->pc = 0x224A28u;
            goto label_224a28;
        }
    }
    ctx->pc = 0x224A08u;
label_224a08:
    // 0x224a08: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x224a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_224a0c:
    // 0x224a0c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_224a10:
    if (ctx->pc == 0x224A10u) {
        ctx->pc = 0x224A14u;
        goto label_224a14;
    }
    ctx->pc = 0x224A0Cu;
    {
        const bool branch_taken_0x224a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x224a0c) {
            ctx->pc = 0x224A28u;
            goto label_224a28;
        }
    }
    ctx->pc = 0x224A14u;
label_224a14:
    // 0x224a14: 0x8203008c  lb          $v1, 0x8C($s0)
    ctx->pc = 0x224a14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 140)));
label_224a18:
    // 0x224a18: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_224a1c:
    if (ctx->pc == 0x224A1Cu) {
        ctx->pc = 0x224A20u;
        goto label_224a20;
    }
    ctx->pc = 0x224A18u;
    {
        const bool branch_taken_0x224a18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x224a18) {
            ctx->pc = 0x224A28u;
            goto label_224a28;
        }
    }
    ctx->pc = 0x224A20u;
label_224a20:
    // 0x224a20: 0xc08d1c4  jal         func_234710
label_224a24:
    if (ctx->pc == 0x224A24u) {
        ctx->pc = 0x224A24u;
            // 0x224a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x224A28u;
        goto label_224a28;
    }
    ctx->pc = 0x224A20u;
    SET_GPR_U32(ctx, 31, 0x224A28u);
    ctx->pc = 0x224A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x224A20u;
            // 0x224a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234710u;
    if (runtime->hasFunction(0x234710u)) {
        auto targetFn = runtime->lookupFunction(0x234710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A28u; }
        if (ctx->pc != 0x224A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00234710_0x234710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x224A28u; }
        if (ctx->pc != 0x224A28u) { return; }
    }
    ctx->pc = 0x224A28u;
label_224a28:
    // 0x224a28: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x224a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_224a2c:
    // 0x224a2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x224a2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_224a30:
    // 0x224a30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x224a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_224a34:
    // 0x224a34: 0x3e00008  jr          $ra
label_224a38:
    if (ctx->pc == 0x224A38u) {
        ctx->pc = 0x224A38u;
            // 0x224a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x224A3Cu;
        goto label_224a3c;
    }
    ctx->pc = 0x224A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x224A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x224A34u;
            // 0x224a38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x224A3Cu;
label_224a3c:
    // 0x224a3c: 0x0  nop
    ctx->pc = 0x224a3cu;
    // NOP
}
