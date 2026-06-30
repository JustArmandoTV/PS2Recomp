#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00304CD0
// Address: 0x304cd0 - 0x304f20
void sub_00304CD0_0x304cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304CD0_0x304cd0");
#endif

    switch (ctx->pc) {
        case 0x304cd0u: goto label_304cd0;
        case 0x304cd4u: goto label_304cd4;
        case 0x304cd8u: goto label_304cd8;
        case 0x304cdcu: goto label_304cdc;
        case 0x304ce0u: goto label_304ce0;
        case 0x304ce4u: goto label_304ce4;
        case 0x304ce8u: goto label_304ce8;
        case 0x304cecu: goto label_304cec;
        case 0x304cf0u: goto label_304cf0;
        case 0x304cf4u: goto label_304cf4;
        case 0x304cf8u: goto label_304cf8;
        case 0x304cfcu: goto label_304cfc;
        case 0x304d00u: goto label_304d00;
        case 0x304d04u: goto label_304d04;
        case 0x304d08u: goto label_304d08;
        case 0x304d0cu: goto label_304d0c;
        case 0x304d10u: goto label_304d10;
        case 0x304d14u: goto label_304d14;
        case 0x304d18u: goto label_304d18;
        case 0x304d1cu: goto label_304d1c;
        case 0x304d20u: goto label_304d20;
        case 0x304d24u: goto label_304d24;
        case 0x304d28u: goto label_304d28;
        case 0x304d2cu: goto label_304d2c;
        case 0x304d30u: goto label_304d30;
        case 0x304d34u: goto label_304d34;
        case 0x304d38u: goto label_304d38;
        case 0x304d3cu: goto label_304d3c;
        case 0x304d40u: goto label_304d40;
        case 0x304d44u: goto label_304d44;
        case 0x304d48u: goto label_304d48;
        case 0x304d4cu: goto label_304d4c;
        case 0x304d50u: goto label_304d50;
        case 0x304d54u: goto label_304d54;
        case 0x304d58u: goto label_304d58;
        case 0x304d5cu: goto label_304d5c;
        case 0x304d60u: goto label_304d60;
        case 0x304d64u: goto label_304d64;
        case 0x304d68u: goto label_304d68;
        case 0x304d6cu: goto label_304d6c;
        case 0x304d70u: goto label_304d70;
        case 0x304d74u: goto label_304d74;
        case 0x304d78u: goto label_304d78;
        case 0x304d7cu: goto label_304d7c;
        case 0x304d80u: goto label_304d80;
        case 0x304d84u: goto label_304d84;
        case 0x304d88u: goto label_304d88;
        case 0x304d8cu: goto label_304d8c;
        case 0x304d90u: goto label_304d90;
        case 0x304d94u: goto label_304d94;
        case 0x304d98u: goto label_304d98;
        case 0x304d9cu: goto label_304d9c;
        case 0x304da0u: goto label_304da0;
        case 0x304da4u: goto label_304da4;
        case 0x304da8u: goto label_304da8;
        case 0x304dacu: goto label_304dac;
        case 0x304db0u: goto label_304db0;
        case 0x304db4u: goto label_304db4;
        case 0x304db8u: goto label_304db8;
        case 0x304dbcu: goto label_304dbc;
        case 0x304dc0u: goto label_304dc0;
        case 0x304dc4u: goto label_304dc4;
        case 0x304dc8u: goto label_304dc8;
        case 0x304dccu: goto label_304dcc;
        case 0x304dd0u: goto label_304dd0;
        case 0x304dd4u: goto label_304dd4;
        case 0x304dd8u: goto label_304dd8;
        case 0x304ddcu: goto label_304ddc;
        case 0x304de0u: goto label_304de0;
        case 0x304de4u: goto label_304de4;
        case 0x304de8u: goto label_304de8;
        case 0x304decu: goto label_304dec;
        case 0x304df0u: goto label_304df0;
        case 0x304df4u: goto label_304df4;
        case 0x304df8u: goto label_304df8;
        case 0x304dfcu: goto label_304dfc;
        case 0x304e00u: goto label_304e00;
        case 0x304e04u: goto label_304e04;
        case 0x304e08u: goto label_304e08;
        case 0x304e0cu: goto label_304e0c;
        case 0x304e10u: goto label_304e10;
        case 0x304e14u: goto label_304e14;
        case 0x304e18u: goto label_304e18;
        case 0x304e1cu: goto label_304e1c;
        case 0x304e20u: goto label_304e20;
        case 0x304e24u: goto label_304e24;
        case 0x304e28u: goto label_304e28;
        case 0x304e2cu: goto label_304e2c;
        case 0x304e30u: goto label_304e30;
        case 0x304e34u: goto label_304e34;
        case 0x304e38u: goto label_304e38;
        case 0x304e3cu: goto label_304e3c;
        case 0x304e40u: goto label_304e40;
        case 0x304e44u: goto label_304e44;
        case 0x304e48u: goto label_304e48;
        case 0x304e4cu: goto label_304e4c;
        case 0x304e50u: goto label_304e50;
        case 0x304e54u: goto label_304e54;
        case 0x304e58u: goto label_304e58;
        case 0x304e5cu: goto label_304e5c;
        case 0x304e60u: goto label_304e60;
        case 0x304e64u: goto label_304e64;
        case 0x304e68u: goto label_304e68;
        case 0x304e6cu: goto label_304e6c;
        case 0x304e70u: goto label_304e70;
        case 0x304e74u: goto label_304e74;
        case 0x304e78u: goto label_304e78;
        case 0x304e7cu: goto label_304e7c;
        case 0x304e80u: goto label_304e80;
        case 0x304e84u: goto label_304e84;
        case 0x304e88u: goto label_304e88;
        case 0x304e8cu: goto label_304e8c;
        case 0x304e90u: goto label_304e90;
        case 0x304e94u: goto label_304e94;
        case 0x304e98u: goto label_304e98;
        case 0x304e9cu: goto label_304e9c;
        case 0x304ea0u: goto label_304ea0;
        case 0x304ea4u: goto label_304ea4;
        case 0x304ea8u: goto label_304ea8;
        case 0x304eacu: goto label_304eac;
        case 0x304eb0u: goto label_304eb0;
        case 0x304eb4u: goto label_304eb4;
        case 0x304eb8u: goto label_304eb8;
        case 0x304ebcu: goto label_304ebc;
        case 0x304ec0u: goto label_304ec0;
        case 0x304ec4u: goto label_304ec4;
        case 0x304ec8u: goto label_304ec8;
        case 0x304eccu: goto label_304ecc;
        case 0x304ed0u: goto label_304ed0;
        case 0x304ed4u: goto label_304ed4;
        case 0x304ed8u: goto label_304ed8;
        case 0x304edcu: goto label_304edc;
        case 0x304ee0u: goto label_304ee0;
        case 0x304ee4u: goto label_304ee4;
        case 0x304ee8u: goto label_304ee8;
        case 0x304eecu: goto label_304eec;
        case 0x304ef0u: goto label_304ef0;
        case 0x304ef4u: goto label_304ef4;
        case 0x304ef8u: goto label_304ef8;
        case 0x304efcu: goto label_304efc;
        case 0x304f00u: goto label_304f00;
        case 0x304f04u: goto label_304f04;
        case 0x304f08u: goto label_304f08;
        case 0x304f0cu: goto label_304f0c;
        case 0x304f10u: goto label_304f10;
        case 0x304f14u: goto label_304f14;
        case 0x304f18u: goto label_304f18;
        case 0x304f1cu: goto label_304f1c;
        default: break;
    }

    ctx->pc = 0x304cd0u;

label_304cd0:
    // 0x304cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x304cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_304cd4:
    // 0x304cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x304cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304cd8:
    // 0x304cd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x304cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_304cdc:
    // 0x304cdc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x304cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_304ce0:
    // 0x304ce0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x304ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_304ce4:
    // 0x304ce4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x304ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_304ce8:
    // 0x304ce8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_304cec:
    // 0x304cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x304cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_304cf0:
    // 0x304cf0: 0x8c910d70  lw          $s1, 0xD70($a0)
    ctx->pc = 0x304cf0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_304cf4:
    // 0x304cf4: 0x8c850d74  lw          $a1, 0xD74($a0)
    ctx->pc = 0x304cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_304cf8:
    // 0x304cf8: 0x90a402c5  lbu         $a0, 0x2C5($a1)
    ctx->pc = 0x304cf8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_304cfc:
    // 0x304cfc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x304cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_304d00:
    // 0x304d00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x304d00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_304d04:
    // 0x304d04: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x304d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_304d08:
    // 0x304d08: 0x24700280  addiu       $s0, $v1, 0x280
    ctx->pc = 0x304d08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 640));
label_304d0c:
    // 0x304d0c: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x304d0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_304d10:
    // 0x304d10: 0x54620040  bnel        $v1, $v0, . + 4 + (0x40 << 2)
label_304d14:
    if (ctx->pc == 0x304D14u) {
        ctx->pc = 0x304D14u;
            // 0x304d14: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->pc = 0x304D18u;
        goto label_304d18;
    }
    ctx->pc = 0x304D10u;
    {
        const bool branch_taken_0x304d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x304d10) {
            ctx->pc = 0x304D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304D10u;
            // 0x304d14: 0x92030001  lbu         $v1, 0x1($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304E14u;
            goto label_304e14;
        }
    }
    ctx->pc = 0x304D18u;
label_304d18:
    // 0x304d18: 0xc0754b4  jal         func_1D52D0
label_304d1c:
    if (ctx->pc == 0x304D1Cu) {
        ctx->pc = 0x304D1Cu;
            // 0x304d1c: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->pc = 0x304D20u;
        goto label_304d20;
    }
    ctx->pc = 0x304D18u;
    SET_GPR_U32(ctx, 31, 0x304D20u);
    ctx->pc = 0x304D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304D18u;
            // 0x304d1c: 0x26440440  addiu       $a0, $s2, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D20u; }
        if (ctx->pc != 0x304D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D20u; }
        if (ctx->pc != 0x304D20u) { return; }
    }
    ctx->pc = 0x304D20u;
label_304d20:
    // 0x304d20: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x304d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_304d24:
    // 0x304d24: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x304d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_304d28:
    // 0x304d28: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_304d2c:
    if (ctx->pc == 0x304D2Cu) {
        ctx->pc = 0x304D30u;
        goto label_304d30;
    }
    ctx->pc = 0x304D28u;
    {
        const bool branch_taken_0x304d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304d28) {
            ctx->pc = 0x304E10u;
            goto label_304e10;
        }
    }
    ctx->pc = 0x304D30u;
label_304d30:
    // 0x304d30: 0x8e420db4  lw          $v0, 0xDB4($s2)
    ctx->pc = 0x304d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3508)));
label_304d34:
    // 0x304d34: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x304d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_304d38:
    // 0x304d38: 0x10460035  beq         $v0, $a2, . + 4 + (0x35 << 2)
label_304d3c:
    if (ctx->pc == 0x304D3Cu) {
        ctx->pc = 0x304D40u;
        goto label_304d40;
    }
    ctx->pc = 0x304D38u;
    {
        const bool branch_taken_0x304d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x304d38) {
            ctx->pc = 0x304E10u;
            goto label_304e10;
        }
    }
    ctx->pc = 0x304D40u;
label_304d40:
    // 0x304d40: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x304d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_304d44:
    // 0x304d44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304d48:
    // 0x304d48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304d48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304d4c:
    // 0x304d4c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304d50:
    // 0x304d50: 0xc0bdf9c  jal         func_2F7E70
label_304d54:
    if (ctx->pc == 0x304D54u) {
        ctx->pc = 0x304D54u;
            // 0x304d54: 0xa6400c6a  sh          $zero, 0xC6A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3178), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x304D58u;
        goto label_304d58;
    }
    ctx->pc = 0x304D50u;
    SET_GPR_U32(ctx, 31, 0x304D58u);
    ctx->pc = 0x304D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304D50u;
            // 0x304d54: 0xa6400c6a  sh          $zero, 0xC6A($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3178), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D58u; }
        if (ctx->pc != 0x304D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D58u; }
        if (ctx->pc != 0x304D58u) { return; }
    }
    ctx->pc = 0x304D58u;
label_304d58:
    // 0x304d58: 0x8e430e34  lw          $v1, 0xE34($s2)
    ctx->pc = 0x304d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_304d5c:
    // 0x304d5c: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x304d5cu;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_304d60:
    // 0x304d60: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_304d64:
    if (ctx->pc == 0x304D64u) {
        ctx->pc = 0x304D64u;
            // 0x304d64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304D68u;
        goto label_304d68;
    }
    ctx->pc = 0x304D60u;
    {
        const bool branch_taken_0x304d60 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x304D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304D60u;
            // 0x304d64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304d60) {
            ctx->pc = 0x304D78u;
            goto label_304d78;
        }
    }
    ctx->pc = 0x304D68u;
label_304d68:
    // 0x304d68: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x304d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_304d6c:
    // 0x304d6c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_304d70:
    if (ctx->pc == 0x304D70u) {
        ctx->pc = 0x304D74u;
        goto label_304d74;
    }
    ctx->pc = 0x304D6Cu;
    {
        const bool branch_taken_0x304d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x304d6c) {
            ctx->pc = 0x304D78u;
            goto label_304d78;
        }
    }
    ctx->pc = 0x304D74u;
label_304d74:
    // 0x304d74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304d78:
    // 0x304d78: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_304d7c:
    if (ctx->pc == 0x304D7Cu) {
        ctx->pc = 0x304D80u;
        goto label_304d80;
    }
    ctx->pc = 0x304D78u;
    {
        const bool branch_taken_0x304d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x304d78) {
            ctx->pc = 0x304D94u;
            goto label_304d94;
        }
    }
    ctx->pc = 0x304D80u;
label_304d80:
    // 0x304d80: 0xc075eb4  jal         func_1D7AD0
label_304d84:
    if (ctx->pc == 0x304D84u) {
        ctx->pc = 0x304D84u;
            // 0x304d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x304D88u;
        goto label_304d88;
    }
    ctx->pc = 0x304D80u;
    SET_GPR_U32(ctx, 31, 0x304D88u);
    ctx->pc = 0x304D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304D80u;
            // 0x304d84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D88u; }
        if (ctx->pc != 0x304D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304D88u; }
        if (ctx->pc != 0x304D88u) { return; }
    }
    ctx->pc = 0x304D88u;
label_304d88:
    // 0x304d88: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_304d8c:
    if (ctx->pc == 0x304D8Cu) {
        ctx->pc = 0x304D90u;
        goto label_304d90;
    }
    ctx->pc = 0x304D88u;
    {
        const bool branch_taken_0x304d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x304d88) {
            ctx->pc = 0x304D94u;
            goto label_304d94;
        }
    }
    ctx->pc = 0x304D90u;
label_304d90:
    // 0x304d90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x304d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304d94:
    // 0x304d94: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_304d98:
    if (ctx->pc == 0x304D98u) {
        ctx->pc = 0x304D98u;
            // 0x304d98: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->pc = 0x304D9Cu;
        goto label_304d9c;
    }
    ctx->pc = 0x304D94u;
    {
        const bool branch_taken_0x304d94 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x304d94) {
            ctx->pc = 0x304D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304D94u;
            // 0x304d98: 0x8e440d70  lw          $a0, 0xD70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304DB0u;
            goto label_304db0;
        }
    }
    ctx->pc = 0x304D9Cu;
label_304d9c:
    // 0x304d9c: 0x8e440e34  lw          $a0, 0xE34($s2)
    ctx->pc = 0x304d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3636)));
label_304da0:
    // 0x304da0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x304da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_304da4:
    // 0x304da4: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_304da8:
    if (ctx->pc == 0x304DA8u) {
        ctx->pc = 0x304DA8u;
            // 0x304da8: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x304DACu;
        goto label_304dac;
    }
    ctx->pc = 0x304DA4u;
    {
        const bool branch_taken_0x304da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x304da4) {
            ctx->pc = 0x304DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304DA4u;
            // 0x304da8: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x304DBCu;
            goto label_304dbc;
        }
    }
    ctx->pc = 0x304DACu;
label_304dac:
    // 0x304dac: 0x8e440d70  lw          $a0, 0xD70($s2)
    ctx->pc = 0x304dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_304db0:
    // 0x304db0: 0xc0bd99c  jal         func_2F6670
label_304db4:
    if (ctx->pc == 0x304DB4u) {
        ctx->pc = 0x304DB8u;
        goto label_304db8;
    }
    ctx->pc = 0x304DB0u;
    SET_GPR_U32(ctx, 31, 0x304DB8u);
    ctx->pc = 0x2F6670u;
    if (runtime->hasFunction(0x2F6670u)) {
        auto targetFn = runtime->lookupFunction(0x2F6670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DB8u; }
        if (ctx->pc != 0x304DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6670_0x2f6670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304DB8u; }
        if (ctx->pc != 0x304DB8u) { return; }
    }
    ctx->pc = 0x304DB8u;
label_304db8:
    // 0x304db8: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x304db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_304dbc:
    // 0x304dbc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x304dbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304dc0:
    // 0x304dc0: 0x0  nop
    ctx->pc = 0x304dc0u;
    // NOP
label_304dc4:
    // 0x304dc4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x304dc4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_304dc8:
    // 0x304dc8: 0x4501000d  bc1t        . + 4 + (0xD << 2)
label_304dcc:
    if (ctx->pc == 0x304DCCu) {
        ctx->pc = 0x304DD0u;
        goto label_304dd0;
    }
    ctx->pc = 0x304DC8u;
    {
        const bool branch_taken_0x304dc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x304dc8) {
            ctx->pc = 0x304E00u;
            goto label_304e00;
        }
    }
    ctx->pc = 0x304DD0u;
label_304dd0:
    // 0x304dd0: 0x3c04447a  lui         $a0, 0x447A
    ctx->pc = 0x304dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17530 << 16));
label_304dd4:
    // 0x304dd4: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x304dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_304dd8:
    // 0x304dd8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x304dd8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304ddc:
    // 0x304ddc: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x304ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_304de0:
    // 0x304de0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x304de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_304de4:
    // 0x304de4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x304de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_304de8:
    // 0x304de8: 0x0  nop
    ctx->pc = 0x304de8u;
    // NOP
label_304dec:
    // 0x304dec: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x304decu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_304df0:
    // 0x304df0: 0x0  nop
    ctx->pc = 0x304df0u;
    // NOP
label_304df4:
    // 0x304df4: 0x0  nop
    ctx->pc = 0x304df4u;
    // NOP
label_304df8:
    // 0x304df8: 0x10000042  b           . + 4 + (0x42 << 2)
label_304dfc:
    if (ctx->pc == 0x304DFCu) {
        ctx->pc = 0x304DFCu;
            // 0x304dfc: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x304E00u;
        goto label_304e00;
    }
    ctx->pc = 0x304DF8u;
    {
        const bool branch_taken_0x304df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304DF8u;
            // 0x304dfc: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304df8) {
            ctx->pc = 0x304F04u;
            goto label_304f04;
        }
    }
    ctx->pc = 0x304E00u;
label_304e00:
    // 0x304e00: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x304e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_304e04:
    // 0x304e04: 0xc460c6b0  lwc1        $f0, -0x3950($v1)
    ctx->pc = 0x304e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294952624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_304e08:
    // 0x304e08: 0x1000003e  b           . + 4 + (0x3E << 2)
label_304e0c:
    if (ctx->pc == 0x304E0Cu) {
        ctx->pc = 0x304E0Cu;
            // 0x304e0c: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->pc = 0x304E10u;
        goto label_304e10;
    }
    ctx->pc = 0x304E08u;
    {
        const bool branch_taken_0x304e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304E08u;
            // 0x304e0c: 0xe6400de4  swc1        $f0, 0xDE4($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 3556), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e08) {
            ctx->pc = 0x304F04u;
            goto label_304f04;
        }
    }
    ctx->pc = 0x304E10u;
label_304e10:
    // 0x304e10: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x304e10u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_304e14:
    // 0x304e14: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x304e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_304e18:
    // 0x304e18: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_304e1c:
    if (ctx->pc == 0x304E1Cu) {
        ctx->pc = 0x304E1Cu;
            // 0x304e1c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x304E20u;
        goto label_304e20;
    }
    ctx->pc = 0x304E18u;
    {
        const bool branch_taken_0x304e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x304e18) {
            ctx->pc = 0x304E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304E18u;
            // 0x304e1c: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304E84u;
            goto label_304e84;
        }
    }
    ctx->pc = 0x304E20u;
label_304e20:
    // 0x304e20: 0xc142c1c  jal         func_50B070
label_304e24:
    if (ctx->pc == 0x304E24u) {
        ctx->pc = 0x304E24u;
            // 0x304e24: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->pc = 0x304E28u;
        goto label_304e28;
    }
    ctx->pc = 0x304E20u;
    SET_GPR_U32(ctx, 31, 0x304E28u);
    ctx->pc = 0x304E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304E20u;
            // 0x304e24: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B070u;
    if (runtime->hasFunction(0x50B070u)) {
        auto targetFn = runtime->lookupFunction(0x50B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E28u; }
        if (ctx->pc != 0x304E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B070_0x50b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E28u; }
        if (ctx->pc != 0x304E28u) { return; }
    }
    ctx->pc = 0x304E28u;
label_304e28:
    // 0x304e28: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_304e2c:
    if (ctx->pc == 0x304E2Cu) {
        ctx->pc = 0x304E2Cu;
            // 0x304e2c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x304E30u;
        goto label_304e30;
    }
    ctx->pc = 0x304E28u;
    {
        const bool branch_taken_0x304e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e28) {
            ctx->pc = 0x304E2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304E28u;
            // 0x304e2c: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304E68u;
            goto label_304e68;
        }
    }
    ctx->pc = 0x304E30u;
label_304e30:
    // 0x304e30: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x304e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
label_304e34:
    // 0x304e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304e38:
    // 0x304e38: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304e3c:
    // 0x304e3c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304e40:
    // 0x304e40: 0xc0bdf9c  jal         func_2F7E70
label_304e44:
    if (ctx->pc == 0x304E44u) {
        ctx->pc = 0x304E44u;
            // 0x304e44: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x304E48u;
        goto label_304e48;
    }
    ctx->pc = 0x304E40u;
    SET_GPR_U32(ctx, 31, 0x304E48u);
    ctx->pc = 0x304E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304E40u;
            // 0x304e44: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E48u; }
        if (ctx->pc != 0x304E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E48u; }
        if (ctx->pc != 0x304E48u) { return; }
    }
    ctx->pc = 0x304E48u;
label_304e48:
    // 0x304e48: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x304e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_304e4c:
    // 0x304e4c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x304e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_304e50:
    // 0x304e50: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x304e50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_304e54:
    // 0x304e54: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x304e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_304e58:
    // 0x304e58: 0x320f809  jalr        $t9
label_304e5c:
    if (ctx->pc == 0x304E5Cu) {
        ctx->pc = 0x304E5Cu;
            // 0x304e5c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x304E60u;
        goto label_304e60;
    }
    ctx->pc = 0x304E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x304E60u);
        ctx->pc = 0x304E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304E58u;
            // 0x304e5c: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x304E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x304E60u; }
            if (ctx->pc != 0x304E60u) { return; }
        }
        }
    }
    ctx->pc = 0x304E60u;
label_304e60:
    // 0x304e60: 0x10000029  b           . + 4 + (0x29 << 2)
label_304e64:
    if (ctx->pc == 0x304E64u) {
        ctx->pc = 0x304E64u;
            // 0x304e64: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x304E68u;
        goto label_304e68;
    }
    ctx->pc = 0x304E60u;
    {
        const bool branch_taken_0x304e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304E60u;
            // 0x304e64: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e60) {
            ctx->pc = 0x304F08u;
            goto label_304f08;
        }
    }
    ctx->pc = 0x304E68u;
label_304e68:
    // 0x304e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304e6c:
    // 0x304e6c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304e6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304e70:
    // 0x304e70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304e74:
    // 0x304e74: 0xc0bdf9c  jal         func_2F7E70
label_304e78:
    if (ctx->pc == 0x304E78u) {
        ctx->pc = 0x304E78u;
            // 0x304e78: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x304E7Cu;
        goto label_304e7c;
    }
    ctx->pc = 0x304E74u;
    SET_GPR_U32(ctx, 31, 0x304E7Cu);
    ctx->pc = 0x304E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304E74u;
            // 0x304e78: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E7Cu; }
        if (ctx->pc != 0x304E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E7Cu; }
        if (ctx->pc != 0x304E7Cu) { return; }
    }
    ctx->pc = 0x304E7Cu;
label_304e7c:
    // 0x304e7c: 0x10000021  b           . + 4 + (0x21 << 2)
label_304e80:
    if (ctx->pc == 0x304E80u) {
        ctx->pc = 0x304E84u;
        goto label_304e84;
    }
    ctx->pc = 0x304E7Cu;
    {
        const bool branch_taken_0x304e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e7c) {
            ctx->pc = 0x304F04u;
            goto label_304f04;
        }
    }
    ctx->pc = 0x304E84u;
label_304e84:
    // 0x304e84: 0x5462001a  bnel        $v1, $v0, . + 4 + (0x1A << 2)
label_304e88:
    if (ctx->pc == 0x304E88u) {
        ctx->pc = 0x304E88u;
            // 0x304e88: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x304E8Cu;
        goto label_304e8c;
    }
    ctx->pc = 0x304E84u;
    {
        const bool branch_taken_0x304e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x304e84) {
            ctx->pc = 0x304E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304E84u;
            // 0x304e88: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304EF0u;
            goto label_304ef0;
        }
    }
    ctx->pc = 0x304E8Cu;
label_304e8c:
    // 0x304e8c: 0xc142c1c  jal         func_50B070
label_304e90:
    if (ctx->pc == 0x304E90u) {
        ctx->pc = 0x304E90u;
            // 0x304e90: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->pc = 0x304E94u;
        goto label_304e94;
    }
    ctx->pc = 0x304E8Cu;
    SET_GPR_U32(ctx, 31, 0x304E94u);
    ctx->pc = 0x304E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304E8Cu;
            // 0x304e90: 0x26440940  addiu       $a0, $s2, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x50B070u;
    if (runtime->hasFunction(0x50B070u)) {
        auto targetFn = runtime->lookupFunction(0x50B070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E94u; }
        if (ctx->pc != 0x304E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0050B070_0x50b070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304E94u; }
        if (ctx->pc != 0x304E94u) { return; }
    }
    ctx->pc = 0x304E94u;
label_304e94:
    // 0x304e94: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_304e98:
    if (ctx->pc == 0x304E98u) {
        ctx->pc = 0x304E98u;
            // 0x304e98: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->pc = 0x304E9Cu;
        goto label_304e9c;
    }
    ctx->pc = 0x304E94u;
    {
        const bool branch_taken_0x304e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304e94) {
            ctx->pc = 0x304E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x304E94u;
            // 0x304e98: 0x3c024170  lui         $v0, 0x4170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x304ED4u;
            goto label_304ed4;
        }
    }
    ctx->pc = 0x304E9Cu;
label_304e9c:
    // 0x304e9c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x304e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_304ea0:
    // 0x304ea0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304ea4:
    // 0x304ea4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304ea4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304ea8:
    // 0x304ea8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304eac:
    // 0x304eac: 0xc0bdf9c  jal         func_2F7E70
label_304eb0:
    if (ctx->pc == 0x304EB0u) {
        ctx->pc = 0x304EB0u;
            // 0x304eb0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x304EB4u;
        goto label_304eb4;
    }
    ctx->pc = 0x304EACu;
    SET_GPR_U32(ctx, 31, 0x304EB4u);
    ctx->pc = 0x304EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304EACu;
            // 0x304eb0: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304EB4u; }
        if (ctx->pc != 0x304EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304EB4u; }
        if (ctx->pc != 0x304EB4u) { return; }
    }
    ctx->pc = 0x304EB4u;
label_304eb4:
    // 0x304eb4: 0x8e440d60  lw          $a0, 0xD60($s2)
    ctx->pc = 0x304eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_304eb8:
    // 0x304eb8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x304eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_304ebc:
    // 0x304ebc: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x304ebcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_304ec0:
    // 0x304ec0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x304ec0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_304ec4:
    // 0x304ec4: 0x320f809  jalr        $t9
label_304ec8:
    if (ctx->pc == 0x304EC8u) {
        ctx->pc = 0x304EC8u;
            // 0x304ec8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x304ECCu;
        goto label_304ecc;
    }
    ctx->pc = 0x304EC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x304ECCu);
        ctx->pc = 0x304EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304EC4u;
            // 0x304ec8: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x304ECCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x304ECCu; }
            if (ctx->pc != 0x304ECCu) { return; }
        }
        }
    }
    ctx->pc = 0x304ECCu;
label_304ecc:
    // 0x304ecc: 0x1000000d  b           . + 4 + (0xD << 2)
label_304ed0:
    if (ctx->pc == 0x304ED0u) {
        ctx->pc = 0x304ED4u;
        goto label_304ed4;
    }
    ctx->pc = 0x304ECCu;
    {
        const bool branch_taken_0x304ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ecc) {
            ctx->pc = 0x304F04u;
            goto label_304f04;
        }
    }
    ctx->pc = 0x304ED4u;
label_304ed4:
    // 0x304ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304ed8:
    // 0x304ed8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304edc:
    // 0x304edc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304ee0:
    // 0x304ee0: 0xc0bdf9c  jal         func_2F7E70
label_304ee4:
    if (ctx->pc == 0x304EE4u) {
        ctx->pc = 0x304EE4u;
            // 0x304ee4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x304EE8u;
        goto label_304ee8;
    }
    ctx->pc = 0x304EE0u;
    SET_GPR_U32(ctx, 31, 0x304EE8u);
    ctx->pc = 0x304EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304EE0u;
            // 0x304ee4: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304EE8u; }
        if (ctx->pc != 0x304EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304EE8u; }
        if (ctx->pc != 0x304EE8u) { return; }
    }
    ctx->pc = 0x304EE8u;
label_304ee8:
    // 0x304ee8: 0x10000006  b           . + 4 + (0x6 << 2)
label_304eec:
    if (ctx->pc == 0x304EECu) {
        ctx->pc = 0x304EF0u;
        goto label_304ef0;
    }
    ctx->pc = 0x304EE8u;
    {
        const bool branch_taken_0x304ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x304ee8) {
            ctx->pc = 0x304F04u;
            goto label_304f04;
        }
    }
    ctx->pc = 0x304EF0u;
label_304ef0:
    // 0x304ef0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x304ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_304ef4:
    // 0x304ef4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x304ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_304ef8:
    // 0x304ef8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x304ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_304efc:
    // 0x304efc: 0xc0bdf9c  jal         func_2F7E70
label_304f00:
    if (ctx->pc == 0x304F00u) {
        ctx->pc = 0x304F00u;
            // 0x304f00: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x304F04u;
        goto label_304f04;
    }
    ctx->pc = 0x304EFCu;
    SET_GPR_U32(ctx, 31, 0x304F04u);
    ctx->pc = 0x304F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x304EFCu;
            // 0x304f00: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F04u; }
        if (ctx->pc != 0x304F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x304F04u; }
        if (ctx->pc != 0x304F04u) { return; }
    }
    ctx->pc = 0x304F04u;
label_304f04:
    // 0x304f04: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x304f04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_304f08:
    // 0x304f08: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x304f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_304f0c:
    // 0x304f0c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x304f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_304f10:
    // 0x304f10: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x304f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_304f14:
    // 0x304f14: 0x3e00008  jr          $ra
label_304f18:
    if (ctx->pc == 0x304F18u) {
        ctx->pc = 0x304F18u;
            // 0x304f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x304F1Cu;
        goto label_304f1c;
    }
    ctx->pc = 0x304F14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x304F14u;
            // 0x304f18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x304F1Cu;
label_304f1c:
    // 0x304f1c: 0x0  nop
    ctx->pc = 0x304f1cu;
    // NOP
}
