#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0053E9E0
// Address: 0x53e9e0 - 0x53eb40
void sub_0053E9E0_0x53e9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0053E9E0_0x53e9e0");
#endif

    switch (ctx->pc) {
        case 0x53e9e0u: goto label_53e9e0;
        case 0x53e9e4u: goto label_53e9e4;
        case 0x53e9e8u: goto label_53e9e8;
        case 0x53e9ecu: goto label_53e9ec;
        case 0x53e9f0u: goto label_53e9f0;
        case 0x53e9f4u: goto label_53e9f4;
        case 0x53e9f8u: goto label_53e9f8;
        case 0x53e9fcu: goto label_53e9fc;
        case 0x53ea00u: goto label_53ea00;
        case 0x53ea04u: goto label_53ea04;
        case 0x53ea08u: goto label_53ea08;
        case 0x53ea0cu: goto label_53ea0c;
        case 0x53ea10u: goto label_53ea10;
        case 0x53ea14u: goto label_53ea14;
        case 0x53ea18u: goto label_53ea18;
        case 0x53ea1cu: goto label_53ea1c;
        case 0x53ea20u: goto label_53ea20;
        case 0x53ea24u: goto label_53ea24;
        case 0x53ea28u: goto label_53ea28;
        case 0x53ea2cu: goto label_53ea2c;
        case 0x53ea30u: goto label_53ea30;
        case 0x53ea34u: goto label_53ea34;
        case 0x53ea38u: goto label_53ea38;
        case 0x53ea3cu: goto label_53ea3c;
        case 0x53ea40u: goto label_53ea40;
        case 0x53ea44u: goto label_53ea44;
        case 0x53ea48u: goto label_53ea48;
        case 0x53ea4cu: goto label_53ea4c;
        case 0x53ea50u: goto label_53ea50;
        case 0x53ea54u: goto label_53ea54;
        case 0x53ea58u: goto label_53ea58;
        case 0x53ea5cu: goto label_53ea5c;
        case 0x53ea60u: goto label_53ea60;
        case 0x53ea64u: goto label_53ea64;
        case 0x53ea68u: goto label_53ea68;
        case 0x53ea6cu: goto label_53ea6c;
        case 0x53ea70u: goto label_53ea70;
        case 0x53ea74u: goto label_53ea74;
        case 0x53ea78u: goto label_53ea78;
        case 0x53ea7cu: goto label_53ea7c;
        case 0x53ea80u: goto label_53ea80;
        case 0x53ea84u: goto label_53ea84;
        case 0x53ea88u: goto label_53ea88;
        case 0x53ea8cu: goto label_53ea8c;
        case 0x53ea90u: goto label_53ea90;
        case 0x53ea94u: goto label_53ea94;
        case 0x53ea98u: goto label_53ea98;
        case 0x53ea9cu: goto label_53ea9c;
        case 0x53eaa0u: goto label_53eaa0;
        case 0x53eaa4u: goto label_53eaa4;
        case 0x53eaa8u: goto label_53eaa8;
        case 0x53eaacu: goto label_53eaac;
        case 0x53eab0u: goto label_53eab0;
        case 0x53eab4u: goto label_53eab4;
        case 0x53eab8u: goto label_53eab8;
        case 0x53eabcu: goto label_53eabc;
        case 0x53eac0u: goto label_53eac0;
        case 0x53eac4u: goto label_53eac4;
        case 0x53eac8u: goto label_53eac8;
        case 0x53eaccu: goto label_53eacc;
        case 0x53ead0u: goto label_53ead0;
        case 0x53ead4u: goto label_53ead4;
        case 0x53ead8u: goto label_53ead8;
        case 0x53eadcu: goto label_53eadc;
        case 0x53eae0u: goto label_53eae0;
        case 0x53eae4u: goto label_53eae4;
        case 0x53eae8u: goto label_53eae8;
        case 0x53eaecu: goto label_53eaec;
        case 0x53eaf0u: goto label_53eaf0;
        case 0x53eaf4u: goto label_53eaf4;
        case 0x53eaf8u: goto label_53eaf8;
        case 0x53eafcu: goto label_53eafc;
        case 0x53eb00u: goto label_53eb00;
        case 0x53eb04u: goto label_53eb04;
        case 0x53eb08u: goto label_53eb08;
        case 0x53eb0cu: goto label_53eb0c;
        case 0x53eb10u: goto label_53eb10;
        case 0x53eb14u: goto label_53eb14;
        case 0x53eb18u: goto label_53eb18;
        case 0x53eb1cu: goto label_53eb1c;
        case 0x53eb20u: goto label_53eb20;
        case 0x53eb24u: goto label_53eb24;
        case 0x53eb28u: goto label_53eb28;
        case 0x53eb2cu: goto label_53eb2c;
        case 0x53eb30u: goto label_53eb30;
        case 0x53eb34u: goto label_53eb34;
        case 0x53eb38u: goto label_53eb38;
        case 0x53eb3cu: goto label_53eb3c;
        default: break;
    }

    ctx->pc = 0x53e9e0u;

label_53e9e0:
    // 0x53e9e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x53e9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_53e9e4:
    // 0x53e9e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x53e9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53e9e8:
    // 0x53e9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53e9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53e9ec:
    // 0x53e9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53e9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53e9f0:
    // 0x53e9f0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x53e9f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53e9f4:
    // 0x53e9f4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_53e9f8:
    if (ctx->pc == 0x53E9F8u) {
        ctx->pc = 0x53E9F8u;
            // 0x53e9f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53E9FCu;
        goto label_53e9fc;
    }
    ctx->pc = 0x53E9F4u;
    {
        const bool branch_taken_0x53e9f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x53E9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53E9F4u;
            // 0x53e9f8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53e9f4) {
            ctx->pc = 0x53EB28u;
            goto label_53eb28;
        }
    }
    ctx->pc = 0x53E9FCu;
label_53e9fc:
    // 0x53e9fc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53ea00:
    // 0x53ea00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x53ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_53ea04:
    // 0x53ea04: 0x24637500  addiu       $v1, $v1, 0x7500
    ctx->pc = 0x53ea04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29952));
label_53ea08:
    // 0x53ea08: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x53ea08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_53ea0c:
    // 0x53ea0c: 0x24427538  addiu       $v0, $v0, 0x7538
    ctx->pc = 0x53ea0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30008));
label_53ea10:
    // 0x53ea10: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x53ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_53ea14:
    // 0x53ea14: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x53ea14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_53ea18:
    // 0x53ea18: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x53ea18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_53ea1c:
    // 0x53ea1c: 0xc0407c0  jal         func_101F00
label_53ea20:
    if (ctx->pc == 0x53EA20u) {
        ctx->pc = 0x53EA20u;
            // 0x53ea20: 0x24a5dcb0  addiu       $a1, $a1, -0x2350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958256));
        ctx->pc = 0x53EA24u;
        goto label_53ea24;
    }
    ctx->pc = 0x53EA1Cu;
    SET_GPR_U32(ctx, 31, 0x53EA24u);
    ctx->pc = 0x53EA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EA1Cu;
            // 0x53ea20: 0x24a5dcb0  addiu       $a1, $a1, -0x2350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA24u; }
        if (ctx->pc != 0x53EA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA24u; }
        if (ctx->pc != 0x53EA24u) { return; }
    }
    ctx->pc = 0x53EA24u;
label_53ea24:
    // 0x53ea24: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x53ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_53ea28:
    // 0x53ea28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_53ea2c:
    if (ctx->pc == 0x53EA2Cu) {
        ctx->pc = 0x53EA2Cu;
            // 0x53ea2c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x53EA30u;
        goto label_53ea30;
    }
    ctx->pc = 0x53EA28u;
    {
        const bool branch_taken_0x53ea28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea28) {
            ctx->pc = 0x53EA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EA28u;
            // 0x53ea2c: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EA3Cu;
            goto label_53ea3c;
        }
    }
    ctx->pc = 0x53EA30u;
label_53ea30:
    // 0x53ea30: 0xc07507c  jal         func_1D41F0
label_53ea34:
    if (ctx->pc == 0x53EA34u) {
        ctx->pc = 0x53EA34u;
            // 0x53ea34: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x53EA38u;
        goto label_53ea38;
    }
    ctx->pc = 0x53EA30u;
    SET_GPR_U32(ctx, 31, 0x53EA38u);
    ctx->pc = 0x53EA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EA30u;
            // 0x53ea34: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA38u; }
        if (ctx->pc != 0x53EA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA38u; }
        if (ctx->pc != 0x53EA38u) { return; }
    }
    ctx->pc = 0x53EA38u;
label_53ea38:
    // 0x53ea38: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x53ea38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_53ea3c:
    // 0x53ea3c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_53ea40:
    if (ctx->pc == 0x53EA40u) {
        ctx->pc = 0x53EA40u;
            // 0x53ea40: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x53EA44u;
        goto label_53ea44;
    }
    ctx->pc = 0x53EA3Cu;
    {
        const bool branch_taken_0x53ea3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea3c) {
            ctx->pc = 0x53EA40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EA3Cu;
            // 0x53ea40: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EA6Cu;
            goto label_53ea6c;
        }
    }
    ctx->pc = 0x53EA44u;
label_53ea44:
    // 0x53ea44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_53ea48:
    if (ctx->pc == 0x53EA48u) {
        ctx->pc = 0x53EA4Cu;
        goto label_53ea4c;
    }
    ctx->pc = 0x53EA44u;
    {
        const bool branch_taken_0x53ea44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea44) {
            ctx->pc = 0x53EA68u;
            goto label_53ea68;
        }
    }
    ctx->pc = 0x53EA4Cu;
label_53ea4c:
    // 0x53ea4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_53ea50:
    if (ctx->pc == 0x53EA50u) {
        ctx->pc = 0x53EA54u;
        goto label_53ea54;
    }
    ctx->pc = 0x53EA4Cu;
    {
        const bool branch_taken_0x53ea4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea4c) {
            ctx->pc = 0x53EA68u;
            goto label_53ea68;
        }
    }
    ctx->pc = 0x53EA54u;
label_53ea54:
    // 0x53ea54: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x53ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_53ea58:
    // 0x53ea58: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_53ea5c:
    if (ctx->pc == 0x53EA5Cu) {
        ctx->pc = 0x53EA60u;
        goto label_53ea60;
    }
    ctx->pc = 0x53EA58u;
    {
        const bool branch_taken_0x53ea58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea58) {
            ctx->pc = 0x53EA68u;
            goto label_53ea68;
        }
    }
    ctx->pc = 0x53EA60u;
label_53ea60:
    // 0x53ea60: 0xc0400a8  jal         func_1002A0
label_53ea64:
    if (ctx->pc == 0x53EA64u) {
        ctx->pc = 0x53EA68u;
        goto label_53ea68;
    }
    ctx->pc = 0x53EA60u;
    SET_GPR_U32(ctx, 31, 0x53EA68u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA68u; }
        if (ctx->pc != 0x53EA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA68u; }
        if (ctx->pc != 0x53EA68u) { return; }
    }
    ctx->pc = 0x53EA68u;
label_53ea68:
    // 0x53ea68: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x53ea68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_53ea6c:
    // 0x53ea6c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_53ea70:
    if (ctx->pc == 0x53EA70u) {
        ctx->pc = 0x53EA70u;
            // 0x53ea70: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x53EA74u;
        goto label_53ea74;
    }
    ctx->pc = 0x53EA6Cu;
    {
        const bool branch_taken_0x53ea6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea6c) {
            ctx->pc = 0x53EA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EA6Cu;
            // 0x53ea70: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EA9Cu;
            goto label_53ea9c;
        }
    }
    ctx->pc = 0x53EA74u;
label_53ea74:
    // 0x53ea74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_53ea78:
    if (ctx->pc == 0x53EA78u) {
        ctx->pc = 0x53EA7Cu;
        goto label_53ea7c;
    }
    ctx->pc = 0x53EA74u;
    {
        const bool branch_taken_0x53ea74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea74) {
            ctx->pc = 0x53EA98u;
            goto label_53ea98;
        }
    }
    ctx->pc = 0x53EA7Cu;
label_53ea7c:
    // 0x53ea7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_53ea80:
    if (ctx->pc == 0x53EA80u) {
        ctx->pc = 0x53EA84u;
        goto label_53ea84;
    }
    ctx->pc = 0x53EA7Cu;
    {
        const bool branch_taken_0x53ea7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea7c) {
            ctx->pc = 0x53EA98u;
            goto label_53ea98;
        }
    }
    ctx->pc = 0x53EA84u;
label_53ea84:
    // 0x53ea84: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x53ea84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_53ea88:
    // 0x53ea88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_53ea8c:
    if (ctx->pc == 0x53EA8Cu) {
        ctx->pc = 0x53EA90u;
        goto label_53ea90;
    }
    ctx->pc = 0x53EA88u;
    {
        const bool branch_taken_0x53ea88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea88) {
            ctx->pc = 0x53EA98u;
            goto label_53ea98;
        }
    }
    ctx->pc = 0x53EA90u;
label_53ea90:
    // 0x53ea90: 0xc0400a8  jal         func_1002A0
label_53ea94:
    if (ctx->pc == 0x53EA94u) {
        ctx->pc = 0x53EA98u;
        goto label_53ea98;
    }
    ctx->pc = 0x53EA90u;
    SET_GPR_U32(ctx, 31, 0x53EA98u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA98u; }
        if (ctx->pc != 0x53EA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EA98u; }
        if (ctx->pc != 0x53EA98u) { return; }
    }
    ctx->pc = 0x53EA98u;
label_53ea98:
    // 0x53ea98: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x53ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_53ea9c:
    // 0x53ea9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_53eaa0:
    if (ctx->pc == 0x53EAA0u) {
        ctx->pc = 0x53EAA4u;
        goto label_53eaa4;
    }
    ctx->pc = 0x53EA9Cu;
    {
        const bool branch_taken_0x53ea9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ea9c) {
            ctx->pc = 0x53EAB8u;
            goto label_53eab8;
        }
    }
    ctx->pc = 0x53EAA4u;
label_53eaa4:
    // 0x53eaa4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_53eaa8:
    // 0x53eaa8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53eaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53eaac:
    // 0x53eaac: 0x246374f0  addiu       $v1, $v1, 0x74F0
    ctx->pc = 0x53eaacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29936));
label_53eab0:
    // 0x53eab0: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x53eab0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_53eab4:
    // 0x53eab4: 0xac401d90  sw          $zero, 0x1D90($v0)
    ctx->pc = 0x53eab4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7568), GPR_U32(ctx, 0));
label_53eab8:
    // 0x53eab8: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_53eabc:
    if (ctx->pc == 0x53EABCu) {
        ctx->pc = 0x53EABCu;
            // 0x53eabc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x53EAC0u;
        goto label_53eac0;
    }
    ctx->pc = 0x53EAB8u;
    {
        const bool branch_taken_0x53eab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x53eab8) {
            ctx->pc = 0x53EABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EAB8u;
            // 0x53eabc: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EB14u;
            goto label_53eb14;
        }
    }
    ctx->pc = 0x53EAC0u;
label_53eac0:
    // 0x53eac0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x53eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_53eac4:
    // 0x53eac4: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x53eac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_53eac8:
    // 0x53eac8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x53eac8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_53eacc:
    // 0x53eacc: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x53eaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_53ead0:
    // 0x53ead0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53ead4:
    if (ctx->pc == 0x53EAD4u) {
        ctx->pc = 0x53EAD4u;
            // 0x53ead4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x53EAD8u;
        goto label_53ead8;
    }
    ctx->pc = 0x53EAD0u;
    {
        const bool branch_taken_0x53ead0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53ead0) {
            ctx->pc = 0x53EAD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EAD0u;
            // 0x53ead4: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EAECu;
            goto label_53eaec;
        }
    }
    ctx->pc = 0x53EAD8u;
label_53ead8:
    // 0x53ead8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53ead8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53eadc:
    // 0x53eadc: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53eadcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53eae0:
    // 0x53eae0: 0x320f809  jalr        $t9
label_53eae4:
    if (ctx->pc == 0x53EAE4u) {
        ctx->pc = 0x53EAE4u;
            // 0x53eae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53EAE8u;
        goto label_53eae8;
    }
    ctx->pc = 0x53EAE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53EAE8u);
        ctx->pc = 0x53EAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53EAE0u;
            // 0x53eae4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53EAE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53EAE8u; }
            if (ctx->pc != 0x53EAE8u) { return; }
        }
        }
    }
    ctx->pc = 0x53EAE8u;
label_53eae8:
    // 0x53eae8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x53eae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_53eaec:
    // 0x53eaec: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_53eaf0:
    if (ctx->pc == 0x53EAF0u) {
        ctx->pc = 0x53EAF0u;
            // 0x53eaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EAF4u;
        goto label_53eaf4;
    }
    ctx->pc = 0x53EAECu;
    {
        const bool branch_taken_0x53eaec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x53eaec) {
            ctx->pc = 0x53EAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EAECu;
            // 0x53eaf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EB08u;
            goto label_53eb08;
        }
    }
    ctx->pc = 0x53EAF4u;
label_53eaf4:
    // 0x53eaf4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53eaf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_53eaf8:
    // 0x53eaf8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x53eaf8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_53eafc:
    // 0x53eafc: 0x320f809  jalr        $t9
label_53eb00:
    if (ctx->pc == 0x53EB00u) {
        ctx->pc = 0x53EB00u;
            // 0x53eb00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x53EB04u;
        goto label_53eb04;
    }
    ctx->pc = 0x53EAFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x53EB04u);
        ctx->pc = 0x53EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53EAFCu;
            // 0x53eb00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x53EB04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x53EB04u; }
            if (ctx->pc != 0x53EB04u) { return; }
        }
        }
    }
    ctx->pc = 0x53EB04u;
label_53eb04:
    // 0x53eb04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x53eb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53eb08:
    // 0x53eb08: 0xc075bf8  jal         func_1D6FE0
label_53eb0c:
    if (ctx->pc == 0x53EB0Cu) {
        ctx->pc = 0x53EB0Cu;
            // 0x53eb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EB10u;
        goto label_53eb10;
    }
    ctx->pc = 0x53EB08u;
    SET_GPR_U32(ctx, 31, 0x53EB10u);
    ctx->pc = 0x53EB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB08u;
            // 0x53eb0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB10u; }
        if (ctx->pc != 0x53EB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB10u; }
        if (ctx->pc != 0x53EB10u) { return; }
    }
    ctx->pc = 0x53EB10u;
label_53eb10:
    // 0x53eb10: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x53eb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_53eb14:
    // 0x53eb14: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x53eb14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_53eb18:
    // 0x53eb18: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_53eb1c:
    if (ctx->pc == 0x53EB1Cu) {
        ctx->pc = 0x53EB1Cu;
            // 0x53eb1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EB20u;
        goto label_53eb20;
    }
    ctx->pc = 0x53EB18u;
    {
        const bool branch_taken_0x53eb18 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x53eb18) {
            ctx->pc = 0x53EB1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB18u;
            // 0x53eb1c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53EB2Cu;
            goto label_53eb2c;
        }
    }
    ctx->pc = 0x53EB20u;
label_53eb20:
    // 0x53eb20: 0xc0400a8  jal         func_1002A0
label_53eb24:
    if (ctx->pc == 0x53EB24u) {
        ctx->pc = 0x53EB24u;
            // 0x53eb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53EB28u;
        goto label_53eb28;
    }
    ctx->pc = 0x53EB20u;
    SET_GPR_U32(ctx, 31, 0x53EB28u);
    ctx->pc = 0x53EB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB20u;
            // 0x53eb24: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB28u; }
        if (ctx->pc != 0x53EB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53EB28u; }
        if (ctx->pc != 0x53EB28u) { return; }
    }
    ctx->pc = 0x53EB28u;
label_53eb28:
    // 0x53eb28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x53eb28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_53eb2c:
    // 0x53eb2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x53eb2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53eb30:
    // 0x53eb30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53eb30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53eb34:
    // 0x53eb34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53eb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53eb38:
    // 0x53eb38: 0x3e00008  jr          $ra
label_53eb3c:
    if (ctx->pc == 0x53EB3Cu) {
        ctx->pc = 0x53EB3Cu;
            // 0x53eb3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53EB40u;
        goto label_fallthrough_0x53eb38;
    }
    ctx->pc = 0x53EB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x53EB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53EB38u;
            // 0x53eb3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x53eb38:
    ctx->pc = 0x53EB40u;
}
