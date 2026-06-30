#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B2D88
// Address: 0x1b2d88 - 0x1b2f08
void sub_001B2D88_0x1b2d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2D88_0x1b2d88");
#endif

    switch (ctx->pc) {
        case 0x1b2da8u: goto label_1b2da8;
        case 0x1b2db8u: goto label_1b2db8;
        case 0x1b2de4u: goto label_1b2de4;
        case 0x1b2df8u: goto label_1b2df8;
        case 0x1b2e1cu: goto label_1b2e1c;
        case 0x1b2e30u: goto label_1b2e30;
        case 0x1b2e44u: goto label_1b2e44;
        case 0x1b2e54u: goto label_1b2e54;
        case 0x1b2e68u: goto label_1b2e68;
        case 0x1b2e7cu: goto label_1b2e7c;
        case 0x1b2e94u: goto label_1b2e94;
        case 0x1b2eacu: goto label_1b2eac;
        case 0x1b2ec0u: goto label_1b2ec0;
        case 0x1b2eecu: goto label_1b2eec;
        default: break;
    }

    ctx->pc = 0x1b2d88u;

    // 0x1b2d88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2d8c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x1b2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1b2d90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1b2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1b2d94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2d94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2d98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1b2d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1b2d9c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b2d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b2da0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2DA0u;
    SET_GPR_U32(ctx, 31, 0x1B2DA8u);
    ctx->pc = 0x1B2DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DA0u;
            // 0x1b2da4: 0x26110950  addiu       $s1, $s0, 0x950 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DA8u; }
        if (ctx->pc != 0x1B2DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DA8u; }
        if (ctx->pc != 0x1B2DA8u) { return; }
    }
    ctx->pc = 0x1B2DA8u;
label_1b2da8:
    // 0x1b2da8: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x1B2DA8u;
    {
        const bool branch_taken_0x1b2da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DA8u;
            // 0x1b2dac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2da8) {
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2DB0u;
    // 0x1b2db0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2DB0u;
    SET_GPR_U32(ctx, 31, 0x1B2DB8u);
    ctx->pc = 0x1B2DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DB0u;
            // 0x1b2db4: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DB8u; }
        if (ctx->pc != 0x1B2DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DB8u; }
        if (ctx->pc != 0x1B2DB8u) { return; }
    }
    ctx->pc = 0x1B2DB8u;
label_1b2db8:
    // 0x1b2db8: 0x5040004e  beql        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x1B2DB8u;
    {
        const bool branch_taken_0x1b2db8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2db8) {
            ctx->pc = 0x1B2DBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DB8u;
            // 0x1b2dbc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2EF4u;
            goto label_1b2ef4;
        }
    }
    ctx->pc = 0x1B2DC0u;
    // 0x1b2dc0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1b2dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1b2dc4: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x1B2DC4u;
    {
        const bool branch_taken_0x1b2dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DC4u;
            // 0x1b2dc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2dc4) {
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2DCCu;
    // 0x1b2dcc: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1b2dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1b2dd0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b2dd4: 0x54830047  bnel        $a0, $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x1B2DD4u;
    {
        const bool branch_taken_0x1b2dd4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b2dd4) {
            ctx->pc = 0x1B2DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DD4u;
            // 0x1b2dd8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2EF4u;
            goto label_1b2ef4;
        }
    }
    ctx->pc = 0x1B2DDCu;
    // 0x1b2ddc: 0xc06cbfa  jal         func_1B2FE8
    ctx->pc = 0x1B2DDCu;
    SET_GPR_U32(ctx, 31, 0x1B2DE4u);
    ctx->pc = 0x1B2DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DDCu;
            // 0x1b2de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B2FE8u;
    if (runtime->hasFunction(0x1B2FE8u)) {
        auto targetFn = runtime->lookupFunction(0x1B2FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DE4u; }
        if (ctx->pc != 0x1B2DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2FE8_0x1b2fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DE4u; }
        if (ctx->pc != 0x1B2DE4u) { return; }
    }
    ctx->pc = 0x1B2DE4u;
label_1b2de4:
    // 0x1b2de4: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x1B2DE4u;
    {
        const bool branch_taken_0x1b2de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2de4) {
            ctx->pc = 0x1B2DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DE4u;
            // 0x1b2de8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2DECu;
    // 0x1b2dec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2decu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2df0: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2DF0u;
    SET_GPR_U32(ctx, 31, 0x1B2DF8u);
    ctx->pc = 0x1B2DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DF0u;
            // 0x1b2df4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DF8u; }
        if (ctx->pc != 0x1B2DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2DF8u; }
        if (ctx->pc != 0x1B2DF8u) { return; }
    }
    ctx->pc = 0x1B2DF8u;
label_1b2df8:
    // 0x1b2df8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2dfc: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2DFCu;
    {
        const bool branch_taken_0x1b2dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2DFCu;
            // 0x1b2e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2dfc) {
            ctx->pc = 0x1B2E14u;
            goto label_1b2e14;
        }
    }
    ctx->pc = 0x1B2E04u;
    // 0x1b2e04: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x1b2e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x1b2e08: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x1B2E08u;
    {
        const bool branch_taken_0x1b2e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E08u;
            // 0x1b2e0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e08) {
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2E10u;
    // 0x1b2e10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e14:
    // 0x1b2e14: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2E14u;
    SET_GPR_U32(ctx, 31, 0x1B2E1Cu);
    ctx->pc = 0x1B2E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E14u;
            // 0x1b2e18: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E1Cu; }
        if (ctx->pc != 0x1B2E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E1Cu; }
        if (ctx->pc != 0x1B2E1Cu) { return; }
    }
    ctx->pc = 0x1B2E1Cu;
label_1b2e1c:
    // 0x1b2e1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e20: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2E20u;
    {
        const bool branch_taken_0x1b2e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B2E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E20u;
            // 0x1b2e24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e20) {
            ctx->pc = 0x1B2E3Cu;
            goto label_1b2e3c;
        }
    }
    ctx->pc = 0x1B2E28u;
    // 0x1b2e28: 0xc069970  jal         func_1A65C0
    ctx->pc = 0x1B2E28u;
    SET_GPR_U32(ctx, 31, 0x1B2E30u);
    ctx->pc = 0x1B2E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E28u;
            // 0x1b2e2c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A65C0u;
    if (runtime->hasFunction(0x1A65C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A65C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E30u; }
        if (ctx->pc != 0x1B2E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A65C0_0x1a65c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E30u; }
        if (ctx->pc != 0x1B2E30u) { return; }
    }
    ctx->pc = 0x1B2E30u;
label_1b2e30:
    // 0x1b2e30: 0x1c40002f  bgtz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1B2E30u;
    {
        const bool branch_taken_0x1b2e30 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B2E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E30u;
            // 0x1b2e34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e30) {
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2E38u;
    // 0x1b2e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e3c:
    // 0x1b2e3c: 0xc06e388  jal         func_1B8E20
    ctx->pc = 0x1B2E3Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E44u);
    ctx->pc = 0x1B2E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E3Cu;
            // 0x1b2e40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8E20u;
    if (runtime->hasFunction(0x1B8E20u)) {
        auto targetFn = runtime->lookupFunction(0x1B8E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E44u; }
        if (ctx->pc != 0x1B2E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8E20_0x1b8e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E44u; }
        if (ctx->pc != 0x1B2E44u) { return; }
    }
    ctx->pc = 0x1B2E44u;
label_1b2e44:
    // 0x1b2e44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2E44u;
    {
        const bool branch_taken_0x1b2e44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E44u;
            // 0x1b2e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e44) {
            ctx->pc = 0x1B2E5Cu;
            goto label_1b2e5c;
        }
    }
    ctx->pc = 0x1B2E4Cu;
    // 0x1b2e4c: 0xc069970  jal         func_1A65C0
    ctx->pc = 0x1B2E4Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E54u);
    ctx->pc = 0x1B2E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E4Cu;
            // 0x1b2e50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A65C0u;
    if (runtime->hasFunction(0x1A65C0u)) {
        auto targetFn = runtime->lookupFunction(0x1A65C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E54u; }
        if (ctx->pc != 0x1B2E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A65C0_0x1a65c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E54u; }
        if (ctx->pc != 0x1B2E54u) { return; }
    }
    ctx->pc = 0x1B2E54u;
label_1b2e54:
    // 0x1b2e54: 0x1c400026  bgtz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B2E54u;
    {
        const bool branch_taken_0x1b2e54 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1B2E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E54u;
            // 0x1b2e58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e54) {
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2E5Cu;
label_1b2e5c:
    // 0x1b2e5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2e60: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2E60u;
    SET_GPR_U32(ctx, 31, 0x1B2E68u);
    ctx->pc = 0x1B2E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E60u;
            // 0x1b2e64: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E68u; }
        if (ctx->pc != 0x1B2E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E68u; }
        if (ctx->pc != 0x1B2E68u) { return; }
    }
    ctx->pc = 0x1B2E68u;
label_1b2e68:
    // 0x1b2e68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b2e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2e6c: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2E6Cu;
    {
        const bool branch_taken_0x1b2e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b2e6c) {
            ctx->pc = 0x1B2E70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E6Cu;
            // 0x1b2e70: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2E88u;
            goto label_1b2e88;
        }
    }
    ctx->pc = 0x1B2E74u;
    // 0x1b2e74: 0xc06cc22  jal         func_1B3088
    ctx->pc = 0x1B2E74u;
    SET_GPR_U32(ctx, 31, 0x1B2E7Cu);
    ctx->pc = 0x1B2E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E74u;
            // 0x1b2e78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3088u;
    if (runtime->hasFunction(0x1B3088u)) {
        auto targetFn = runtime->lookupFunction(0x1B3088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E7Cu; }
        if (ctx->pc != 0x1B2E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3088_0x1b3088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E7Cu; }
        if (ctx->pc != 0x1B2E7Cu) { return; }
    }
    ctx->pc = 0x1B2E7Cu;
label_1b2e7c:
    // 0x1b2e7c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B2E7Cu;
    {
        const bool branch_taken_0x1b2e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E7Cu;
            // 0x1b2e80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2e7c) {
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2E84u;
    // 0x1b2e84: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b2e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1b2e88:
    // 0x1b2e88: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1b2e88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1b2e8c: 0xc06dbb6  jal         func_1B6ED8
    ctx->pc = 0x1B2E8Cu;
    SET_GPR_U32(ctx, 31, 0x1B2E94u);
    ctx->pc = 0x1B2E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2E8Cu;
            // 0x1b2e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6ED8u;
    if (runtime->hasFunction(0x1B6ED8u)) {
        auto targetFn = runtime->lookupFunction(0x1B6ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E94u; }
        if (ctx->pc != 0x1B2E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6ED8_0x1b6ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2E94u; }
        if (ctx->pc != 0x1B2E94u) { return; }
    }
    ctx->pc = 0x1B2E94u;
label_1b2e94:
    // 0x1b2e94: 0x26030d88  addiu       $v1, $s0, 0xD88
    ctx->pc = 0x1b2e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 3464));
    // 0x1b2e98: 0x8c710288  lw          $s1, 0x288($v1)
    ctx->pc = 0x1b2e98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 648)));
    // 0x1b2e9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2e9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ea0: 0x24050044  addiu       $a1, $zero, 0x44
    ctx->pc = 0x1b2ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1b2ea4: 0xc06d81c  jal         func_1B6070
    ctx->pc = 0x1B2EA4u;
    SET_GPR_U32(ctx, 31, 0x1B2EACu);
    ctx->pc = 0x1B2EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EA4u;
            // 0x1b2ea8: 0x8c700284  lw          $s0, 0x284($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6070u;
    if (runtime->hasFunction(0x1B6070u)) {
        auto targetFn = runtime->lookupFunction(0x1B6070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EACu; }
        if (ctx->pc != 0x1B2EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B6070_0x1b6070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EACu; }
        if (ctx->pc != 0x1B2EACu) { return; }
    }
    ctx->pc = 0x1B2EACu;
label_1b2eac:
    // 0x1b2eac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2eb0: 0x3c06000f  lui         $a2, 0xF
    ctx->pc = 0x1b2eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15 << 16));
    // 0x1b2eb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b2eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2eb8: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B2EB8u;
    SET_GPR_U32(ctx, 31, 0x1B2EC0u);
    ctx->pc = 0x1B2EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EB8u;
            // 0x1b2ebc: 0x34c64240  ori         $a2, $a2, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EC0u; }
        if (ctx->pc != 0x1B2EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EC0u; }
        if (ctx->pc != 0x1B2EC0u) { return; }
    }
    ctx->pc = 0x1B2EC0u;
label_1b2ec0:
    // 0x1b2ec0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1b2ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2ec4: 0x18800003  blez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B2EC4u;
    {
        const bool branch_taken_0x1b2ec4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1B2EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EC4u;
            // 0x1b2ec8: 0x2028023  subu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ec4) {
            ctx->pc = 0x1B2ED4u;
            goto label_1b2ed4;
        }
    }
    ctx->pc = 0x1B2ECCu;
    // 0x1b2ecc: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B2ECCu;
    {
        const bool branch_taken_0x1b2ecc = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x1B2ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ECCu;
            // 0x1b2ed0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ecc) {
            ctx->pc = 0x1B2EE0u;
            goto label_1b2ee0;
        }
    }
    ctx->pc = 0x1B2ED4u;
label_1b2ed4:
    // 0x1b2ed4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2ED4u;
    {
        const bool branch_taken_0x1b2ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2ED4u;
            // 0x1b2ed8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2ed4) {
            ctx->pc = 0x1B2EF0u;
            goto label_1b2ef0;
        }
    }
    ctx->pc = 0x1B2EDCu;
    // 0x1b2edc: 0x0  nop
    ctx->pc = 0x1b2edcu;
    // NOP
label_1b2ee0:
    // 0x1b2ee0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1b2ee0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2ee4: 0xc062890  jal         func_18A240
    ctx->pc = 0x1B2EE4u;
    SET_GPR_U32(ctx, 31, 0x1B2EECu);
    ctx->pc = 0x1B2EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EE4u;
            // 0x1b2ee8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A240u;
    if (runtime->hasFunction(0x18A240u)) {
        auto targetFn = runtime->lookupFunction(0x18A240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EECu; }
        if (ctx->pc != 0x1B2EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A240_0x18a240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2EECu; }
        if (ctx->pc != 0x1B2EECu) { return; }
    }
    ctx->pc = 0x1B2EECu;
label_1b2eec:
    // 0x1b2eec: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b2eecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2ef0:
    // 0x1b2ef0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1b2ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2ef4:
    // 0x1b2ef4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1b2ef4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b2ef8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b2ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b2efc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2EFCu;
            // 0x1b2f00: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B2F04u;
    // 0x1b2f04: 0x0  nop
    ctx->pc = 0x1b2f04u;
    // NOP
}
