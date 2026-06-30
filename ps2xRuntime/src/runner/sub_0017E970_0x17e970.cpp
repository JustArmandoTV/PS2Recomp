#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E970
// Address: 0x17e970 - 0x17ee00
void sub_0017E970_0x17e970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E970_0x17e970");
#endif

    switch (ctx->pc) {
        case 0x17e9e0u: goto label_17e9e0;
        case 0x17ea00u: goto label_17ea00;
        case 0x17ea10u: goto label_17ea10;
        case 0x17ea30u: goto label_17ea30;
        case 0x17ea40u: goto label_17ea40;
        case 0x17ea48u: goto label_17ea48;
        case 0x17ea54u: goto label_17ea54;
        case 0x17ea64u: goto label_17ea64;
        case 0x17ea70u: goto label_17ea70;
        case 0x17ea8cu: goto label_17ea8c;
        case 0x17ea94u: goto label_17ea94;
        case 0x17eb30u: goto label_17eb30;
        case 0x17eb44u: goto label_17eb44;
        case 0x17eb4cu: goto label_17eb4c;
        case 0x17eb58u: goto label_17eb58;
        case 0x17eb6cu: goto label_17eb6c;
        case 0x17ebbcu: goto label_17ebbc;
        case 0x17ec54u: goto label_17ec54;
        case 0x17ecd4u: goto label_17ecd4;
        case 0x17ece8u: goto label_17ece8;
        case 0x17ed20u: goto label_17ed20;
        case 0x17ed64u: goto label_17ed64;
        case 0x17ed7cu: goto label_17ed7c;
        case 0x17ed9cu: goto label_17ed9c;
        case 0x17eda4u: goto label_17eda4;
        case 0x17edbcu: goto label_17edbc;
        default: break;
    }

    ctx->pc = 0x17e970u;

label_17e970:
    // 0x17e970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e974: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e97c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x17e97cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x17e980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e984: 0x804a576  j           func_1295D8
    ctx->pc = 0x17E984u;
    ctx->pc = 0x17E988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E984u;
            // 0x17e988: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17E98Cu;
    // 0x17e98c: 0x0  nop
    ctx->pc = 0x17e98cu;
    // NOP
    // 0x17e990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17e990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17e994: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17e994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17e998: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x17e998u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e99c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17e99cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17e9a0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17e9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17e9a4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17e9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17e9a8: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E9A8u;
    {
        const bool branch_taken_0x17e9a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9A8u;
            // 0x17e9ac: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9a8) {
            ctx->pc = 0x17E9C0u;
            goto label_17e9c0;
        }
    }
    ctx->pc = 0x17E9B0u;
    // 0x17e9b0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17e9b4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x17E9B4u;
    {
        const bool branch_taken_0x17e9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9B4u;
            // 0x17e9b8: 0x24a563b8  addiu       $a1, $a1, 0x63B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9b4) {
            ctx->pc = 0x17E9F8u;
            goto label_17e9f8;
        }
    }
    ctx->pc = 0x17E9BCu;
    // 0x17e9bc: 0x0  nop
    ctx->pc = 0x17e9bcu;
    // NOP
label_17e9c0:
    // 0x17e9c0: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E9C0u;
    {
        const bool branch_taken_0x17e9c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9C0u;
            // 0x17e9c4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9c0) {
            ctx->pc = 0x17E9D8u;
            goto label_17e9d8;
        }
    }
    ctx->pc = 0x17E9C8u;
    // 0x17e9c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17E9CCu;
    {
        const bool branch_taken_0x17e9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9CCu;
            // 0x17e9d0: 0x24a563e0  addiu       $a1, $a1, 0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9cc) {
            ctx->pc = 0x17E9F8u;
            goto label_17e9f8;
        }
    }
    ctx->pc = 0x17E9D4u;
    // 0x17e9d4: 0x0  nop
    ctx->pc = 0x17e9d4u;
    // NOP
label_17e9d8:
    // 0x17e9d8: 0xc05fa4e  jal         func_17E938
    ctx->pc = 0x17E9D8u;
    SET_GPR_U32(ctx, 31, 0x17E9E0u);
    ctx->pc = 0x17E938u;
    if (runtime->hasFunction(0x17E938u)) {
        auto targetFn = runtime->lookupFunction(0x17E938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9E0u; }
        if (ctx->pc != 0x17E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E938_0x17e938(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E9E0u; }
        if (ctx->pc != 0x17E9E0u) { return; }
    }
    ctx->pc = 0x17E9E0u;
label_17e9e0:
    // 0x17e9e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17e9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9e4: 0x16200008  bnez        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x17E9E4u;
    {
        const bool branch_taken_0x17e9e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E9E4u;
            // 0x17e9e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e9e4) {
            ctx->pc = 0x17EA08u;
            goto label_17ea08;
        }
    }
    ctx->pc = 0x17E9ECu;
    // 0x17e9ec: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17e9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17e9f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17e9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e9f4: 0x24a56408  addiu       $a1, $a1, 0x6408
    ctx->pc = 0x17e9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25608));
label_17e9f8:
    // 0x17e9f8: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17E9F8u;
    SET_GPR_U32(ctx, 31, 0x17EA00u);
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA00u; }
        if (ctx->pc != 0x17EA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA00u; }
        if (ctx->pc != 0x17EA00u) { return; }
    }
    ctx->pc = 0x17EA00u;
label_17ea00:
    // 0x17ea00: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x17EA00u;
    {
        const bool branch_taken_0x17ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA00u;
            // 0x17ea04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea00) {
            ctx->pc = 0x17EAE8u;
            goto label_17eae8;
        }
    }
    ctx->pc = 0x17EA08u;
label_17ea08:
    // 0x17ea08: 0xc05fed0  jal         func_17FB40
    ctx->pc = 0x17EA08u;
    SET_GPR_U32(ctx, 31, 0x17EA10u);
    ctx->pc = 0x17EA0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA08u;
            // 0x17ea0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FB40u;
    if (runtime->hasFunction(0x17FB40u)) {
        auto targetFn = runtime->lookupFunction(0x17FB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA10u; }
        if (ctx->pc != 0x17EA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FB40_0x17fb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA10u; }
        if (ctx->pc != 0x17EA10u) { return; }
    }
    ctx->pc = 0x17EA10u;
label_17ea10:
    // 0x17ea10: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17ea10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17ea14: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x17EA14u;
    {
        const bool branch_taken_0x17ea14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ea14) {
            ctx->pc = 0x17EA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA14u;
            // 0x17ea18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EAA0u;
            goto label_17eaa0;
        }
    }
    ctx->pc = 0x17EA1Cu;
    // 0x17ea1c: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x17ea1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x17ea20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17ea20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea24: 0x261069d0  addiu       $s0, $s0, 0x69D0
    ctx->pc = 0x17ea24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 27088));
    // 0x17ea28: 0xc05fc92  jal         func_17F248
    ctx->pc = 0x17EA28u;
    SET_GPR_U32(ctx, 31, 0x17EA30u);
    ctx->pc = 0x17EA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA28u;
            // 0x17ea2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F248u;
    if (runtime->hasFunction(0x17F248u)) {
        auto targetFn = runtime->lookupFunction(0x17F248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA30u; }
        if (ctx->pc != 0x17EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F248_0x17f248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA30u; }
        if (ctx->pc != 0x17EA30u) { return; }
    }
    ctx->pc = 0x17EA30u;
label_17ea30:
    // 0x17ea30: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17ea30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17ea34: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ea34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea38: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17EA38u;
    SET_GPR_U32(ctx, 31, 0x17EA40u);
    ctx->pc = 0x17EA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA38u;
            // 0x17ea3c: 0x24846438  addiu       $a0, $a0, 0x6438 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA40u; }
        if (ctx->pc != 0x17EA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA40u; }
        if (ctx->pc != 0x17EA40u) { return; }
    }
    ctx->pc = 0x17EA40u;
label_17ea40:
    // 0x17ea40: 0xc05f9be  jal         func_17E6F8
    ctx->pc = 0x17EA40u;
    SET_GPR_U32(ctx, 31, 0x17EA48u);
    ctx->pc = 0x17EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA40u;
            // 0x17ea44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E6F8u;
    if (runtime->hasFunction(0x17E6F8u)) {
        auto targetFn = runtime->lookupFunction(0x17E6F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA48u; }
        if (ctx->pc != 0x17EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E6F8_0x17e6f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA48u; }
        if (ctx->pc != 0x17EA48u) { return; }
    }
    ctx->pc = 0x17EA48u;
label_17ea48:
    // 0x17ea48: 0x24044900  addiu       $a0, $zero, 0x4900
    ctx->pc = 0x17ea48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18688));
    // 0x17ea4c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17EA4Cu;
    SET_GPR_U32(ctx, 31, 0x17EA54u);
    ctx->pc = 0x17EA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA4Cu;
            // 0x17ea50: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA54u; }
        if (ctx->pc != 0x17EA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA54u; }
        if (ctx->pc != 0x17EA54u) { return; }
    }
    ctx->pc = 0x17EA54u;
label_17ea54:
    // 0x17ea54: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ea58: 0x8c456b10  lw          $a1, 0x6B10($v0)
    ctx->pc = 0x17ea58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27408)));
    // 0x17ea5c: 0xc05edfe  jal         func_17B7F8
    ctx->pc = 0x17EA5Cu;
    SET_GPR_U32(ctx, 31, 0x17EA64u);
    ctx->pc = 0x17EA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA5Cu;
            // 0x17ea60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B7F8u;
    if (runtime->hasFunction(0x17B7F8u)) {
        auto targetFn = runtime->lookupFunction(0x17B7F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA64u; }
        if (ctx->pc != 0x17EA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B7F8_0x17b7f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA64u; }
        if (ctx->pc != 0x17EA64u) { return; }
    }
    ctx->pc = 0x17EA64u;
label_17ea64:
    // 0x17ea64: 0x24044901  addiu       $a0, $zero, 0x4901
    ctx->pc = 0x17ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18689));
    // 0x17ea68: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17EA68u;
    SET_GPR_U32(ctx, 31, 0x17EA70u);
    ctx->pc = 0x17EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA68u;
            // 0x17ea6c: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA70u; }
        if (ctx->pc != 0x17EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA70u; }
        if (ctx->pc != 0x17EA70u) { return; }
    }
    ctx->pc = 0x17EA70u;
label_17ea70:
    // 0x17ea70: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x17ea70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17ea74: 0x443000f  bgezl       $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x17EA74u;
    {
        const bool branch_taken_0x17ea74 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17ea74) {
            ctx->pc = 0x17EA78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA74u;
            // 0x17ea78: 0xa2200001  sb          $zero, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EAB4u;
            goto label_17eab4;
        }
    }
    ctx->pc = 0x17EA7Cu;
    // 0x17ea7c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ea7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ea80: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17ea80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ea84: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17EA84u;
    SET_GPR_U32(ctx, 31, 0x17EA8Cu);
    ctx->pc = 0x17EA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA84u;
            // 0x17ea88: 0x24a56460  addiu       $a1, $a1, 0x6460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA8Cu; }
        if (ctx->pc != 0x17EA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EA8Cu; }
        if (ctx->pc != 0x17EA8Cu) { return; }
    }
    ctx->pc = 0x17EA8Cu;
label_17ea8c:
    // 0x17ea8c: 0xc05fa5c  jal         func_17E970
    ctx->pc = 0x17EA8Cu;
    SET_GPR_U32(ctx, 31, 0x17EA94u);
    ctx->pc = 0x17EA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA8Cu;
            // 0x17ea90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    goto label_17e970;
    ctx->pc = 0x17EA94u;
label_17ea94:
    // 0x17ea94: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x17EA94u;
    {
        const bool branch_taken_0x17ea94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA94u;
            // 0x17ea98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea94) {
            ctx->pc = 0x17EAE8u;
            goto label_17eae8;
        }
    }
    ctx->pc = 0x17EA9Cu;
    // 0x17ea9c: 0x0  nop
    ctx->pc = 0x17ea9cu;
    // NOP
label_17eaa0:
    // 0x17eaa0: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x17eaa0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x17eaa4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x17eaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eaa8: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x17eaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x17eaac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x17eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x17eab0: 0xfe220008  sd          $v0, 0x8($s1)
    ctx->pc = 0x17eab0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
label_17eab4:
    // 0x17eab4: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x17eab4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17eab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17eab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17eabc: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x17eabcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
    // 0x17eac0: 0x646307ff  daddiu      $v1, $v1, 0x7FF
    ctx->pc = 0x17eac0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)2047);
    // 0x17eac4: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x17eac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x17eac8: 0x31d78  dsll        $v1, $v1, 21
    ctx->pc = 0x17eac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 21);
    // 0x17eacc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17eaccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x17ead0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x17ead0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x17ead4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x17ead4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x17ead8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17ead8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x17eadc: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x17eadcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17eae0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x17eae0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x17eae4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x17eae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17eae8:
    // 0x17eae8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17eae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eaec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17eaecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eaf0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17eaf0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eaf4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17eaf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17eaf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17EAF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EAFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EAF8u;
            // 0x17eafc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EB00u;
    // 0x17eb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17eb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17eb04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17eb04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17eb08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17eb08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17eb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17eb10: 0x1220001d  beqz        $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x17EB10u;
    {
        const bool branch_taken_0x17eb10 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB10u;
            // 0x17eb14: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb10) {
            ctx->pc = 0x17EB88u;
            goto label_17eb88;
        }
    }
    ctx->pc = 0x17EB18u;
    // 0x17eb18: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x17eb18u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17eb1c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17eb1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17eb20: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x17EB20u;
    {
        const bool branch_taken_0x17eb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eb20) {
            ctx->pc = 0x17EB24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB20u;
            // 0x17eb24: 0x82220001  lb          $v0, 0x1($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EB34u;
            goto label_17eb34;
        }
    }
    ctx->pc = 0x17EB28u;
    // 0x17eb28: 0xc05fb80  jal         func_17EE00
    ctx->pc = 0x17EB28u;
    SET_GPR_U32(ctx, 31, 0x17EB30u);
    ctx->pc = 0x17EE00u;
    if (runtime->hasFunction(0x17EE00u)) {
        auto targetFn = runtime->lookupFunction(0x17EE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB30u; }
        if (ctx->pc != 0x17EB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EE00_0x17ee00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB30u; }
        if (ctx->pc != 0x17EB30u) { return; }
    }
    ctx->pc = 0x17EB30u;
label_17eb30:
    // 0x17eb30: 0x82220001  lb          $v0, 0x1($s1)
    ctx->pc = 0x17eb30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_17eb34:
    // 0x17eb34: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x17EB34u;
    {
        const bool branch_taken_0x17eb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17eb34) {
            ctx->pc = 0x17EB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB34u;
            // 0x17eb38: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EB70u;
            goto label_17eb70;
        }
    }
    ctx->pc = 0x17EB3Cu;
    // 0x17eb3c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17EB3Cu;
    SET_GPR_U32(ctx, 31, 0x17EB44u);
    ctx->pc = 0x17EB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB3Cu;
            // 0x17eb40: 0x24045000  addiu       $a0, $zero, 0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB44u; }
        if (ctx->pc != 0x17EB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB44u; }
        if (ctx->pc != 0x17EB44u) { return; }
    }
    ctx->pc = 0x17EB44u;
label_17eb44:
    // 0x17eb44: 0xc05ee18  jal         func_17B860
    ctx->pc = 0x17EB44u;
    SET_GPR_U32(ctx, 31, 0x17EB4Cu);
    ctx->pc = 0x17EB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB44u;
            // 0x17eb48: 0x8e240018  lw          $a0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B860u;
    if (runtime->hasFunction(0x17B860u)) {
        auto targetFn = runtime->lookupFunction(0x17B860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB4Cu; }
        if (ctx->pc != 0x17EB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B860_0x17b860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB4Cu; }
        if (ctx->pc != 0x17EB4Cu) { return; }
    }
    ctx->pc = 0x17EB4Cu;
label_17eb4c:
    // 0x17eb4c: 0x24045001  addiu       $a0, $zero, 0x5001
    ctx->pc = 0x17eb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20481));
    // 0x17eb50: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17EB50u;
    SET_GPR_U32(ctx, 31, 0x17EB58u);
    ctx->pc = 0x17EB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB50u;
            // 0x17eb54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB58u; }
        if (ctx->pc != 0x17EB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB58u; }
        if (ctx->pc != 0x17EB58u) { return; }
    }
    ctx->pc = 0x17EB58u;
label_17eb58:
    // 0x17eb58: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17eb58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17eb5c: 0x6010003  bgez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EB5Cu;
    {
        const bool branch_taken_0x17eb5c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x17EB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB5Cu;
            // 0x17eb60: 0x24846488  addiu       $a0, $a0, 0x6488 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eb5c) {
            ctx->pc = 0x17EB6Cu;
            goto label_17eb6c;
        }
    }
    ctx->pc = 0x17EB64u;
    // 0x17eb64: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17EB64u;
    SET_GPR_U32(ctx, 31, 0x17EB6Cu);
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB6Cu; }
        if (ctx->pc != 0x17EB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EB6Cu; }
        if (ctx->pc != 0x17EB6Cu) { return; }
    }
    ctx->pc = 0x17EB6Cu;
label_17eb6c:
    // 0x17eb6c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x17eb6cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_17eb70:
    // 0x17eb70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17eb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eb74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17eb74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17eb78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17eb7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17eb7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb80: 0x805fa5c  j           func_17E970
    ctx->pc = 0x17EB80u;
    ctx->pc = 0x17EB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB80u;
            // 0x17eb84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E970u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_17e970;
    ctx->pc = 0x17EB88u;
label_17eb88:
    // 0x17eb88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17eb88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17eb8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17eb8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17eb90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17eb90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eb94: 0x3e00008  jr          $ra
    ctx->pc = 0x17EB94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EB94u;
            // 0x17eb98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EB9Cu;
    // 0x17eb9c: 0x0  nop
    ctx->pc = 0x17eb9cu;
    // NOP
    // 0x17eba0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17eba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17eba4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x17eba4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17eba8: 0x14e00007  bnez        $a3, . + 4 + (0x7 << 2)
    ctx->pc = 0x17EBA8u;
    {
        const bool branch_taken_0x17eba8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBA8u;
            // 0x17ebac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eba8) {
            ctx->pc = 0x17EBC8u;
            goto label_17ebc8;
        }
    }
    ctx->pc = 0x17EBB0u;
    // 0x17ebb0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ebb4: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17EBB4u;
    SET_GPR_U32(ctx, 31, 0x17EBBCu);
    ctx->pc = 0x17EBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBB4u;
            // 0x17ebb8: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBBCu; }
        if (ctx->pc != 0x17EBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EBBCu; }
        if (ctx->pc != 0x17EBBCu) { return; }
    }
    ctx->pc = 0x17EBBCu;
label_17ebbc:
    // 0x17ebbc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x17EBBCu;
    {
        const bool branch_taken_0x17ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBBCu;
            // 0x17ebc0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebbc) {
            ctx->pc = 0x17EC28u;
            goto label_17ec28;
        }
    }
    ctx->pc = 0x17EBC4u;
    // 0x17ebc4: 0x0  nop
    ctx->pc = 0x17ebc4u;
    // NOP
label_17ebc8:
    // 0x17ebc8: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EBC8u;
    {
        const bool branch_taken_0x17ebc8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBC8u;
            // 0x17ebcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebc8) {
            ctx->pc = 0x17EBD8u;
            goto label_17ebd8;
        }
    }
    ctx->pc = 0x17EBD0u;
    // 0x17ebd0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17EBD0u;
    {
        const bool branch_taken_0x17ebd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBD0u;
            // 0x17ebd4: 0xace5001c  sw          $a1, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebd0) {
            ctx->pc = 0x17EC08u;
            goto label_17ec08;
        }
    }
    ctx->pc = 0x17EBD8u;
label_17ebd8:
    // 0x17ebd8: 0x14c20005  bne         $a2, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EBD8u;
    {
        const bool branch_taken_0x17ebd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBD8u;
            // 0x17ebdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebd8) {
            ctx->pc = 0x17EBF0u;
            goto label_17ebf0;
        }
    }
    ctx->pc = 0x17EBE0u;
    // 0x17ebe0: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x17ebe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x17ebe4: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x17ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17ebe8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17EBE8u;
    {
        const bool branch_taken_0x17ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBE8u;
            // 0x17ebec: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebe8) {
            ctx->pc = 0x17EC0Cu;
            goto label_17ec0c;
        }
    }
    ctx->pc = 0x17EBF0u;
label_17ebf0:
    // 0x17ebf0: 0x14c20006  bne         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EBF0u;
    {
        const bool branch_taken_0x17ebf0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EBF0u;
            // 0x17ebf4: 0x8ce40010  lw          $a0, 0x10($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ebf0) {
            ctx->pc = 0x17EC0Cu;
            goto label_17ec0c;
        }
    }
    ctx->pc = 0x17EBF8u;
    // 0x17ebf8: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x17ebf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17ebfc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x17ebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x17ec00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17EC00u;
    {
        const bool branch_taken_0x17ec00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC00u;
            // 0x17ec04: 0xace2001c  sw          $v0, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec00) {
            ctx->pc = 0x17EC0Cu;
            goto label_17ec0c;
        }
    }
    ctx->pc = 0x17EC08u;
label_17ec08:
    // 0x17ec08: 0x8ce40010  lw          $a0, 0x10($a3)
    ctx->pc = 0x17ec08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
label_17ec0c:
    // 0x17ec0c: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x17ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x17ec10: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x17ec10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x17ec14: 0x44182a  slt         $v1, $v0, $a0
    ctx->pc = 0x17ec14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x17ec18: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x17ec18u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x17ec1c: 0x28440000  slti        $a0, $v0, 0x0
    ctx->pc = 0x17ec1cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x17ec20: 0x4100b  movn        $v0, $zero, $a0
    ctx->pc = 0x17ec20u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x17ec24: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x17ec24u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_17ec28:
    // 0x17ec28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ec28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec2c: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC2Cu;
            // 0x17ec30: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EC34u;
    // 0x17ec34: 0x0  nop
    ctx->pc = 0x17ec34u;
    // NOP
    // 0x17ec38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17ec38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17ec3c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x17ec3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17EC40u;
    {
        const bool branch_taken_0x17ec40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC40u;
            // 0x17ec44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec40) {
            ctx->pc = 0x17EC60u;
            goto label_17ec60;
        }
    }
    ctx->pc = 0x17EC48u;
    // 0x17ec48: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ec48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ec4c: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17EC4Cu;
    SET_GPR_U32(ctx, 31, 0x17EC54u);
    ctx->pc = 0x17EC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC4Cu;
            // 0x17ec50: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC54u; }
        if (ctx->pc != 0x17EC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EC54u; }
        if (ctx->pc != 0x17EC54u) { return; }
    }
    ctx->pc = 0x17EC54u;
label_17ec54:
    // 0x17ec54: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17EC54u;
    {
        const bool branch_taken_0x17ec54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC54u;
            // 0x17ec58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec54) {
            ctx->pc = 0x17EC64u;
            goto label_17ec64;
        }
    }
    ctx->pc = 0x17EC5Cu;
    // 0x17ec5c: 0x0  nop
    ctx->pc = 0x17ec5cu;
    // NOP
label_17ec60:
    // 0x17ec60: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x17ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_17ec64:
    // 0x17ec64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ec64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ec68: 0x3e00008  jr          $ra
    ctx->pc = 0x17EC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC68u;
            // 0x17ec6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EC70u;
    // 0x17ec70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17ec70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17ec74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ec74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ec78: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ec78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec7c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ec7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ec80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17ec80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec84: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ec84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ec88: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x17ec88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ec8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ec8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ec90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17ec90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17ec94: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17ec94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x17ec98: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EC98u;
    {
        const bool branch_taken_0x17ec98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EC98u;
            // 0x17ec9c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ec98) {
            ctx->pc = 0x17ECB0u;
            goto label_17ecb0;
        }
    }
    ctx->pc = 0x17ECA0u;
    // 0x17eca0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17eca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17eca4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x17ECA4u;
    {
        const bool branch_taken_0x17eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECA4u;
            // 0x17eca8: 0x24a564a0  addiu       $a1, $a1, 0x64A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eca4) {
            ctx->pc = 0x17ECCCu;
            goto label_17eccc;
        }
    }
    ctx->pc = 0x17ECACu;
    // 0x17ecac: 0x0  nop
    ctx->pc = 0x17ecacu;
    // NOP
label_17ecb0:
    // 0x17ecb0: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17ECB0u;
    {
        const bool branch_taken_0x17ecb0 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x17ECB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECB0u;
            // 0x17ecb4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecb0) {
            ctx->pc = 0x17ECC0u;
            goto label_17ecc0;
        }
    }
    ctx->pc = 0x17ECB8u;
    // 0x17ecb8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17ECB8u;
    {
        const bool branch_taken_0x17ecb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECB8u;
            // 0x17ecbc: 0x24a564b8  addiu       $a1, $a1, 0x64B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecb8) {
            ctx->pc = 0x17ECCCu;
            goto label_17eccc;
        }
    }
    ctx->pc = 0x17ECC0u;
label_17ecc0:
    // 0x17ecc0: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x17ECC0u;
    {
        const bool branch_taken_0x17ecc0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ECC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECC0u;
            // 0x17ecc4: 0x3c050063  lui         $a1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecc0) {
            ctx->pc = 0x17ECE0u;
            goto label_17ece0;
        }
    }
    ctx->pc = 0x17ECC8u;
    // 0x17ecc8: 0x24a564d8  addiu       $a1, $a1, 0x64D8
    ctx->pc = 0x17ecc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25816));
label_17eccc:
    // 0x17eccc: 0xc05f8e4  jal         func_17E390
    ctx->pc = 0x17ECCCu;
    SET_GPR_U32(ctx, 31, 0x17ECD4u);
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECD4u; }
        if (ctx->pc != 0x17ECD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E390_0x17e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECD4u; }
        if (ctx->pc != 0x17ECD4u) { return; }
    }
    ctx->pc = 0x17ECD4u;
label_17ecd4:
    // 0x17ecd4: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x17ECD4u;
    {
        const bool branch_taken_0x17ecd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECD4u;
            // 0x17ecd8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecd4) {
            ctx->pc = 0x17EDDCu;
            goto label_17eddc;
        }
    }
    ctx->pc = 0x17ECDCu;
    // 0x17ecdc: 0x0  nop
    ctx->pc = 0x17ecdcu;
    // NOP
label_17ece0:
    // 0x17ece0: 0xc05f8f0  jal         func_17E3C0
    ctx->pc = 0x17ECE0u;
    SET_GPR_U32(ctx, 31, 0x17ECE8u);
    ctx->pc = 0x17ECE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECE0u;
            // 0x17ece4: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E3C0u;
    if (runtime->hasFunction(0x17E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x17E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECE8u; }
        if (ctx->pc != 0x17ECE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E3C0_0x17e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ECE8u; }
        if (ctx->pc != 0x17ECE8u) { return; }
    }
    ctx->pc = 0x17ECE8u;
label_17ece8:
    // 0x17ece8: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x17ECE8u;
    {
        const bool branch_taken_0x17ece8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x17ece8) {
            ctx->pc = 0x17ECECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECE8u;
            // 0x17ecec: 0x82230002  lb          $v1, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17ECF8u;
            goto label_17ecf8;
        }
    }
    ctx->pc = 0x17ECF0u;
    // 0x17ecf0: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x17ECF0u;
    {
        const bool branch_taken_0x17ecf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ECF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECF0u;
            // 0x17ecf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecf0) {
            ctx->pc = 0x17EDDCu;
            goto label_17eddc;
        }
    }
    ctx->pc = 0x17ECF8u;
label_17ecf8:
    // 0x17ecf8: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x17ecf8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ecfc: 0x10750037  beq         $v1, $s5, . + 4 + (0x37 << 2)
    ctx->pc = 0x17ECFCu;
    {
        const bool branch_taken_0x17ecfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x17ED00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ECFCu;
            // 0x17ed00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ecfc) {
            ctx->pc = 0x17EDDCu;
            goto label_17eddc;
        }
    }
    ctx->pc = 0x17ED04u;
    // 0x17ed04: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x17ED04u;
    {
        const bool branch_taken_0x17ed04 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ed04) {
            ctx->pc = 0x17ED18u;
            goto label_17ed18;
        }
    }
    ctx->pc = 0x17ED0Cu;
    // 0x17ed0c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x17ED0Cu;
    {
        const bool branch_taken_0x17ed0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED0Cu;
            // 0x17ed10: 0xa2340002  sb          $s4, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed0c) {
            ctx->pc = 0x17EDDCu;
            goto label_17eddc;
        }
    }
    ctx->pc = 0x17ED14u;
    // 0x17ed14: 0x0  nop
    ctx->pc = 0x17ed14u;
    // NOP
label_17ed18:
    // 0x17ed18: 0xc05e93a  jal         func_17A4E8
    ctx->pc = 0x17ED18u;
    SET_GPR_U32(ctx, 31, 0x17ED20u);
    ctx->pc = 0x17A4E8u;
    if (runtime->hasFunction(0x17A4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17A4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED20u; }
        if (ctx->pc != 0x17ED20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A4E8_0x17a4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED20u; }
        if (ctx->pc != 0x17ED20u) { return; }
    }
    ctx->pc = 0x17ED20u;
label_17ed20:
    // 0x17ed20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17ed20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed24: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x17ED24u;
    {
        const bool branch_taken_0x17ed24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED24u;
            // 0x17ed28: 0xae23002c  sw          $v1, 0x2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed24) {
            ctx->pc = 0x17EDDCu;
            goto label_17eddc;
        }
    }
    ctx->pc = 0x17ED2Cu;
    // 0x17ed2c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x17ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17ed30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17ed30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed34: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x17ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x17ed38: 0x1282c0  sll         $s0, $s2, 11
    ctx->pc = 0x17ed38u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 11));
    // 0x17ed3c: 0xde270008  ld          $a3, 0x8($s1)
    ctx->pc = 0x17ed3cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x17ed40: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x17ed40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17ed44: 0xae330020  sw          $s3, 0x20($s1)
    ctx->pc = 0x17ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 19));
    // 0x17ed48: 0x242182a  slt         $v1, $s2, $v0
    ctx->pc = 0x17ed48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x17ed4c: 0xf0302b  sltu        $a2, $a3, $s0
    ctx->pc = 0x17ed4cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x17ed50: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x17ed50u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x17ed54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17ed54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed58: 0xae250024  sw          $a1, 0x24($s1)
    ctx->pc = 0x17ed58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 5));
    // 0x17ed5c: 0xc05f91e  jal         func_17E478
    ctx->pc = 0x17ED5Cu;
    SET_GPR_U32(ctx, 31, 0x17ED64u);
    ctx->pc = 0x17ED60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED5Cu;
            // 0x17ed60: 0xe6800b  movn        $s0, $a3, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E478u;
    if (runtime->hasFunction(0x17E478u)) {
        auto targetFn = runtime->lookupFunction(0x17E478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED64u; }
        if (ctx->pc != 0x17ED64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E478_0x17e478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED64u; }
        if (ctx->pc != 0x17ED64u) { return; }
    }
    ctx->pc = 0x17ED64u;
label_17ed64:
    // 0x17ed64: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x17ed64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17ed68: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x17ed68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x17ed6c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17ed6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ed70: 0x8e26001c  lw          $a2, 0x1C($s1)
    ctx->pc = 0x17ed70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17ed74: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x17ED74u;
    SET_GPR_U32(ctx, 31, 0x17ED7Cu);
    ctx->pc = 0x17ED78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED74u;
            // 0x17ed78: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED7Cu; }
        if (ctx->pc != 0x17ED7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED7Cu; }
        if (ctx->pc != 0x17ED7Cu) { return; }
    }
    ctx->pc = 0x17ED7Cu;
label_17ed7c:
    // 0x17ed7c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17ED7Cu;
    {
        const bool branch_taken_0x17ed7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ED80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED7Cu;
            // 0x17ed80: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ed7c) {
            ctx->pc = 0x17EDE0u;
            goto label_17ede0;
        }
    }
    ctx->pc = 0x17ED84u;
    // 0x17ed84: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ed84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ed88: 0x8c506b10  lw          $s0, 0x6B10($v0)
    ctx->pc = 0x17ed88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27408)));
    // 0x17ed8c: 0x56140010  bnel        $s0, $s4, . + 4 + (0x10 << 2)
    ctx->pc = 0x17ED8Cu;
    {
        const bool branch_taken_0x17ed8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 20));
        if (branch_taken_0x17ed8c) {
            ctx->pc = 0x17ED90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17ED8Cu;
            // 0x17ed90: 0xa2350002  sb          $s5, 0x2($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EDD0u;
            goto label_17edd0;
        }
    }
    ctx->pc = 0x17ED94u;
    // 0x17ed94: 0xc05ec5c  jal         func_17B170
    ctx->pc = 0x17ED94u;
    SET_GPR_U32(ctx, 31, 0x17ED9Cu);
    ctx->pc = 0x17B170u;
    if (runtime->hasFunction(0x17B170u)) {
        auto targetFn = runtime->lookupFunction(0x17B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED9Cu; }
        if (ctx->pc != 0x17ED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B170_0x17b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ED9Cu; }
        if (ctx->pc != 0x17ED9Cu) { return; }
    }
    ctx->pc = 0x17ED9Cu;
label_17ed9c:
    // 0x17ed9c: 0xc05ec12  jal         func_17B048
    ctx->pc = 0x17ED9Cu;
    SET_GPR_U32(ctx, 31, 0x17EDA4u);
    ctx->pc = 0x17B048u;
    if (runtime->hasFunction(0x17B048u)) {
        auto targetFn = runtime->lookupFunction(0x17B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDA4u; }
        if (ctx->pc != 0x17EDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B048_0x17b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDA4u; }
        if (ctx->pc != 0x17EDA4u) { return; }
    }
    ctx->pc = 0x17EDA4u;
label_17eda4:
    // 0x17eda4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x17eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x17eda8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x17eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17edac: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x17edacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x17edb0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17edb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17edb4: 0xc05e95c  jal         func_17A570
    ctx->pc = 0x17EDB4u;
    SET_GPR_U32(ctx, 31, 0x17EDBCu);
    ctx->pc = 0x17EDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDB4u;
            // 0x17edb8: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A570u;
    if (runtime->hasFunction(0x17A570u)) {
        auto targetFn = runtime->lookupFunction(0x17A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDBCu; }
        if (ctx->pc != 0x17EDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A570_0x17a570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EDBCu; }
        if (ctx->pc != 0x17EDBCu) { return; }
    }
    ctx->pc = 0x17EDBCu;
label_17edbc:
    // 0x17edbc: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x17edbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x17edc0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x17edc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x17edc4: 0xa2300002  sb          $s0, 0x2($s1)
    ctx->pc = 0x17edc4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 16));
    // 0x17edc8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17EDC8u;
    {
        const bool branch_taken_0x17edc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDC8u;
            // 0x17edcc: 0xae220028  sw          $v0, 0x28($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17edc8) {
            ctx->pc = 0x17EDD8u;
            goto label_17edd8;
        }
    }
    ctx->pc = 0x17EDD0u;
label_17edd0:
    // 0x17edd0: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x17edd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x17edd4: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x17edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_17edd8:
    // 0x17edd8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_17eddc:
    // 0x17eddc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17eddcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ede0:
    // 0x17ede0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ede0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ede4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ede4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ede8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ede8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17edec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17edecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17edf0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17edf0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17edf4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x17edf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17edf8: 0x3e00008  jr          $ra
    ctx->pc = 0x17EDF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EDF8u;
            // 0x17edfc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EE00u;
}
