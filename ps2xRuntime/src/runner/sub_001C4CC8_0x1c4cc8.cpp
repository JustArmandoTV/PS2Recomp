#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C4CC8
// Address: 0x1c4cc8 - 0x1c5028
void sub_001C4CC8_0x1c4cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4CC8_0x1c4cc8");
#endif

    switch (ctx->pc) {
        case 0x1c4d38u: goto label_1c4d38;
        case 0x1c4d4cu: goto label_1c4d4c;
        case 0x1c4d68u: goto label_1c4d68;
        case 0x1c4d90u: goto label_1c4d90;
        case 0x1c4da0u: goto label_1c4da0;
        case 0x1c4dccu: goto label_1c4dcc;
        case 0x1c4de8u: goto label_1c4de8;
        case 0x1c4e28u: goto label_1c4e28;
        case 0x1c4f60u: goto label_1c4f60;
        case 0x1c4fa0u: goto label_1c4fa0;
        case 0x1c4fe8u: goto label_1c4fe8;
        default: break;
    }

    ctx->pc = 0x1c4cc8u;

label_1c4cc8:
    // 0x1c4cc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4ccc: 0x24880024  addiu       $t0, $a0, 0x24
    ctx->pc = 0x1c4cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1c4cd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4cd4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1c4cd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c4cd8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c4cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cdc: 0x62ac0  sll         $a1, $a2, 11
    ctx->pc = 0x1c4cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 11));
    // 0x1c4ce0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4ce4: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x1c4ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1c4ce8: 0x8072272  j           func_1C89C8
    ctx->pc = 0x1C4CE8u;
    ctx->pc = 0x1C4CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4CE8u;
            // 0x1c4cec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C89C8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C89C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C4CF0u;
    // 0x1c4cf0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c4cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1c4cf4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c4cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c4cf8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c4cf8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4cfc: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c4cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c4d00: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c4d00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d04: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c4d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c4d08: 0x2405097d  addiu       $a1, $zero, 0x97D
    ctx->pc = 0x1c4d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2429));
    // 0x1c4d0c: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c4d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c4d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c4d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d14: 0x1640000a  bnez        $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x1C4D14u;
    {
        const bool branch_taken_0x1c4d14 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D14u;
            // 0x1c4d18: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d14) {
            ctx->pc = 0x1C4D40u;
            goto label_1c4d40;
        }
    }
    ctx->pc = 0x1C4D1Cu;
    // 0x1c4d1c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4d20: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4d20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4d24: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4d28: 0x24c6be78  addiu       $a2, $a2, -0x4188
    ctx->pc = 0x1c4d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950520));
    // 0x1c4d2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4d2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d30: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4D30u;
    SET_GPR_U32(ctx, 31, 0x1C4D38u);
    ctx->pc = 0x1C4D34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D30u;
            // 0x1c4d34: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D38u; }
        if (ctx->pc != 0x1C4D38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D38u; }
        if (ctx->pc != 0x1C4D38u) { return; }
    }
    ctx->pc = 0x1C4D38u;
label_1c4d38:
    // 0x1c4d38: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x1C4D38u;
    {
        const bool branch_taken_0x1c4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D38u;
            // 0x1c4d3c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d38) {
            ctx->pc = 0x1C4E40u;
            goto label_1c4e40;
        }
    }
    ctx->pc = 0x1C4D40u;
label_1c4d40:
    // 0x1c4d40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4d40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d44: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1C4D44u;
    SET_GPR_U32(ctx, 31, 0x1C4D4Cu);
    ctx->pc = 0x1C4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D44u;
            // 0x1c4d48: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D4Cu; }
        if (ctx->pc != 0x1C4D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D4Cu; }
        if (ctx->pc != 0x1C4D4Cu) { return; }
    }
    ctx->pc = 0x1C4D4Cu;
label_1c4d4c:
    // 0x1c4d4c: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c4d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c4d50: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c4d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c4d54: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1c4d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c4d58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c4d58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c4d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d60: 0xc070810  jal         func_1C2040
    ctx->pc = 0x1C4D60u;
    SET_GPR_U32(ctx, 31, 0x1C4D68u);
    ctx->pc = 0x1C4D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D60u;
            // 0x1c4d64: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2040u;
    if (runtime->hasFunction(0x1C2040u)) {
        auto targetFn = runtime->lookupFunction(0x1C2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D68u; }
        if (ctx->pc != 0x1C4D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2040_0x1c2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D68u; }
        if (ctx->pc != 0x1C4D68u) { return; }
    }
    ctx->pc = 0x1C4D68u;
label_1c4d68:
    // 0x1c4d68: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4d6c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4d70: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4d74: 0x24c6bc80  addiu       $a2, $a2, -0x4380
    ctx->pc = 0x1c4d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950016));
    // 0x1c4d78: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c4d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4d80: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4D80u;
    {
        const bool branch_taken_0x1c4d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D80u;
            // 0x1c4d84: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d80) {
            ctx->pc = 0x1C4D98u;
            goto label_1c4d98;
        }
    }
    ctx->pc = 0x1C4D88u;
    // 0x1c4d88: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4D88u;
    SET_GPR_U32(ctx, 31, 0x1C4D90u);
    ctx->pc = 0x1C4D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D88u;
            // 0x1c4d8c: 0x24050983  addiu       $a1, $zero, 0x983 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2435));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D90u; }
        if (ctx->pc != 0x1C4D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4D90u; }
        if (ctx->pc != 0x1C4D90u) { return; }
    }
    ctx->pc = 0x1C4D90u;
label_1c4d90:
    // 0x1c4d90: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x1C4D90u;
    {
        const bool branch_taken_0x1c4d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D90u;
            // 0x1c4d94: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4d90) {
            ctx->pc = 0x1C4E40u;
            goto label_1c4e40;
        }
    }
    ctx->pc = 0x1C4D98u;
label_1c4d98:
    // 0x1c4d98: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C4D98u;
    SET_GPR_U32(ctx, 31, 0x1C4DA0u);
    ctx->pc = 0x1C4D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4D98u;
            // 0x1c4d9c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DA0u; }
        if (ctx->pc != 0x1C4DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DA0u; }
        if (ctx->pc != 0x1C4DA0u) { return; }
    }
    ctx->pc = 0x1C4DA0u;
label_1c4da0:
    // 0x1c4da0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4da0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4da4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4da8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4dac: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c4dacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c4db0: 0x24050989  addiu       $a1, $zero, 0x989
    ctx->pc = 0x1c4db0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2441));
    // 0x1c4db4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4db4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4db8: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4DB8u;
    {
        const bool branch_taken_0x1c4db8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DB8u;
            // 0x1c4dbc: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4db8) {
            ctx->pc = 0x1C4DD8u;
            goto label_1c4dd8;
        }
    }
    ctx->pc = 0x1C4DC0u;
    // 0x1c4dc0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4dc4: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4DC4u;
    SET_GPR_U32(ctx, 31, 0x1C4DCCu);
    ctx->pc = 0x1C4DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DC4u;
            // 0x1c4dc8: 0x2484bb88  addiu       $a0, $a0, -0x4478 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DCCu; }
        if (ctx->pc != 0x1C4DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DCCu; }
        if (ctx->pc != 0x1C4DCCu) { return; }
    }
    ctx->pc = 0x1C4DCCu;
label_1c4dcc:
    // 0x1c4dcc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1C4DCCu;
    {
        const bool branch_taken_0x1c4dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DCCu;
            // 0x1c4dd0: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4dcc) {
            ctx->pc = 0x1C4E40u;
            goto label_1c4e40;
        }
    }
    ctx->pc = 0x1C4DD4u;
    // 0x1c4dd4: 0x0  nop
    ctx->pc = 0x1c4dd4u;
    // NOP
label_1c4dd8:
    // 0x1c4dd8: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x1c4dd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c4ddc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c4ddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4de0: 0xc071d9e  jal         func_1C7678
    ctx->pc = 0x1C4DE0u;
    SET_GPR_U32(ctx, 31, 0x1C4DE8u);
    ctx->pc = 0x1C4DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4DE0u;
            // 0x1c4de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7678u;
    if (runtime->hasFunction(0x1C7678u)) {
        auto targetFn = runtime->lookupFunction(0x1C7678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DE8u; }
        if (ctx->pc != 0x1C4DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7678_0x1c7678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4DE8u; }
        if (ctx->pc != 0x1C4DE8u) { return; }
    }
    ctx->pc = 0x1C4DE8u;
label_1c4de8:
    // 0x1c4de8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4de8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4dec: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1c4decu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4df0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4df0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4df4: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x1c4df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1c4df8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4dfc: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1c4dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x1c4e00: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4e04: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c4e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c4e08: 0x24c6bca8  addiu       $a2, $a2, -0x4358
    ctx->pc = 0x1c4e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950056));
    // 0x1c4e0c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1c4e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c4e10: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c4e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e14: 0x24050992  addiu       $a1, $zero, 0x992
    ctx->pc = 0x1c4e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2450));
    // 0x1c4e18: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4E18u;
    {
        const bool branch_taken_0x1c4e18 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E18u;
            // 0x1c4e1c: 0x2408ff95  addiu       $t0, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e18) {
            ctx->pc = 0x1C4E30u;
            goto label_1c4e30;
        }
    }
    ctx->pc = 0x1C4E20u;
    // 0x1c4e20: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4E20u;
    SET_GPR_U32(ctx, 31, 0x1C4E28u);
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E28u; }
        if (ctx->pc != 0x1C4E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4E28u; }
        if (ctx->pc != 0x1C4E28u) { return; }
    }
    ctx->pc = 0x1C4E28u;
label_1c4e28:
    // 0x1c4e28: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1C4E28u;
    {
        const bool branch_taken_0x1c4e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E28u;
            // 0x1c4e2c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e28) {
            ctx->pc = 0x1C4E40u;
            goto label_1c4e40;
        }
    }
    ctx->pc = 0x1C4E30u;
label_1c4e30:
    // 0x1c4e30: 0x8e03fff0  lw          $v1, -0x10($s0)
    ctx->pc = 0x1c4e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967280)));
    // 0x1c4e34: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1c4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1c4e38: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1c4e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1c4e3c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c4e3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c4e40:
    // 0x1c4e40: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c4e40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4e44: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c4e44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c4e48: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c4e48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c4e4c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1c4e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4e50: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E50u;
            // 0x1c4e54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4E58u;
    // 0x1c4e58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4e5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c4e5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e60: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4e64: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c4e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e68: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c4e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4e6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c4e6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c4e70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4e74: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C4E74u;
    {
        const bool branch_taken_0x1c4e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4E74u;
            // 0x1c4e78: 0x240509b2  addiu       $a1, $zero, 0x9B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2482));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4e74) {
            ctx->pc = 0x1C4EA8u;
            goto label_1c4ea8;
        }
    }
    ctx->pc = 0x1C4E7Cu;
    // 0x1c4e7c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4e80: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4e80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4e84: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4e84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4e88: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4e8c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4e8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4e90: 0x24c6be90  addiu       $a2, $a2, -0x4170
    ctx->pc = 0x1c4e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950544));
    // 0x1c4e94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4e98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e9c: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c4e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c4ea0: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4EA0u;
    ctx->pc = 0x1C4EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EA0u;
            // 0x1c4ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4EA8u;
label_1c4ea8:
    // 0x1c4ea8: 0x621000d  bgez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4EA8u;
    {
        const bool branch_taken_0x1c4ea8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1C4EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EA8u;
            // 0x1c4eac: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4ea8) {
            ctx->pc = 0x1C4EE0u;
            goto label_1c4ee0;
        }
    }
    ctx->pc = 0x1C4EB0u;
    // 0x1c4eb0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4eb4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4eb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4eb8: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4ebc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4ebcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4ec0: 0x24c6be90  addiu       $a2, $a2, -0x4170
    ctx->pc = 0x1c4ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950544));
    // 0x1c4ec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4ec8: 0x240509b5  addiu       $a1, $zero, 0x9B5
    ctx->pc = 0x1c4ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2485));
    // 0x1c4ecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4eccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ed0: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c4ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c4ed4: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4ED4u;
    ctx->pc = 0x1C4ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4ED4u;
            // 0x1c4ed8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4EDCu;
    // 0x1c4edc: 0x0  nop
    ctx->pc = 0x1c4edcu;
    // NOP
label_1c4ee0:
    // 0x1c4ee0: 0x5600000d  bnel        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4EE0u;
    {
        const bool branch_taken_0x1c4ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4ee0) {
            ctx->pc = 0x1C4EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4EE0u;
            // 0x1c4ee4: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4F18u;
            goto label_1c4f18;
        }
    }
    ctx->pc = 0x1C4EE8u;
    // 0x1c4ee8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4eec: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4eecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4ef4: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4ef8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4ef8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4efc: 0x24c6be90  addiu       $a2, $a2, -0x4170
    ctx->pc = 0x1c4efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950544));
    // 0x1c4f00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f04: 0x240509b8  addiu       $a1, $zero, 0x9B8
    ctx->pc = 0x1c4f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2488));
    // 0x1c4f08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f0c: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c4f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c4f10: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4F10u;
    ctx->pc = 0x1C4F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F10u;
            // 0x1c4f14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4F18u;
label_1c4f18:
    // 0x1c4f18: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4F18u;
    {
        const bool branch_taken_0x1c4f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F18u;
            // 0x1c4f1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4f18) {
            ctx->pc = 0x1C4F50u;
            goto label_1c4f50;
        }
    }
    ctx->pc = 0x1C4F20u;
    // 0x1c4f20: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4f24: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4f24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4f28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4f28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4f2c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4f30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4f34: 0x24c6be90  addiu       $a2, $a2, -0x4170
    ctx->pc = 0x1c4f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950544));
    // 0x1c4f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f3c: 0x240509cd  addiu       $a1, $zero, 0x9CD
    ctx->pc = 0x1c4f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2509));
    // 0x1c4f40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4f40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f44: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c4f44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c4f48: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4F48u;
    ctx->pc = 0x1C4F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F48u;
            // 0x1c4f4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4F50u;
label_1c4f50:
    // 0x1c4f50: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1c4f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4f54: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c4f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f58: 0xc071332  jal         func_1C4CC8
    ctx->pc = 0x1C4F58u;
    SET_GPR_U32(ctx, 31, 0x1C4F60u);
    ctx->pc = 0x1C4F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F58u;
            // 0x1c4f5c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4CC8u;
    goto label_1c4cc8;
    ctx->pc = 0x1C4F60u;
label_1c4f60:
    // 0x1c4f60: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1c4f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1c4f64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4f68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c4f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f6c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1c4f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1c4f70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4f70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4f74: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1c4f74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x1c4f78: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4f78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4f7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F7Cu;
            // 0x1c4f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4F84u;
    // 0x1c4f84: 0x0  nop
    ctx->pc = 0x1c4f84u;
    // NOP
    // 0x1c4f88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4f8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4f8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4f90: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c4f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4f94: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c4f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c4f98: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C4F98u;
    SET_GPR_U32(ctx, 31, 0x1C4FA0u);
    ctx->pc = 0x1C4F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4F98u;
            // 0x1c4f9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FA0u; }
        if (ctx->pc != 0x1C4FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FA0u; }
        if (ctx->pc != 0x1C4FA0u) { return; }
    }
    ctx->pc = 0x1C4FA0u;
label_1c4fa0:
    // 0x1c4fa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c4fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fa4: 0x2444002c  addiu       $a0, $v0, 0x2C
    ctx->pc = 0x1c4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
    // 0x1c4fa8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1c4fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1c4fac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4fb0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4FB0u;
    {
        const bool branch_taken_0x1c4fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FB0u;
            // 0x1c4fb4: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4fb0) {
            ctx->pc = 0x1C4FE0u;
            goto label_1c4fe0;
        }
    }
    ctx->pc = 0x1C4FB8u;
    // 0x1c4fb8: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4fbc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4fc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4fc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4fc4: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4fc8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c4fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4fcc: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c4fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c4fd0: 0x240509e5  addiu       $a1, $zero, 0x9E5
    ctx->pc = 0x1c4fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2533));
    // 0x1c4fd4: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4FD4u;
    ctx->pc = 0x1C4FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FD4u;
            // 0x1c4fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4FDCu;
    // 0x1c4fdc: 0x0  nop
    ctx->pc = 0x1c4fdcu;
    // NOP
label_1c4fe0:
    // 0x1c4fe0: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1C4FE0u;
    SET_GPR_U32(ctx, 31, 0x1C4FE8u);
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FE8u; }
        if (ctx->pc != 0x1C4FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4FE8u; }
        if (ctx->pc != 0x1C4FE8u) { return; }
    }
    ctx->pc = 0x1C4FE8u;
label_1c4fe8:
    // 0x1c4fe8: 0x2403ff91  addiu       $v1, $zero, -0x6F
    ctx->pc = 0x1c4fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967185));
    // 0x1c4fec: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1c4fecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1c4ff0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4ff4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c4ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4ff8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c4ff8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ffc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C5000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4FFCu;
            // 0x1c5000: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5004u;
    // 0x1c5004: 0x0  nop
    ctx->pc = 0x1c5004u;
    // NOP
    // 0x1c5008: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c5008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c500c: 0x8c43a4d8  lw          $v1, -0x5B28($v0)
    ctx->pc = 0x1c500cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c5010: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C5010u;
    {
        const bool branch_taken_0x1c5010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C5014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C5010u;
            // 0x1c5014: 0x24022710  addiu       $v0, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c5010) {
            ctx->pc = 0x1C5020u;
            goto label_1c5020;
        }
    }
    ctx->pc = 0x1C5018u;
    // 0x1c5018: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x1c5018u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1c501c: 0xac62001c  sw          $v0, 0x1C($v1)
    ctx->pc = 0x1c501cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 2));
label_1c5020:
    // 0x1c5020: 0x3e00008  jr          $ra
    ctx->pc = 0x1C5020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C5028u;
}
