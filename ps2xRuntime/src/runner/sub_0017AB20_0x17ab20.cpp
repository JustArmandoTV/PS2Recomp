#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017AB20
// Address: 0x17ab20 - 0x17ac80
void sub_0017AB20_0x17ab20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AB20_0x17ab20");
#endif

    switch (ctx->pc) {
        case 0x17ab88u: goto label_17ab88;
        case 0x17ab90u: goto label_17ab90;
        case 0x17ab98u: goto label_17ab98;
        case 0x17aba4u: goto label_17aba4;
        case 0x17abacu: goto label_17abac;
        case 0x17abc0u: goto label_17abc0;
        case 0x17abc8u: goto label_17abc8;
        case 0x17abd4u: goto label_17abd4;
        case 0x17ac14u: goto label_17ac14;
        default: break;
    }

    ctx->pc = 0x17ab20u;

    // 0x17ab20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17ab20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17ab24: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17ab24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17ab28: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ab2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ab2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ab30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ab34: 0x246343d4  addiu       $v1, $v1, 0x43D4
    ctx->pc = 0x17ab34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17364));
    // 0x17ab38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ab38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ab3c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ab3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ab40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x17ab40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x17ab44: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17ab48: 0x10800036  beqz        $a0, . + 4 + (0x36 << 2)
    ctx->pc = 0x17AB48u;
    {
        const bool branch_taken_0x17ab48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB48u;
            // 0x17ab4c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ab48) {
            ctx->pc = 0x17AC24u;
            goto label_17ac24;
        }
    }
    ctx->pc = 0x17AB50u;
    // 0x17ab50: 0x82240002  lb          $a0, 0x2($s1)
    ctx->pc = 0x17ab50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x17ab54: 0x54830034  bnel        $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x17AB54u;
    {
        const bool branch_taken_0x17ab54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x17ab54) {
            ctx->pc = 0x17AB58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB54u;
            // 0x17ab58: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17AC28u;
            goto label_17ac28;
        }
    }
    ctx->pc = 0x17AB5Cu;
    // 0x17ab5c: 0x3c12005e  lui         $s2, 0x5E
    ctx->pc = 0x17ab5cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)94 << 16));
    // 0x17ab60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17ab64: 0x264443dc  addiu       $a0, $s2, 0x43DC
    ctx->pc = 0x17ab64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17372));
    // 0x17ab68: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ab68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ab6c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x17ab6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x17ab70: 0x244243d0  addiu       $v0, $v0, 0x43D0
    ctx->pc = 0x17ab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17360));
    // 0x17ab74: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17ab74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17ab78: 0x1465000f  bne         $v1, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x17AB78u;
    {
        const bool branch_taken_0x17ab78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x17ab78) {
            ctx->pc = 0x17ABB8u;
            goto label_17abb8;
        }
    }
    ctx->pc = 0x17AB80u;
    // 0x17ab80: 0xc061f8c  jal         func_187E30
    ctx->pc = 0x17AB80u;
    SET_GPR_U32(ctx, 31, 0x17AB88u);
    ctx->pc = 0x187E30u;
    if (runtime->hasFunction(0x187E30u)) {
        auto targetFn = runtime->lookupFunction(0x187E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB88u; }
        if (ctx->pc != 0x17AB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187E30_0x187e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB88u; }
        if (ctx->pc != 0x17AB88u) { return; }
    }
    ctx->pc = 0x17AB88u;
label_17ab88:
    // 0x17ab88: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AB88u;
    SET_GPR_U32(ctx, 31, 0x17AB90u);
    ctx->pc = 0x17AB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB88u;
            // 0x17ab8c: 0x24041400  addiu       $a0, $zero, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB90u; }
        if (ctx->pc != 0x17AB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB90u; }
        if (ctx->pc != 0x17AB90u) { return; }
    }
    ctx->pc = 0x17AB90u;
label_17ab90:
    // 0x17ab90: 0xc047e28  jal         func_11F8A0
    ctx->pc = 0x17AB90u;
    SET_GPR_U32(ctx, 31, 0x17AB98u);
    ctx->pc = 0x11F8A0u;
    if (runtime->hasFunction(0x11F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x11F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB98u; }
        if (ctx->pc != 0x17AB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F8A0_0x11f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AB98u; }
        if (ctx->pc != 0x17AB98u) { return; }
    }
    ctx->pc = 0x17AB98u;
label_17ab98:
    // 0x17ab98: 0x24041401  addiu       $a0, $zero, 0x1401
    ctx->pc = 0x17ab98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5121));
    // 0x17ab9c: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17AB9Cu;
    SET_GPR_U32(ctx, 31, 0x17ABA4u);
    ctx->pc = 0x17ABA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AB9Cu;
            // 0x17aba0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABA4u; }
        if (ctx->pc != 0x17ABA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABA4u; }
        if (ctx->pc != 0x17ABA4u) { return; }
    }
    ctx->pc = 0x17ABA4u;
label_17aba4:
    // 0x17aba4: 0xc061faa  jal         func_187EA8
    ctx->pc = 0x17ABA4u;
    SET_GPR_U32(ctx, 31, 0x17ABACu);
    ctx->pc = 0x187EA8u;
    if (runtime->hasFunction(0x187EA8u)) {
        auto targetFn = runtime->lookupFunction(0x187EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABACu; }
        if (ctx->pc != 0x17ABACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187EA8_0x187ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABACu; }
        if (ctx->pc != 0x17ABACu) { return; }
    }
    ctx->pc = 0x17ABACu;
label_17abac:
    // 0x17abac: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17ABACu;
    {
        const bool branch_taken_0x17abac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17ABB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABACu;
            // 0x17abb0: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abac) {
            ctx->pc = 0x17ABD8u;
            goto label_17abd8;
        }
    }
    ctx->pc = 0x17ABB4u;
    // 0x17abb4: 0x0  nop
    ctx->pc = 0x17abb4u;
    // NOP
label_17abb8:
    // 0x17abb8: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17ABB8u;
    SET_GPR_U32(ctx, 31, 0x17ABC0u);
    ctx->pc = 0x17ABBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABB8u;
            // 0x17abbc: 0x24041500  addiu       $a0, $zero, 0x1500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABC0u; }
        if (ctx->pc != 0x17ABC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABC0u; }
        if (ctx->pc != 0x17ABC0u) { return; }
    }
    ctx->pc = 0x17ABC0u;
label_17abc0:
    // 0x17abc0: 0xc047e28  jal         func_11F8A0
    ctx->pc = 0x17ABC0u;
    SET_GPR_U32(ctx, 31, 0x17ABC8u);
    ctx->pc = 0x11F8A0u;
    if (runtime->hasFunction(0x11F8A0u)) {
        auto targetFn = runtime->lookupFunction(0x11F8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABC8u; }
        if (ctx->pc != 0x17ABC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011F8A0_0x11f8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABC8u; }
        if (ctx->pc != 0x17ABC8u) { return; }
    }
    ctx->pc = 0x17ABC8u;
label_17abc8:
    // 0x17abc8: 0x24041501  addiu       $a0, $zero, 0x1501
    ctx->pc = 0x17abc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5377));
    // 0x17abcc: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17ABCCu;
    SET_GPR_U32(ctx, 31, 0x17ABD4u);
    ctx->pc = 0x17ABD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABCCu;
            // 0x17abd0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABD4u; }
        if (ctx->pc != 0x17ABD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17ABD4u; }
        if (ctx->pc != 0x17ABD4u) { return; }
    }
    ctx->pc = 0x17ABD4u;
label_17abd4:
    // 0x17abd4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_17abd8:
    // 0x17abd8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x17abd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x17abdc: 0x264443dc  addiu       $a0, $s2, 0x43DC
    ctx->pc = 0x17abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 17372));
    // 0x17abe0: 0x2442440c  addiu       $v0, $v0, 0x440C
    ctx->pc = 0x17abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17420));
    // 0x17abe4: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x17abe4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17abe8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x17abe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x17abec: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17abecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17abf0: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x17ABF0u;
    {
        const bool branch_taken_0x17abf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17ABF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABF0u;
            // 0x17abf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abf0) {
            ctx->pc = 0x17AC24u;
            goto label_17ac24;
        }
    }
    ctx->pc = 0x17ABF8u;
    // 0x17abf8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x17abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x17abfc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17ABFCu;
    {
        const bool branch_taken_0x17abfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x17AC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17ABFCu;
            // 0x17ac00: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17abfc) {
            ctx->pc = 0x17AC20u;
            goto label_17ac20;
        }
    }
    ctx->pc = 0x17AC04u;
    // 0x17ac04: 0xae300034  sw          $s0, 0x34($s1)
    ctx->pc = 0x17ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 16));
    // 0x17ac08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ac08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ac0c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x17AC0Cu;
    SET_GPR_U32(ctx, 31, 0x17AC14u);
    ctx->pc = 0x17AC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC0Cu;
            // 0x17ac10: 0x248458e8  addiu       $a0, $a0, 0x58E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC14u; }
        if (ctx->pc != 0x17AC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17AC14u; }
        if (ctx->pc != 0x17AC14u) { return; }
    }
    ctx->pc = 0x17AC14u;
label_17ac14:
    // 0x17ac14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17AC14u;
    {
        const bool branch_taken_0x17ac14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC14u;
            // 0x17ac18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ac14) {
            ctx->pc = 0x17AC24u;
            goto label_17ac24;
        }
    }
    ctx->pc = 0x17AC1Cu;
    // 0x17ac1c: 0x0  nop
    ctx->pc = 0x17ac1cu;
    // NOP
label_17ac20:
    // 0x17ac20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ac20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17ac24:
    // 0x17ac24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ac24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17ac28:
    // 0x17ac28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ac28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ac2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ac2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ac30: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x17ac30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ac34: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC34u;
            // 0x17ac38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AC3Cu;
    // 0x17ac3c: 0x0  nop
    ctx->pc = 0x17ac3cu;
    // NOP
    // 0x17ac40: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ac40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ac44: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC44u;
            // 0x17ac48: 0xa0444414  sb          $a0, 0x4414($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 17428), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AC4Cu;
    // 0x17ac4c: 0x0  nop
    ctx->pc = 0x17ac4cu;
    // NOP
    // 0x17ac50: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17ac54: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC54u;
            // 0x17ac58: 0xac444410  sw          $a0, 0x4410($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 17424), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AC5Cu;
    // 0x17ac5c: 0x0  nop
    ctx->pc = 0x17ac5cu;
    // NOP
    // 0x17ac60: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17ac64: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC64u;
            // 0x17ac68: 0x90624414  lbu         $v0, 0x4414($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 17428)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AC6Cu;
    // 0x17ac6c: 0x0  nop
    ctx->pc = 0x17ac6cu;
    // NOP
    // 0x17ac70: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x17AC74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17AC74u;
            // 0x17ac78: 0x8c624410  lw          $v0, 0x4410($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17424)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17AC7Cu;
    // 0x17ac7c: 0x0  nop
    ctx->pc = 0x17ac7cu;
    // NOP
}
