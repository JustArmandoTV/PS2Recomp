#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C6D78
// Address: 0x1c6d78 - 0x1c6e88
void sub_001C6D78_0x1c6d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C6D78_0x1c6d78");
#endif

    switch (ctx->pc) {
        case 0x1c6db0u: goto label_1c6db0;
        case 0x1c6dd8u: goto label_1c6dd8;
        case 0x1c6e18u: goto label_1c6e18;
        case 0x1c6e64u: goto label_1c6e64;
        default: break;
    }

    ctx->pc = 0x1c6d78u;

    // 0x1c6d78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c6d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c6d7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c6d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c6d80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c6d80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6d84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c6d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c6d88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1c6d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1c6d8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1c6d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1c6d90: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D90u;
    {
        const bool branch_taken_0x1c6d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6D90u;
            // 0x1c6d94: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6d90) {
            ctx->pc = 0x1C6DA0u;
            goto label_1c6da0;
        }
    }
    ctx->pc = 0x1C6D98u;
    // 0x1c6d98: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C6D98u;
    {
        const bool branch_taken_0x1c6d98 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c6d98) {
            ctx->pc = 0x1C6DA8u;
            goto label_1c6da8;
        }
    }
    ctx->pc = 0x1C6DA0u;
label_1c6da0:
    // 0x1c6da0: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C6DA0u;
    {
        const bool branch_taken_0x1c6da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DA0u;
            // 0x1c6da4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6da0) {
            ctx->pc = 0x1C6E6Cu;
            goto label_1c6e6c;
        }
    }
    ctx->pc = 0x1C6DA8u;
label_1c6da8:
    // 0x1c6da8: 0xc071504  jal         func_1C5410
    ctx->pc = 0x1C6DA8u;
    SET_GPR_U32(ctx, 31, 0x1C6DB0u);
    ctx->pc = 0x1C5410u;
    if (runtime->hasFunction(0x1C5410u)) {
        auto targetFn = runtime->lookupFunction(0x1C5410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DB0u; }
        if (ctx->pc != 0x1C6DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5410_0x1c5410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DB0u; }
        if (ctx->pc != 0x1C6DB0u) { return; }
    }
    ctx->pc = 0x1C6DB0u;
label_1c6db0:
    // 0x1c6db0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1c6db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6db4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x1c6db4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c6db8: 0x2c630022  sltiu       $v1, $v1, 0x22
    ctx->pc = 0x1c6db8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x1c6dbc: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
    ctx->pc = 0x1C6DBCu;
    {
        const bool branch_taken_0x1c6dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DBCu;
            // 0x1c6dc0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6dbc) {
            ctx->pc = 0x1C6E6Cu;
            goto label_1c6e6c;
        }
    }
    ctx->pc = 0x1C6DC4u;
    // 0x1c6dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c6dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6dcc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x1c6dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1c6dd0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C6DD0u;
    SET_GPR_U32(ctx, 31, 0x1C6DD8u);
    ctx->pc = 0x1C6DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6DD0u;
            // 0x1c6dd4: 0x2633000e  addiu       $s3, $s1, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DD8u; }
        if (ctx->pc != 0x1C6DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6DD8u; }
        if (ctx->pc != 0x1C6DD8u) { return; }
    }
    ctx->pc = 0x1C6DD8u;
label_1c6dd8:
    // 0x1c6dd8: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x1c6dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1c6ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c6ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6de0: 0x26450023  addiu       $a1, $s2, 0x23
    ctx->pc = 0x1c6de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 35));
    // 0x1c6de4: 0xae260008  sw          $a2, 0x8($s1)
    ctx->pc = 0x1c6de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 6));
    // 0x1c6de8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x1c6de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1c6dec: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c6decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1c6df0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1c6df0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x1c6df4: 0x9242001b  lbu         $v0, 0x1B($s2)
    ctx->pc = 0x1c6df4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 27)));
    // 0x1c6df8: 0xa222000c  sb          $v0, 0xC($s1)
    ctx->pc = 0x1c6df8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6dfc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6e00: 0x92500022  lbu         $s0, 0x22($s2)
    ctx->pc = 0x1c6e00u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x1c6e04: 0x2603fffe  addiu       $v1, $s0, -0x2
    ctx->pc = 0x1c6e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1c6e08: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1c6e08u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1c6e0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c6e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6e10: 0xc04b156  jal         func_12C558
    ctx->pc = 0x1C6E10u;
    SET_GPR_U32(ctx, 31, 0x1C6E18u);
    ctx->pc = 0x1C6E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E10u;
            // 0x1c6e14: 0x2708021  addu        $s0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E18u; }
        if (ctx->pc != 0x1C6E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E18u; }
        if (ctx->pc != 0x1C6E18u) { return; }
    }
    ctx->pc = 0x1C6E18u;
label_1c6e18:
    // 0x1c6e18: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1c6e18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6e1c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x1c6e1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1c6e20: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c6e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c6e24: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C6E24u;
    {
        const bool branch_taken_0x1c6e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6e24) {
            ctx->pc = 0x1C6E5Cu;
            goto label_1c6e5c;
        }
    }
    ctx->pc = 0x1C6E2Cu;
    // 0x1c6e2c: 0x82630000  lb          $v1, 0x0($s3)
    ctx->pc = 0x1c6e2cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1c6e30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6E30u;
    {
        const bool branch_taken_0x1c6e30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E30u;
            // 0x1c6e34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e30) {
            ctx->pc = 0x1C6E48u;
            goto label_1c6e48;
        }
    }
    ctx->pc = 0x1C6E38u;
    // 0x1c6e38: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x1c6e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x1c6e3c: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1c6e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6e40: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6E40u;
    {
        const bool branch_taken_0x1c6e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E40u;
            // 0x1c6e44: 0xa220000f  sb          $zero, 0xF($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e40) {
            ctx->pc = 0x1C6E5Cu;
            goto label_1c6e5c;
        }
    }
    ctx->pc = 0x1C6E48u;
label_1c6e48:
    // 0x1c6e48: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6E48u;
    {
        const bool branch_taken_0x1c6e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C6E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E48u;
            // 0x1c6e4c: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6e48) {
            ctx->pc = 0x1C6E5Cu;
            goto label_1c6e5c;
        }
    }
    ctx->pc = 0x1C6E50u;
    // 0x1c6e50: 0xa2620000  sb          $v0, 0x0($s3)
    ctx->pc = 0x1c6e50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6e54: 0xa222000f  sb          $v0, 0xF($s1)
    ctx->pc = 0x1c6e54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 15), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6e58: 0xa2200010  sb          $zero, 0x10($s1)
    ctx->pc = 0x1c6e58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 16), (uint8_t)GPR_U32(ctx, 0));
label_1c6e5c:
    // 0x1c6e5c: 0xc071b36  jal         func_1C6CD8
    ctx->pc = 0x1C6E5Cu;
    SET_GPR_U32(ctx, 31, 0x1C6E64u);
    ctx->pc = 0x1C6E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E5Cu;
            // 0x1c6e60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6CD8u;
    if (runtime->hasFunction(0x1C6CD8u)) {
        auto targetFn = runtime->lookupFunction(0x1C6CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E64u; }
        if (ctx->pc != 0x1C6E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6CD8_0x1c6cd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6E64u; }
        if (ctx->pc != 0x1C6E64u) { return; }
    }
    ctx->pc = 0x1C6E64u;
label_1c6e64:
    // 0x1c6e64: 0xa222000d  sb          $v0, 0xD($s1)
    ctx->pc = 0x1c6e64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6e68: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1c6e68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1c6e6c:
    // 0x1c6e6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c6e6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c6e70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c6e70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c6e74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1c6e74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6e78: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1c6e78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c6e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c6e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c6e80: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6E80u;
            // 0x1c6e84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6E88u;
}
