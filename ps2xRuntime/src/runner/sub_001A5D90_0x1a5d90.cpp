#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5D90
// Address: 0x1a5d90 - 0x1a5e30
void sub_001A5D90_0x1a5d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5D90_0x1a5d90");
#endif

    switch (ctx->pc) {
        case 0x1a5d90u: goto label_1a5d90;
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5d98u: goto label_1a5d98;
        case 0x1a5d9cu: goto label_1a5d9c;
        case 0x1a5da0u: goto label_1a5da0;
        case 0x1a5da4u: goto label_1a5da4;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5dacu: goto label_1a5dac;
        case 0x1a5db0u: goto label_1a5db0;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dbcu: goto label_1a5dbc;
        case 0x1a5dc0u: goto label_1a5dc0;
        case 0x1a5dc4u: goto label_1a5dc4;
        case 0x1a5dc8u: goto label_1a5dc8;
        case 0x1a5dccu: goto label_1a5dcc;
        case 0x1a5dd0u: goto label_1a5dd0;
        case 0x1a5dd4u: goto label_1a5dd4;
        case 0x1a5dd8u: goto label_1a5dd8;
        case 0x1a5ddcu: goto label_1a5ddc;
        case 0x1a5de0u: goto label_1a5de0;
        case 0x1a5de4u: goto label_1a5de4;
        case 0x1a5de8u: goto label_1a5de8;
        case 0x1a5decu: goto label_1a5dec;
        case 0x1a5df0u: goto label_1a5df0;
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5df8u: goto label_1a5df8;
        case 0x1a5dfcu: goto label_1a5dfc;
        case 0x1a5e00u: goto label_1a5e00;
        case 0x1a5e04u: goto label_1a5e04;
        case 0x1a5e08u: goto label_1a5e08;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e10u: goto label_1a5e10;
        case 0x1a5e14u: goto label_1a5e14;
        case 0x1a5e18u: goto label_1a5e18;
        case 0x1a5e1cu: goto label_1a5e1c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e24u: goto label_1a5e24;
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e2cu: goto label_1a5e2c;
        default: break;
    }

    ctx->pc = 0x1a5d90u;

label_1a5d90:
    // 0x1a5d90: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1a5d90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_1a5d94:
    // 0x1a5d94: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1a5d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1a5d98:
    // 0x1a5d98: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1a5d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a5d9c:
    // 0x1a5d9c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a5d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a5da0:
    // 0x1a5da0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5da0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5da4:
    // 0x1a5da4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a5da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a5da8:
    // 0x1a5da8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1a5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1a5dac:
    // 0x1a5dac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5db0:
    // 0x1a5db0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a5db0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1a5db4:
    // 0x1a5db4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1a5db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1a5db8:
    // 0x1a5db8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x1a5db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1a5dbc:
    // 0x1a5dbc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5dbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5dc0:
    // 0x1a5dc0: 0xc06a25c  jal         func_1A8970
label_1a5dc4:
    if (ctx->pc == 0x1A5DC4u) {
        ctx->pc = 0x1A5DC4u;
            // 0x1a5dc4: 0x24701390  addiu       $s0, $v1, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5008));
        ctx->pc = 0x1A5DC8u;
        goto label_1a5dc8;
    }
    ctx->pc = 0x1A5DC0u;
    SET_GPR_U32(ctx, 31, 0x1A5DC8u);
    ctx->pc = 0x1A5DC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DC0u;
            // 0x1a5dc4: 0x24701390  addiu       $s0, $v1, 0x1390 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 5008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8970u;
    if (runtime->hasFunction(0x1A8970u)) {
        auto targetFn = runtime->lookupFunction(0x1A8970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DC8u; }
        if (ctx->pc != 0x1A5DC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8970_0x1a8970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DC8u; }
        if (ctx->pc != 0x1A5DC8u) { return; }
    }
    ctx->pc = 0x1A5DC8u;
label_1a5dc8:
    // 0x1a5dc8: 0x8e110020  lw          $s1, 0x20($s0)
    ctx->pc = 0x1a5dc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a5dcc:
    // 0x1a5dcc: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
label_1a5dd0:
    if (ctx->pc == 0x1A5DD0u) {
        ctx->pc = 0x1A5DD0u;
            // 0x1a5dd0: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x1A5DD4u;
        goto label_1a5dd4;
    }
    ctx->pc = 0x1A5DCCu;
    {
        const bool branch_taken_0x1a5dcc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DCCu;
            // 0x1a5dd0: 0x8e120024  lw          $s2, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dcc) {
            ctx->pc = 0x1A5DF8u;
            goto label_1a5df8;
        }
    }
    ctx->pc = 0x1A5DD4u;
label_1a5dd4:
    // 0x1a5dd4: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
label_1a5dd8:
    if (ctx->pc == 0x1A5DD8u) {
        ctx->pc = 0x1A5DD8u;
            // 0x1a5dd8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->pc = 0x1A5DDCu;
        goto label_1a5ddc;
    }
    ctx->pc = 0x1A5DD4u;
    {
        const bool branch_taken_0x1a5dd4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DD4u;
            // 0x1a5dd8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dd4) {
            ctx->pc = 0x1A5DFCu;
            goto label_1a5dfc;
        }
    }
    ctx->pc = 0x1A5DDCu;
label_1a5ddc:
    // 0x1a5ddc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a5ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5de0:
    // 0x1a5de0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a5de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5de4:
    // 0x1a5de4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a5de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5de8:
    // 0x1a5de8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1a5de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1a5dec:
    // 0x1a5dec: 0x40f809  jalr        $v0
label_1a5df0:
    if (ctx->pc == 0x1A5DF0u) {
        ctx->pc = 0x1A5DF0u;
            // 0x1a5df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1A5DF4u;
        goto label_1a5df4;
    }
    ctx->pc = 0x1A5DECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5DF4u);
        ctx->pc = 0x1A5DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DECu;
            // 0x1a5df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5DF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5DF4u; }
            if (ctx->pc != 0x1A5DF4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5DF4u;
label_1a5df4:
    // 0x1a5df4: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1a5df8:
    // 0x1a5df8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1a5df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_1a5dfc:
    // 0x1a5dfc: 0x2a230000  slti        $v1, $s1, 0x0
    ctx->pc = 0x1a5dfcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
label_1a5e00:
    // 0x1a5e00: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a5e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1a5e04:
    // 0x1a5e04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a5e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e08:
    // 0x1a5e08: 0xc06a262  jal         func_1A8988
label_1a5e0c:
    if (ctx->pc == 0x1A5E0Cu) {
        ctx->pc = 0x1A5E0Cu;
            // 0x1a5e0c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->pc = 0x1A5E10u;
        goto label_1a5e10;
    }
    ctx->pc = 0x1A5E08u;
    SET_GPR_U32(ctx, 31, 0x1A5E10u);
    ctx->pc = 0x1A5E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E08u;
            // 0x1a5e0c: 0x43880b  movn        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8988u;
    if (runtime->hasFunction(0x1A8988u)) {
        auto targetFn = runtime->lookupFunction(0x1A8988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E10u; }
        if (ctx->pc != 0x1A5E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8988_0x1a8988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5E10u; }
        if (ctx->pc != 0x1A5E10u) { return; }
    }
    ctx->pc = 0x1A5E10u;
label_1a5e10:
    // 0x1a5e10: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a5e10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5e14:
    // 0x1a5e14: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1a5e14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5e18:
    // 0x1a5e18: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5e18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5e1c:
    // 0x1a5e1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a5e1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a5e20:
    // 0x1a5e20: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1a5e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a5e24:
    // 0x1a5e24: 0x3e00008  jr          $ra
label_1a5e28:
    if (ctx->pc == 0x1A5E28u) {
        ctx->pc = 0x1A5E28u;
            // 0x1a5e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1A5E2Cu;
        goto label_1a5e2c;
    }
    ctx->pc = 0x1A5E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E24u;
            // 0x1a5e28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5E2Cu;
label_1a5e2c:
    // 0x1a5e2c: 0x0  nop
    ctx->pc = 0x1a5e2cu;
    // NOP
}
