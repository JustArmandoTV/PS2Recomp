#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386CA0
// Address: 0x386ca0 - 0x386e40
void sub_00386CA0_0x386ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386CA0_0x386ca0");
#endif

    switch (ctx->pc) {
        case 0x386ca0u: goto label_386ca0;
        case 0x386ca4u: goto label_386ca4;
        case 0x386ca8u: goto label_386ca8;
        case 0x386cacu: goto label_386cac;
        case 0x386cb0u: goto label_386cb0;
        case 0x386cb4u: goto label_386cb4;
        case 0x386cb8u: goto label_386cb8;
        case 0x386cbcu: goto label_386cbc;
        case 0x386cc0u: goto label_386cc0;
        case 0x386cc4u: goto label_386cc4;
        case 0x386cc8u: goto label_386cc8;
        case 0x386cccu: goto label_386ccc;
        case 0x386cd0u: goto label_386cd0;
        case 0x386cd4u: goto label_386cd4;
        case 0x386cd8u: goto label_386cd8;
        case 0x386cdcu: goto label_386cdc;
        case 0x386ce0u: goto label_386ce0;
        case 0x386ce4u: goto label_386ce4;
        case 0x386ce8u: goto label_386ce8;
        case 0x386cecu: goto label_386cec;
        case 0x386cf0u: goto label_386cf0;
        case 0x386cf4u: goto label_386cf4;
        case 0x386cf8u: goto label_386cf8;
        case 0x386cfcu: goto label_386cfc;
        case 0x386d00u: goto label_386d00;
        case 0x386d04u: goto label_386d04;
        case 0x386d08u: goto label_386d08;
        case 0x386d0cu: goto label_386d0c;
        case 0x386d10u: goto label_386d10;
        case 0x386d14u: goto label_386d14;
        case 0x386d18u: goto label_386d18;
        case 0x386d1cu: goto label_386d1c;
        case 0x386d20u: goto label_386d20;
        case 0x386d24u: goto label_386d24;
        case 0x386d28u: goto label_386d28;
        case 0x386d2cu: goto label_386d2c;
        case 0x386d30u: goto label_386d30;
        case 0x386d34u: goto label_386d34;
        case 0x386d38u: goto label_386d38;
        case 0x386d3cu: goto label_386d3c;
        case 0x386d40u: goto label_386d40;
        case 0x386d44u: goto label_386d44;
        case 0x386d48u: goto label_386d48;
        case 0x386d4cu: goto label_386d4c;
        case 0x386d50u: goto label_386d50;
        case 0x386d54u: goto label_386d54;
        case 0x386d58u: goto label_386d58;
        case 0x386d5cu: goto label_386d5c;
        case 0x386d60u: goto label_386d60;
        case 0x386d64u: goto label_386d64;
        case 0x386d68u: goto label_386d68;
        case 0x386d6cu: goto label_386d6c;
        case 0x386d70u: goto label_386d70;
        case 0x386d74u: goto label_386d74;
        case 0x386d78u: goto label_386d78;
        case 0x386d7cu: goto label_386d7c;
        case 0x386d80u: goto label_386d80;
        case 0x386d84u: goto label_386d84;
        case 0x386d88u: goto label_386d88;
        case 0x386d8cu: goto label_386d8c;
        case 0x386d90u: goto label_386d90;
        case 0x386d94u: goto label_386d94;
        case 0x386d98u: goto label_386d98;
        case 0x386d9cu: goto label_386d9c;
        case 0x386da0u: goto label_386da0;
        case 0x386da4u: goto label_386da4;
        case 0x386da8u: goto label_386da8;
        case 0x386dacu: goto label_386dac;
        case 0x386db0u: goto label_386db0;
        case 0x386db4u: goto label_386db4;
        case 0x386db8u: goto label_386db8;
        case 0x386dbcu: goto label_386dbc;
        case 0x386dc0u: goto label_386dc0;
        case 0x386dc4u: goto label_386dc4;
        case 0x386dc8u: goto label_386dc8;
        case 0x386dccu: goto label_386dcc;
        case 0x386dd0u: goto label_386dd0;
        case 0x386dd4u: goto label_386dd4;
        case 0x386dd8u: goto label_386dd8;
        case 0x386ddcu: goto label_386ddc;
        case 0x386de0u: goto label_386de0;
        case 0x386de4u: goto label_386de4;
        case 0x386de8u: goto label_386de8;
        case 0x386decu: goto label_386dec;
        case 0x386df0u: goto label_386df0;
        case 0x386df4u: goto label_386df4;
        case 0x386df8u: goto label_386df8;
        case 0x386dfcu: goto label_386dfc;
        case 0x386e00u: goto label_386e00;
        case 0x386e04u: goto label_386e04;
        case 0x386e08u: goto label_386e08;
        case 0x386e0cu: goto label_386e0c;
        case 0x386e10u: goto label_386e10;
        case 0x386e14u: goto label_386e14;
        case 0x386e18u: goto label_386e18;
        case 0x386e1cu: goto label_386e1c;
        case 0x386e20u: goto label_386e20;
        case 0x386e24u: goto label_386e24;
        case 0x386e28u: goto label_386e28;
        case 0x386e2cu: goto label_386e2c;
        case 0x386e30u: goto label_386e30;
        case 0x386e34u: goto label_386e34;
        case 0x386e38u: goto label_386e38;
        case 0x386e3cu: goto label_386e3c;
        default: break;
    }

    ctx->pc = 0x386ca0u;

label_386ca0:
    // 0x386ca0: 0x804c720  j           func_131C80
label_386ca4:
    if (ctx->pc == 0x386CA4u) {
        ctx->pc = 0x386CA4u;
            // 0x386ca4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x386CA8u;
        goto label_386ca8;
    }
    ctx->pc = 0x386CA0u;
    ctx->pc = 0x386CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386CA0u;
            // 0x386ca4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00131C80_0x131c80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x386CA8u;
label_386ca8:
    // 0x386ca8: 0x0  nop
    ctx->pc = 0x386ca8u;
    // NOP
label_386cac:
    // 0x386cac: 0x0  nop
    ctx->pc = 0x386cacu;
    // NOP
label_386cb0:
    // 0x386cb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x386cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_386cb4:
    // 0x386cb4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x386cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_386cb8:
    // 0x386cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_386cbc:
    // 0x386cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x386cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_386cc0:
    // 0x386cc0: 0x24910084  addiu       $s1, $a0, 0x84
    ctx->pc = 0x386cc0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_386cc4:
    // 0x386cc4: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x386cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_386cc8:
    // 0x386cc8: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_386ccc:
    if (ctx->pc == 0x386CCCu) {
        ctx->pc = 0x386CCCu;
            // 0x386ccc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386CD0u;
        goto label_386cd0;
    }
    ctx->pc = 0x386CC8u;
    {
        const bool branch_taken_0x386cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x386CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386CC8u;
            // 0x386ccc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386cc8) {
            ctx->pc = 0x386DB4u;
            goto label_386db4;
        }
    }
    ctx->pc = 0x386CD0u;
label_386cd0:
    // 0x386cd0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x386cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_386cd4:
    // 0x386cd4: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x386cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_386cd8:
    // 0x386cd8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x386cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_386cdc:
    // 0x386cdc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x386cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_386ce0:
    // 0x386ce0: 0x320f809  jalr        $t9
label_386ce4:
    if (ctx->pc == 0x386CE4u) {
        ctx->pc = 0x386CE8u;
        goto label_386ce8;
    }
    ctx->pc = 0x386CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x386CE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x386CE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x386CE8u; }
            if (ctx->pc != 0x386CE8u) { return; }
        }
        }
    }
    ctx->pc = 0x386CE8u;
label_386ce8:
    // 0x386ce8: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x386ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_386cec:
    // 0x386cec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x386cecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_386cf0:
    // 0x386cf0: 0xc075128  jal         func_1D44A0
label_386cf4:
    if (ctx->pc == 0x386CF4u) {
        ctx->pc = 0x386CF4u;
            // 0x386cf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386CF8u;
        goto label_386cf8;
    }
    ctx->pc = 0x386CF0u;
    SET_GPR_U32(ctx, 31, 0x386CF8u);
    ctx->pc = 0x386CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386CF0u;
            // 0x386cf4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386CF8u; }
        if (ctx->pc != 0x386CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386CF8u; }
        if (ctx->pc != 0x386CF8u) { return; }
    }
    ctx->pc = 0x386CF8u;
label_386cf8:
    // 0x386cf8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x386cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386cfc:
    // 0x386cfc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d00:
    // 0x386d00: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x386d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_386d04:
    // 0x386d04: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x386d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_386d08:
    // 0x386d08: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x386d08u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_386d0c:
    // 0x386d0c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_386d10:
    if (ctx->pc == 0x386D10u) {
        ctx->pc = 0x386D10u;
            // 0x386d10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x386D14u;
        goto label_386d14;
    }
    ctx->pc = 0x386D0Cu;
    {
        const bool branch_taken_0x386d0c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x386d0c) {
            ctx->pc = 0x386D10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386D0Cu;
            // 0x386d10: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386D20u;
            goto label_386d20;
        }
    }
    ctx->pc = 0x386D14u;
label_386d14:
    // 0x386d14: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d18:
    // 0x386d18: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x386d18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_386d1c:
    // 0x386d1c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x386d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386d20:
    // 0x386d20: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d24:
    // 0x386d24: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x386d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_386d28:
    // 0x386d28: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x386d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_386d2c:
    // 0x386d2c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x386d2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_386d30:
    // 0x386d30: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_386d34:
    if (ctx->pc == 0x386D34u) {
        ctx->pc = 0x386D34u;
            // 0x386d34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x386D38u;
        goto label_386d38;
    }
    ctx->pc = 0x386D30u;
    {
        const bool branch_taken_0x386d30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x386d30) {
            ctx->pc = 0x386D34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386D30u;
            // 0x386d34: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386D44u;
            goto label_386d44;
        }
    }
    ctx->pc = 0x386D38u;
label_386d38:
    // 0x386d38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d3c:
    // 0x386d3c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x386d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_386d40:
    // 0x386d40: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x386d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386d44:
    // 0x386d44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d48:
    // 0x386d48: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x386d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_386d4c:
    // 0x386d4c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x386d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_386d50:
    // 0x386d50: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x386d50u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_386d54:
    // 0x386d54: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_386d58:
    if (ctx->pc == 0x386D58u) {
        ctx->pc = 0x386D58u;
            // 0x386d58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x386D5Cu;
        goto label_386d5c;
    }
    ctx->pc = 0x386D54u;
    {
        const bool branch_taken_0x386d54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x386d54) {
            ctx->pc = 0x386D58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386D54u;
            // 0x386d58: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386D68u;
            goto label_386d68;
        }
    }
    ctx->pc = 0x386D5Cu;
label_386d5c:
    // 0x386d5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d60:
    // 0x386d60: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x386d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_386d64:
    // 0x386d64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x386d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386d68:
    // 0x386d68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d6c:
    // 0x386d6c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x386d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_386d70:
    // 0x386d70: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x386d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_386d74:
    // 0x386d74: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x386d74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_386d78:
    // 0x386d78: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x386d78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_386d7c:
    // 0x386d7c: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_386d80:
    if (ctx->pc == 0x386D80u) {
        ctx->pc = 0x386D80u;
            // 0x386d80: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x386D84u;
        goto label_386d84;
    }
    ctx->pc = 0x386D7Cu;
    {
        const bool branch_taken_0x386d7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x386d7c) {
            ctx->pc = 0x386D80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386D7Cu;
            // 0x386d80: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386D90u;
            goto label_386d90;
        }
    }
    ctx->pc = 0x386D84u;
label_386d84:
    // 0x386d84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d88:
    // 0x386d88: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x386d88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_386d8c:
    // 0x386d8c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x386d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_386d90:
    // 0x386d90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386d94:
    // 0x386d94: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x386d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_386d98:
    // 0x386d98: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x386d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_386d9c:
    // 0x386d9c: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x386d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_386da0:
    // 0x386da0: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x386da0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_386da4:
    // 0x386da4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_386da8:
    if (ctx->pc == 0x386DA8u) {
        ctx->pc = 0x386DA8u;
            // 0x386da8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x386DACu;
        goto label_386dac;
    }
    ctx->pc = 0x386DA4u;
    {
        const bool branch_taken_0x386da4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x386da4) {
            ctx->pc = 0x386DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386DA4u;
            // 0x386da8: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386DB8u;
            goto label_386db8;
        }
    }
    ctx->pc = 0x386DACu;
label_386dac:
    // 0x386dac: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x386dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_386db0:
    // 0x386db0: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x386db0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_386db4:
    // 0x386db4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x386db4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_386db8:
    // 0x386db8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_386dbc:
    // 0x386dbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_386dc0:
    // 0x386dc0: 0x3e00008  jr          $ra
label_386dc4:
    if (ctx->pc == 0x386DC4u) {
        ctx->pc = 0x386DC4u;
            // 0x386dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x386DC8u;
        goto label_386dc8;
    }
    ctx->pc = 0x386DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386DC0u;
            // 0x386dc4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386DC8u;
label_386dc8:
    // 0x386dc8: 0x0  nop
    ctx->pc = 0x386dc8u;
    // NOP
label_386dcc:
    // 0x386dcc: 0x0  nop
    ctx->pc = 0x386dccu;
    // NOP
label_386dd0:
    // 0x386dd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x386dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_386dd4:
    // 0x386dd4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x386dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_386dd8:
    // 0x386dd8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x386dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_386ddc:
    // 0x386ddc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x386ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_386de0:
    // 0x386de0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x386de0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386de4:
    // 0x386de4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x386de4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_386de8:
    // 0x386de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x386de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_386dec:
    // 0x386dec: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x386decu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_386df0:
    // 0x386df0: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_386df4:
    if (ctx->pc == 0x386DF4u) {
        ctx->pc = 0x386DF4u;
            // 0x386df4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x386DF8u;
        goto label_386df8;
    }
    ctx->pc = 0x386DF0u;
    {
        const bool branch_taken_0x386df0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x386DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386DF0u;
            // 0x386df4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386df0) {
            ctx->pc = 0x386E20u;
            goto label_386e20;
        }
    }
    ctx->pc = 0x386DF8u;
label_386df8:
    // 0x386df8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x386df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_386dfc:
    // 0x386dfc: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x386dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_386e00:
    // 0x386e00: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x386e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_386e04:
    // 0x386e04: 0xc0e1f4c  jal         func_387D30
label_386e08:
    if (ctx->pc == 0x386E08u) {
        ctx->pc = 0x386E08u;
            // 0x386e08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x386E0Cu;
        goto label_386e0c;
    }
    ctx->pc = 0x386E04u;
    SET_GPR_U32(ctx, 31, 0x386E0Cu);
    ctx->pc = 0x386E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x386E04u;
            // 0x386e08: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x387D30u;
    if (runtime->hasFunction(0x387D30u)) {
        auto targetFn = runtime->lookupFunction(0x387D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E0Cu; }
        if (ctx->pc != 0x386E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00387D30_0x387d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386E0Cu; }
        if (ctx->pc != 0x386E0Cu) { return; }
    }
    ctx->pc = 0x386E0Cu;
label_386e0c:
    // 0x386e0c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x386e0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_386e10:
    // 0x386e10: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x386e10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_386e14:
    // 0x386e14: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_386e18:
    if (ctx->pc == 0x386E18u) {
        ctx->pc = 0x386E18u;
            // 0x386e18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x386E1Cu;
        goto label_386e1c;
    }
    ctx->pc = 0x386E14u;
    {
        const bool branch_taken_0x386e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x386E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386E14u;
            // 0x386e18: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386e14) {
            ctx->pc = 0x386DFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_386dfc;
        }
    }
    ctx->pc = 0x386E1Cu;
label_386e1c:
    // 0x386e1c: 0x0  nop
    ctx->pc = 0x386e1cu;
    // NOP
label_386e20:
    // 0x386e20: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x386e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_386e24:
    // 0x386e24: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x386e24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_386e28:
    // 0x386e28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x386e28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_386e2c:
    // 0x386e2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x386e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_386e30:
    // 0x386e30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_386e34:
    // 0x386e34: 0x3e00008  jr          $ra
label_386e38:
    if (ctx->pc == 0x386E38u) {
        ctx->pc = 0x386E38u;
            // 0x386e38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x386E3Cu;
        goto label_386e3c;
    }
    ctx->pc = 0x386E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386E34u;
            // 0x386e38: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386E3Cu;
label_386e3c:
    // 0x386e3c: 0x0  nop
    ctx->pc = 0x386e3cu;
    // NOP
}
