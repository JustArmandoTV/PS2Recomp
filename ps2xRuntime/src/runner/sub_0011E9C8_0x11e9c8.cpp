#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E9C8
// Address: 0x11e9c8 - 0x11eb20
void sub_0011E9C8_0x11e9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E9C8_0x11e9c8");
#endif

    switch (ctx->pc) {
        case 0x11e9e8u: goto label_11e9e8;
        case 0x11e9f4u: goto label_11e9f4;
        case 0x11ea20u: goto label_11ea20;
        case 0x11ea38u: goto label_11ea38;
        case 0x11ea4cu: goto label_11ea4c;
        case 0x11ea5cu: goto label_11ea5c;
        case 0x11ea70u: goto label_11ea70;
        case 0x11ea78u: goto label_11ea78;
        case 0x11ea98u: goto label_11ea98;
        case 0x11eaacu: goto label_11eaac;
        case 0x11ead0u: goto label_11ead0;
        case 0x11ead8u: goto label_11ead8;
        default: break;
    }

    ctx->pc = 0x11e9c8u;

    // 0x11e9c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11e9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11e9cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11e9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11e9d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11e9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11e9d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11e9d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e9d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11e9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11e9dc: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x11e9dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x11e9e0: 0xc0478f4  jal         func_11E3D0
    ctx->pc = 0x11E9E0u;
    SET_GPR_U32(ctx, 31, 0x11E9E8u);
    ctx->pc = 0x11E9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9E0u;
            // 0x11e9e4: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E3D0u;
    if (runtime->hasFunction(0x11E3D0u)) {
        auto targetFn = runtime->lookupFunction(0x11E3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9E8u; }
        if (ctx->pc != 0x11E9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E3D0_0x11e3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9E8u; }
        if (ctx->pc != 0x11E9E8u) { return; }
    }
    ctx->pc = 0x11E9E8u;
label_11e9e8:
    // 0x11e9e8: 0x8e04fae8  lw          $a0, -0x518($s0)
    ctx->pc = 0x11e9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965992)));
    // 0x11e9ec: 0xc0430ec  jal         func_10C3B0
    ctx->pc = 0x11E9ECu;
    SET_GPR_U32(ctx, 31, 0x11E9F4u);
    ctx->pc = 0x10C3B0u;
    if (runtime->hasFunction(0x10C3B0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9F4u; }
        if (ctx->pc != 0x11E9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3B0_0x10c3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E9F4u; }
        if (ctx->pc != 0x11E9F4u) { return; }
    }
    ctx->pc = 0x11E9F4u;
label_11e9f4:
    // 0x11e9f4: 0x8e03fae8  lw          $v1, -0x518($s0)
    ctx->pc = 0x11e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965992)));
    // 0x11e9f8: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11E9F8u;
    {
        const bool branch_taken_0x11e9f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11E9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E9F8u;
            // 0x11e9fc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9f8) {
            ctx->pc = 0x11EA28u;
            goto label_11ea28;
        }
    }
    ctx->pc = 0x11EA00u;
    // 0x11ea00: 0x8c43fad0  lw          $v1, -0x530($v0)
    ctx->pc = 0x11ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965968)));
    // 0x11ea04: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x11EA04u;
    {
        const bool branch_taken_0x11ea04 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11EA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA04u;
            // 0x11ea08: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea04) {
            ctx->pc = 0x11EA4Cu;
            goto label_11ea4c;
        }
    }
    ctx->pc = 0x11EA0Cu;
    // 0x11ea0c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x11ea10: 0x8c46fadc  lw          $a2, -0x524($v0)
    ctx->pc = 0x11ea10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965980)));
    // 0x11ea14: 0x24840220  addiu       $a0, $a0, 0x220
    ctx->pc = 0x11ea14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 544));
    // 0x11ea18: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11EA18u;
    SET_GPR_U32(ctx, 31, 0x11EA20u);
    ctx->pc = 0x11EA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA18u;
            // 0x11ea1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA20u; }
        if (ctx->pc != 0x11EA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA20u; }
        if (ctx->pc != 0x11EA20u) { return; }
    }
    ctx->pc = 0x11EA20u;
label_11ea20:
    // 0x11ea20: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x11EA20u;
    {
        const bool branch_taken_0x11ea20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA20u;
            // 0x11ea24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea20) {
            ctx->pc = 0x11EB08u;
            goto label_11eb08;
        }
    }
    ctx->pc = 0x11EA28u;
label_11ea28:
    // 0x11ea28: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11ea28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11ea2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x11ea2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ea30: 0xc047aee  jal         func_11EBB8
    ctx->pc = 0x11EA30u;
    SET_GPR_U32(ctx, 31, 0x11EA38u);
    ctx->pc = 0x11EA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA30u;
            // 0x11ea34: 0xac51fadc  sw          $s1, -0x524($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294965980), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11EBB8u;
    if (runtime->hasFunction(0x11EBB8u)) {
        auto targetFn = runtime->lookupFunction(0x11EBB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA38u; }
        if (ctx->pc != 0x11EA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011EBB8_0x11ebb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA38u; }
        if (ctx->pc != 0x11EA38u) { return; }
    }
    ctx->pc = 0x11EA38u;
label_11ea38:
    // 0x11ea38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EA38u;
    {
        const bool branch_taken_0x11ea38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA38u;
            // 0x11ea3c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea38) {
            ctx->pc = 0x11EA54u;
            goto label_11ea54;
        }
    }
    ctx->pc = 0x11EA40u;
    // 0x11ea40: 0x8e04fae8  lw          $a0, -0x518($s0)
    ctx->pc = 0x11ea40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965992)));
    // 0x11ea44: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x11EA44u;
    SET_GPR_U32(ctx, 31, 0x11EA4Cu);
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA4Cu; }
        if (ctx->pc != 0x11EA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA4Cu; }
        if (ctx->pc != 0x11EA4Cu) { return; }
    }
    ctx->pc = 0x11EA4Cu;
label_11ea4c:
    // 0x11ea4c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x11EA4Cu;
    {
        const bool branch_taken_0x11ea4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA4Cu;
            // 0x11ea50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea4c) {
            ctx->pc = 0x11EB08u;
            goto label_11eb08;
        }
    }
    ctx->pc = 0x11EA54u;
label_11ea54:
    // 0x11ea54: 0xc043eaa  jal         func_10FAA8
    ctx->pc = 0x11EA54u;
    SET_GPR_U32(ctx, 31, 0x11EA5Cu);
    ctx->pc = 0x11EA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA54u;
            // 0x11ea58: 0x3c12005d  lui         $s2, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA8u;
    if (runtime->hasFunction(0x10FAA8u)) {
        auto targetFn = runtime->lookupFunction(0x10FAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA5Cu; }
        if (ctx->pc != 0x11EA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010FAA8_0x10faa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EA5Cu; }
        if (ctx->pc != 0x11EA5Cu) { return; }
    }
    ctx->pc = 0x11EA5Cu;
label_11ea5c:
    // 0x11ea5c: 0x8e42fafc  lw          $v0, -0x504($s2)
    ctx->pc = 0x11ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966012)));
    // 0x11ea60: 0x4410029  bgez        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x11EA60u;
    {
        const bool branch_taken_0x11ea60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11EA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA60u;
            // 0x11ea64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea60) {
            ctx->pc = 0x11EB08u;
            goto label_11eb08;
        }
    }
    ctx->pc = 0x11EA68u;
    // 0x11ea68: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x11EA68u;
    {
        const bool branch_taken_0x11ea68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EA68u;
            // 0x11ea6c: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ea68) {
            ctx->pc = 0x11EA94u;
            goto label_11ea94;
        }
    }
    ctx->pc = 0x11EA70u;
label_11ea70:
    // 0x11ea70: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x11ea74: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11ea74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11ea78:
    // 0x11ea78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ea78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ea7c: 0x0  nop
    ctx->pc = 0x11ea7cu;
    // NOP
    // 0x11ea80: 0x0  nop
    ctx->pc = 0x11ea80u;
    // NOP
    // 0x11ea84: 0x0  nop
    ctx->pc = 0x11ea84u;
    // NOP
    // 0x11ea88: 0x0  nop
    ctx->pc = 0x11ea88u;
    // NOP
    // 0x11ea8c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11EA8Cu;
    {
        const bool branch_taken_0x11ea8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11ea8c) {
            ctx->pc = 0x11EA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ea78;
        }
    }
    ctx->pc = 0x11EA94u;
label_11ea94:
    // 0x11ea94: 0x26300c90  addiu       $s0, $s1, 0xC90
    ctx->pc = 0x11ea94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3216));
label_11ea98:
    // 0x11ea98: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x11ea98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x11ea9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ea9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11eaa0: 0x34a50595  ori         $a1, $a1, 0x595
    ctx->pc = 0x11eaa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1429);
    // 0x11eaa4: 0xc044094  jal         func_110250
    ctx->pc = 0x11EAA4u;
    SET_GPR_U32(ctx, 31, 0x11EAACu);
    ctx->pc = 0x11EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAA4u;
            // 0x11eaa8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110250u;
    if (runtime->hasFunction(0x110250u)) {
        auto targetFn = runtime->lookupFunction(0x110250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EAACu; }
        if (ctx->pc != 0x11EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110250_0x110250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EAACu; }
        if (ctx->pc != 0x11EAACu) { return; }
    }
    ctx->pc = 0x11EAACu;
label_11eaac:
    // 0x11eaac: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x11EAACu;
    {
        const bool branch_taken_0x11eaac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x11eaac) {
            ctx->pc = 0x11EAB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAACu;
            // 0x11eab0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11EAFCu;
            goto label_11eafc;
        }
    }
    ctx->pc = 0x11EAB4u;
    // 0x11eab4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11eab8: 0x8c43fad0  lw          $v1, -0x530($v0)
    ctx->pc = 0x11eab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965968)));
    // 0x11eabc: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EABCu;
    {
        const bool branch_taken_0x11eabc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x11EAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EABCu;
            // 0x11eac0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eabc) {
            ctx->pc = 0x11EAD4u;
            goto label_11ead4;
        }
    }
    ctx->pc = 0x11EAC4u;
    // 0x11eac4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x11eac4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x11eac8: 0xc043c12  jal         func_10F048
    ctx->pc = 0x11EAC8u;
    SET_GPR_U32(ctx, 31, 0x11EAD0u);
    ctx->pc = 0x11EACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAC8u;
            // 0x11eacc: 0x24840248  addiu       $a0, $a0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EAD0u; }
        if (ctx->pc != 0x11EAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11EAD0u; }
        if (ctx->pc != 0x11EAD0u) { return; }
    }
    ctx->pc = 0x11EAD0u;
label_11ead0:
    // 0x11ead0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x11ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_11ead4:
    // 0x11ead4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11ead4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11ead8:
    // 0x11ead8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ead8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11eadc: 0x0  nop
    ctx->pc = 0x11eadcu;
    // NOP
    // 0x11eae0: 0x0  nop
    ctx->pc = 0x11eae0u;
    // NOP
    // 0x11eae4: 0x0  nop
    ctx->pc = 0x11eae4u;
    // NOP
    // 0x11eae8: 0x0  nop
    ctx->pc = 0x11eae8u;
    // NOP
    // 0x11eaec: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11EAECu;
    {
        const bool branch_taken_0x11eaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x11eaec) {
            ctx->pc = 0x11EAD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ead8;
        }
    }
    ctx->pc = 0x11EAF4u;
    // 0x11eaf4: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x11EAF4u;
    {
        const bool branch_taken_0x11eaf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAF4u;
            // 0x11eaf8: 0x26300c90  addiu       $s0, $s1, 0xC90 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 3216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eaf4) {
            ctx->pc = 0x11EA98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ea98;
        }
    }
    ctx->pc = 0x11EAFCu;
label_11eafc:
    // 0x11eafc: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11EAFCu;
    {
        const bool branch_taken_0x11eafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EAFCu;
            // 0x11eb00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eafc) {
            ctx->pc = 0x11EA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11ea70;
        }
    }
    ctx->pc = 0x11EB04u;
    // 0x11eb04: 0xae40fafc  sw          $zero, -0x504($s2)
    ctx->pc = 0x11eb04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966012), GPR_U32(ctx, 0));
label_11eb08:
    // 0x11eb08: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11eb08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11eb0c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11eb0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eb10: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11eb10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11eb14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11eb14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11eb18: 0x3e00008  jr          $ra
    ctx->pc = 0x11EB18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11EB18u;
            // 0x11eb1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11EB20u;
}
