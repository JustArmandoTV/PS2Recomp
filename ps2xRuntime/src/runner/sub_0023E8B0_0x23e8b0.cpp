#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023E8B0
// Address: 0x23e8b0 - 0x23eaf0
void sub_0023E8B0_0x23e8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023E8B0_0x23e8b0");
#endif

    switch (ctx->pc) {
        case 0x23e8b0u: goto label_23e8b0;
        case 0x23e8b4u: goto label_23e8b4;
        case 0x23e8b8u: goto label_23e8b8;
        case 0x23e8bcu: goto label_23e8bc;
        case 0x23e8c0u: goto label_23e8c0;
        case 0x23e8c4u: goto label_23e8c4;
        case 0x23e8c8u: goto label_23e8c8;
        case 0x23e8ccu: goto label_23e8cc;
        case 0x23e8d0u: goto label_23e8d0;
        case 0x23e8d4u: goto label_23e8d4;
        case 0x23e8d8u: goto label_23e8d8;
        case 0x23e8dcu: goto label_23e8dc;
        case 0x23e8e0u: goto label_23e8e0;
        case 0x23e8e4u: goto label_23e8e4;
        case 0x23e8e8u: goto label_23e8e8;
        case 0x23e8ecu: goto label_23e8ec;
        case 0x23e8f0u: goto label_23e8f0;
        case 0x23e8f4u: goto label_23e8f4;
        case 0x23e8f8u: goto label_23e8f8;
        case 0x23e8fcu: goto label_23e8fc;
        case 0x23e900u: goto label_23e900;
        case 0x23e904u: goto label_23e904;
        case 0x23e908u: goto label_23e908;
        case 0x23e90cu: goto label_23e90c;
        case 0x23e910u: goto label_23e910;
        case 0x23e914u: goto label_23e914;
        case 0x23e918u: goto label_23e918;
        case 0x23e91cu: goto label_23e91c;
        case 0x23e920u: goto label_23e920;
        case 0x23e924u: goto label_23e924;
        case 0x23e928u: goto label_23e928;
        case 0x23e92cu: goto label_23e92c;
        case 0x23e930u: goto label_23e930;
        case 0x23e934u: goto label_23e934;
        case 0x23e938u: goto label_23e938;
        case 0x23e93cu: goto label_23e93c;
        case 0x23e940u: goto label_23e940;
        case 0x23e944u: goto label_23e944;
        case 0x23e948u: goto label_23e948;
        case 0x23e94cu: goto label_23e94c;
        case 0x23e950u: goto label_23e950;
        case 0x23e954u: goto label_23e954;
        case 0x23e958u: goto label_23e958;
        case 0x23e95cu: goto label_23e95c;
        case 0x23e960u: goto label_23e960;
        case 0x23e964u: goto label_23e964;
        case 0x23e968u: goto label_23e968;
        case 0x23e96cu: goto label_23e96c;
        case 0x23e970u: goto label_23e970;
        case 0x23e974u: goto label_23e974;
        case 0x23e978u: goto label_23e978;
        case 0x23e97cu: goto label_23e97c;
        case 0x23e980u: goto label_23e980;
        case 0x23e984u: goto label_23e984;
        case 0x23e988u: goto label_23e988;
        case 0x23e98cu: goto label_23e98c;
        case 0x23e990u: goto label_23e990;
        case 0x23e994u: goto label_23e994;
        case 0x23e998u: goto label_23e998;
        case 0x23e99cu: goto label_23e99c;
        case 0x23e9a0u: goto label_23e9a0;
        case 0x23e9a4u: goto label_23e9a4;
        case 0x23e9a8u: goto label_23e9a8;
        case 0x23e9acu: goto label_23e9ac;
        case 0x23e9b0u: goto label_23e9b0;
        case 0x23e9b4u: goto label_23e9b4;
        case 0x23e9b8u: goto label_23e9b8;
        case 0x23e9bcu: goto label_23e9bc;
        case 0x23e9c0u: goto label_23e9c0;
        case 0x23e9c4u: goto label_23e9c4;
        case 0x23e9c8u: goto label_23e9c8;
        case 0x23e9ccu: goto label_23e9cc;
        case 0x23e9d0u: goto label_23e9d0;
        case 0x23e9d4u: goto label_23e9d4;
        case 0x23e9d8u: goto label_23e9d8;
        case 0x23e9dcu: goto label_23e9dc;
        case 0x23e9e0u: goto label_23e9e0;
        case 0x23e9e4u: goto label_23e9e4;
        case 0x23e9e8u: goto label_23e9e8;
        case 0x23e9ecu: goto label_23e9ec;
        case 0x23e9f0u: goto label_23e9f0;
        case 0x23e9f4u: goto label_23e9f4;
        case 0x23e9f8u: goto label_23e9f8;
        case 0x23e9fcu: goto label_23e9fc;
        case 0x23ea00u: goto label_23ea00;
        case 0x23ea04u: goto label_23ea04;
        case 0x23ea08u: goto label_23ea08;
        case 0x23ea0cu: goto label_23ea0c;
        case 0x23ea10u: goto label_23ea10;
        case 0x23ea14u: goto label_23ea14;
        case 0x23ea18u: goto label_23ea18;
        case 0x23ea1cu: goto label_23ea1c;
        case 0x23ea20u: goto label_23ea20;
        case 0x23ea24u: goto label_23ea24;
        case 0x23ea28u: goto label_23ea28;
        case 0x23ea2cu: goto label_23ea2c;
        case 0x23ea30u: goto label_23ea30;
        case 0x23ea34u: goto label_23ea34;
        case 0x23ea38u: goto label_23ea38;
        case 0x23ea3cu: goto label_23ea3c;
        case 0x23ea40u: goto label_23ea40;
        case 0x23ea44u: goto label_23ea44;
        case 0x23ea48u: goto label_23ea48;
        case 0x23ea4cu: goto label_23ea4c;
        case 0x23ea50u: goto label_23ea50;
        case 0x23ea54u: goto label_23ea54;
        case 0x23ea58u: goto label_23ea58;
        case 0x23ea5cu: goto label_23ea5c;
        case 0x23ea60u: goto label_23ea60;
        case 0x23ea64u: goto label_23ea64;
        case 0x23ea68u: goto label_23ea68;
        case 0x23ea6cu: goto label_23ea6c;
        case 0x23ea70u: goto label_23ea70;
        case 0x23ea74u: goto label_23ea74;
        case 0x23ea78u: goto label_23ea78;
        case 0x23ea7cu: goto label_23ea7c;
        case 0x23ea80u: goto label_23ea80;
        case 0x23ea84u: goto label_23ea84;
        case 0x23ea88u: goto label_23ea88;
        case 0x23ea8cu: goto label_23ea8c;
        case 0x23ea90u: goto label_23ea90;
        case 0x23ea94u: goto label_23ea94;
        case 0x23ea98u: goto label_23ea98;
        case 0x23ea9cu: goto label_23ea9c;
        case 0x23eaa0u: goto label_23eaa0;
        case 0x23eaa4u: goto label_23eaa4;
        case 0x23eaa8u: goto label_23eaa8;
        case 0x23eaacu: goto label_23eaac;
        case 0x23eab0u: goto label_23eab0;
        case 0x23eab4u: goto label_23eab4;
        case 0x23eab8u: goto label_23eab8;
        case 0x23eabcu: goto label_23eabc;
        case 0x23eac0u: goto label_23eac0;
        case 0x23eac4u: goto label_23eac4;
        case 0x23eac8u: goto label_23eac8;
        case 0x23eaccu: goto label_23eacc;
        case 0x23ead0u: goto label_23ead0;
        case 0x23ead4u: goto label_23ead4;
        case 0x23ead8u: goto label_23ead8;
        case 0x23eadcu: goto label_23eadc;
        case 0x23eae0u: goto label_23eae0;
        case 0x23eae4u: goto label_23eae4;
        case 0x23eae8u: goto label_23eae8;
        case 0x23eaecu: goto label_23eaec;
        default: break;
    }

    ctx->pc = 0x23e8b0u;

label_23e8b0:
    // 0x23e8b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x23e8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_23e8b4:
    // 0x23e8b4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23e8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23e8b8:
    // 0x23e8b8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x23e8b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_23e8bc:
    // 0x23e8bc: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x23e8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
label_23e8c0:
    // 0x23e8c0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x23e8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_23e8c4:
    // 0x23e8c4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x23e8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_23e8c8:
    // 0x23e8c8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x23e8c8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23e8cc:
    // 0x23e8cc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x23e8ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_23e8d0:
    // 0x23e8d0: 0x27a4009c  addiu       $a0, $sp, 0x9C
    ctx->pc = 0x23e8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 156));
label_23e8d4:
    // 0x23e8d4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x23e8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_23e8d8:
    // 0x23e8d8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x23e8d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23e8dc:
    // 0x23e8dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23e8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23e8e0:
    // 0x23e8e0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x23e8e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23e8e4:
    // 0x23e8e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23e8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23e8e8:
    // 0x23e8e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23e8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23e8ec:
    // 0x23e8ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23e8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23e8f0:
    // 0x23e8f0: 0x8cb60094  lw          $s6, 0x94($a1)
    ctx->pc = 0x23e8f0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23e8f4:
    // 0x23e8f4: 0xafa40090  sw          $a0, 0x90($sp)
    ctx->pc = 0x23e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 4));
label_23e8f8:
    // 0x23e8f8: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x23e8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_23e8fc:
    // 0x23e8fc: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x23e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_23e900:
    // 0x23e900: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x23e900u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_23e904:
    // 0x23e904: 0x18600060  blez        $v1, . + 4 + (0x60 << 2)
label_23e908:
    if (ctx->pc == 0x23E908u) {
        ctx->pc = 0x23E908u;
            // 0x23e908: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E90Cu;
        goto label_23e90c;
    }
    ctx->pc = 0x23E904u;
    {
        const bool branch_taken_0x23e904 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E904u;
            // 0x23e908: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e904) {
            ctx->pc = 0x23EA88u;
            goto label_23ea88;
        }
    }
    ctx->pc = 0x23E90Cu;
label_23e90c:
    // 0x23e90c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x23e90cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e910:
    // 0x23e910: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x23e910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_23e914:
    // 0x23e914: 0x8ee40020  lw          $a0, 0x20($s7)
    ctx->pc = 0x23e914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
label_23e918:
    // 0x23e918: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x23e918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_23e91c:
    // 0x23e91c: 0x12c40040  beq         $s6, $a0, . + 4 + (0x40 << 2)
label_23e920:
    if (ctx->pc == 0x23E920u) {
        ctx->pc = 0x23E920u;
            // 0x23e920: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x23E924u;
        goto label_23e924;
    }
    ctx->pc = 0x23E91Cu;
    {
        const bool branch_taken_0x23e91c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 4));
        ctx->pc = 0x23E920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E91Cu;
            // 0x23e920: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e91c) {
            ctx->pc = 0x23EA20u;
            goto label_23ea20;
        }
    }
    ctx->pc = 0x23E924u;
label_23e924:
    // 0x23e924: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x23e924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23e928:
    // 0x23e928: 0xc08b788  jal         func_22DE20
label_23e92c:
    if (ctx->pc == 0x23E92Cu) {
        ctx->pc = 0x23E92Cu;
            // 0x23e92c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E930u;
        goto label_23e930;
    }
    ctx->pc = 0x23E928u;
    SET_GPR_U32(ctx, 31, 0x23E930u);
    ctx->pc = 0x23E92Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E928u;
            // 0x23e92c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE20u;
    if (runtime->hasFunction(0x22DE20u)) {
        auto targetFn = runtime->lookupFunction(0x22DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E930u; }
        if (ctx->pc != 0x23E930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DE20_0x22de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23E930u; }
        if (ctx->pc != 0x23E930u) { return; }
    }
    ctx->pc = 0x23E930u;
label_23e930:
    // 0x23e930: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x23e930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_23e934:
    // 0x23e934: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_23e938:
    if (ctx->pc == 0x23E938u) {
        ctx->pc = 0x23E93Cu;
        goto label_23e93c;
    }
    ctx->pc = 0x23E934u;
    {
        const bool branch_taken_0x23e934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e934) {
            ctx->pc = 0x23E978u;
            goto label_23e978;
        }
    }
    ctx->pc = 0x23E93Cu;
label_23e93c:
    // 0x23e93c: 0x86020006  lh          $v0, 0x6($s0)
    ctx->pc = 0x23e93cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_23e940:
    // 0x23e940: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x23e940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_23e944:
    // 0x23e944: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x23e944u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_23e948:
    // 0x23e948: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x23e948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_23e94c:
    // 0x23e94c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x23e94cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_23e950:
    // 0x23e950: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_23e954:
    if (ctx->pc == 0x23E954u) {
        ctx->pc = 0x23E958u;
        goto label_23e958;
    }
    ctx->pc = 0x23E950u;
    {
        const bool branch_taken_0x23e950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e950) {
            ctx->pc = 0x23E978u;
            goto label_23e978;
        }
    }
    ctx->pc = 0x23E958u;
label_23e958:
    // 0x23e958: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_23e95c:
    if (ctx->pc == 0x23E95Cu) {
        ctx->pc = 0x23E960u;
        goto label_23e960;
    }
    ctx->pc = 0x23E958u;
    {
        const bool branch_taken_0x23e958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23e958) {
            ctx->pc = 0x23E978u;
            goto label_23e978;
        }
    }
    ctx->pc = 0x23E960u;
label_23e960:
    // 0x23e960: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x23e960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23e964:
    // 0x23e964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e968:
    // 0x23e968: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23e968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23e96c:
    // 0x23e96c: 0x320f809  jalr        $t9
label_23e970:
    if (ctx->pc == 0x23E970u) {
        ctx->pc = 0x23E970u;
            // 0x23e970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23E974u;
        goto label_23e974;
    }
    ctx->pc = 0x23E96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E974u);
        ctx->pc = 0x23E970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E96Cu;
            // 0x23e970: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E974u; }
            if (ctx->pc != 0x23E974u) { return; }
        }
        }
    }
    ctx->pc = 0x23E974u;
label_23e974:
    // 0x23e974: 0x0  nop
    ctx->pc = 0x23e974u;
    // NOP
label_23e978:
    // 0x23e978: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x23e978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_23e97c:
    // 0x23e97c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x23e97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23e980:
    // 0x23e980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23e980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23e984:
    // 0x23e984: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x23e984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_23e988:
    // 0x23e988: 0x320f809  jalr        $t9
label_23e98c:
    if (ctx->pc == 0x23E98Cu) {
        ctx->pc = 0x23E98Cu;
            // 0x23e98c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x23E990u;
        goto label_23e990;
    }
    ctx->pc = 0x23E988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23E990u);
        ctx->pc = 0x23E98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E988u;
            // 0x23e98c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23E990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23E990u; }
            if (ctx->pc != 0x23E990u) { return; }
        }
        }
    }
    ctx->pc = 0x23E990u;
label_23e990:
    // 0x23e990: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x23e990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23e994:
    // 0x23e994: 0x18600036  blez        $v1, . + 4 + (0x36 << 2)
label_23e998:
    if (ctx->pc == 0x23E998u) {
        ctx->pc = 0x23E998u;
            // 0x23e998: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23E99Cu;
        goto label_23e99c;
    }
    ctx->pc = 0x23E994u;
    {
        const bool branch_taken_0x23e994 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x23E998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23E994u;
            // 0x23e998: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23e994) {
            ctx->pc = 0x23EA70u;
            goto label_23ea70;
        }
    }
    ctx->pc = 0x23E99Cu;
label_23e99c:
    // 0x23e99c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x23e99cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23e9a0:
    // 0x23e9a0: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x23e9a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_23e9a4:
    // 0x23e9a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23e9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23e9a8:
    // 0x23e9a8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x23e9a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23e9ac:
    // 0x23e9ac: 0x90a300a8  lbu         $v1, 0xA8($a1)
    ctx->pc = 0x23e9acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 168)));
label_23e9b0:
    // 0x23e9b0: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x23e9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_23e9b4:
    // 0x23e9b4: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x23e9b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23e9b8:
    // 0x23e9b8: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_23e9bc:
    if (ctx->pc == 0x23E9BCu) {
        ctx->pc = 0x23E9C0u;
        goto label_23e9c0;
    }
    ctx->pc = 0x23E9B8u;
    {
        const bool branch_taken_0x23e9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e9b8) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E9C0u;
label_23e9c0:
    // 0x23e9c0: 0x10b5000f  beq         $a1, $s5, . + 4 + (0xF << 2)
label_23e9c4:
    if (ctx->pc == 0x23E9C4u) {
        ctx->pc = 0x23E9C8u;
        goto label_23e9c8;
    }
    ctx->pc = 0x23E9C0u;
    {
        const bool branch_taken_0x23e9c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        if (branch_taken_0x23e9c0) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E9C8u;
label_23e9c8:
    // 0x23e9c8: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_23e9cc:
    if (ctx->pc == 0x23E9CCu) {
        ctx->pc = 0x23E9D0u;
        goto label_23e9d0;
    }
    ctx->pc = 0x23E9C8u;
    {
        const bool branch_taken_0x23e9c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e9c8) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E9D0u;
label_23e9d0:
    // 0x23e9d0: 0x92a300a8  lbu         $v1, 0xA8($s5)
    ctx->pc = 0x23e9d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 168)));
label_23e9d4:
    // 0x23e9d4: 0x38630007  xori        $v1, $v1, 0x7
    ctx->pc = 0x23e9d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)7);
label_23e9d8:
    // 0x23e9d8: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x23e9d8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_23e9dc:
    // 0x23e9dc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_23e9e0:
    if (ctx->pc == 0x23E9E0u) {
        ctx->pc = 0x23E9E4u;
        goto label_23e9e4;
    }
    ctx->pc = 0x23E9DCu;
    {
        const bool branch_taken_0x23e9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23e9dc) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E9E4u;
label_23e9e4:
    // 0x23e9e4: 0x8ca40094  lw          $a0, 0x94($a1)
    ctx->pc = 0x23e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 148)));
label_23e9e8:
    // 0x23e9e8: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x23e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_23e9ec:
    // 0x23e9ec: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_23e9f0:
    if (ctx->pc == 0x23E9F0u) {
        ctx->pc = 0x23E9F4u;
        goto label_23e9f4;
    }
    ctx->pc = 0x23E9ECu;
    {
        const bool branch_taken_0x23e9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x23e9ec) {
            ctx->pc = 0x23EA00u;
            goto label_23ea00;
        }
    }
    ctx->pc = 0x23E9F4u;
label_23e9f4:
    // 0x23e9f4: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x23e9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_23e9f8:
    // 0x23e9f8: 0xc090168  jal         func_2405A0
label_23e9fc:
    if (ctx->pc == 0x23E9FCu) {
        ctx->pc = 0x23E9FCu;
            // 0x23e9fc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23EA00u;
        goto label_23ea00;
    }
    ctx->pc = 0x23E9F8u;
    SET_GPR_U32(ctx, 31, 0x23EA00u);
    ctx->pc = 0x23E9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23E9F8u;
            // 0x23e9fc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2405A0u;
    if (runtime->hasFunction(0x2405A0u)) {
        auto targetFn = runtime->lookupFunction(0x2405A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA00u; }
        if (ctx->pc != 0x23EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002405A0_0x2405a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA00u; }
        if (ctx->pc != 0x23EA00u) { return; }
    }
    ctx->pc = 0x23EA00u;
label_23ea00:
    // 0x23ea00: 0x8fa30094  lw          $v1, 0x94($sp)
    ctx->pc = 0x23ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_23ea04:
    // 0x23ea04: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x23ea04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_23ea08:
    // 0x23ea08: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x23ea08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23ea0c:
    // 0x23ea0c: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
label_23ea10:
    if (ctx->pc == 0x23EA10u) {
        ctx->pc = 0x23EA10u;
            // 0x23ea10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x23EA14u;
        goto label_23ea14;
    }
    ctx->pc = 0x23EA0Cu;
    {
        const bool branch_taken_0x23ea0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA0Cu;
            // 0x23ea10: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea0c) {
            ctx->pc = 0x23E9A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23e9a0;
        }
    }
    ctx->pc = 0x23EA14u;
label_23ea14:
    // 0x23ea14: 0x10000016  b           . + 4 + (0x16 << 2)
label_23ea18:
    if (ctx->pc == 0x23EA18u) {
        ctx->pc = 0x23EA1Cu;
        goto label_23ea1c;
    }
    ctx->pc = 0x23EA14u;
    {
        const bool branch_taken_0x23ea14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea14) {
            ctx->pc = 0x23EA70u;
            goto label_23ea70;
        }
    }
    ctx->pc = 0x23EA1Cu;
label_23ea1c:
    // 0x23ea1c: 0x0  nop
    ctx->pc = 0x23ea1cu;
    // NOP
label_23ea20:
    // 0x23ea20: 0xc08b788  jal         func_22DE20
label_23ea24:
    if (ctx->pc == 0x23EA24u) {
        ctx->pc = 0x23EA24u;
            // 0x23ea24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23EA28u;
        goto label_23ea28;
    }
    ctx->pc = 0x23EA20u;
    SET_GPR_U32(ctx, 31, 0x23EA28u);
    ctx->pc = 0x23EA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA20u;
            // 0x23ea24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22DE20u;
    if (runtime->hasFunction(0x22DE20u)) {
        auto targetFn = runtime->lookupFunction(0x22DE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA28u; }
        if (ctx->pc != 0x23EA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022DE20_0x22de20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EA28u; }
        if (ctx->pc != 0x23EA28u) { return; }
    }
    ctx->pc = 0x23EA28u;
label_23ea28:
    // 0x23ea28: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x23ea28u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_23ea2c:
    // 0x23ea2c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_23ea30:
    if (ctx->pc == 0x23EA30u) {
        ctx->pc = 0x23EA34u;
        goto label_23ea34;
    }
    ctx->pc = 0x23EA2Cu;
    {
        const bool branch_taken_0x23ea2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea2c) {
            ctx->pc = 0x23EA70u;
            goto label_23ea70;
        }
    }
    ctx->pc = 0x23EA34u;
label_23ea34:
    // 0x23ea34: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x23ea34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_23ea38:
    // 0x23ea38: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x23ea38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_23ea3c:
    // 0x23ea3c: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x23ea3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_23ea40:
    // 0x23ea40: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x23ea40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_23ea44:
    // 0x23ea44: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x23ea44u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_23ea48:
    // 0x23ea48: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_23ea4c:
    if (ctx->pc == 0x23EA4Cu) {
        ctx->pc = 0x23EA50u;
        goto label_23ea50;
    }
    ctx->pc = 0x23EA48u;
    {
        const bool branch_taken_0x23ea48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ea48) {
            ctx->pc = 0x23EA70u;
            goto label_23ea70;
        }
    }
    ctx->pc = 0x23EA50u;
label_23ea50:
    // 0x23ea50: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_23ea54:
    if (ctx->pc == 0x23EA54u) {
        ctx->pc = 0x23EA58u;
        goto label_23ea58;
    }
    ctx->pc = 0x23EA50u;
    {
        const bool branch_taken_0x23ea50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x23ea50) {
            ctx->pc = 0x23EA70u;
            goto label_23ea70;
        }
    }
    ctx->pc = 0x23EA58u;
label_23ea58:
    // 0x23ea58: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x23ea58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_23ea5c:
    // 0x23ea5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23ea5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23ea60:
    // 0x23ea60: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23ea60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23ea64:
    // 0x23ea64: 0x320f809  jalr        $t9
label_23ea68:
    if (ctx->pc == 0x23EA68u) {
        ctx->pc = 0x23EA68u;
            // 0x23ea68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23EA6Cu;
        goto label_23ea6c;
    }
    ctx->pc = 0x23EA64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23EA6Cu);
        ctx->pc = 0x23EA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA64u;
            // 0x23ea68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23EA6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23EA6Cu; }
            if (ctx->pc != 0x23EA6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23EA6Cu;
label_23ea6c:
    // 0x23ea6c: 0x0  nop
    ctx->pc = 0x23ea6cu;
    // NOP
label_23ea70:
    // 0x23ea70: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x23ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_23ea74:
    // 0x23ea74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23ea74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_23ea78:
    // 0x23ea78: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x23ea78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23ea7c:
    // 0x23ea7c: 0x1460ffa4  bnez        $v1, . + 4 + (-0x5C << 2)
label_23ea80:
    if (ctx->pc == 0x23EA80u) {
        ctx->pc = 0x23EA80u;
            // 0x23ea80: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x23EA84u;
        goto label_23ea84;
    }
    ctx->pc = 0x23EA7Cu;
    {
        const bool branch_taken_0x23ea7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23EA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA7Cu;
            // 0x23ea80: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ea7c) {
            ctx->pc = 0x23E910u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23e910;
        }
    }
    ctx->pc = 0x23EA84u;
label_23ea84:
    // 0x23ea84: 0x0  nop
    ctx->pc = 0x23ea84u;
    // NOP
label_23ea88:
    // 0x23ea88: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x23ea88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23ea8c:
    // 0x23ea8c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23ea8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23ea90:
    // 0x23ea90: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23ea90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23ea94:
    // 0x23ea94: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_23ea98:
    if (ctx->pc == 0x23EA98u) {
        ctx->pc = 0x23EA98u;
            // 0x23ea98: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x23EA9Cu;
        goto label_23ea9c;
    }
    ctx->pc = 0x23EA94u;
    {
        const bool branch_taken_0x23ea94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23ea94) {
            ctx->pc = 0x23EA98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23EA94u;
            // 0x23ea98: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23EAC4u;
            goto label_23eac4;
        }
    }
    ctx->pc = 0x23EA9Cu;
label_23ea9c:
    // 0x23ea9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23ea9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23eaa0:
    // 0x23eaa0: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x23eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_23eaa4:
    // 0x23eaa4: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23eaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23eaa8:
    // 0x23eaa8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23eaa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23eaac:
    // 0x23eaac: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23eaacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_23eab0:
    // 0x23eab0: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23eab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23eab4:
    // 0x23eab4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23eab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23eab8:
    // 0x23eab8: 0xc0a7ab4  jal         func_29EAD0
label_23eabc:
    if (ctx->pc == 0x23EABCu) {
        ctx->pc = 0x23EABCu;
            // 0x23eabc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x23EAC0u;
        goto label_23eac0;
    }
    ctx->pc = 0x23EAB8u;
    SET_GPR_U32(ctx, 31, 0x23EAC0u);
    ctx->pc = 0x23EABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23EAB8u;
            // 0x23eabc: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EAC0u; }
        if (ctx->pc != 0x23EAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23EAC0u; }
        if (ctx->pc != 0x23EAC0u) { return; }
    }
    ctx->pc = 0x23EAC0u;
label_23eac0:
    // 0x23eac0: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x23eac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_23eac4:
    // 0x23eac4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x23eac4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23eac8:
    // 0x23eac8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x23eac8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23eacc:
    // 0x23eacc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x23eaccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23ead0:
    // 0x23ead0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23ead0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23ead4:
    // 0x23ead4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23ead4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23ead8:
    // 0x23ead8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23ead8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23eadc:
    // 0x23eadc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23eadcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23eae0:
    // 0x23eae0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23eae0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23eae4:
    // 0x23eae4: 0x3e00008  jr          $ra
label_23eae8:
    if (ctx->pc == 0x23EAE8u) {
        ctx->pc = 0x23EAE8u;
            // 0x23eae8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x23EAECu;
        goto label_23eaec;
    }
    ctx->pc = 0x23EAE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23EAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23EAE4u;
            // 0x23eae8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23EAECu;
label_23eaec:
    // 0x23eaec: 0x0  nop
    ctx->pc = 0x23eaecu;
    // NOP
}
