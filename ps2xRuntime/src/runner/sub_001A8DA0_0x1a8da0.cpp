#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A8DA0
// Address: 0x1a8da0 - 0x1a8e60
void sub_001A8DA0_0x1a8da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8DA0_0x1a8da0");
#endif

    switch (ctx->pc) {
        case 0x1a8da0u: goto label_1a8da0;
        case 0x1a8da4u: goto label_1a8da4;
        case 0x1a8da8u: goto label_1a8da8;
        case 0x1a8dacu: goto label_1a8dac;
        case 0x1a8db0u: goto label_1a8db0;
        case 0x1a8db4u: goto label_1a8db4;
        case 0x1a8db8u: goto label_1a8db8;
        case 0x1a8dbcu: goto label_1a8dbc;
        case 0x1a8dc0u: goto label_1a8dc0;
        case 0x1a8dc4u: goto label_1a8dc4;
        case 0x1a8dc8u: goto label_1a8dc8;
        case 0x1a8dccu: goto label_1a8dcc;
        case 0x1a8dd0u: goto label_1a8dd0;
        case 0x1a8dd4u: goto label_1a8dd4;
        case 0x1a8dd8u: goto label_1a8dd8;
        case 0x1a8ddcu: goto label_1a8ddc;
        case 0x1a8de0u: goto label_1a8de0;
        case 0x1a8de4u: goto label_1a8de4;
        case 0x1a8de8u: goto label_1a8de8;
        case 0x1a8decu: goto label_1a8dec;
        case 0x1a8df0u: goto label_1a8df0;
        case 0x1a8df4u: goto label_1a8df4;
        case 0x1a8df8u: goto label_1a8df8;
        case 0x1a8dfcu: goto label_1a8dfc;
        case 0x1a8e00u: goto label_1a8e00;
        case 0x1a8e04u: goto label_1a8e04;
        case 0x1a8e08u: goto label_1a8e08;
        case 0x1a8e0cu: goto label_1a8e0c;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e14u: goto label_1a8e14;
        case 0x1a8e18u: goto label_1a8e18;
        case 0x1a8e1cu: goto label_1a8e1c;
        case 0x1a8e20u: goto label_1a8e20;
        case 0x1a8e24u: goto label_1a8e24;
        case 0x1a8e28u: goto label_1a8e28;
        case 0x1a8e2cu: goto label_1a8e2c;
        case 0x1a8e30u: goto label_1a8e30;
        case 0x1a8e34u: goto label_1a8e34;
        case 0x1a8e38u: goto label_1a8e38;
        case 0x1a8e3cu: goto label_1a8e3c;
        case 0x1a8e40u: goto label_1a8e40;
        case 0x1a8e44u: goto label_1a8e44;
        case 0x1a8e48u: goto label_1a8e48;
        case 0x1a8e4cu: goto label_1a8e4c;
        case 0x1a8e50u: goto label_1a8e50;
        case 0x1a8e54u: goto label_1a8e54;
        case 0x1a8e58u: goto label_1a8e58;
        case 0x1a8e5cu: goto label_1a8e5c;
        default: break;
    }

    ctx->pc = 0x1a8da0u;

label_1a8da0:
    // 0x1a8da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a8da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a8da4:
    // 0x1a8da4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a8da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a8da8:
    // 0x1a8da8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8dac:
    // 0x1a8dac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a8dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a8db0:
    // 0x1a8db0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a8db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a8db4:
    // 0x1a8db4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a8db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a8db8:
    // 0x1a8db8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a8db8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a8dbc:
    // 0x1a8dbc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a8dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1a8dc0:
    // 0x1a8dc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a8dc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a8dc4:
    // 0x1a8dc4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1a8dc8:
    // 0x1a8dc8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1a8dc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a8dcc:
    // 0x1a8dcc: 0xc069616  jal         func_1A5858
label_1a8dd0:
    if (ctx->pc == 0x1A8DD0u) {
        ctx->pc = 0x1A8DD0u;
            // 0x1a8dd0: 0x8e051ff4  lw          $a1, 0x1FF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8180)));
        ctx->pc = 0x1A8DD4u;
        goto label_1a8dd4;
    }
    ctx->pc = 0x1A8DCCu;
    SET_GPR_U32(ctx, 31, 0x1A8DD4u);
    ctx->pc = 0x1A8DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DCCu;
            // 0x1a8dd0: 0x8e051ff4  lw          $a1, 0x1FF4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5858u;
    if (runtime->hasFunction(0x1A5858u)) {
        auto targetFn = runtime->lookupFunction(0x1A5858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DD4u; }
        if (ctx->pc != 0x1A8DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5858_0x1a5858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A8DD4u; }
        if (ctx->pc != 0x1A8DD4u) { return; }
    }
    ctx->pc = 0x1A8DD4u;
label_1a8dd4:
    // 0x1a8dd4: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_1a8dd8:
    if (ctx->pc == 0x1A8DD8u) {
        ctx->pc = 0x1A8DD8u;
            // 0x1a8dd8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1A8DDCu;
        goto label_1a8ddc;
    }
    ctx->pc = 0x1A8DD4u;
    {
        const bool branch_taken_0x1a8dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a8dd4) {
            ctx->pc = 0x1A8DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8DD4u;
            // 0x1a8dd8: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A8E48u;
            goto label_1a8e48;
        }
    }
    ctx->pc = 0x1A8DDCu;
label_1a8ddc:
    // 0x1a8ddc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a8ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a8de0:
    // 0x1a8de0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1a8de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1a8de4:
    // 0x1a8de4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1a8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1a8de8:
    // 0x1a8de8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a8de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a8dec:
    // 0x1a8dec: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a8decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8df0:
    // 0x1a8df0: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1a8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1a8df4:
    // 0x1a8df4: 0xae650000  sw          $a1, 0x0($s3)
    ctx->pc = 0x1a8df4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 5));
label_1a8df8:
    // 0x1a8df8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1a8df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a8dfc:
    // 0x1a8dfc: 0x28c20800  slti        $v0, $a2, 0x800
    ctx->pc = 0x1a8dfcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2048) ? 1 : 0);
label_1a8e00:
    // 0x1a8e00: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1a8e04:
    if (ctx->pc == 0x1A8E04u) {
        ctx->pc = 0x1A8E04u;
            // 0x1a8e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E08u;
        goto label_1a8e08;
    }
    ctx->pc = 0x1A8E00u;
    {
        const bool branch_taken_0x1a8e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E00u;
            // 0x1a8e04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e00) {
            ctx->pc = 0x1A8E44u;
            goto label_1a8e44;
        }
    }
    ctx->pc = 0x1A8E08u;
label_1a8e08:
    // 0x1a8e08: 0x8e02381c  lw          $v0, 0x381C($s0)
    ctx->pc = 0x1a8e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14364)));
label_1a8e0c:
    // 0x1a8e0c: 0x10a2000d  beq         $a1, $v0, . + 4 + (0xD << 2)
label_1a8e10:
    if (ctx->pc == 0x1A8E10u) {
        ctx->pc = 0x1A8E10u;
            // 0x1a8e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E14u;
        goto label_1a8e14;
    }
    ctx->pc = 0x1A8E0Cu;
    {
        const bool branch_taken_0x1a8e0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A8E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E0Cu;
            // 0x1a8e10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e0c) {
            ctx->pc = 0x1A8E44u;
            goto label_1a8e44;
        }
    }
    ctx->pc = 0x1A8E14u;
label_1a8e14:
    // 0x1a8e14: 0x8e023818  lw          $v0, 0x3818($s0)
    ctx->pc = 0x1a8e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14360)));
label_1a8e18:
    // 0x1a8e18: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1a8e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_1a8e1c:
    // 0x1a8e1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1a8e20:
    if (ctx->pc == 0x1A8E20u) {
        ctx->pc = 0x1A8E20u;
            // 0x1a8e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E24u;
        goto label_1a8e24;
    }
    ctx->pc = 0x1A8E1Cu;
    {
        const bool branch_taken_0x1a8e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E1Cu;
            // 0x1a8e20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e1c) {
            ctx->pc = 0x1A8E44u;
            goto label_1a8e44;
        }
    }
    ctx->pc = 0x1A8E24u;
label_1a8e24:
    // 0x1a8e24: 0x8e023810  lw          $v0, 0x3810($s0)
    ctx->pc = 0x1a8e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14352)));
label_1a8e28:
    // 0x1a8e28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a8e2c:
    if (ctx->pc == 0x1A8E2Cu) {
        ctx->pc = 0x1A8E2Cu;
            // 0x1a8e2c: 0x8e043814  lw          $a0, 0x3814($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14356)));
        ctx->pc = 0x1A8E30u;
        goto label_1a8e30;
    }
    ctx->pc = 0x1A8E28u;
    {
        const bool branch_taken_0x1a8e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E28u;
            // 0x1a8e2c: 0x8e043814  lw          $a0, 0x3814($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 14356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8e28) {
            ctx->pc = 0x1A8E38u;
            goto label_1a8e38;
        }
    }
    ctx->pc = 0x1A8E30u;
label_1a8e30:
    // 0x1a8e30: 0x40f809  jalr        $v0
label_1a8e34:
    if (ctx->pc == 0x1A8E34u) {
        ctx->pc = 0x1A8E38u;
        goto label_1a8e38;
    }
    ctx->pc = 0x1A8E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8E38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8E38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8E38u; }
            if (ctx->pc != 0x1A8E38u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8E38u;
label_1a8e38:
    // 0x1a8e38: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1a8e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a8e3c:
    // 0x1a8e3c: 0xae02381c  sw          $v0, 0x381C($s0)
    ctx->pc = 0x1a8e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14364), GPR_U32(ctx, 2));
label_1a8e40:
    // 0x1a8e40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8e40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8e44:
    // 0x1a8e44: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1a8e44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8e48:
    // 0x1a8e48: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1a8e48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a8e4c:
    // 0x1a8e4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1a8e4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8e50:
    // 0x1a8e50: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1a8e50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a8e54:
    // 0x1a8e54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a8e54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8e58:
    // 0x1a8e58: 0x3e00008  jr          $ra
label_1a8e5c:
    if (ctx->pc == 0x1A8E5Cu) {
        ctx->pc = 0x1A8E5Cu;
            // 0x1a8e5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1A8E60u;
        goto label_fallthrough_0x1a8e58;
    }
    ctx->pc = 0x1A8E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8E58u;
            // 0x1a8e5c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a8e58:
    ctx->pc = 0x1A8E60u;
}
