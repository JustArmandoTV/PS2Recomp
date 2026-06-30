#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00178DC8
// Address: 0x178dc8 - 0x178ef0
void sub_00178DC8_0x178dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178DC8_0x178dc8");
#endif

    switch (ctx->pc) {
        case 0x178dc8u: goto label_178dc8;
        case 0x178dccu: goto label_178dcc;
        case 0x178dd0u: goto label_178dd0;
        case 0x178dd4u: goto label_178dd4;
        case 0x178dd8u: goto label_178dd8;
        case 0x178ddcu: goto label_178ddc;
        case 0x178de0u: goto label_178de0;
        case 0x178de4u: goto label_178de4;
        case 0x178de8u: goto label_178de8;
        case 0x178decu: goto label_178dec;
        case 0x178df0u: goto label_178df0;
        case 0x178df4u: goto label_178df4;
        case 0x178df8u: goto label_178df8;
        case 0x178dfcu: goto label_178dfc;
        case 0x178e00u: goto label_178e00;
        case 0x178e04u: goto label_178e04;
        case 0x178e08u: goto label_178e08;
        case 0x178e0cu: goto label_178e0c;
        case 0x178e10u: goto label_178e10;
        case 0x178e14u: goto label_178e14;
        case 0x178e18u: goto label_178e18;
        case 0x178e1cu: goto label_178e1c;
        case 0x178e20u: goto label_178e20;
        case 0x178e24u: goto label_178e24;
        case 0x178e28u: goto label_178e28;
        case 0x178e2cu: goto label_178e2c;
        case 0x178e30u: goto label_178e30;
        case 0x178e34u: goto label_178e34;
        case 0x178e38u: goto label_178e38;
        case 0x178e3cu: goto label_178e3c;
        case 0x178e40u: goto label_178e40;
        case 0x178e44u: goto label_178e44;
        case 0x178e48u: goto label_178e48;
        case 0x178e4cu: goto label_178e4c;
        case 0x178e50u: goto label_178e50;
        case 0x178e54u: goto label_178e54;
        case 0x178e58u: goto label_178e58;
        case 0x178e5cu: goto label_178e5c;
        case 0x178e60u: goto label_178e60;
        case 0x178e64u: goto label_178e64;
        case 0x178e68u: goto label_178e68;
        case 0x178e6cu: goto label_178e6c;
        case 0x178e70u: goto label_178e70;
        case 0x178e74u: goto label_178e74;
        case 0x178e78u: goto label_178e78;
        case 0x178e7cu: goto label_178e7c;
        case 0x178e80u: goto label_178e80;
        case 0x178e84u: goto label_178e84;
        case 0x178e88u: goto label_178e88;
        case 0x178e8cu: goto label_178e8c;
        case 0x178e90u: goto label_178e90;
        case 0x178e94u: goto label_178e94;
        case 0x178e98u: goto label_178e98;
        case 0x178e9cu: goto label_178e9c;
        case 0x178ea0u: goto label_178ea0;
        case 0x178ea4u: goto label_178ea4;
        case 0x178ea8u: goto label_178ea8;
        case 0x178eacu: goto label_178eac;
        case 0x178eb0u: goto label_178eb0;
        case 0x178eb4u: goto label_178eb4;
        case 0x178eb8u: goto label_178eb8;
        case 0x178ebcu: goto label_178ebc;
        case 0x178ec0u: goto label_178ec0;
        case 0x178ec4u: goto label_178ec4;
        case 0x178ec8u: goto label_178ec8;
        case 0x178eccu: goto label_178ecc;
        case 0x178ed0u: goto label_178ed0;
        case 0x178ed4u: goto label_178ed4;
        case 0x178ed8u: goto label_178ed8;
        case 0x178edcu: goto label_178edc;
        case 0x178ee0u: goto label_178ee0;
        case 0x178ee4u: goto label_178ee4;
        case 0x178ee8u: goto label_178ee8;
        case 0x178eecu: goto label_178eec;
        default: break;
    }

    ctx->pc = 0x178dc8u;

label_178dc8:
    // 0x178dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178dcc:
    // 0x178dcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178dccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178dd0:
    // 0x178dd0: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_178dd4:
    if (ctx->pc == 0x178DD4u) {
        ctx->pc = 0x178DD4u;
            // 0x178dd4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x178DD8u;
        goto label_178dd8;
    }
    ctx->pc = 0x178DD0u;
    {
        const bool branch_taken_0x178dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178DD0u;
            // 0x178dd4: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178dd0) {
            ctx->pc = 0x178DF0u;
            goto label_178df0;
        }
    }
    ctx->pc = 0x178DD8u;
label_178dd8:
    // 0x178dd8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178ddc:
    // 0x178ddc: 0xc05e0a6  jal         func_178298
label_178de0:
    if (ctx->pc == 0x178DE0u) {
        ctx->pc = 0x178DE0u;
            // 0x178de0: 0x24844d80  addiu       $a0, $a0, 0x4D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19840));
        ctx->pc = 0x178DE4u;
        goto label_178de4;
    }
    ctx->pc = 0x178DDCu;
    SET_GPR_U32(ctx, 31, 0x178DE4u);
    ctx->pc = 0x178DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178DDCu;
            // 0x178de0: 0x24844d80  addiu       $a0, $a0, 0x4D80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DE4u; }
        if (ctx->pc != 0x178DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178DE4u; }
        if (ctx->pc != 0x178DE4u) { return; }
    }
    ctx->pc = 0x178DE4u;
label_178de4:
    // 0x178de4: 0x1000000e  b           . + 4 + (0xE << 2)
label_178de8:
    if (ctx->pc == 0x178DE8u) {
        ctx->pc = 0x178DE8u;
            // 0x178de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178DECu;
        goto label_178dec;
    }
    ctx->pc = 0x178DE4u;
    {
        const bool branch_taken_0x178de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178DE4u;
            // 0x178de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178de4) {
            ctx->pc = 0x178E20u;
            goto label_178e20;
        }
    }
    ctx->pc = 0x178DECu;
label_178dec:
    // 0x178dec: 0x0  nop
    ctx->pc = 0x178decu;
    // NOP
label_178df0:
    // 0x178df0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178df4:
    // 0x178df4: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x178df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_178df8:
    // 0x178df8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_178dfc:
    if (ctx->pc == 0x178DFCu) {
        ctx->pc = 0x178DFCu;
            // 0x178dfc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178E00u;
        goto label_178e00;
    }
    ctx->pc = 0x178DF8u;
    {
        const bool branch_taken_0x178df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178df8) {
            ctx->pc = 0x178DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178DF8u;
            // 0x178dfc: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178E10u;
            goto label_178e10;
        }
    }
    ctx->pc = 0x178E00u;
label_178e00:
    // 0x178e00: 0x40f809  jalr        $v0
label_178e04:
    if (ctx->pc == 0x178E04u) {
        ctx->pc = 0x178E04u;
            // 0x178e04: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x178E08u;
        goto label_178e08;
    }
    ctx->pc = 0x178E00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178E08u);
        ctx->pc = 0x178E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E00u;
            // 0x178e04: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178E08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178E08u; }
            if (ctx->pc != 0x178E08u) { return; }
        }
        }
    }
    ctx->pc = 0x178E08u;
label_178e08:
    // 0x178e08: 0x10000004  b           . + 4 + (0x4 << 2)
label_178e0c:
    if (ctx->pc == 0x178E0Cu) {
        ctx->pc = 0x178E0Cu;
            // 0x178e0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178E10u;
        goto label_178e10;
    }
    ctx->pc = 0x178E08u;
    {
        const bool branch_taken_0x178e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E08u;
            // 0x178e0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e08) {
            ctx->pc = 0x178E1Cu;
            goto label_178e1c;
        }
    }
    ctx->pc = 0x178E10u;
label_178e10:
    // 0x178e10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178e14:
    // 0x178e14: 0xc05e0a6  jal         func_178298
label_178e18:
    if (ctx->pc == 0x178E18u) {
        ctx->pc = 0x178E18u;
            // 0x178e18: 0x24844da0  addiu       $a0, $a0, 0x4DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19872));
        ctx->pc = 0x178E1Cu;
        goto label_178e1c;
    }
    ctx->pc = 0x178E14u;
    SET_GPR_U32(ctx, 31, 0x178E1Cu);
    ctx->pc = 0x178E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178E14u;
            // 0x178e18: 0x24844da0  addiu       $a0, $a0, 0x4DA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E1Cu; }
        if (ctx->pc != 0x178E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E1Cu; }
        if (ctx->pc != 0x178E1Cu) { return; }
    }
    ctx->pc = 0x178E1Cu;
label_178e1c:
    // 0x178e1c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178e1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178e20:
    // 0x178e20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178e20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178e24:
    // 0x178e24: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178e28:
    // 0x178e28: 0x3e00008  jr          $ra
label_178e2c:
    if (ctx->pc == 0x178E2Cu) {
        ctx->pc = 0x178E2Cu;
            // 0x178e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178E30u;
        goto label_178e30;
    }
    ctx->pc = 0x178E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E28u;
            // 0x178e2c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178E30u;
label_178e30:
    // 0x178e30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178e34:
    // 0x178e34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_178e38:
    // 0x178e38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178e38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178e3c:
    // 0x178e3c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_178e40:
    if (ctx->pc == 0x178E40u) {
        ctx->pc = 0x178E40u;
            // 0x178e40: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x178E44u;
        goto label_178e44;
    }
    ctx->pc = 0x178E3Cu;
    {
        const bool branch_taken_0x178e3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E3Cu;
            // 0x178e40: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e3c) {
            ctx->pc = 0x178E58u;
            goto label_178e58;
        }
    }
    ctx->pc = 0x178E44u;
label_178e44:
    // 0x178e44: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178e48:
    // 0x178e48: 0xc05e0a6  jal         func_178298
label_178e4c:
    if (ctx->pc == 0x178E4Cu) {
        ctx->pc = 0x178E4Cu;
            // 0x178e4c: 0x24844db8  addiu       $a0, $a0, 0x4DB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19896));
        ctx->pc = 0x178E50u;
        goto label_178e50;
    }
    ctx->pc = 0x178E48u;
    SET_GPR_U32(ctx, 31, 0x178E50u);
    ctx->pc = 0x178E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178E48u;
            // 0x178e4c: 0x24844db8  addiu       $a0, $a0, 0x4DB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E50u; }
        if (ctx->pc != 0x178E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E50u; }
        if (ctx->pc != 0x178E50u) { return; }
    }
    ctx->pc = 0x178E50u;
label_178e50:
    // 0x178e50: 0x1000000c  b           . + 4 + (0xC << 2)
label_178e54:
    if (ctx->pc == 0x178E54u) {
        ctx->pc = 0x178E54u;
            // 0x178e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178E58u;
        goto label_178e58;
    }
    ctx->pc = 0x178E50u;
    {
        const bool branch_taken_0x178e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E50u;
            // 0x178e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e50) {
            ctx->pc = 0x178E84u;
            goto label_178e84;
        }
    }
    ctx->pc = 0x178E58u;
label_178e58:
    // 0x178e58: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178e5c:
    // 0x178e5c: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x178e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_178e60:
    // 0x178e60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_178e64:
    if (ctx->pc == 0x178E64u) {
        ctx->pc = 0x178E64u;
            // 0x178e64: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178E68u;
        goto label_178e68;
    }
    ctx->pc = 0x178E60u;
    {
        const bool branch_taken_0x178e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178e60) {
            ctx->pc = 0x178E64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178E60u;
            // 0x178e64: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178E78u;
            goto label_178e78;
        }
    }
    ctx->pc = 0x178E68u;
label_178e68:
    // 0x178e68: 0x40f809  jalr        $v0
label_178e6c:
    if (ctx->pc == 0x178E6Cu) {
        ctx->pc = 0x178E6Cu;
            // 0x178e6c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x178E70u;
        goto label_178e70;
    }
    ctx->pc = 0x178E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178E70u);
        ctx->pc = 0x178E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E68u;
            // 0x178e6c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178E70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178E70u; }
            if (ctx->pc != 0x178E70u) { return; }
        }
        }
    }
    ctx->pc = 0x178E70u;
label_178e70:
    // 0x178e70: 0x10000003  b           . + 4 + (0x3 << 2)
label_178e74:
    if (ctx->pc == 0x178E74u) {
        ctx->pc = 0x178E74u;
            // 0x178e74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x178E78u;
        goto label_178e78;
    }
    ctx->pc = 0x178E70u;
    {
        const bool branch_taken_0x178e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E70u;
            // 0x178e74: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e70) {
            ctx->pc = 0x178E80u;
            goto label_178e80;
        }
    }
    ctx->pc = 0x178E78u;
label_178e78:
    // 0x178e78: 0xc05e0a6  jal         func_178298
label_178e7c:
    if (ctx->pc == 0x178E7Cu) {
        ctx->pc = 0x178E7Cu;
            // 0x178e7c: 0x24844dd8  addiu       $a0, $a0, 0x4DD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19928));
        ctx->pc = 0x178E80u;
        goto label_178e80;
    }
    ctx->pc = 0x178E78u;
    SET_GPR_U32(ctx, 31, 0x178E80u);
    ctx->pc = 0x178E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178E78u;
            // 0x178e7c: 0x24844dd8  addiu       $a0, $a0, 0x4DD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E80u; }
        if (ctx->pc != 0x178E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178298_0x178298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x178E80u; }
        if (ctx->pc != 0x178E80u) { return; }
    }
    ctx->pc = 0x178E80u;
label_178e80:
    // 0x178e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x178e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_178e84:
    // 0x178e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x178e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178e88:
    // 0x178e88: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x178e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_178e8c:
    // 0x178e8c: 0x3e00008  jr          $ra
label_178e90:
    if (ctx->pc == 0x178E90u) {
        ctx->pc = 0x178E90u;
            // 0x178e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178E94u;
        goto label_178e94;
    }
    ctx->pc = 0x178E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E8Cu;
            // 0x178e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178E94u;
label_178e94:
    // 0x178e94: 0x0  nop
    ctx->pc = 0x178e94u;
    // NOP
label_178e98:
    // 0x178e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x178e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_178e9c:
    // 0x178e9c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_178ea0:
    if (ctx->pc == 0x178EA0u) {
        ctx->pc = 0x178EA0u;
            // 0x178ea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x178EA4u;
        goto label_178ea4;
    }
    ctx->pc = 0x178E9Cu;
    {
        const bool branch_taken_0x178e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x178EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178E9Cu;
            // 0x178ea0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e9c) {
            ctx->pc = 0x178EB8u;
            goto label_178eb8;
        }
    }
    ctx->pc = 0x178EA4u;
label_178ea4:
    // 0x178ea4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x178ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_178ea8:
    // 0x178ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178eac:
    // 0x178eac: 0x24844df0  addiu       $a0, $a0, 0x4DF0
    ctx->pc = 0x178eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19952));
label_178eb0:
    // 0x178eb0: 0x805e0a6  j           func_178298
label_178eb4:
    if (ctx->pc == 0x178EB4u) {
        ctx->pc = 0x178EB4u;
            // 0x178eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178EB8u;
        goto label_178eb8;
    }
    ctx->pc = 0x178EB0u;
    ctx->pc = 0x178EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178EB0u;
            // 0x178eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x178EB8u;
label_178eb8:
    // 0x178eb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_178ebc:
    // 0x178ebc: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x178ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_178ec0:
    // 0x178ec0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_178ec4:
    if (ctx->pc == 0x178EC4u) {
        ctx->pc = 0x178EC4u;
            // 0x178ec4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->pc = 0x178EC8u;
        goto label_178ec8;
    }
    ctx->pc = 0x178EC0u;
    {
        const bool branch_taken_0x178ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ec0) {
            ctx->pc = 0x178EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x178EC0u;
            // 0x178ec4: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x178EE0u;
            goto label_178ee0;
        }
    }
    ctx->pc = 0x178EC8u;
label_178ec8:
    // 0x178ec8: 0x40f809  jalr        $v0
label_178ecc:
    if (ctx->pc == 0x178ECCu) {
        ctx->pc = 0x178ECCu;
            // 0x178ecc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x178ED0u;
        goto label_178ed0;
    }
    ctx->pc = 0x178EC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x178ED0u);
        ctx->pc = 0x178ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178EC8u;
            // 0x178ecc: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x178ED0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x178ED0u; }
            if (ctx->pc != 0x178ED0u) { return; }
        }
        }
    }
    ctx->pc = 0x178ED0u;
label_178ed0:
    // 0x178ed0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178ed4:
    // 0x178ed4: 0x3e00008  jr          $ra
label_178ed8:
    if (ctx->pc == 0x178ED8u) {
        ctx->pc = 0x178ED8u;
            // 0x178ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178EDCu;
        goto label_178edc;
    }
    ctx->pc = 0x178ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x178ED4u;
            // 0x178ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x178EDCu;
label_178edc:
    // 0x178edc: 0x0  nop
    ctx->pc = 0x178edcu;
    // NOP
label_178ee0:
    // 0x178ee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x178ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_178ee4:
    // 0x178ee4: 0x24844e10  addiu       $a0, $a0, 0x4E10
    ctx->pc = 0x178ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19984));
label_178ee8:
    // 0x178ee8: 0x805e0a6  j           func_178298
label_178eec:
    if (ctx->pc == 0x178EECu) {
        ctx->pc = 0x178EECu;
            // 0x178eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x178EF0u;
        goto label_fallthrough_0x178ee8;
    }
    ctx->pc = 0x178EE8u;
    ctx->pc = 0x178EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x178EE8u;
            // 0x178eec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178298u;
    if (runtime->hasFunction(0x178298u)) {
        auto targetFn = runtime->lookupFunction(0x178298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00178298_0x178298(rdram, ctx, runtime); return;
    }
label_fallthrough_0x178ee8:
    ctx->pc = 0x178EF0u;
}
