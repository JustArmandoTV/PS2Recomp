#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173D48
// Address: 0x173d48 - 0x173ea8
void sub_00173D48_0x173d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173D48_0x173d48");
#endif

    switch (ctx->pc) {
        case 0x173db0u: goto label_173db0;
        case 0x173de8u: goto label_173de8;
        case 0x173e2cu: goto label_173e2c;
        case 0x173e40u: goto label_173e40;
        case 0x173e60u: goto label_173e60;
        case 0x173e7cu: goto label_173e7c;
        case 0x173e88u: goto label_173e88;
        case 0x173e90u: goto label_173e90;
        default: break;
    }

    ctx->pc = 0x173d48u;

    // 0x173d48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173d4c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173d50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173d50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d54: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x173d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x173d58: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x173d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d5c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x173d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x173d60: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x173d60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d64: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173d68: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x173D68u;
    {
        const bool branch_taken_0x173d68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x173D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173D68u;
            // 0x173d6c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173d68) {
            ctx->pc = 0x173D98u;
            goto label_173d98;
        }
    }
    ctx->pc = 0x173D70u;
    // 0x173d70: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x173d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x173d74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173d74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173d78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173d7c: 0x24844308  addiu       $a0, $a0, 0x4308
    ctx->pc = 0x173d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17160));
    // 0x173d80: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173d80u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173d84: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173d84u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173d88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173d88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173d8c: 0x8059f4e  j           func_167D38
    ctx->pc = 0x173D8Cu;
    ctx->pc = 0x173D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173D8Cu;
            // 0x173d90: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x173D94u;
    // 0x173d94: 0x0  nop
    ctx->pc = 0x173d94u;
    // NOP
label_173d98:
    // 0x173d98: 0x820300ad  lb          $v1, 0xAD($s0)
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 173)));
    // 0x173d9c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x173d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173da0: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173DA0u;
    {
        const bool branch_taken_0x173da0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x173DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DA0u;
            // 0x173da4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173da0) {
            ctx->pc = 0x173DC4u;
            goto label_173dc4;
        }
    }
    ctx->pc = 0x173DA8u;
    // 0x173da8: 0xc05c0b6  jal         func_1702D8
    ctx->pc = 0x173DA8u;
    SET_GPR_U32(ctx, 31, 0x173DB0u);
    ctx->pc = 0x173DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173DA8u;
            // 0x173dac: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1702D8u;
    if (runtime->hasFunction(0x1702D8u)) {
        auto targetFn = runtime->lookupFunction(0x1702D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DB0u; }
        if (ctx->pc != 0x173DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001702D8_0x1702d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DB0u; }
        if (ctx->pc != 0x173DB0u) { return; }
    }
    ctx->pc = 0x173DB0u;
label_173db0:
    // 0x173db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x173db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173db4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x173db8: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x173DB8u;
    {
        const bool branch_taken_0x173db8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x173DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DB8u;
            // 0x173dbc: 0x3c03005e  lui         $v1, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173db8) {
            ctx->pc = 0x173DC8u;
            goto label_173dc8;
        }
    }
    ctx->pc = 0x173DC0u;
    // 0x173dc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173dc4:
    // 0x173dc4: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x173dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
label_173dc8:
    // 0x173dc8: 0x8c629d80  lw          $v0, -0x6280($v1)
    ctx->pc = 0x173dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294942080)));
    // 0x173dcc: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x173DCCu;
    {
        const bool branch_taken_0x173dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173DCCu;
            // 0x173dd0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173dcc) {
            ctx->pc = 0x173E04u;
            goto label_173e04;
        }
    }
    ctx->pc = 0x173DD4u;
    // 0x173dd4: 0x2402ff80  addiu       $v0, $zero, -0x80
    ctx->pc = 0x173dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
    // 0x173dd8: 0x5662000a  bnel        $s3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x173DD8u;
    {
        const bool branch_taken_0x173dd8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x173dd8) {
            ctx->pc = 0x173DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173DD8u;
            // 0x173ddc: 0x2713021  addu        $a2, $s3, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173E04u;
            goto label_173e04;
        }
    }
    ctx->pc = 0x173DE0u;
    // 0x173de0: 0xc05c04c  jal         func_170130
    ctx->pc = 0x173DE0u;
    SET_GPR_U32(ctx, 31, 0x173DE8u);
    ctx->pc = 0x173DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173DE0u;
            // 0x173de4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DE8u; }
        if (ctx->pc != 0x173DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170130_0x170130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173DE8u; }
        if (ctx->pc != 0x173DE8u) { return; }
    }
    ctx->pc = 0x173DE8u;
label_173de8:
    // 0x173de8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x173de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x173dec: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x173DECu;
    {
        const bool branch_taken_0x173dec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x173dec) {
            ctx->pc = 0x173DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173DECu;
            // 0x173df0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173E00u;
            goto label_173e00;
        }
    }
    ctx->pc = 0x173DF4u;
    // 0x173df4: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x173df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x173df8: 0x2406fff1  addiu       $a2, $zero, -0xF
    ctx->pc = 0x173df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
    // 0x173dfc: 0x52300b  movn        $a2, $v0, $s2
    ctx->pc = 0x173dfcu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_173e00:
    // 0x173e00: 0xd13021  addu        $a2, $a2, $s1
    ctx->pc = 0x173e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 17)));
label_173e04:
    // 0x173e04: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
    // 0x173e08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x173e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x173e0c: 0xa4530042  sh          $s3, 0x42($v0)
    ctx->pc = 0x173e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 66), (uint16_t)GPR_U32(ctx, 19));
    // 0x173e10: 0x82030003  lb          $v1, 0x3($s0)
    ctx->pc = 0x173e10u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x173e14: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x173e14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x173e18: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x173E18u;
    {
        const bool branch_taken_0x173e18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E18u;
            // 0x173e1c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e18) {
            ctx->pc = 0x173E38u;
            goto label_173e38;
        }
    }
    ctx->pc = 0x173E20u;
    // 0x173e20: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x173e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x173e24: 0xc05baba  jal         func_16EAE8
    ctx->pc = 0x173E24u;
    SET_GPR_U32(ctx, 31, 0x173E2Cu);
    ctx->pc = 0x173E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E24u;
            // 0x173e28: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EAE8u;
    if (runtime->hasFunction(0x16EAE8u)) {
        auto targetFn = runtime->lookupFunction(0x16EAE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E2Cu; }
        if (ctx->pc != 0x173E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EAE8_0x16eae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E2Cu; }
        if (ctx->pc != 0x173E2Cu) { return; }
    }
    ctx->pc = 0x173E2Cu;
label_173e2c:
    // 0x173e2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x173E2Cu;
    {
        const bool branch_taken_0x173e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E2Cu;
            // 0x173e30: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173e2c) {
            ctx->pc = 0x173E44u;
            goto label_173e44;
        }
    }
    ctx->pc = 0x173E34u;
    // 0x173e34: 0x0  nop
    ctx->pc = 0x173e34u;
    // NOP
label_173e38:
    // 0x173e38: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x173E38u;
    SET_GPR_U32(ctx, 31, 0x173E40u);
    ctx->pc = 0x173E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E38u;
            // 0x173e3c: 0x24844338  addiu       $a0, $a0, 0x4338 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E40u; }
        if (ctx->pc != 0x173E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E40u; }
        if (ctx->pc != 0x173E40u) { return; }
    }
    ctx->pc = 0x173E40u;
label_173e40:
    // 0x173e40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173e40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_173e44:
    // 0x173e44: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173e44u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173e48: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x173e48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173e4c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x173e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x173e50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173e50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173e54: 0x3e00008  jr          $ra
    ctx->pc = 0x173E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173E54u;
            // 0x173e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173E5Cu;
    // 0x173e5c: 0x0  nop
    ctx->pc = 0x173e5cu;
    // NOP
label_173e60:
    // 0x173e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x173e64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x173e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x173e68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173e68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x173e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x173e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x173e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x173e74: 0xc0599de  jal         func_166778
    ctx->pc = 0x173E74u;
    SET_GPR_U32(ctx, 31, 0x173E7Cu);
    ctx->pc = 0x173E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E74u;
            // 0x173e78: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166778u;
    if (runtime->hasFunction(0x166778u)) {
        auto targetFn = runtime->lookupFunction(0x166778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E7Cu; }
        if (ctx->pc != 0x173E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166778_0x166778(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E7Cu; }
        if (ctx->pc != 0x173E7Cu) { return; }
    }
    ctx->pc = 0x173E7Cu;
label_173e7c:
    // 0x173e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x173e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e80: 0xc05cfaa  jal         func_173EA8
    ctx->pc = 0x173E80u;
    SET_GPR_U32(ctx, 31, 0x173E88u);
    ctx->pc = 0x173E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E80u;
            // 0x173e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173EA8u;
    if (runtime->hasFunction(0x173EA8u)) {
        auto targetFn = runtime->lookupFunction(0x173EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E88u; }
        if (ctx->pc != 0x173E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173EA8_0x173ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E88u; }
        if (ctx->pc != 0x173E88u) { return; }
    }
    ctx->pc = 0x173E88u;
label_173e88:
    // 0x173e88: 0xc0599e0  jal         func_166780
    ctx->pc = 0x173E88u;
    SET_GPR_U32(ctx, 31, 0x173E90u);
    ctx->pc = 0x173E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173E88u;
            // 0x173e8c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166780u;
    if (runtime->hasFunction(0x166780u)) {
        auto targetFn = runtime->lookupFunction(0x166780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E90u; }
        if (ctx->pc != 0x173E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166780_0x166780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173E90u; }
        if (ctx->pc != 0x173E90u) { return; }
    }
    ctx->pc = 0x173E90u;
label_173e90:
    // 0x173e90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x173e90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x173e94: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x173e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x173e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173e9c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x173e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x173EA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EA0u;
            // 0x173ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x173EA8u;
}
