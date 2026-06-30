#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00172C00
// Address: 0x172c00 - 0x172dd8
void sub_00172C00_0x172c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172C00_0x172c00");
#endif

    switch (ctx->pc) {
        case 0x172c00u: goto label_172c00;
        case 0x172c04u: goto label_172c04;
        case 0x172c08u: goto label_172c08;
        case 0x172c0cu: goto label_172c0c;
        case 0x172c10u: goto label_172c10;
        case 0x172c14u: goto label_172c14;
        case 0x172c18u: goto label_172c18;
        case 0x172c1cu: goto label_172c1c;
        case 0x172c20u: goto label_172c20;
        case 0x172c24u: goto label_172c24;
        case 0x172c28u: goto label_172c28;
        case 0x172c2cu: goto label_172c2c;
        case 0x172c30u: goto label_172c30;
        case 0x172c34u: goto label_172c34;
        case 0x172c38u: goto label_172c38;
        case 0x172c3cu: goto label_172c3c;
        case 0x172c40u: goto label_172c40;
        case 0x172c44u: goto label_172c44;
        case 0x172c48u: goto label_172c48;
        case 0x172c4cu: goto label_172c4c;
        case 0x172c50u: goto label_172c50;
        case 0x172c54u: goto label_172c54;
        case 0x172c58u: goto label_172c58;
        case 0x172c5cu: goto label_172c5c;
        case 0x172c60u: goto label_172c60;
        case 0x172c64u: goto label_172c64;
        case 0x172c68u: goto label_172c68;
        case 0x172c6cu: goto label_172c6c;
        case 0x172c70u: goto label_172c70;
        case 0x172c74u: goto label_172c74;
        case 0x172c78u: goto label_172c78;
        case 0x172c7cu: goto label_172c7c;
        case 0x172c80u: goto label_172c80;
        case 0x172c84u: goto label_172c84;
        case 0x172c88u: goto label_172c88;
        case 0x172c8cu: goto label_172c8c;
        case 0x172c90u: goto label_172c90;
        case 0x172c94u: goto label_172c94;
        case 0x172c98u: goto label_172c98;
        case 0x172c9cu: goto label_172c9c;
        case 0x172ca0u: goto label_172ca0;
        case 0x172ca4u: goto label_172ca4;
        case 0x172ca8u: goto label_172ca8;
        case 0x172cacu: goto label_172cac;
        case 0x172cb0u: goto label_172cb0;
        case 0x172cb4u: goto label_172cb4;
        case 0x172cb8u: goto label_172cb8;
        case 0x172cbcu: goto label_172cbc;
        case 0x172cc0u: goto label_172cc0;
        case 0x172cc4u: goto label_172cc4;
        case 0x172cc8u: goto label_172cc8;
        case 0x172cccu: goto label_172ccc;
        case 0x172cd0u: goto label_172cd0;
        case 0x172cd4u: goto label_172cd4;
        case 0x172cd8u: goto label_172cd8;
        case 0x172cdcu: goto label_172cdc;
        case 0x172ce0u: goto label_172ce0;
        case 0x172ce4u: goto label_172ce4;
        case 0x172ce8u: goto label_172ce8;
        case 0x172cecu: goto label_172cec;
        case 0x172cf0u: goto label_172cf0;
        case 0x172cf4u: goto label_172cf4;
        case 0x172cf8u: goto label_172cf8;
        case 0x172cfcu: goto label_172cfc;
        case 0x172d00u: goto label_172d00;
        case 0x172d04u: goto label_172d04;
        case 0x172d08u: goto label_172d08;
        case 0x172d0cu: goto label_172d0c;
        case 0x172d10u: goto label_172d10;
        case 0x172d14u: goto label_172d14;
        case 0x172d18u: goto label_172d18;
        case 0x172d1cu: goto label_172d1c;
        case 0x172d20u: goto label_172d20;
        case 0x172d24u: goto label_172d24;
        case 0x172d28u: goto label_172d28;
        case 0x172d2cu: goto label_172d2c;
        case 0x172d30u: goto label_172d30;
        case 0x172d34u: goto label_172d34;
        case 0x172d38u: goto label_172d38;
        case 0x172d3cu: goto label_172d3c;
        case 0x172d40u: goto label_172d40;
        case 0x172d44u: goto label_172d44;
        case 0x172d48u: goto label_172d48;
        case 0x172d4cu: goto label_172d4c;
        case 0x172d50u: goto label_172d50;
        case 0x172d54u: goto label_172d54;
        case 0x172d58u: goto label_172d58;
        case 0x172d5cu: goto label_172d5c;
        case 0x172d60u: goto label_172d60;
        case 0x172d64u: goto label_172d64;
        case 0x172d68u: goto label_172d68;
        case 0x172d6cu: goto label_172d6c;
        case 0x172d70u: goto label_172d70;
        case 0x172d74u: goto label_172d74;
        case 0x172d78u: goto label_172d78;
        case 0x172d7cu: goto label_172d7c;
        case 0x172d80u: goto label_172d80;
        case 0x172d84u: goto label_172d84;
        case 0x172d88u: goto label_172d88;
        case 0x172d8cu: goto label_172d8c;
        case 0x172d90u: goto label_172d90;
        case 0x172d94u: goto label_172d94;
        case 0x172d98u: goto label_172d98;
        case 0x172d9cu: goto label_172d9c;
        case 0x172da0u: goto label_172da0;
        case 0x172da4u: goto label_172da4;
        case 0x172da8u: goto label_172da8;
        case 0x172dacu: goto label_172dac;
        case 0x172db0u: goto label_172db0;
        case 0x172db4u: goto label_172db4;
        case 0x172db8u: goto label_172db8;
        case 0x172dbcu: goto label_172dbc;
        case 0x172dc0u: goto label_172dc0;
        case 0x172dc4u: goto label_172dc4;
        case 0x172dc8u: goto label_172dc8;
        case 0x172dccu: goto label_172dcc;
        case 0x172dd0u: goto label_172dd0;
        case 0x172dd4u: goto label_172dd4;
        default: break;
    }

    ctx->pc = 0x172c00u;

label_172c00:
    // 0x172c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x172c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_172c04:
    // 0x172c04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x172c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_172c08:
    // 0x172c08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x172c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_172c0c:
    // 0x172c0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_172c10:
    // 0x172c10: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x172c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_172c14:
    // 0x172c14: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x172c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_172c18:
    // 0x172c18: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_172c1c:
    if (ctx->pc == 0x172C1Cu) {
        ctx->pc = 0x172C1Cu;
            // 0x172c1c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x172C20u;
        goto label_172c20;
    }
    ctx->pc = 0x172C18u;
    {
        const bool branch_taken_0x172c18 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x172C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172C18u;
            // 0x172c1c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172c18) {
            ctx->pc = 0x172C48u;
            goto label_172c48;
        }
    }
    ctx->pc = 0x172C20u;
label_172c20:
    // 0x172c20: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x172c20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_172c24:
    // 0x172c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172c28:
    // 0x172c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_172c2c:
    // 0x172c2c: 0x24844150  addiu       $a0, $a0, 0x4150
    ctx->pc = 0x172c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16720));
label_172c30:
    // 0x172c30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x172c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172c34:
    // 0x172c34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_172c38:
    // 0x172c38: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172c3c:
    // 0x172c3c: 0x8059f4e  j           func_167D38
label_172c40:
    if (ctx->pc == 0x172C40u) {
        ctx->pc = 0x172C40u;
            // 0x172c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x172C44u;
        goto label_172c44;
    }
    ctx->pc = 0x172C3Cu;
    ctx->pc = 0x172C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C3Cu;
            // 0x172c40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00167D38_0x167d38(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172C44u;
label_172c44:
    // 0x172c44: 0x0  nop
    ctx->pc = 0x172c44u;
    // NOP
label_172c48:
    // 0x172c48: 0xc05cad6  jal         func_172B58
label_172c4c:
    if (ctx->pc == 0x172C4Cu) {
        ctx->pc = 0x172C50u;
        goto label_172c50;
    }
    ctx->pc = 0x172C48u;
    SET_GPR_U32(ctx, 31, 0x172C50u);
    ctx->pc = 0x172B58u;
    if (runtime->hasFunction(0x172B58u)) {
        auto targetFn = runtime->lookupFunction(0x172B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C50u; }
        if (ctx->pc != 0x172C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172B58_0x172b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C50u; }
        if (ctx->pc != 0x172C50u) { return; }
    }
    ctx->pc = 0x172C50u;
label_172c50:
    // 0x172c50: 0xc05cae0  jal         func_172B80
label_172c54:
    if (ctx->pc == 0x172C54u) {
        ctx->pc = 0x172C54u;
            // 0x172c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172C58u;
        goto label_172c58;
    }
    ctx->pc = 0x172C50u;
    SET_GPR_U32(ctx, 31, 0x172C58u);
    ctx->pc = 0x172C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C50u;
            // 0x172c54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172B80u;
    if (runtime->hasFunction(0x172B80u)) {
        auto targetFn = runtime->lookupFunction(0x172B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C58u; }
        if (ctx->pc != 0x172C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172B80_0x172b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C58u; }
        if (ctx->pc != 0x172C58u) { return; }
    }
    ctx->pc = 0x172C58u;
label_172c58:
    // 0x172c58: 0xc05caea  jal         func_172BA8
label_172c5c:
    if (ctx->pc == 0x172C5Cu) {
        ctx->pc = 0x172C5Cu;
            // 0x172c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172C60u;
        goto label_172c60;
    }
    ctx->pc = 0x172C58u;
    SET_GPR_U32(ctx, 31, 0x172C60u);
    ctx->pc = 0x172C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C58u;
            // 0x172c5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172BA8u;
    if (runtime->hasFunction(0x172BA8u)) {
        auto targetFn = runtime->lookupFunction(0x172BA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C60u; }
        if (ctx->pc != 0x172C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172BA8_0x172ba8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C60u; }
        if (ctx->pc != 0x172C60u) { return; }
    }
    ctx->pc = 0x172C60u;
label_172c60:
    // 0x172c60: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x172c60u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_172c64:
    // 0x172c64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x172c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_172c68:
    // 0x172c68: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_172c6c:
    if (ctx->pc == 0x172C6Cu) {
        ctx->pc = 0x172C6Cu;
            // 0x172c6c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x172C70u;
        goto label_172c70;
    }
    ctx->pc = 0x172C68u;
    {
        const bool branch_taken_0x172c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x172c68) {
            ctx->pc = 0x172C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172C68u;
            // 0x172c6c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172C7Cu;
            goto label_172c7c;
        }
    }
    ctx->pc = 0x172C70u;
label_172c70:
    // 0x172c70: 0xc05cc90  jal         func_173240
label_172c74:
    if (ctx->pc == 0x172C74u) {
        ctx->pc = 0x172C74u;
            // 0x172c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172C78u;
        goto label_172c78;
    }
    ctx->pc = 0x172C70u;
    SET_GPR_U32(ctx, 31, 0x172C78u);
    ctx->pc = 0x172C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C70u;
            // 0x172c74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173240u;
    if (runtime->hasFunction(0x173240u)) {
        auto targetFn = runtime->lookupFunction(0x173240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C78u; }
        if (ctx->pc != 0x172C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173240_0x173240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C78u; }
        if (ctx->pc != 0x172C78u) { return; }
    }
    ctx->pc = 0x172C78u;
label_172c78:
    // 0x172c78: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x172c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_172c7c:
    // 0x172c7c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_172c80:
    if (ctx->pc == 0x172C80u) {
        ctx->pc = 0x172C80u;
            // 0x172c80: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x172C84u;
        goto label_172c84;
    }
    ctx->pc = 0x172C7Cu;
    {
        const bool branch_taken_0x172c7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c7c) {
            ctx->pc = 0x172C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172C7Cu;
            // 0x172c80: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172C90u;
            goto label_172c90;
        }
    }
    ctx->pc = 0x172C84u;
label_172c84:
    // 0x172c84: 0xc05ba56  jal         func_16E958
label_172c88:
    if (ctx->pc == 0x172C88u) {
        ctx->pc = 0x172C88u;
            // 0x172c88: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x172C8Cu;
        goto label_172c8c;
    }
    ctx->pc = 0x172C84u;
    SET_GPR_U32(ctx, 31, 0x172C8Cu);
    ctx->pc = 0x172C88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C84u;
            // 0x172c88: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E958u;
    if (runtime->hasFunction(0x16E958u)) {
        auto targetFn = runtime->lookupFunction(0x16E958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C8Cu; }
        if (ctx->pc != 0x172C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E958_0x16e958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172C8Cu; }
        if (ctx->pc != 0x172C8Cu) { return; }
    }
    ctx->pc = 0x172C8Cu;
label_172c8c:
    // 0x172c8c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x172c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_172c90:
    // 0x172c90: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_172c94:
    if (ctx->pc == 0x172C94u) {
        ctx->pc = 0x172C94u;
            // 0x172c94: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x172C98u;
        goto label_172c98;
    }
    ctx->pc = 0x172C90u;
    {
        const bool branch_taken_0x172c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172c90) {
            ctx->pc = 0x172C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172C90u;
            // 0x172c94: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172CA4u;
            goto label_172ca4;
        }
    }
    ctx->pc = 0x172C98u;
label_172c98:
    // 0x172c98: 0xc05bbb8  jal         func_16EEE0
label_172c9c:
    if (ctx->pc == 0x172C9Cu) {
        ctx->pc = 0x172C9Cu;
            // 0x172c9c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x172CA0u;
        goto label_172ca0;
    }
    ctx->pc = 0x172C98u;
    SET_GPR_U32(ctx, 31, 0x172CA0u);
    ctx->pc = 0x172C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172C98u;
            // 0x172c9c: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16EEE0u;
    if (runtime->hasFunction(0x16EEE0u)) {
        auto targetFn = runtime->lookupFunction(0x16EEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CA0u; }
        if (ctx->pc != 0x172CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016EEE0_0x16eee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CA0u; }
        if (ctx->pc != 0x172CA0u) { return; }
    }
    ctx->pc = 0x172CA0u;
label_172ca0:
    // 0x172ca0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x172ca0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_172ca4:
    // 0x172ca4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_172ca8:
    if (ctx->pc == 0x172CA8u) {
        ctx->pc = 0x172CA8u;
            // 0x172ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172CACu;
        goto label_172cac;
    }
    ctx->pc = 0x172CA4u;
    {
        const bool branch_taken_0x172ca4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x172CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172CA4u;
            // 0x172ca8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172ca4) {
            ctx->pc = 0x172CC4u;
            goto label_172cc4;
        }
    }
    ctx->pc = 0x172CACu;
label_172cac:
    // 0x172cac: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x172cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_172cb0:
    // 0x172cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172cb4:
    // 0x172cb4: 0xc05c3b6  jal         func_170ED8
label_172cb8:
    if (ctx->pc == 0x172CB8u) {
        ctx->pc = 0x172CB8u;
            // 0x172cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172CBCu;
        goto label_172cbc;
    }
    ctx->pc = 0x172CB4u;
    SET_GPR_U32(ctx, 31, 0x172CBCu);
    ctx->pc = 0x172CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172CB4u;
            // 0x172cb8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170ED8u;
    if (runtime->hasFunction(0x170ED8u)) {
        auto targetFn = runtime->lookupFunction(0x170ED8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CBCu; }
        if (ctx->pc != 0x172CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170ED8_0x170ed8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CBCu; }
        if (ctx->pc != 0x172CBCu) { return; }
    }
    ctx->pc = 0x172CBCu;
label_172cbc:
    // 0x172cbc: 0xc05c20c  jal         func_170830
label_172cc0:
    if (ctx->pc == 0x172CC0u) {
        ctx->pc = 0x172CC0u;
            // 0x172cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172CC4u;
        goto label_172cc4;
    }
    ctx->pc = 0x172CBCu;
    SET_GPR_U32(ctx, 31, 0x172CC4u);
    ctx->pc = 0x172CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172CBCu;
            // 0x172cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170830u;
    if (runtime->hasFunction(0x170830u)) {
        auto targetFn = runtime->lookupFunction(0x170830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CC4u; }
        if (ctx->pc != 0x172CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170830_0x170830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CC4u; }
        if (ctx->pc != 0x172CC4u) { return; }
    }
    ctx->pc = 0x172CC4u;
label_172cc4:
    // 0x172cc4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x172cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_172cc8:
    // 0x172cc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_172ccc:
    if (ctx->pc == 0x172CCCu) {
        ctx->pc = 0x172CD0u;
        goto label_172cd0;
    }
    ctx->pc = 0x172CC8u;
    {
        const bool branch_taken_0x172cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172cc8) {
            ctx->pc = 0x172CD8u;
            goto label_172cd8;
        }
    }
    ctx->pc = 0x172CD0u;
label_172cd0:
    // 0x172cd0: 0xc060006  jal         func_180018
label_172cd4:
    if (ctx->pc == 0x172CD4u) {
        ctx->pc = 0x172CD4u;
            // 0x172cd4: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x172CD8u;
        goto label_172cd8;
    }
    ctx->pc = 0x172CD0u;
    SET_GPR_U32(ctx, 31, 0x172CD8u);
    ctx->pc = 0x172CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172CD0u;
            // 0x172cd4: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180018u;
    if (runtime->hasFunction(0x180018u)) {
        auto targetFn = runtime->lookupFunction(0x180018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CD8u; }
        if (ctx->pc != 0x172CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180018_0x180018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CD8u; }
        if (ctx->pc != 0x172CD8u) { return; }
    }
    ctx->pc = 0x172CD8u;
label_172cd8:
    // 0x172cd8: 0xc0599d2  jal         func_166748
label_172cdc:
    if (ctx->pc == 0x172CDCu) {
        ctx->pc = 0x172CE0u;
        goto label_172ce0;
    }
    ctx->pc = 0x172CD8u;
    SET_GPR_U32(ctx, 31, 0x172CE0u);
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CE0u; }
        if (ctx->pc != 0x172CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172CE0u; }
        if (ctx->pc != 0x172CE0u) { return; }
    }
    ctx->pc = 0x172CE0u;
label_172ce0:
    // 0x172ce0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x172ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_172ce4:
    // 0x172ce4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_172ce8:
    if (ctx->pc == 0x172CE8u) {
        ctx->pc = 0x172CE8u;
            // 0x172ce8: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x172CECu;
        goto label_172cec;
    }
    ctx->pc = 0x172CE4u;
    {
        const bool branch_taken_0x172ce4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172ce4) {
            ctx->pc = 0x172CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172CE4u;
            // 0x172ce8: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D04u;
            goto label_172d04;
        }
    }
    ctx->pc = 0x172CECu;
label_172cec:
    // 0x172cec: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x172cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172cf0:
    // 0x172cf0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x172cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_172cf4:
    // 0x172cf4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x172cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_172cf8:
    // 0x172cf8: 0x40f809  jalr        $v0
label_172cfc:
    if (ctx->pc == 0x172CFCu) {
        ctx->pc = 0x172D00u;
        goto label_172d00;
    }
    ctx->pc = 0x172CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172D00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x172D00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172D00u; }
            if (ctx->pc != 0x172D00u) { return; }
        }
        }
    }
    ctx->pc = 0x172D00u;
label_172d00:
    // 0x172d00: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x172d00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_172d04:
    // 0x172d04: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_172d08:
    if (ctx->pc == 0x172D08u) {
        ctx->pc = 0x172D08u;
            // 0x172d08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172D0Cu;
        goto label_172d0c;
    }
    ctx->pc = 0x172D04u;
    {
        const bool branch_taken_0x172d04 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x172D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D04u;
            // 0x172d08: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d04) {
            ctx->pc = 0x172D90u;
            goto label_172d90;
        }
    }
    ctx->pc = 0x172D0Cu;
label_172d0c:
    // 0x172d0c: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x172d0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_172d10:
    // 0x172d10: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x172d10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_172d14:
    // 0x172d14: 0x0  nop
    ctx->pc = 0x172d14u;
    // NOP
label_172d18:
    // 0x172d18: 0x8e03ffa0  lw          $v1, -0x60($s0)
    ctx->pc = 0x172d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967200)));
label_172d1c:
    // 0x172d1c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_172d20:
    if (ctx->pc == 0x172D20u) {
        ctx->pc = 0x172D20u;
            // 0x172d20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172D24u;
        goto label_172d24;
    }
    ctx->pc = 0x172D1Cu;
    {
        const bool branch_taken_0x172d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x172D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D1Cu;
            // 0x172d20: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d1c) {
            ctx->pc = 0x172D38u;
            goto label_172d38;
        }
    }
    ctx->pc = 0x172D24u;
label_172d24:
    // 0x172d24: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x172d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_172d28:
    // 0x172d28: 0xae00ffa0  sw          $zero, -0x60($s0)
    ctx->pc = 0x172d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967200), GPR_U32(ctx, 0));
label_172d2c:
    // 0x172d2c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x172d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_172d30:
    // 0x172d30: 0x40f809  jalr        $v0
label_172d34:
    if (ctx->pc == 0x172D34u) {
        ctx->pc = 0x172D38u;
        goto label_172d38;
    }
    ctx->pc = 0x172D30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172D38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x172D38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172D38u; }
            if (ctx->pc != 0x172D38u) { return; }
        }
        }
    }
    ctx->pc = 0x172D38u;
label_172d38:
    // 0x172d38: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x172d38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_172d3c:
    // 0x172d3c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_172d40:
    if (ctx->pc == 0x172D40u) {
        ctx->pc = 0x172D40u;
            // 0x172d40: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x172D44u;
        goto label_172d44;
    }
    ctx->pc = 0x172D3Cu;
    {
        const bool branch_taken_0x172d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d3c) {
            ctx->pc = 0x172D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D3Cu;
            // 0x172d40: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D5Cu;
            goto label_172d5c;
        }
    }
    ctx->pc = 0x172D44u;
label_172d44:
    // 0x172d44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x172d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172d48:
    // 0x172d48: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x172d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_172d4c:
    // 0x172d4c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x172d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_172d50:
    // 0x172d50: 0x40f809  jalr        $v0
label_172d54:
    if (ctx->pc == 0x172D54u) {
        ctx->pc = 0x172D58u;
        goto label_172d58;
    }
    ctx->pc = 0x172D50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172D58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x172D58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172D58u; }
            if (ctx->pc != 0x172D58u) { return; }
        }
        }
    }
    ctx->pc = 0x172D58u;
label_172d58:
    // 0x172d58: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x172d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_172d5c:
    // 0x172d5c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_172d60:
    if (ctx->pc == 0x172D60u) {
        ctx->pc = 0x172D60u;
            // 0x172d60: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x172D64u;
        goto label_172d64;
    }
    ctx->pc = 0x172D5Cu;
    {
        const bool branch_taken_0x172d5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d5c) {
            ctx->pc = 0x172D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D5Cu;
            // 0x172d60: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172D7Cu;
            goto label_172d7c;
        }
    }
    ctx->pc = 0x172D64u;
label_172d64:
    // 0x172d64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x172d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_172d68:
    // 0x172d68: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x172d68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_172d6c:
    // 0x172d6c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x172d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_172d70:
    // 0x172d70: 0x40f809  jalr        $v0
label_172d74:
    if (ctx->pc == 0x172D74u) {
        ctx->pc = 0x172D78u;
        goto label_172d78;
    }
    ctx->pc = 0x172D70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x172D78u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x172D78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x172D78u; }
            if (ctx->pc != 0x172D78u) { return; }
        }
        }
    }
    ctx->pc = 0x172D78u;
label_172d78:
    // 0x172d78: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x172d78u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_172d7c:
    // 0x172d7c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x172d7cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_172d80:
    // 0x172d80: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x172d80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_172d84:
    // 0x172d84: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x172d84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_172d88:
    // 0x172d88: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_172d8c:
    if (ctx->pc == 0x172D8Cu) {
        ctx->pc = 0x172D8Cu;
            // 0x172d8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x172D90u;
        goto label_172d90;
    }
    ctx->pc = 0x172D88u;
    {
        const bool branch_taken_0x172d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x172D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172D88u;
            // 0x172d8c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172d88) {
            ctx->pc = 0x172D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_172d18;
        }
    }
    ctx->pc = 0x172D90u;
label_172d90:
    // 0x172d90: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x172d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_172d94:
    // 0x172d94: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_172d98:
    if (ctx->pc == 0x172D98u) {
        ctx->pc = 0x172D98u;
            // 0x172d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x172D9Cu;
        goto label_172d9c;
    }
    ctx->pc = 0x172D94u;
    {
        const bool branch_taken_0x172d94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x172d94) {
            ctx->pc = 0x172D98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172D94u;
            // 0x172d98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x172DA8u;
            goto label_172da8;
        }
    }
    ctx->pc = 0x172D9Cu;
label_172d9c:
    // 0x172d9c: 0xc0589cc  jal         func_162730
label_172da0:
    if (ctx->pc == 0x172DA0u) {
        ctx->pc = 0x172DA0u;
            // 0x172da0: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x172DA4u;
        goto label_172da4;
    }
    ctx->pc = 0x172D9Cu;
    SET_GPR_U32(ctx, 31, 0x172DA4u);
    ctx->pc = 0x172DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172D9Cu;
            // 0x172da0: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x162730u;
    if (runtime->hasFunction(0x162730u)) {
        auto targetFn = runtime->lookupFunction(0x162730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DA4u; }
        if (ctx->pc != 0x172DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00162730_0x162730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DA4u; }
        if (ctx->pc != 0x172DA4u) { return; }
    }
    ctx->pc = 0x172DA4u;
label_172da4:
    // 0x172da4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x172da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_172da8:
    // 0x172da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x172da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_172dac:
    // 0x172dac: 0xc04a576  jal         func_1295D8
label_172db0:
    if (ctx->pc == 0x172DB0u) {
        ctx->pc = 0x172DB0u;
            // 0x172db0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x172DB4u;
        goto label_172db4;
    }
    ctx->pc = 0x172DACu;
    SET_GPR_U32(ctx, 31, 0x172DB4u);
    ctx->pc = 0x172DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172DACu;
            // 0x172db0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DB4u; }
        if (ctx->pc != 0x172DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x172DB4u; }
        if (ctx->pc != 0x172DB4u) { return; }
    }
    ctx->pc = 0x172DB4u;
label_172db4:
    // 0x172db4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x172db4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_172db8:
    // 0x172db8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172db8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_172dbc:
    // 0x172dbc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x172dbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_172dc0:
    // 0x172dc0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x172dc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_172dc4:
    // 0x172dc4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x172dc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_172dc8:
    // 0x172dc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x172dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_172dcc:
    // 0x172dcc: 0x80599d8  j           func_166760
label_172dd0:
    if (ctx->pc == 0x172DD0u) {
        ctx->pc = 0x172DD0u;
            // 0x172dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x172DD4u;
        goto label_172dd4;
    }
    ctx->pc = 0x172DCCu;
    ctx->pc = 0x172DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172DCCu;
            // 0x172dd0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00166760_0x166760(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x172DD4u;
label_172dd4:
    // 0x172dd4: 0x0  nop
    ctx->pc = 0x172dd4u;
    // NOP
}
