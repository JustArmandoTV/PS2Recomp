#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379C00
// Address: 0x379c00 - 0x379dc0
void sub_00379C00_0x379c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379C00_0x379c00");
#endif

    switch (ctx->pc) {
        case 0x379c00u: goto label_379c00;
        case 0x379c04u: goto label_379c04;
        case 0x379c08u: goto label_379c08;
        case 0x379c0cu: goto label_379c0c;
        case 0x379c10u: goto label_379c10;
        case 0x379c14u: goto label_379c14;
        case 0x379c18u: goto label_379c18;
        case 0x379c1cu: goto label_379c1c;
        case 0x379c20u: goto label_379c20;
        case 0x379c24u: goto label_379c24;
        case 0x379c28u: goto label_379c28;
        case 0x379c2cu: goto label_379c2c;
        case 0x379c30u: goto label_379c30;
        case 0x379c34u: goto label_379c34;
        case 0x379c38u: goto label_379c38;
        case 0x379c3cu: goto label_379c3c;
        case 0x379c40u: goto label_379c40;
        case 0x379c44u: goto label_379c44;
        case 0x379c48u: goto label_379c48;
        case 0x379c4cu: goto label_379c4c;
        case 0x379c50u: goto label_379c50;
        case 0x379c54u: goto label_379c54;
        case 0x379c58u: goto label_379c58;
        case 0x379c5cu: goto label_379c5c;
        case 0x379c60u: goto label_379c60;
        case 0x379c64u: goto label_379c64;
        case 0x379c68u: goto label_379c68;
        case 0x379c6cu: goto label_379c6c;
        case 0x379c70u: goto label_379c70;
        case 0x379c74u: goto label_379c74;
        case 0x379c78u: goto label_379c78;
        case 0x379c7cu: goto label_379c7c;
        case 0x379c80u: goto label_379c80;
        case 0x379c84u: goto label_379c84;
        case 0x379c88u: goto label_379c88;
        case 0x379c8cu: goto label_379c8c;
        case 0x379c90u: goto label_379c90;
        case 0x379c94u: goto label_379c94;
        case 0x379c98u: goto label_379c98;
        case 0x379c9cu: goto label_379c9c;
        case 0x379ca0u: goto label_379ca0;
        case 0x379ca4u: goto label_379ca4;
        case 0x379ca8u: goto label_379ca8;
        case 0x379cacu: goto label_379cac;
        case 0x379cb0u: goto label_379cb0;
        case 0x379cb4u: goto label_379cb4;
        case 0x379cb8u: goto label_379cb8;
        case 0x379cbcu: goto label_379cbc;
        case 0x379cc0u: goto label_379cc0;
        case 0x379cc4u: goto label_379cc4;
        case 0x379cc8u: goto label_379cc8;
        case 0x379cccu: goto label_379ccc;
        case 0x379cd0u: goto label_379cd0;
        case 0x379cd4u: goto label_379cd4;
        case 0x379cd8u: goto label_379cd8;
        case 0x379cdcu: goto label_379cdc;
        case 0x379ce0u: goto label_379ce0;
        case 0x379ce4u: goto label_379ce4;
        case 0x379ce8u: goto label_379ce8;
        case 0x379cecu: goto label_379cec;
        case 0x379cf0u: goto label_379cf0;
        case 0x379cf4u: goto label_379cf4;
        case 0x379cf8u: goto label_379cf8;
        case 0x379cfcu: goto label_379cfc;
        case 0x379d00u: goto label_379d00;
        case 0x379d04u: goto label_379d04;
        case 0x379d08u: goto label_379d08;
        case 0x379d0cu: goto label_379d0c;
        case 0x379d10u: goto label_379d10;
        case 0x379d14u: goto label_379d14;
        case 0x379d18u: goto label_379d18;
        case 0x379d1cu: goto label_379d1c;
        case 0x379d20u: goto label_379d20;
        case 0x379d24u: goto label_379d24;
        case 0x379d28u: goto label_379d28;
        case 0x379d2cu: goto label_379d2c;
        case 0x379d30u: goto label_379d30;
        case 0x379d34u: goto label_379d34;
        case 0x379d38u: goto label_379d38;
        case 0x379d3cu: goto label_379d3c;
        case 0x379d40u: goto label_379d40;
        case 0x379d44u: goto label_379d44;
        case 0x379d48u: goto label_379d48;
        case 0x379d4cu: goto label_379d4c;
        case 0x379d50u: goto label_379d50;
        case 0x379d54u: goto label_379d54;
        case 0x379d58u: goto label_379d58;
        case 0x379d5cu: goto label_379d5c;
        case 0x379d60u: goto label_379d60;
        case 0x379d64u: goto label_379d64;
        case 0x379d68u: goto label_379d68;
        case 0x379d6cu: goto label_379d6c;
        case 0x379d70u: goto label_379d70;
        case 0x379d74u: goto label_379d74;
        case 0x379d78u: goto label_379d78;
        case 0x379d7cu: goto label_379d7c;
        case 0x379d80u: goto label_379d80;
        case 0x379d84u: goto label_379d84;
        case 0x379d88u: goto label_379d88;
        case 0x379d8cu: goto label_379d8c;
        case 0x379d90u: goto label_379d90;
        case 0x379d94u: goto label_379d94;
        case 0x379d98u: goto label_379d98;
        case 0x379d9cu: goto label_379d9c;
        case 0x379da0u: goto label_379da0;
        case 0x379da4u: goto label_379da4;
        case 0x379da8u: goto label_379da8;
        case 0x379dacu: goto label_379dac;
        case 0x379db0u: goto label_379db0;
        case 0x379db4u: goto label_379db4;
        case 0x379db8u: goto label_379db8;
        case 0x379dbcu: goto label_379dbc;
        default: break;
    }

    ctx->pc = 0x379c00u;

label_379c00:
    // 0x379c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_379c04:
    // 0x379c04: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x379c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_379c08:
    // 0x379c08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x379c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_379c0c:
    // 0x379c0c: 0x3446869f  ori         $a2, $v0, 0x869F
    ctx->pc = 0x379c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34463);
label_379c10:
    // 0x379c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_379c14:
    // 0x379c14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_379c18:
    // 0x379c18: 0xc0de7a8  jal         func_379EA0
label_379c1c:
    if (ctx->pc == 0x379C1Cu) {
        ctx->pc = 0x379C1Cu;
            // 0x379c1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379C20u;
        goto label_379c20;
    }
    ctx->pc = 0x379C18u;
    SET_GPR_U32(ctx, 31, 0x379C20u);
    ctx->pc = 0x379C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379C18u;
            // 0x379c1c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379EA0u;
    if (runtime->hasFunction(0x379EA0u)) {
        auto targetFn = runtime->lookupFunction(0x379EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379C20u; }
        if (ctx->pc != 0x379C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379EA0_0x379ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379C20u; }
        if (ctx->pc != 0x379C20u) { return; }
    }
    ctx->pc = 0x379C20u;
label_379c20:
    // 0x379c20: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379c20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_379c24:
    // 0x379c24: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379c28:
    // 0x379c28: 0x246372a0  addiu       $v1, $v1, 0x72A0
    ctx->pc = 0x379c28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29344));
label_379c2c:
    // 0x379c2c: 0x244272d8  addiu       $v0, $v0, 0x72D8
    ctx->pc = 0x379c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29400));
label_379c30:
    // 0x379c30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x379c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_379c34:
    // 0x379c34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_379c38:
    // 0x379c38: 0xc0de7a4  jal         func_379E90
label_379c3c:
    if (ctx->pc == 0x379C3Cu) {
        ctx->pc = 0x379C3Cu;
            // 0x379c3c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x379C40u;
        goto label_379c40;
    }
    ctx->pc = 0x379C38u;
    SET_GPR_U32(ctx, 31, 0x379C40u);
    ctx->pc = 0x379C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379C38u;
            // 0x379c3c: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379E90u;
    if (runtime->hasFunction(0x379E90u)) {
        auto targetFn = runtime->lookupFunction(0x379E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379C40u; }
        if (ctx->pc != 0x379C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379E90_0x379e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379C40u; }
        if (ctx->pc != 0x379C40u) { return; }
    }
    ctx->pc = 0x379C40u;
label_379c40:
    // 0x379c40: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x379c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_379c44:
    // 0x379c44: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x379c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_379c48:
    // 0x379c48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379c4c:
    // 0x379c4c: 0x34650ca9  ori         $a1, $v1, 0xCA9
    ctx->pc = 0x379c4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3241);
label_379c50:
    // 0x379c50: 0x244271c0  addiu       $v0, $v0, 0x71C0
    ctx->pc = 0x379c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29120));
label_379c54:
    // 0x379c54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x379c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_379c58:
    // 0x379c58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379c5c:
    // 0x379c5c: 0x244271f8  addiu       $v0, $v0, 0x71F8
    ctx->pc = 0x379c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29176));
label_379c60:
    // 0x379c60: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x379c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_379c64:
    // 0x379c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x379c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_379c68:
    // 0x379c68: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x379c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
label_379c6c:
    // 0x379c6c: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x379c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
label_379c70:
    // 0x379c70: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x379c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_379c74:
    // 0x379c74: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x379c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_379c78:
    // 0x379c78: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x379c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_379c7c:
    // 0x379c7c: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x379c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_379c80:
    // 0x379c80: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x379c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_379c84:
    // 0x379c84: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x379c84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_379c88:
    // 0x379c88: 0x320f809  jalr        $t9
label_379c8c:
    if (ctx->pc == 0x379C8Cu) {
        ctx->pc = 0x379C8Cu;
            // 0x379c8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x379C90u;
        goto label_379c90;
    }
    ctx->pc = 0x379C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x379C90u);
        ctx->pc = 0x379C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379C88u;
            // 0x379c8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x379C90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x379C90u; }
            if (ctx->pc != 0x379C90u) { return; }
        }
        }
    }
    ctx->pc = 0x379C90u;
label_379c90:
    // 0x379c90: 0xae0200ac  sw          $v0, 0xAC($s0)
    ctx->pc = 0x379c90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 2));
label_379c94:
    // 0x379c94: 0xc040180  jal         func_100600
label_379c98:
    if (ctx->pc == 0x379C98u) {
        ctx->pc = 0x379C98u;
            // 0x379c98: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x379C9Cu;
        goto label_379c9c;
    }
    ctx->pc = 0x379C94u;
    SET_GPR_U32(ctx, 31, 0x379C9Cu);
    ctx->pc = 0x379C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379C94u;
            // 0x379c98: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379C9Cu; }
        if (ctx->pc != 0x379C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379C9Cu; }
        if (ctx->pc != 0x379C9Cu) { return; }
    }
    ctx->pc = 0x379C9Cu;
label_379c9c:
    // 0x379c9c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_379ca0:
    if (ctx->pc == 0x379CA0u) {
        ctx->pc = 0x379CA0u;
            // 0x379ca0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379CA4u;
        goto label_379ca4;
    }
    ctx->pc = 0x379C9Cu;
    {
        const bool branch_taken_0x379c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x379CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379C9Cu;
            // 0x379ca0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379c9c) {
            ctx->pc = 0x379CD4u;
            goto label_379cd4;
        }
    }
    ctx->pc = 0x379CA4u;
label_379ca4:
    // 0x379ca4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x379ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_379ca8:
    // 0x379ca8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x379ca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_379cac:
    // 0x379cac: 0x34458a93  ori         $a1, $v0, 0x8A93
    ctx->pc = 0x379cacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35475);
label_379cb0:
    // 0x379cb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_379cb4:
    // 0x379cb4: 0xc10ca68  jal         func_4329A0
label_379cb8:
    if (ctx->pc == 0x379CB8u) {
        ctx->pc = 0x379CB8u;
            // 0x379cb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379CBCu;
        goto label_379cbc;
    }
    ctx->pc = 0x379CB4u;
    SET_GPR_U32(ctx, 31, 0x379CBCu);
    ctx->pc = 0x379CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379CB4u;
            // 0x379cb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379CBCu; }
        if (ctx->pc != 0x379CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379CBCu; }
        if (ctx->pc != 0x379CBCu) { return; }
    }
    ctx->pc = 0x379CBCu;
label_379cbc:
    // 0x379cbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_379cc0:
    // 0x379cc0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379cc4:
    // 0x379cc4: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x379cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_379cc8:
    // 0x379cc8: 0x24427210  addiu       $v0, $v0, 0x7210
    ctx->pc = 0x379cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29200));
label_379ccc:
    // 0x379ccc: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x379cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_379cd0:
    // 0x379cd0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x379cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_379cd4:
    // 0x379cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x379cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_379cd8:
    // 0x379cd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x379cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_379cdc:
    // 0x379cdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379cdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379ce0:
    // 0x379ce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379ce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_379ce4:
    // 0x379ce4: 0x3e00008  jr          $ra
label_379ce8:
    if (ctx->pc == 0x379CE8u) {
        ctx->pc = 0x379CE8u;
            // 0x379ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x379CECu;
        goto label_379cec;
    }
    ctx->pc = 0x379CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379CE4u;
            // 0x379ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379CECu;
label_379cec:
    // 0x379cec: 0x0  nop
    ctx->pc = 0x379cecu;
    // NOP
label_379cf0:
    // 0x379cf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x379cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_379cf4:
    // 0x379cf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x379cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_379cf8:
    // 0x379cf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_379cfc:
    // 0x379cfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_379d00:
    // 0x379d00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x379d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_379d04:
    // 0x379d04: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_379d08:
    if (ctx->pc == 0x379D08u) {
        ctx->pc = 0x379D08u;
            // 0x379d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379D0Cu;
        goto label_379d0c;
    }
    ctx->pc = 0x379D04u;
    {
        const bool branch_taken_0x379d04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x379D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379D04u;
            // 0x379d08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d04) {
            ctx->pc = 0x379DA4u;
            goto label_379da4;
        }
    }
    ctx->pc = 0x379D0Cu;
label_379d0c:
    // 0x379d0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_379d10:
    // 0x379d10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379d14:
    // 0x379d14: 0x246372a0  addiu       $v1, $v1, 0x72A0
    ctx->pc = 0x379d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29344));
label_379d18:
    // 0x379d18: 0x244272d8  addiu       $v0, $v0, 0x72D8
    ctx->pc = 0x379d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29400));
label_379d1c:
    // 0x379d1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x379d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_379d20:
    // 0x379d20: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_379d24:
    if (ctx->pc == 0x379D24u) {
        ctx->pc = 0x379D24u;
            // 0x379d24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x379D28u;
        goto label_379d28;
    }
    ctx->pc = 0x379D20u;
    {
        const bool branch_taken_0x379d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x379D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379D20u;
            // 0x379d24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x379d20) {
            ctx->pc = 0x379D8Cu;
            goto label_379d8c;
        }
    }
    ctx->pc = 0x379D28u;
label_379d28:
    // 0x379d28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379d28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_379d2c:
    // 0x379d2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_379d30:
    // 0x379d30: 0x24637250  addiu       $v1, $v1, 0x7250
    ctx->pc = 0x379d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
label_379d34:
    // 0x379d34: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x379d34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
label_379d38:
    // 0x379d38: 0x24427288  addiu       $v0, $v0, 0x7288
    ctx->pc = 0x379d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29320));
label_379d3c:
    // 0x379d3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x379d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_379d40:
    // 0x379d40: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x379d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_379d44:
    // 0x379d44: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x379d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_379d48:
    // 0x379d48: 0xc0407c0  jal         func_101F00
label_379d4c:
    if (ctx->pc == 0x379D4Cu) {
        ctx->pc = 0x379D4Cu;
            // 0x379d4c: 0x24a591b0  addiu       $a1, $a1, -0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939056));
        ctx->pc = 0x379D50u;
        goto label_379d50;
    }
    ctx->pc = 0x379D48u;
    SET_GPR_U32(ctx, 31, 0x379D50u);
    ctx->pc = 0x379D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379D48u;
            // 0x379d4c: 0x24a591b0  addiu       $a1, $a1, -0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D50u; }
        if (ctx->pc != 0x379D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D50u; }
        if (ctx->pc != 0x379D50u) { return; }
    }
    ctx->pc = 0x379D50u;
label_379d50:
    // 0x379d50: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x379d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_379d54:
    // 0x379d54: 0xc0a8cf8  jal         func_2A33E0
label_379d58:
    if (ctx->pc == 0x379D58u) {
        ctx->pc = 0x379D58u;
            // 0x379d58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x379D5Cu;
        goto label_379d5c;
    }
    ctx->pc = 0x379D54u;
    SET_GPR_U32(ctx, 31, 0x379D5Cu);
    ctx->pc = 0x379D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379D54u;
            // 0x379d58: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A33E0u;
    if (runtime->hasFunction(0x2A33E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A33E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D5Cu; }
        if (ctx->pc != 0x379D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A33E0_0x2a33e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D5Cu; }
        if (ctx->pc != 0x379D5Cu) { return; }
    }
    ctx->pc = 0x379D5Cu;
label_379d5c:
    // 0x379d5c: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x379d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_379d60:
    // 0x379d60: 0xc0de788  jal         func_379E20
label_379d64:
    if (ctx->pc == 0x379D64u) {
        ctx->pc = 0x379D64u;
            // 0x379d64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x379D68u;
        goto label_379d68;
    }
    ctx->pc = 0x379D60u;
    SET_GPR_U32(ctx, 31, 0x379D68u);
    ctx->pc = 0x379D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379D60u;
            // 0x379d64: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379E20u;
    if (runtime->hasFunction(0x379E20u)) {
        auto targetFn = runtime->lookupFunction(0x379E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D68u; }
        if (ctx->pc != 0x379D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379E20_0x379e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D68u; }
        if (ctx->pc != 0x379D68u) { return; }
    }
    ctx->pc = 0x379D68u;
label_379d68:
    // 0x379d68: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x379d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_379d6c:
    // 0x379d6c: 0xc0de788  jal         func_379E20
label_379d70:
    if (ctx->pc == 0x379D70u) {
        ctx->pc = 0x379D70u;
            // 0x379d70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x379D74u;
        goto label_379d74;
    }
    ctx->pc = 0x379D6Cu;
    SET_GPR_U32(ctx, 31, 0x379D74u);
    ctx->pc = 0x379D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379D6Cu;
            // 0x379d70: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379E20u;
    if (runtime->hasFunction(0x379E20u)) {
        auto targetFn = runtime->lookupFunction(0x379E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D74u; }
        if (ctx->pc != 0x379D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379E20_0x379e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D74u; }
        if (ctx->pc != 0x379D74u) { return; }
    }
    ctx->pc = 0x379D74u;
label_379d74:
    // 0x379d74: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x379d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_379d78:
    // 0x379d78: 0xc0de770  jal         func_379DC0
label_379d7c:
    if (ctx->pc == 0x379D7Cu) {
        ctx->pc = 0x379D7Cu;
            // 0x379d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379D80u;
        goto label_379d80;
    }
    ctx->pc = 0x379D78u;
    SET_GPR_U32(ctx, 31, 0x379D80u);
    ctx->pc = 0x379D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379D78u;
            // 0x379d7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x379DC0u;
    if (runtime->hasFunction(0x379DC0u)) {
        auto targetFn = runtime->lookupFunction(0x379DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D80u; }
        if (ctx->pc != 0x379D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00379DC0_0x379dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D80u; }
        if (ctx->pc != 0x379D80u) { return; }
    }
    ctx->pc = 0x379D80u;
label_379d80:
    // 0x379d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x379d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_379d84:
    // 0x379d84: 0xc0ae1c0  jal         func_2B8700
label_379d88:
    if (ctx->pc == 0x379D88u) {
        ctx->pc = 0x379D88u;
            // 0x379d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379D8Cu;
        goto label_379d8c;
    }
    ctx->pc = 0x379D84u;
    SET_GPR_U32(ctx, 31, 0x379D8Cu);
    ctx->pc = 0x379D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379D84u;
            // 0x379d88: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D8Cu; }
        if (ctx->pc != 0x379D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379D8Cu; }
        if (ctx->pc != 0x379D8Cu) { return; }
    }
    ctx->pc = 0x379D8Cu;
label_379d8c:
    // 0x379d8c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x379d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_379d90:
    // 0x379d90: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x379d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_379d94:
    // 0x379d94: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_379d98:
    if (ctx->pc == 0x379D98u) {
        ctx->pc = 0x379D98u;
            // 0x379d98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379D9Cu;
        goto label_379d9c;
    }
    ctx->pc = 0x379D94u;
    {
        const bool branch_taken_0x379d94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x379d94) {
            ctx->pc = 0x379D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x379D94u;
            // 0x379d98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x379DA8u;
            goto label_379da8;
        }
    }
    ctx->pc = 0x379D9Cu;
label_379d9c:
    // 0x379d9c: 0xc0400a8  jal         func_1002A0
label_379da0:
    if (ctx->pc == 0x379DA0u) {
        ctx->pc = 0x379DA0u;
            // 0x379da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x379DA4u;
        goto label_379da4;
    }
    ctx->pc = 0x379D9Cu;
    SET_GPR_U32(ctx, 31, 0x379DA4u);
    ctx->pc = 0x379DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379D9Cu;
            // 0x379da0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379DA4u; }
        if (ctx->pc != 0x379DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379DA4u; }
        if (ctx->pc != 0x379DA4u) { return; }
    }
    ctx->pc = 0x379DA4u;
label_379da4:
    // 0x379da4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x379da4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_379da8:
    // 0x379da8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x379da8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_379dac:
    // 0x379dac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x379dacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_379db0:
    // 0x379db0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x379db0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_379db4:
    // 0x379db4: 0x3e00008  jr          $ra
label_379db8:
    if (ctx->pc == 0x379DB8u) {
        ctx->pc = 0x379DB8u;
            // 0x379db8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x379DBCu;
        goto label_379dbc;
    }
    ctx->pc = 0x379DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x379DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x379DB4u;
            // 0x379db8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x379DBCu;
label_379dbc:
    // 0x379dbc: 0x0  nop
    ctx->pc = 0x379dbcu;
    // NOP
}
