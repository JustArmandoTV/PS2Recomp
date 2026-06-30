#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00167DB0
// Address: 0x167db0 - 0x167e48
void sub_00167DB0_0x167db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167DB0_0x167db0");
#endif

    switch (ctx->pc) {
        case 0x167db0u: goto label_167db0;
        case 0x167db4u: goto label_167db4;
        case 0x167db8u: goto label_167db8;
        case 0x167dbcu: goto label_167dbc;
        case 0x167dc0u: goto label_167dc0;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dc8u: goto label_167dc8;
        case 0x167dccu: goto label_167dcc;
        case 0x167dd0u: goto label_167dd0;
        case 0x167dd4u: goto label_167dd4;
        case 0x167dd8u: goto label_167dd8;
        case 0x167ddcu: goto label_167ddc;
        case 0x167de0u: goto label_167de0;
        case 0x167de4u: goto label_167de4;
        case 0x167de8u: goto label_167de8;
        case 0x167decu: goto label_167dec;
        case 0x167df0u: goto label_167df0;
        case 0x167df4u: goto label_167df4;
        case 0x167df8u: goto label_167df8;
        case 0x167dfcu: goto label_167dfc;
        case 0x167e00u: goto label_167e00;
        case 0x167e04u: goto label_167e04;
        case 0x167e08u: goto label_167e08;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e10u: goto label_167e10;
        case 0x167e14u: goto label_167e14;
        case 0x167e18u: goto label_167e18;
        case 0x167e1cu: goto label_167e1c;
        case 0x167e20u: goto label_167e20;
        case 0x167e24u: goto label_167e24;
        case 0x167e28u: goto label_167e28;
        case 0x167e2cu: goto label_167e2c;
        case 0x167e30u: goto label_167e30;
        case 0x167e34u: goto label_167e34;
        case 0x167e38u: goto label_167e38;
        case 0x167e3cu: goto label_167e3c;
        case 0x167e40u: goto label_167e40;
        case 0x167e44u: goto label_167e44;
        default: break;
    }

    ctx->pc = 0x167db0u;

label_167db0:
    // 0x167db0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_167db4:
    // 0x167db4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x167db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_167db8:
    // 0x167db8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x167db8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_167dbc:
    // 0x167dbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x167dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_167dc0:
    // 0x167dc0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_167dc4:
    if (ctx->pc == 0x167DC4u) {
        ctx->pc = 0x167DC4u;
            // 0x167dc4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x167DC8u;
        goto label_167dc8;
    }
    ctx->pc = 0x167DC0u;
    {
        const bool branch_taken_0x167dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x167DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167DC0u;
            // 0x167dc4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dc0) {
            ctx->pc = 0x167DD0u;
            goto label_167dd0;
        }
    }
    ctx->pc = 0x167DC8u;
label_167dc8:
    // 0x167dc8: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
label_167dcc:
    if (ctx->pc == 0x167DCCu) {
        ctx->pc = 0x167DCCu;
            // 0x167dcc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->pc = 0x167DD0u;
        goto label_167dd0;
    }
    ctx->pc = 0x167DC8u;
    {
        const bool branch_taken_0x167dc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x167DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167DC8u;
            // 0x167dcc: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167dc8) {
            ctx->pc = 0x167DF0u;
            goto label_167df0;
        }
    }
    ctx->pc = 0x167DD0u;
label_167dd0:
    // 0x167dd0: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x167dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_167dd4:
    // 0x167dd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167dd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167dd8:
    // 0x167dd8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x167dd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_167ddc:
    // 0x167ddc: 0x24843328  addiu       $a0, $a0, 0x3328
    ctx->pc = 0x167ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13096));
label_167de0:
    // 0x167de0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167de0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167de4:
    // 0x167de4: 0x8061fc0  j           func_187F00
label_167de8:
    if (ctx->pc == 0x167DE8u) {
        ctx->pc = 0x167DE8u;
            // 0x167de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x167DECu;
        goto label_167dec;
    }
    ctx->pc = 0x167DE4u;
    ctx->pc = 0x167DE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167DE4u;
            // 0x167de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (runtime->hasFunction(0x187F00u)) {
        auto targetFn = runtime->lookupFunction(0x187F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187F00_0x187f00(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x167DECu;
label_167dec:
    // 0x167dec: 0x0  nop
    ctx->pc = 0x167decu;
    // NOP
label_167df0:
    // 0x167df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x167df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167df4:
    // 0x167df4: 0x24507268  addiu       $s0, $v0, 0x7268
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 29288));
label_167df8:
    // 0x167df8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_167dfc:
    // 0x167dfc: 0xc04b156  jal         func_12C558
label_167e00:
    if (ctx->pc == 0x167E00u) {
        ctx->pc = 0x167E00u;
            // 0x167e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167E04u;
        goto label_167e04;
    }
    ctx->pc = 0x167DFCu;
    SET_GPR_U32(ctx, 31, 0x167E04u);
    ctx->pc = 0x167E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167DFCu;
            // 0x167e00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E04u; }
        if (ctx->pc != 0x167E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E04u; }
        if (ctx->pc != 0x167E04u) { return; }
    }
    ctx->pc = 0x167E04u;
label_167e04:
    // 0x167e04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167e08:
    // 0x167e08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x167e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167e0c:
    // 0x167e0c: 0xc04b07c  jal         func_12C1F0
label_167e10:
    if (ctx->pc == 0x167E10u) {
        ctx->pc = 0x167E10u;
            // 0x167e10: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->pc = 0x167E14u;
        goto label_167e14;
    }
    ctx->pc = 0x167E0Cu;
    SET_GPR_U32(ctx, 31, 0x167E14u);
    ctx->pc = 0x167E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E0Cu;
            // 0x167e10: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C1F0u;
    if (runtime->hasFunction(0x12C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x12C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E14u; }
        if (ctx->pc != 0x167E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C1F0_0x12c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167E14u; }
        if (ctx->pc != 0x167E14u) { return; }
    }
    ctx->pc = 0x167E14u;
label_167e14:
    // 0x167e14: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x167e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_167e18:
    // 0x167e18: 0x8c637260  lw          $v1, 0x7260($v1)
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29280)));
label_167e1c:
    // 0x167e1c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_167e20:
    if (ctx->pc == 0x167E20u) {
        ctx->pc = 0x167E20u;
            // 0x167e20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x167E24u;
        goto label_167e24;
    }
    ctx->pc = 0x167E1Cu;
    {
        const bool branch_taken_0x167e1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x167E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E1Cu;
            // 0x167e20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e1c) {
            ctx->pc = 0x167E30u;
            goto label_167e30;
        }
    }
    ctx->pc = 0x167E24u;
label_167e24:
    // 0x167e24: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x167e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
label_167e28:
    // 0x167e28: 0x60f809  jalr        $v1
label_167e2c:
    if (ctx->pc == 0x167E2Cu) {
        ctx->pc = 0x167E2Cu;
            // 0x167e2c: 0x8c447264  lw          $a0, 0x7264($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29284)));
        ctx->pc = 0x167E30u;
        goto label_167e30;
    }
    ctx->pc = 0x167E28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x167E30u);
        ctx->pc = 0x167E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167E28u;
            // 0x167e2c: 0x8c447264  lw          $a0, 0x7264($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29284)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x167E30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x167E30u; }
            if (ctx->pc != 0x167E30u) { return; }
        }
        }
    }
    ctx->pc = 0x167E30u;
label_167e30:
    // 0x167e30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167e34:
    // 0x167e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x167e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167e38:
    // 0x167e38: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x167e38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_167e3c:
    // 0x167e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167e40:
    // 0x167e40: 0x8061fc0  j           func_187F00
label_167e44:
    if (ctx->pc == 0x167E44u) {
        ctx->pc = 0x167E44u;
            // 0x167e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x167E48u;
        goto label_fallthrough_0x167e40;
    }
    ctx->pc = 0x167E40u;
    ctx->pc = 0x167E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167E40u;
            // 0x167e44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187F00u;
    if (runtime->hasFunction(0x187F00u)) {
        auto targetFn = runtime->lookupFunction(0x187F00u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00187F00_0x187f00(rdram, ctx, runtime); return;
    }
label_fallthrough_0x167e40:
    ctx->pc = 0x167E48u;
}
