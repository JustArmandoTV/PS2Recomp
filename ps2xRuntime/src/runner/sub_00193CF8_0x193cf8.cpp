#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00193CF8
// Address: 0x193cf8 - 0x193e98
void sub_00193CF8_0x193cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00193CF8_0x193cf8");
#endif

    switch (ctx->pc) {
        case 0x193cf8u: goto label_193cf8;
        case 0x193cfcu: goto label_193cfc;
        case 0x193d00u: goto label_193d00;
        case 0x193d04u: goto label_193d04;
        case 0x193d08u: goto label_193d08;
        case 0x193d0cu: goto label_193d0c;
        case 0x193d10u: goto label_193d10;
        case 0x193d14u: goto label_193d14;
        case 0x193d18u: goto label_193d18;
        case 0x193d1cu: goto label_193d1c;
        case 0x193d20u: goto label_193d20;
        case 0x193d24u: goto label_193d24;
        case 0x193d28u: goto label_193d28;
        case 0x193d2cu: goto label_193d2c;
        case 0x193d30u: goto label_193d30;
        case 0x193d34u: goto label_193d34;
        case 0x193d38u: goto label_193d38;
        case 0x193d3cu: goto label_193d3c;
        case 0x193d40u: goto label_193d40;
        case 0x193d44u: goto label_193d44;
        case 0x193d48u: goto label_193d48;
        case 0x193d4cu: goto label_193d4c;
        case 0x193d50u: goto label_193d50;
        case 0x193d54u: goto label_193d54;
        case 0x193d58u: goto label_193d58;
        case 0x193d5cu: goto label_193d5c;
        case 0x193d60u: goto label_193d60;
        case 0x193d64u: goto label_193d64;
        case 0x193d68u: goto label_193d68;
        case 0x193d6cu: goto label_193d6c;
        case 0x193d70u: goto label_193d70;
        case 0x193d74u: goto label_193d74;
        case 0x193d78u: goto label_193d78;
        case 0x193d7cu: goto label_193d7c;
        case 0x193d80u: goto label_193d80;
        case 0x193d84u: goto label_193d84;
        case 0x193d88u: goto label_193d88;
        case 0x193d8cu: goto label_193d8c;
        case 0x193d90u: goto label_193d90;
        case 0x193d94u: goto label_193d94;
        case 0x193d98u: goto label_193d98;
        case 0x193d9cu: goto label_193d9c;
        case 0x193da0u: goto label_193da0;
        case 0x193da4u: goto label_193da4;
        case 0x193da8u: goto label_193da8;
        case 0x193dacu: goto label_193dac;
        case 0x193db0u: goto label_193db0;
        case 0x193db4u: goto label_193db4;
        case 0x193db8u: goto label_193db8;
        case 0x193dbcu: goto label_193dbc;
        case 0x193dc0u: goto label_193dc0;
        case 0x193dc4u: goto label_193dc4;
        case 0x193dc8u: goto label_193dc8;
        case 0x193dccu: goto label_193dcc;
        case 0x193dd0u: goto label_193dd0;
        case 0x193dd4u: goto label_193dd4;
        case 0x193dd8u: goto label_193dd8;
        case 0x193ddcu: goto label_193ddc;
        case 0x193de0u: goto label_193de0;
        case 0x193de4u: goto label_193de4;
        case 0x193de8u: goto label_193de8;
        case 0x193decu: goto label_193dec;
        case 0x193df0u: goto label_193df0;
        case 0x193df4u: goto label_193df4;
        case 0x193df8u: goto label_193df8;
        case 0x193dfcu: goto label_193dfc;
        case 0x193e00u: goto label_193e00;
        case 0x193e04u: goto label_193e04;
        case 0x193e08u: goto label_193e08;
        case 0x193e0cu: goto label_193e0c;
        case 0x193e10u: goto label_193e10;
        case 0x193e14u: goto label_193e14;
        case 0x193e18u: goto label_193e18;
        case 0x193e1cu: goto label_193e1c;
        case 0x193e20u: goto label_193e20;
        case 0x193e24u: goto label_193e24;
        case 0x193e28u: goto label_193e28;
        case 0x193e2cu: goto label_193e2c;
        case 0x193e30u: goto label_193e30;
        case 0x193e34u: goto label_193e34;
        case 0x193e38u: goto label_193e38;
        case 0x193e3cu: goto label_193e3c;
        case 0x193e40u: goto label_193e40;
        case 0x193e44u: goto label_193e44;
        case 0x193e48u: goto label_193e48;
        case 0x193e4cu: goto label_193e4c;
        case 0x193e50u: goto label_193e50;
        case 0x193e54u: goto label_193e54;
        case 0x193e58u: goto label_193e58;
        case 0x193e5cu: goto label_193e5c;
        case 0x193e60u: goto label_193e60;
        case 0x193e64u: goto label_193e64;
        case 0x193e68u: goto label_193e68;
        case 0x193e6cu: goto label_193e6c;
        case 0x193e70u: goto label_193e70;
        case 0x193e74u: goto label_193e74;
        case 0x193e78u: goto label_193e78;
        case 0x193e7cu: goto label_193e7c;
        case 0x193e80u: goto label_193e80;
        case 0x193e84u: goto label_193e84;
        case 0x193e88u: goto label_193e88;
        case 0x193e8cu: goto label_193e8c;
        case 0x193e90u: goto label_193e90;
        case 0x193e94u: goto label_193e94;
        default: break;
    }

    ctx->pc = 0x193cf8u;

label_193cf8:
    // 0x193cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x193cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_193cfc:
    // 0x193cfc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x193cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193d00:
    // 0x193d00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x193d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_193d04:
    // 0x193d04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_193d08:
    if (ctx->pc == 0x193D08u) {
        ctx->pc = 0x193D08u;
            // 0x193d08: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x193D0Cu;
        goto label_193d0c;
    }
    ctx->pc = 0x193D04u;
    {
        const bool branch_taken_0x193d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D04u;
            // 0x193d08: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d04) {
            ctx->pc = 0x193D20u;
            goto label_193d20;
        }
    }
    ctx->pc = 0x193D0Cu;
label_193d0c:
    // 0x193d0c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x193d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_193d10:
    // 0x193d10: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_193d14:
    if (ctx->pc == 0x193D14u) {
        ctx->pc = 0x193D14u;
            // 0x193d14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x193D18u;
        goto label_193d18;
    }
    ctx->pc = 0x193D10u;
    {
        const bool branch_taken_0x193d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x193d10) {
            ctx->pc = 0x193D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x193D10u;
            // 0x193d14: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x193D24u;
            goto label_193d24;
        }
    }
    ctx->pc = 0x193D18u;
label_193d18:
    // 0x193d18: 0x40f809  jalr        $v0
label_193d1c:
    if (ctx->pc == 0x193D1Cu) {
        ctx->pc = 0x193D1Cu;
            // 0x193d1c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x193D20u;
        goto label_193d20;
    }
    ctx->pc = 0x193D18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193D20u);
        ctx->pc = 0x193D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D18u;
            // 0x193d1c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x193D20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193D20u; }
            if (ctx->pc != 0x193D20u) { return; }
        }
        }
    }
    ctx->pc = 0x193D20u;
label_193d20:
    // 0x193d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x193d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193d24:
    // 0x193d24: 0x3e00008  jr          $ra
label_193d28:
    if (ctx->pc == 0x193D28u) {
        ctx->pc = 0x193D28u;
            // 0x193d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x193D2Cu;
        goto label_193d2c;
    }
    ctx->pc = 0x193D24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D24u;
            // 0x193d28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193D2Cu;
label_193d2c:
    // 0x193d2c: 0x0  nop
    ctx->pc = 0x193d2cu;
    // NOP
label_193d30:
    // 0x193d30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_193d34:
    // 0x193d34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_193d38:
    // 0x193d38: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x193d38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_193d3c:
    // 0x193d3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_193d40:
    // 0x193d40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x193d40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193d44:
    // 0x193d44: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193d44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_193d48:
    // 0x193d48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_193d4c:
    // 0x193d4c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x193d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193d50:
    // 0x193d50: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x193d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_193d54:
    // 0x193d54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x193d54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_193d58:
    // 0x193d58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x193d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_193d5c:
    // 0x193d5c: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x193d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_193d60:
    // 0x193d60: 0xc0612e8  jal         func_184BA0
label_193d64:
    if (ctx->pc == 0x193D64u) {
        ctx->pc = 0x193D64u;
            // 0x193d64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x193D68u;
        goto label_193d68;
    }
    ctx->pc = 0x193D60u;
    SET_GPR_U32(ctx, 31, 0x193D68u);
    ctx->pc = 0x193D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193D60u;
            // 0x193d64: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184BA0u;
    if (runtime->hasFunction(0x184BA0u)) {
        auto targetFn = runtime->lookupFunction(0x184BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D68u; }
        if (ctx->pc != 0x193D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184BA0_0x184ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D68u; }
        if (ctx->pc != 0x193D68u) { return; }
    }
    ctx->pc = 0x193D68u;
label_193d68:
    // 0x193d68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x193d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193d6c:
    // 0x193d6c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x193d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193d70:
    // 0x193d70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x193d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_193d74:
    // 0x193d74: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x193d74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193d78:
    // 0x193d78: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
label_193d7c:
    if (ctx->pc == 0x193D7Cu) {
        ctx->pc = 0x193D7Cu;
            // 0x193d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x193D80u;
        goto label_193d80;
    }
    ctx->pc = 0x193D78u;
    {
        const bool branch_taken_0x193d78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x193D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D78u;
            // 0x193d7c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193d78) {
            ctx->pc = 0x193DC0u;
            goto label_193dc0;
        }
    }
    ctx->pc = 0x193D80u;
label_193d80:
    // 0x193d80: 0xc064fa6  jal         func_193E98
label_193d84:
    if (ctx->pc == 0x193D84u) {
        ctx->pc = 0x193D88u;
        goto label_193d88;
    }
    ctx->pc = 0x193D80u;
    SET_GPR_U32(ctx, 31, 0x193D88u);
    ctx->pc = 0x193E98u;
    if (runtime->hasFunction(0x193E98u)) {
        auto targetFn = runtime->lookupFunction(0x193E98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D88u; }
        if (ctx->pc != 0x193D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00193E98_0x193e98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193D88u; }
        if (ctx->pc != 0x193D88u) { return; }
    }
    ctx->pc = 0x193D88u;
label_193d88:
    // 0x193d88: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x193d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_193d8c:
    // 0x193d8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x193d8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_193d90:
    // 0x193d90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_193d94:
    // 0x193d94: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x193d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_193d98:
    // 0x193d98: 0x40f809  jalr        $v0
label_193d9c:
    if (ctx->pc == 0x193D9Cu) {
        ctx->pc = 0x193D9Cu;
            // 0x193d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x193DA0u;
        goto label_193da0;
    }
    ctx->pc = 0x193D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193DA0u);
        ctx->pc = 0x193D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193D98u;
            // 0x193d9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x193DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193DA0u; }
            if (ctx->pc != 0x193DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x193DA0u;
label_193da0:
    // 0x193da0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x193da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_193da4:
    // 0x193da4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x193da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_193da8:
    // 0x193da8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x193da8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_193dac:
    // 0x193dac: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x193dacu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_193db0:
    // 0x193db0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x193db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_193db4:
    // 0x193db4: 0x40f809  jalr        $v0
label_193db8:
    if (ctx->pc == 0x193DB8u) {
        ctx->pc = 0x193DB8u;
            // 0x193db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x193DBCu;
        goto label_193dbc;
    }
    ctx->pc = 0x193DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x193DBCu);
        ctx->pc = 0x193DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DB4u;
            // 0x193db8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x193DBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x193DBCu; }
            if (ctx->pc != 0x193DBCu) { return; }
        }
        }
    }
    ctx->pc = 0x193DBCu;
label_193dbc:
    // 0x193dbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x193dbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_193dc0:
    // 0x193dc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193dc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193dc4:
    // 0x193dc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193dc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_193dc8:
    // 0x193dc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193dc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193dcc:
    // 0x193dcc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193dccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_193dd0:
    // 0x193dd0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x193dd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193dd4:
    // 0x193dd4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x193dd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_193dd8:
    // 0x193dd8: 0x3e00008  jr          $ra
label_193ddc:
    if (ctx->pc == 0x193DDCu) {
        ctx->pc = 0x193DDCu;
            // 0x193ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x193DE0u;
        goto label_193de0;
    }
    ctx->pc = 0x193DD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x193DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193DD8u;
            // 0x193ddc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x193DE0u;
label_193de0:
    // 0x193de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x193de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_193de4:
    // 0x193de4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x193de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_193de8:
    // 0x193de8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x193de8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_193dec:
    // 0x193dec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x193decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_193df0:
    // 0x193df0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x193df0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_193df4:
    // 0x193df4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x193df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_193df8:
    // 0x193df8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x193df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_193dfc:
    // 0x193dfc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x193dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_193e00:
    // 0x193e00: 0xc06599a  jal         func_196668
label_193e04:
    if (ctx->pc == 0x193E04u) {
        ctx->pc = 0x193E04u;
            // 0x193e04: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x193E08u;
        goto label_193e08;
    }
    ctx->pc = 0x193E00u;
    SET_GPR_U32(ctx, 31, 0x193E08u);
    ctx->pc = 0x193E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E00u;
            // 0x193e04: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196668u;
    if (runtime->hasFunction(0x196668u)) {
        auto targetFn = runtime->lookupFunction(0x196668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E08u; }
        if (ctx->pc != 0x193E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00196668_0x196668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E08u; }
        if (ctx->pc != 0x193E08u) { return; }
    }
    ctx->pc = 0x193E08u;
label_193e08:
    // 0x193e08: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x193e08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_193e0c:
    // 0x193e0c: 0x240600cc  addiu       $a2, $zero, 0xCC
    ctx->pc = 0x193e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
label_193e10:
    // 0x193e10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x193e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193e14:
    // 0x193e14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_193e18:
    if (ctx->pc == 0x193E18u) {
        ctx->pc = 0x193E18u;
            // 0x193e18: 0x34a5020a  ori         $a1, $a1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
        ctx->pc = 0x193E1Cu;
        goto label_193e1c;
    }
    ctx->pc = 0x193E14u;
    {
        const bool branch_taken_0x193e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E14u;
            // 0x193e18: 0x34a5020a  ori         $a1, $a1, 0x20A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)522);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e14) {
            ctx->pc = 0x193E38u;
            goto label_193e38;
        }
    }
    ctx->pc = 0x193E1Cu;
label_193e1c:
    // 0x193e1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193e1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193e20:
    // 0x193e20: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193e20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_193e24:
    // 0x193e24: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193e24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193e28:
    // 0x193e28: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193e28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_193e2c:
    // 0x193e2c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193e2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193e30:
    // 0x193e30: 0x8064f2a  j           func_193CA8
label_193e34:
    if (ctx->pc == 0x193E34u) {
        ctx->pc = 0x193E34u;
            // 0x193e34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x193E38u;
        goto label_193e38;
    }
    ctx->pc = 0x193E30u;
    ctx->pc = 0x193E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E30u;
            // 0x193e34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193E38u;
label_193e38:
    // 0x193e38: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x193e38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_193e3c:
    // 0x193e3c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x193e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_193e40:
    // 0x193e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x193e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_193e44:
    // 0x193e44: 0xc064bc8  jal         func_192F20
label_193e48:
    if (ctx->pc == 0x193E48u) {
        ctx->pc = 0x193E48u;
            // 0x193e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x193E4Cu;
        goto label_193e4c;
    }
    ctx->pc = 0x193E44u;
    SET_GPR_U32(ctx, 31, 0x193E4Cu);
    ctx->pc = 0x193E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E44u;
            // 0x193e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x192F20u;
    if (runtime->hasFunction(0x192F20u)) {
        auto targetFn = runtime->lookupFunction(0x192F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E4Cu; }
        if (ctx->pc != 0x193E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00192F20_0x192f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x193E4Cu; }
        if (ctx->pc != 0x193E4Cu) { return; }
    }
    ctx->pc = 0x193E4Cu;
label_193e4c:
    // 0x193e4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x193e4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_193e50:
    // 0x193e50: 0x3c05ff03  lui         $a1, 0xFF03
    ctx->pc = 0x193e50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65283 << 16));
label_193e54:
    // 0x193e54: 0x508023  subu        $s0, $v0, $s0
    ctx->pc = 0x193e54u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_193e58:
    // 0x193e58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_193e5c:
    if (ctx->pc == 0x193E5Cu) {
        ctx->pc = 0x193E5Cu;
            // 0x193e5c: 0x34a50305  ori         $a1, $a1, 0x305 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)773);
        ctx->pc = 0x193E60u;
        goto label_193e60;
    }
    ctx->pc = 0x193E58u;
    {
        const bool branch_taken_0x193e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x193E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E58u;
            // 0x193e5c: 0x34a50305  ori         $a1, $a1, 0x305 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)773);
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e58) {
            ctx->pc = 0x193E68u;
            goto label_193e68;
        }
    }
    ctx->pc = 0x193E60u;
label_193e60:
    // 0x193e60: 0x10000003  b           . + 4 + (0x3 << 2)
label_193e64:
    if (ctx->pc == 0x193E64u) {
        ctx->pc = 0x193E64u;
            // 0x193e64: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->pc = 0x193E68u;
        goto label_193e68;
    }
    ctx->pc = 0x193E60u;
    {
        const bool branch_taken_0x193e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x193E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x193E60u;
            // 0x193e64: 0xae710000  sw          $s1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x193e60) {
            ctx->pc = 0x193E70u;
            goto label_193e70;
        }
    }
    ctx->pc = 0x193E68u;
label_193e68:
    // 0x193e68: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x193e68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_193e6c:
    // 0x193e6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x193e6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_193e70:
    // 0x193e70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x193e70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_193e74:
    // 0x193e74: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x193e74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_193e78:
    // 0x193e78: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x193e78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_193e7c:
    // 0x193e7c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x193e7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_193e80:
    // 0x193e80: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x193e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_193e84:
    // 0x193e84: 0x8064f2a  j           func_193CA8
label_193e88:
    if (ctx->pc == 0x193E88u) {
        ctx->pc = 0x193E88u;
            // 0x193e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x193E8Cu;
        goto label_193e8c;
    }
    ctx->pc = 0x193E84u;
    ctx->pc = 0x193E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x193E84u;
            // 0x193e88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193CA8u;
    if (runtime->hasFunction(0x193CA8u)) {
        auto targetFn = runtime->lookupFunction(0x193CA8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00193CA8_0x193ca8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x193E8Cu;
label_193e8c:
    // 0x193e8c: 0x0  nop
    ctx->pc = 0x193e8cu;
    // NOP
label_193e90:
    // 0x193e90: 0x3e00008  jr          $ra
label_193e94:
    if (ctx->pc == 0x193E94u) {
        ctx->pc = 0x193E98u;
        goto label_fallthrough_0x193e90;
    }
    ctx->pc = 0x193E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x193e90:
    ctx->pc = 0x193E98u;
}
