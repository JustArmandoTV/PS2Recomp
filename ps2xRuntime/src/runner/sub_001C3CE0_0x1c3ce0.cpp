#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C3CE0
// Address: 0x1c3ce0 - 0x1c4600
void sub_001C3CE0_0x1c3ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3CE0_0x1c3ce0");
#endif

    switch (ctx->pc) {
        case 0x1c3d28u: goto label_1c3d28;
        case 0x1c3d50u: goto label_1c3d50;
        case 0x1c3d60u: goto label_1c3d60;
        case 0x1c3d88u: goto label_1c3d88;
        case 0x1c3db0u: goto label_1c3db0;
        case 0x1c3dc4u: goto label_1c3dc4;
        case 0x1c3de8u: goto label_1c3de8;
        case 0x1c3e04u: goto label_1c3e04;
        case 0x1c3e30u: goto label_1c3e30;
        case 0x1c3ec0u: goto label_1c3ec0;
        case 0x1c3f44u: goto label_1c3f44;
        case 0x1c3f70u: goto label_1c3f70;
        case 0x1c3f98u: goto label_1c3f98;
        case 0x1c3fb8u: goto label_1c3fb8;
        case 0x1c3fe4u: goto label_1c3fe4;
        case 0x1c4028u: goto label_1c4028;
        case 0x1c405cu: goto label_1c405c;
        case 0x1c4088u: goto label_1c4088;
        case 0x1c40d4u: goto label_1c40d4;
        case 0x1c40fcu: goto label_1c40fc;
        case 0x1c415cu: goto label_1c415c;
        case 0x1c4170u: goto label_1c4170;
        case 0x1c419cu: goto label_1c419c;
        case 0x1c41b4u: goto label_1c41b4;
        case 0x1c41e0u: goto label_1c41e0;
        case 0x1c41f0u: goto label_1c41f0;
        case 0x1c4214u: goto label_1c4214;
        case 0x1c4258u: goto label_1c4258;
        case 0x1c4350u: goto label_1c4350;
        case 0x1c43d0u: goto label_1c43d0;
        case 0x1c4400u: goto label_1c4400;
        case 0x1c442cu: goto label_1c442c;
        case 0x1c4444u: goto label_1c4444;
        case 0x1c4468u: goto label_1c4468;
        case 0x1c4548u: goto label_1c4548;
        case 0x1c4598u: goto label_1c4598;
        default: break;
    }

    ctx->pc = 0x1c3ce0u;

    // 0x1c3ce0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c3ce4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1c3ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1c3ce8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x1c3ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x1c3cec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1c3cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3cf0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1c3cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x1c3cf4: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x1c3cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c3cf8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x1c3cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x1c3cfc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c3cfcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d00: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x1c3d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x1c3d04: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x1c3d04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d08: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d0c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1c3d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d10: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c3d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3d14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c3d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c3d18: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1c3d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1c3d1c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1c3d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1c3d20: 0xc070810  jal         func_1C2040
    ctx->pc = 0x1C3D20u;
    SET_GPR_U32(ctx, 31, 0x1C3D28u);
    ctx->pc = 0x1C3D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D20u;
            // 0x1c3d24: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2040u;
    if (runtime->hasFunction(0x1C2040u)) {
        auto targetFn = runtime->lookupFunction(0x1C2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D28u; }
        if (ctx->pc != 0x1C3D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2040_0x1c2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D28u; }
        if (ctx->pc != 0x1C3D28u) { return; }
    }
    ctx->pc = 0x1C3D28u;
label_1c3d28:
    // 0x1c3d28: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3D28u;
    {
        const bool branch_taken_0x1c3d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D28u;
            // 0x1c3d2c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d28) {
            ctx->pc = 0x1C3D58u;
            goto label_1c3d58;
        }
    }
    ctx->pc = 0x1C3D30u;
    // 0x1c3d30: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3d30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3d34: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3d34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3d38: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3d3c: 0x24c6bc80  addiu       $a2, $a2, -0x4380
    ctx->pc = 0x1c3d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950016));
    // 0x1c3d40: 0x2405068c  addiu       $a1, $zero, 0x68C
    ctx->pc = 0x1c3d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1676));
    // 0x1c3d44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d48: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3D48u;
    SET_GPR_U32(ctx, 31, 0x1C3D50u);
    ctx->pc = 0x1C3D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D48u;
            // 0x1c3d4c: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D50u; }
        if (ctx->pc != 0x1C3D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D50u; }
        if (ctx->pc != 0x1C3D50u) { return; }
    }
    ctx->pc = 0x1C3D50u;
label_1c3d50:
    // 0x1c3d50: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1C3D50u;
    {
        const bool branch_taken_0x1c3d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D50u;
            // 0x1c3d54: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d50) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3D58u;
label_1c3d58:
    // 0x1c3d58: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C3D58u;
    SET_GPR_U32(ctx, 31, 0x1C3D60u);
    ctx->pc = 0x1C3D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D58u;
            // 0x1c3d5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D60u; }
        if (ctx->pc != 0x1C3D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D60u; }
        if (ctx->pc != 0x1C3D60u) { return; }
    }
    ctx->pc = 0x1C3D60u;
label_1c3d60:
    // 0x1c3d60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c3d60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d64: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3D64u;
    {
        const bool branch_taken_0x1c3d64 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D64u;
            // 0x1c3d68: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d64) {
            ctx->pc = 0x1C3D90u;
            goto label_1c3d90;
        }
    }
    ctx->pc = 0x1C3D6Cu;
    // 0x1c3d6c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3d70: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3d74: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c3d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c3d78: 0x24050691  addiu       $a1, $zero, 0x691
    ctx->pc = 0x1c3d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1681));
    // 0x1c3d7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3d80: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3D80u;
    SET_GPR_U32(ctx, 31, 0x1C3D88u);
    ctx->pc = 0x1C3D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D80u;
            // 0x1c3d84: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D88u; }
        if (ctx->pc != 0x1C3D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3D88u; }
        if (ctx->pc != 0x1C3D88u) { return; }
    }
    ctx->pc = 0x1C3D88u;
label_1c3d88:
    // 0x1c3d88: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x1C3D88u;
    {
        const bool branch_taken_0x1c3d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D88u;
            // 0x1c3d8c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d88) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3D90u;
label_1c3d90:
    // 0x1c3d90: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3D90u;
    {
        const bool branch_taken_0x1c3d90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D90u;
            // 0x1c3d94: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d90) {
            ctx->pc = 0x1C3DA0u;
            goto label_1c3da0;
        }
    }
    ctx->pc = 0x1C3D98u;
    // 0x1c3d98: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1C3D98u;
    {
        const bool branch_taken_0x1c3d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3D98u;
            // 0x1c3d9c: 0x8e300010  lw          $s0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3d98) {
            ctx->pc = 0x1C3DF4u;
            goto label_1c3df4;
        }
    }
    ctx->pc = 0x1C3DA0u;
label_1c3da0:
    // 0x1c3da0: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1c3da0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1c3da4: 0x2484bc90  addiu       $a0, $a0, -0x4370
    ctx->pc = 0x1c3da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950032));
    // 0x1c3da8: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C3DA8u;
    SET_GPR_U32(ctx, 31, 0x1C3DB0u);
    ctx->pc = 0x1C3DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DA8u;
            // 0x1c3dac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DB0u; }
        if (ctx->pc != 0x1C3DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DB0u; }
        if (ctx->pc != 0x1C3DB0u) { return; }
    }
    ctx->pc = 0x1C3DB0u;
label_1c3db0:
    // 0x1c3db0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1C3DB0u;
    {
        const bool branch_taken_0x1c3db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3db0) {
            ctx->pc = 0x1C3DB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DB0u;
            // 0x1c3db4: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3DF4u;
            goto label_1c3df4;
        }
    }
    ctx->pc = 0x1C3DB8u;
    // 0x1c3db8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c3db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dbc: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C3DBCu;
    SET_GPR_U32(ctx, 31, 0x1C3DC4u);
    ctx->pc = 0x1C3DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DBCu;
            // 0x1c3dc0: 0x26240016  addiu       $a0, $s1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC4u; }
        if (ctx->pc != 0x1C3DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DC4u; }
        if (ctx->pc != 0x1C3DC4u) { return; }
    }
    ctx->pc = 0x1C3DC4u;
label_1c3dc4:
    // 0x1c3dc4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3DC4u;
    {
        const bool branch_taken_0x1c3dc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DC4u;
            // 0x1c3dc8: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3dc4) {
            ctx->pc = 0x1C3DF0u;
            goto label_1c3df0;
        }
    }
    ctx->pc = 0x1C3DCCu;
    // 0x1c3dcc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3dccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3dd0: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3dd4: 0x24c6bd18  addiu       $a2, $a2, -0x42E8
    ctx->pc = 0x1c3dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950168));
    // 0x1c3dd8: 0x2405069d  addiu       $a1, $zero, 0x69D
    ctx->pc = 0x1c3dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1693));
    // 0x1c3ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3de0: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3DE0u;
    SET_GPR_U32(ctx, 31, 0x1C3DE8u);
    ctx->pc = 0x1C3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DE0u;
            // 0x1c3de4: 0x2408ff94  addiu       $t0, $zero, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DE8u; }
        if (ctx->pc != 0x1C3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3DE8u; }
        if (ctx->pc != 0x1C3DE8u) { return; }
    }
    ctx->pc = 0x1C3DE8u;
label_1c3de8:
    // 0x1c3de8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1C3DE8u;
    {
        const bool branch_taken_0x1c3de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DE8u;
            // 0x1c3dec: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3de8) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3DF0u;
label_1c3df0:
    // 0x1c3df0: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1c3df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c3df4:
    // 0x1c3df4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1c3df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3df8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c3df8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3dfc: 0xc071d9e  jal         func_1C7678
    ctx->pc = 0x1C3DFCu;
    SET_GPR_U32(ctx, 31, 0x1C3E04u);
    ctx->pc = 0x1C3E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3DFCu;
            // 0x1c3e00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7678u;
    if (runtime->hasFunction(0x1C7678u)) {
        auto targetFn = runtime->lookupFunction(0x1C7678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E04u; }
        if (ctx->pc != 0x1C3E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7678_0x1c7678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E04u; }
        if (ctx->pc != 0x1C3E04u) { return; }
    }
    ctx->pc = 0x1C3E04u;
label_1c3e04:
    // 0x1c3e04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c3e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e08: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3E08u;
    {
        const bool branch_taken_0x1c3e08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E08u;
            // 0x1c3e0c: 0x41840  sll         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e08) {
            ctx->pc = 0x1C3E38u;
            goto label_1c3e38;
        }
    }
    ctx->pc = 0x1C3E10u;
    // 0x1c3e10: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3e14: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3e14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3e18: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3e1c: 0x24c6bca8  addiu       $a2, $a2, -0x4358
    ctx->pc = 0x1c3e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950056));
    // 0x1c3e20: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1c3e20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e24: 0x240506a8  addiu       $a1, $zero, 0x6A8
    ctx->pc = 0x1c3e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1704));
    // 0x1c3e28: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3E28u;
    SET_GPR_U32(ctx, 31, 0x1C3E30u);
    ctx->pc = 0x1C3E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E28u;
            // 0x1c3e2c: 0x2408ff95  addiu       $t0, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E30u; }
        if (ctx->pc != 0x1C3E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3E30u; }
        if (ctx->pc != 0x1C3E30u) { return; }
    }
    ctx->pc = 0x1C3E30u;
label_1c3e30:
    // 0x1c3e30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3E30u;
    {
        const bool branch_taken_0x1c3e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E30u;
            // 0x1c3e34: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e30) {
            ctx->pc = 0x1C3E54u;
            goto label_1c3e54;
        }
    }
    ctx->pc = 0x1C3E38u;
label_1c3e38:
    // 0x1c3e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e3c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c3e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c3e40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1c3e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1c3e44: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1c3e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1c3e48: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x1c3e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x1c3e4c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x1c3e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x1c3e50: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c3e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c3e54:
    // 0x1c3e54: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1c3e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c3e58: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x1c3e58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c3e5c: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x1c3e5cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c3e60: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x1c3e60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c3e64: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x1c3e64u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1c3e68: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1c3e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c3e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E6Cu;
            // 0x1c3e70: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3E74u;
    // 0x1c3e74: 0x0  nop
    ctx->pc = 0x1c3e74u;
    // NOP
    // 0x1c3e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c3e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c3e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c3e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c3e80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c3e80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3e84: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c3e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1c3e88: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C3E88u;
    {
        const bool branch_taken_0x1c3e88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3E88u;
            // 0x1c3e8c: 0x240506b9  addiu       $a1, $zero, 0x6B9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1721));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3e88) {
            ctx->pc = 0x1C3EB8u;
            goto label_1c3eb8;
        }
    }
    ctx->pc = 0x1C3E90u;
    // 0x1c3e90: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3e90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3e94: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3e9c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3ea0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3ea4: 0x24c6bd30  addiu       $a2, $a2, -0x42D0
    ctx->pc = 0x1c3ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950192));
    // 0x1c3ea8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3eac: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c3eacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c3eb0: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C3EB0u;
    ctx->pc = 0x1C3EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EB0u;
            // 0x1c3eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C3EB8u;
label_1c3eb8:
    // 0x1c3eb8: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C3EB8u;
    SET_GPR_U32(ctx, 31, 0x1C3EC0u);
    ctx->pc = 0x1C3EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EB8u;
            // 0x1c3ebc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EC0u; }
        if (ctx->pc != 0x1C3EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3EC0u; }
        if (ctx->pc != 0x1C3EC0u) { return; }
    }
    ctx->pc = 0x1C3EC0u;
label_1c3ec0:
    // 0x1c3ec0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c3ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ec4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c3ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3ec8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3EC8u;
    {
        const bool branch_taken_0x1c3ec8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EC8u;
            // 0x1c3ecc: 0x24640016  addiu       $a0, $v1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ec8) {
            ctx->pc = 0x1C3EE0u;
            goto label_1c3ee0;
        }
    }
    ctx->pc = 0x1C3ED0u;
    // 0x1c3ed0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1c3ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1c3ed4: 0x2402ff97  addiu       $v0, $zero, -0x69
    ctx->pc = 0x1c3ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1c3ed8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3ED8u;
    {
        const bool branch_taken_0x1c3ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3ED8u;
            // 0x1c3edc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ed8) {
            ctx->pc = 0x1C3EECu;
            goto label_1c3eec;
        }
    }
    ctx->pc = 0x1C3EE0u;
label_1c3ee0:
    // 0x1c3ee0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1c3ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c3ee4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x1c3ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x1c3ee8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1c3ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1c3eec:
    // 0x1c3eec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c3eecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3ef0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c3ef0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c3ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3EF4u;
            // 0x1c3ef8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3EFCu;
    // 0x1c3efc: 0x0  nop
    ctx->pc = 0x1c3efcu;
    // NOP
    // 0x1c3f00: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1c3f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
    // 0x1c3f04: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x1c3f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1c3f08: 0xffb30228  sd          $s3, 0x228($sp)
    ctx->pc = 0x1c3f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 552), GPR_U64(ctx, 19));
    // 0x1c3f0c: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x1c3f0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c3f10: 0xffb40230  sd          $s4, 0x230($sp)
    ctx->pc = 0x1c3f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 560), GPR_U64(ctx, 20));
    // 0x1c3f14: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1c3f14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f18: 0xffb10218  sd          $s1, 0x218($sp)
    ctx->pc = 0x1c3f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 536), GPR_U64(ctx, 17));
    // 0x1c3f1c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c3f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f20: 0xffb20220  sd          $s2, 0x220($sp)
    ctx->pc = 0x1c3f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 544), GPR_U64(ctx, 18));
    // 0x1c3f24: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1c3f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1c3f2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f30: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c3f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c3f34: 0xffb00210  sd          $s0, 0x210($sp)
    ctx->pc = 0x1c3f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 528), GPR_U64(ctx, 16));
    // 0x1c3f38: 0xffbf0238  sd          $ra, 0x238($sp)
    ctx->pc = 0x1c3f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 568), GPR_U64(ctx, 31));
    // 0x1c3f3c: 0xc070810  jal         func_1C2040
    ctx->pc = 0x1C3F3Cu;
    SET_GPR_U32(ctx, 31, 0x1C3F44u);
    ctx->pc = 0x1C3F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F3Cu;
            // 0x1c3f40: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2040u;
    if (runtime->hasFunction(0x1C2040u)) {
        auto targetFn = runtime->lookupFunction(0x1C2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F44u; }
        if (ctx->pc != 0x1C3F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2040_0x1c2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F44u; }
        if (ctx->pc != 0x1C3F44u) { return; }
    }
    ctx->pc = 0x1C3F44u;
label_1c3f44:
    // 0x1c3f44: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C3F44u;
    {
        const bool branch_taken_0x1c3f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c3f44) {
            ctx->pc = 0x1C3F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F44u;
            // 0x1c3f48: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C3F68u;
            goto label_1c3f68;
        }
    }
    ctx->pc = 0x1C3F4Cu;
    // 0x1c3f4c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3f50: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3f50u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3f54: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3f58: 0x24c6bc80  addiu       $a2, $a2, -0x4380
    ctx->pc = 0x1c3f58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950016));
    // 0x1c3f5c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x1C3F5Cu;
    {
        const bool branch_taken_0x1c3f5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F5Cu;
            // 0x1c3f60: 0x240506d6  addiu       $a1, $zero, 0x6D6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1750));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f5c) {
            ctx->pc = 0x1C3FD8u;
            goto label_1c3fd8;
        }
    }
    ctx->pc = 0x1C3F64u;
    // 0x1c3f64: 0x0  nop
    ctx->pc = 0x1c3f64u;
    // NOP
label_1c3f68:
    // 0x1c3f68: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C3F68u;
    SET_GPR_U32(ctx, 31, 0x1C3F70u);
    ctx->pc = 0x1C3F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F68u;
            // 0x1c3f6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F70u; }
        if (ctx->pc != 0x1C3F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F70u; }
        if (ctx->pc != 0x1C3F70u) { return; }
    }
    ctx->pc = 0x1C3F70u;
label_1c3f70:
    // 0x1c3f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c3f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f74: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1C3F74u;
    {
        const bool branch_taken_0x1c3f74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F74u;
            // 0x1c3f78: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f74) {
            ctx->pc = 0x1C3FA0u;
            goto label_1c3fa0;
        }
    }
    ctx->pc = 0x1C3F7Cu;
    // 0x1c3f7c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3f80: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3f84: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c3f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c3f88: 0x240506dc  addiu       $a1, $zero, 0x6DC
    ctx->pc = 0x1c3f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1756));
    // 0x1c3f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3f90: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3F90u;
    SET_GPR_U32(ctx, 31, 0x1C3F98u);
    ctx->pc = 0x1C3F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F90u;
            // 0x1c3f94: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F98u; }
        if (ctx->pc != 0x1C3F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3F98u; }
        if (ctx->pc != 0x1C3F98u) { return; }
    }
    ctx->pc = 0x1C3F98u;
label_1c3f98:
    // 0x1c3f98: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C3F98u;
    {
        const bool branch_taken_0x1c3f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3F98u;
            // 0x1c3f9c: 0xdfb00210  ld          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3f98) {
            ctx->pc = 0x1C4100u;
            goto label_1c4100;
        }
    }
    ctx->pc = 0x1C3FA0u;
label_1c3fa0:
    // 0x1c3fa0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3FA0u;
    {
        const bool branch_taken_0x1c3fa0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FA0u;
            // 0x1c3fa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fa0) {
            ctx->pc = 0x1C3FB0u;
            goto label_1c3fb0;
        }
    }
    ctx->pc = 0x1C3FA8u;
    // 0x1c3fa8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1C3FA8u;
    {
        const bool branch_taken_0x1c3fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FA8u;
            // 0x1c3fac: 0x8e110010  lw          $s1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fa8) {
            ctx->pc = 0x1C3FF0u;
            goto label_1c3ff0;
        }
    }
    ctx->pc = 0x1C3FB0u;
label_1c3fb0:
    // 0x1c3fb0: 0xc0702e2  jal         func_1C0B88
    ctx->pc = 0x1C3FB0u;
    SET_GPR_U32(ctx, 31, 0x1C3FB8u);
    ctx->pc = 0x1C3FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FB0u;
            // 0x1c3fb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0B88u;
    if (runtime->hasFunction(0x1C0B88u)) {
        auto targetFn = runtime->lookupFunction(0x1C0B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FB8u; }
        if (ctx->pc != 0x1C3FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0B88_0x1c0b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FB8u; }
        if (ctx->pc != 0x1C3FB8u) { return; }
    }
    ctx->pc = 0x1C3FB8u;
label_1c3fb8:
    // 0x1c3fb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c3fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fbc: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C3FBCu;
    {
        const bool branch_taken_0x1c3fbc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FBCu;
            // 0x1c3fc0: 0x83a30010  lb          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fbc) {
            ctx->pc = 0x1C3FF4u;
            goto label_1c3ff4;
        }
    }
    ctx->pc = 0x1C3FC4u;
    // 0x1c3fc4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c3fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c3fc8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c3fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c3fcc: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c3fccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c3fd0: 0x24c6bd48  addiu       $a2, $a2, -0x42B8
    ctx->pc = 0x1c3fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950216));
    // 0x1c3fd4: 0x240506e7  addiu       $a1, $zero, 0x6E7
    ctx->pc = 0x1c3fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1767));
label_1c3fd8:
    // 0x1c3fd8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c3fd8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3fdc: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C3FDCu;
    SET_GPR_U32(ctx, 31, 0x1C3FE4u);
    ctx->pc = 0x1C3FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FDCu;
            // 0x1c3fe0: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FE4u; }
        if (ctx->pc != 0x1C3FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3FE4u; }
        if (ctx->pc != 0x1C3FE4u) { return; }
    }
    ctx->pc = 0x1C3FE4u;
label_1c3fe4:
    // 0x1c3fe4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1C3FE4u;
    {
        const bool branch_taken_0x1c3fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FE4u;
            // 0x1c3fe8: 0xdfb00210  ld          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3fe4) {
            ctx->pc = 0x1C4100u;
            goto label_1c4100;
        }
    }
    ctx->pc = 0x1C3FECu;
    // 0x1c3fec: 0x0  nop
    ctx->pc = 0x1c3fecu;
    // NOP
label_1c3ff0:
    // 0x1c3ff0: 0x83a30010  lb          $v1, 0x10($sp)
    ctx->pc = 0x1c3ff0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
label_1c3ff4:
    // 0x1c3ff4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x1c3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x1c3ff8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C3FF8u;
    {
        const bool branch_taken_0x1c3ff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C3FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3FF8u;
            // 0x1c3ffc: 0x2402005c  addiu       $v0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3ff8) {
            ctx->pc = 0x1C4008u;
            goto label_1c4008;
        }
    }
    ctx->pc = 0x1C4000u;
    // 0x1c4000: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1C4000u;
    {
        const bool branch_taken_0x1c4000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c4000) {
            ctx->pc = 0x1C4004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4000u;
            // 0x1c4004: 0x8e050010  lw          $a1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4050u;
            goto label_1c4050;
        }
    }
    ctx->pc = 0x1C4008u;
label_1c4008:
    // 0x1c4008: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1c4008u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x1c400c: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x1c400cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1c4010: 0x8e42a4d8  lw          $v0, -0x5B28($s2)
    ctx->pc = 0x1c4010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
    // 0x1c4014: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1c4014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4018: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x1c4018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1c401c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c401cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4020: 0xc071e2c  jal         func_1C78B0
    ctx->pc = 0x1C4020u;
    SET_GPR_U32(ctx, 31, 0x1C4028u);
    ctx->pc = 0x1C4024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4020u;
            // 0x1c4024: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C78B0u;
    if (runtime->hasFunction(0x1C78B0u)) {
        auto targetFn = runtime->lookupFunction(0x1C78B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4028u; }
        if (ctx->pc != 0x1C4028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C78B0_0x1c78b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4028u; }
        if (ctx->pc != 0x1C4028u) { return; }
    }
    ctx->pc = 0x1C4028u;
label_1c4028:
    // 0x1c4028: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c4028u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c402c: 0x5cc0002e  bgtzl       $a2, . + 4 + (0x2E << 2)
    ctx->pc = 0x1C402Cu;
    {
        const bool branch_taken_0x1c402c = (GPR_S32(ctx, 6) > 0);
        if (branch_taken_0x1c402c) {
            ctx->pc = 0x1C4030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C402Cu;
            // 0x1c4030: 0x24080800  addiu       $t0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C40E8u;
            goto label_1c40e8;
        }
    }
    ctx->pc = 0x1C4034u;
    // 0x1c4034: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4038: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4038u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c403c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c403cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4040: 0x24c6bd60  addiu       $a2, $a2, -0x42A0
    ctx->pc = 0x1c4040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950240));
    // 0x1c4044: 0x240506fa  addiu       $a1, $zero, 0x6FA
    ctx->pc = 0x1c4044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1786));
    // 0x1c4048: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1C4048u;
    {
        const bool branch_taken_0x1c4048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C404Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4048u;
            // 0x1c404c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4048) {
            ctx->pc = 0x1C4080u;
            goto label_1c4080;
        }
    }
    ctx->pc = 0x1C4050u;
label_1c4050:
    // 0x1c4050: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c4050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4054: 0xc071d9e  jal         func_1C7678
    ctx->pc = 0x1C4054u;
    SET_GPR_U32(ctx, 31, 0x1C405Cu);
    ctx->pc = 0x1C4058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4054u;
            // 0x1c4058: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7678u;
    if (runtime->hasFunction(0x1C7678u)) {
        auto targetFn = runtime->lookupFunction(0x1C7678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C405Cu; }
        if (ctx->pc != 0x1C405Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7678_0x1c7678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C405Cu; }
        if (ctx->pc != 0x1C405Cu) { return; }
    }
    ctx->pc = 0x1C405Cu;
label_1c405c:
    // 0x1c405c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c405cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4060: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C4060u;
    {
        const bool branch_taken_0x1c4060 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4060u;
            // 0x1c4064: 0x41040  sll         $v0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4060) {
            ctx->pc = 0x1C4090u;
            goto label_1c4090;
        }
    }
    ctx->pc = 0x1C4068u;
    // 0x1c4068: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c406c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c406cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4070: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4074: 0x24c6bca8  addiu       $a2, $a2, -0x4358
    ctx->pc = 0x1c4074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950056));
    // 0x1c4078: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1c4078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c407c: 0x24050706  addiu       $a1, $zero, 0x706
    ctx->pc = 0x1c407cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1798));
label_1c4080:
    // 0x1c4080: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4080u;
    SET_GPR_U32(ctx, 31, 0x1C4088u);
    ctx->pc = 0x1C4084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4080u;
            // 0x1c4084: 0x2408ff95  addiu       $t0, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4088u; }
        if (ctx->pc != 0x1C4088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4088u; }
        if (ctx->pc != 0x1C4088u) { return; }
    }
    ctx->pc = 0x1C4088u;
label_1c4088:
    // 0x1c4088: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1C4088u;
    {
        const bool branch_taken_0x1c4088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C408Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4088u;
            // 0x1c408c: 0xdfb00210  ld          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4088) {
            ctx->pc = 0x1C4100u;
            goto label_1c4100;
        }
    }
    ctx->pc = 0x1C4090u;
label_1c4090:
    // 0x1c4090: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x1c4090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1c4094: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c4094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c4098: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c4098u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c409c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1c409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c40a0: 0x2463ffe8  addiu       $v1, $v1, -0x18
    ctx->pc = 0x1c40a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967272));
    // 0x1c40a4: 0x9062000c  lbu         $v0, 0xC($v1)
    ctx->pc = 0x1c40a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1c40a8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1c40a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1c40ac: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C40ACu;
    {
        const bool branch_taken_0x1c40ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c40ac) {
            ctx->pc = 0x1C40B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40ACu;
            // 0x1c40b0: 0x8c680000  lw          $t0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C40E0u;
            goto label_1c40e0;
        }
    }
    ctx->pc = 0x1C40B4u;
    // 0x1c40b4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c40b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c40b8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c40b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c40bc: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c40bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c40c0: 0x24c6bd78  addiu       $a2, $a2, -0x4288
    ctx->pc = 0x1c40c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950264));
    // 0x1c40c4: 0x2405070f  addiu       $a1, $zero, 0x70F
    ctx->pc = 0x1c40c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1807));
    // 0x1c40c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c40c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40cc: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C40CCu;
    SET_GPR_U32(ctx, 31, 0x1C40D4u);
    ctx->pc = 0x1C40D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40CCu;
            // 0x1c40d0: 0x2408ff96  addiu       $t0, $zero, -0x6A (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C40D4u; }
        if (ctx->pc != 0x1C40D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C40D4u; }
        if (ctx->pc != 0x1C40D4u) { return; }
    }
    ctx->pc = 0x1C40D4u;
label_1c40d4:
    // 0x1c40d4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1C40D4u;
    {
        const bool branch_taken_0x1c40d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C40D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40D4u;
            // 0x1c40d8: 0xdfb00210  ld          $s0, 0x210($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c40d4) {
            ctx->pc = 0x1C4100u;
            goto label_1c4100;
        }
    }
    ctx->pc = 0x1C40DCu;
    // 0x1c40dc: 0x0  nop
    ctx->pc = 0x1c40dcu;
    // NOP
label_1c40e0:
    // 0x1c40e0: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1c40e0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x1c40e4: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1c40e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c40e8:
    // 0x1c40e8: 0x8e42a4d8  lw          $v0, -0x5B28($s2)
    ctx->pc = 0x1c40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943960)));
    // 0x1c40ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c40ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40f0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1c40f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c40f4: 0xc071c70  jal         func_1C71C0
    ctx->pc = 0x1C40F4u;
    SET_GPR_U32(ctx, 31, 0x1C40FCu);
    ctx->pc = 0x1C40F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C40F4u;
            // 0x1c40f8: 0x8c450048  lw          $a1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C71C0u;
    if (runtime->hasFunction(0x1C71C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C71C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C40FCu; }
        if (ctx->pc != 0x1C40FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C71C0_0x1c71c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C40FCu; }
        if (ctx->pc != 0x1C40FCu) { return; }
    }
    ctx->pc = 0x1C40FCu;
label_1c40fc:
    // 0x1c40fc: 0xdfb00210  ld          $s0, 0x210($sp)
    ctx->pc = 0x1c40fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 528)));
label_1c4100:
    // 0x1c4100: 0xdfb10218  ld          $s1, 0x218($sp)
    ctx->pc = 0x1c4100u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 536)));
    // 0x1c4104: 0xdfb20220  ld          $s2, 0x220($sp)
    ctx->pc = 0x1c4104u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1c4108: 0xdfb30228  ld          $s3, 0x228($sp)
    ctx->pc = 0x1c4108u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x1c410c: 0xdfb40230  ld          $s4, 0x230($sp)
    ctx->pc = 0x1c410cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1c4110: 0xdfbf0238  ld          $ra, 0x238($sp)
    ctx->pc = 0x1c4110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 568)));
    // 0x1c4114: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4114u;
            // 0x1c4118: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C411Cu;
    // 0x1c411c: 0x0  nop
    ctx->pc = 0x1c411cu;
    // NOP
    // 0x1c4120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c4120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c4124: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c4124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1c4128: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c4128u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c412c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c412cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c4130: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c4130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c4134: 0x1640000c  bnez        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x1C4134u;
    {
        const bool branch_taken_0x1c4134 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4134u;
            // 0x1c4138: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4134) {
            ctx->pc = 0x1C4168u;
            goto label_1c4168;
        }
    }
    ctx->pc = 0x1C413Cu;
    // 0x1c413c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c413cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4140: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4144: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4148: 0x24c6bca0  addiu       $a2, $a2, -0x4360
    ctx->pc = 0x1c4148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950048));
    // 0x1c414c: 0x2405072f  addiu       $a1, $zero, 0x72F
    ctx->pc = 0x1c414cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1839));
    // 0x1c4150: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4154: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4154u;
    SET_GPR_U32(ctx, 31, 0x1C415Cu);
    ctx->pc = 0x1C4158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4154u;
            // 0x1c4158: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C415Cu; }
        if (ctx->pc != 0x1C415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C415Cu; }
        if (ctx->pc != 0x1C415Cu) { return; }
    }
    ctx->pc = 0x1C415Cu;
label_1c415c:
    // 0x1c415c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x1C415Cu;
    {
        const bool branch_taken_0x1c415c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C415Cu;
            // 0x1c4160: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c415c) {
            ctx->pc = 0x1C42E4u;
            goto label_1c42e4;
        }
    }
    ctx->pc = 0x1C4164u;
    // 0x1c4164: 0x0  nop
    ctx->pc = 0x1c4164u;
    // NOP
label_1c4168:
    // 0x1c4168: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C4168u;
    SET_GPR_U32(ctx, 31, 0x1C4170u);
    ctx->pc = 0x1C416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4168u;
            // 0x1c416c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4170u; }
        if (ctx->pc != 0x1C4170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4170u; }
        if (ctx->pc != 0x1C4170u) { return; }
    }
    ctx->pc = 0x1C4170u;
label_1c4170:
    // 0x1c4170: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4174: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1C4174u;
    {
        const bool branch_taken_0x1c4174 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4174u;
            // 0x1c4178: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4174) {
            ctx->pc = 0x1C41A8u;
            goto label_1c41a8;
        }
    }
    ctx->pc = 0x1C417Cu;
    // 0x1c417c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c417cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4180: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4180u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4184: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4188: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c4188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c418c: 0x24050735  addiu       $a1, $zero, 0x735
    ctx->pc = 0x1c418cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1845));
    // 0x1c4190: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4194: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4194u;
    SET_GPR_U32(ctx, 31, 0x1C419Cu);
    ctx->pc = 0x1C4198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4194u;
            // 0x1c4198: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C419Cu; }
        if (ctx->pc != 0x1C419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C419Cu; }
        if (ctx->pc != 0x1C419Cu) { return; }
    }
    ctx->pc = 0x1C419Cu;
label_1c419c:
    // 0x1c419c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x1C419Cu;
    {
        const bool branch_taken_0x1c419c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C419Cu;
            // 0x1c41a0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c419c) {
            ctx->pc = 0x1C42E4u;
            goto label_1c42e4;
        }
    }
    ctx->pc = 0x1C41A4u;
    // 0x1c41a4: 0x0  nop
    ctx->pc = 0x1c41a4u;
    // NOP
label_1c41a8:
    // 0x1c41a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c41a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c41ac: 0xc071442  jal         func_1C5108
    ctx->pc = 0x1C41ACu;
    SET_GPR_U32(ctx, 31, 0x1C41B4u);
    ctx->pc = 0x1C41B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41ACu;
            // 0x1c41b0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5108u;
    if (runtime->hasFunction(0x1C5108u)) {
        auto targetFn = runtime->lookupFunction(0x1C5108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41B4u; }
        if (ctx->pc != 0x1C41B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C5108_0x1c5108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41B4u; }
        if (ctx->pc != 0x1C41B4u) { return; }
    }
    ctx->pc = 0x1C41B4u;
label_1c41b4:
    // 0x1c41b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c41b8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1c41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c41bc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C41BCu;
    {
        const bool branch_taken_0x1c41bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C41C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41BCu;
            // 0x1c41c0: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41bc) {
            ctx->pc = 0x1C41D0u;
            goto label_1c41d0;
        }
    }
    ctx->pc = 0x1C41C4u;
    // 0x1c41c4: 0xae320010  sw          $s2, 0x10($s1)
    ctx->pc = 0x1c41c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 18));
    // 0x1c41c8: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1C41C8u;
    {
        const bool branch_taken_0x1c41c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41C8u;
            // 0x1c41cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41c8) {
            ctx->pc = 0x1C42E0u;
            goto label_1c42e0;
        }
    }
    ctx->pc = 0x1C41D0u;
label_1c41d0:
    // 0x1c41d0: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1c41d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x1c41d4: 0x2484bc90  addiu       $a0, $a0, -0x4370
    ctx->pc = 0x1c41d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950032));
    // 0x1c41d8: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C41D8u;
    SET_GPR_U32(ctx, 31, 0x1C41E0u);
    ctx->pc = 0x1C41DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41D8u;
            // 0x1c41dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41E0u; }
        if (ctx->pc != 0x1C41E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41E0u; }
        if (ctx->pc != 0x1C41E0u) { return; }
    }
    ctx->pc = 0x1C41E0u;
label_1c41e0:
    // 0x1c41e0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1C41E0u;
    {
        const bool branch_taken_0x1c41e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41E0u;
            // 0x1c41e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41e0) {
            ctx->pc = 0x1C4220u;
            goto label_1c4220;
        }
    }
    ctx->pc = 0x1C41E8u;
    // 0x1c41e8: 0xc04af96  jal         func_12BE58
    ctx->pc = 0x1C41E8u;
    SET_GPR_U32(ctx, 31, 0x1C41F0u);
    ctx->pc = 0x1C41ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41E8u;
            // 0x1c41ec: 0x26240016  addiu       $a0, $s1, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41F0u; }
        if (ctx->pc != 0x1C41F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C41F0u; }
        if (ctx->pc != 0x1C41F0u) { return; }
    }
    ctx->pc = 0x1C41F0u;
label_1c41f0:
    // 0x1c41f0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1C41F0u;
    {
        const bool branch_taken_0x1c41f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C41F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C41F0u;
            // 0x1c41f4: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c41f0) {
            ctx->pc = 0x1C4220u;
            goto label_1c4220;
        }
    }
    ctx->pc = 0x1C41F8u;
    // 0x1c41f8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c41f8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c41fc: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c41fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4200: 0x24c6bca0  addiu       $a2, $a2, -0x4360
    ctx->pc = 0x1c4200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950048));
    // 0x1c4204: 0x24050745  addiu       $a1, $zero, 0x745
    ctx->pc = 0x1c4204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1861));
    // 0x1c4208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c420c: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C420Cu;
    SET_GPR_U32(ctx, 31, 0x1C4214u);
    ctx->pc = 0x1C4210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C420Cu;
            // 0x1c4210: 0x2408ff94  addiu       $t0, $zero, -0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967188));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4214u; }
        if (ctx->pc != 0x1C4214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4214u; }
        if (ctx->pc != 0x1C4214u) { return; }
    }
    ctx->pc = 0x1C4214u;
label_1c4214:
    // 0x1c4214: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x1C4214u;
    {
        const bool branch_taken_0x1c4214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4214u;
            // 0x1c4218: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4214) {
            ctx->pc = 0x1C42E4u;
            goto label_1c42e4;
        }
    }
    ctx->pc = 0x1C421Cu;
    // 0x1c421c: 0x0  nop
    ctx->pc = 0x1c421cu;
    // NOP
label_1c4220:
    // 0x1c4220: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1c4220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1c4224: 0x26490018  addiu       $t1, $s2, 0x18
    ctx->pc = 0x1c4224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
    // 0x1c4228: 0x8e4a0000  lw          $t2, 0x0($s2)
    ctx->pc = 0x1c4228u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1c422c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c422cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4230: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1c4230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c4234: 0x24860018  addiu       $a2, $a0, 0x18
    ctx->pc = 0x1c4234u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1c4238: 0x140382d  daddu       $a3, $t2, $zero
    ctx->pc = 0x1c4238u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c423c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1c423cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1c4240: 0x145102a  slt         $v0, $t2, $a1
    ctx->pc = 0x1c4240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1c4244: 0xa2380a  movz        $a3, $a1, $v0
    ctx->pc = 0x1c4244u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
    // 0x1c4248: 0x18e00021  blez        $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x1C4248u;
    {
        const bool branch_taken_0x1c4248 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x1C424Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4248u;
            // 0x1c424c: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4248) {
            ctx->pc = 0x1C42D0u;
            goto label_1c42d0;
        }
    }
    ctx->pc = 0x1C4250u;
    // 0x1c4250: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c4250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4254: 0x0  nop
    ctx->pc = 0x1c4254u;
    // NOP
label_1c4258:
    // 0x1c4258: 0x69220007  ldl         $v0, 0x7($t1)
    ctx->pc = 0x1c4258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c425c: 0x6d220000  ldr         $v0, 0x0($t1)
    ctx->pc = 0x1c425cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c4260: 0x6923000f  ldl         $v1, 0xF($t1)
    ctx->pc = 0x1c4260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c4264: 0x6d230008  ldr         $v1, 0x8($t1)
    ctx->pc = 0x1c4264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c4268: 0x692b0017  ldl         $t3, 0x17($t1)
    ctx->pc = 0x1c4268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x1c426c: 0x6d2b0010  ldr         $t3, 0x10($t1)
    ctx->pc = 0x1c426cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x1c4270: 0x692c001f  ldl         $t4, 0x1F($t1)
    ctx->pc = 0x1c4270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x1c4274: 0x6d2c0018  ldr         $t4, 0x18($t1)
    ctx->pc = 0x1c4274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x1c4278: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x1c4278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c427c: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x1c427cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c4280: 0xb0c3000f  sdl         $v1, 0xF($a2)
    ctx->pc = 0x1c4280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c4284: 0xb4c30008  sdr         $v1, 0x8($a2)
    ctx->pc = 0x1c4284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c4288: 0xb0cb0017  sdl         $t3, 0x17($a2)
    ctx->pc = 0x1c4288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c428c: 0xb4cb0010  sdr         $t3, 0x10($a2)
    ctx->pc = 0x1c428cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c4290: 0xb0cc001f  sdl         $t4, 0x1F($a2)
    ctx->pc = 0x1c4290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c4294: 0xb4cc0018  sdr         $t4, 0x18($a2)
    ctx->pc = 0x1c4294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c4298: 0x69220027  ldl         $v0, 0x27($t1)
    ctx->pc = 0x1c4298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1c429c: 0x6d220020  ldr         $v0, 0x20($t1)
    ctx->pc = 0x1c429cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1c42a0: 0x6923002f  ldl         $v1, 0x2F($t1)
    ctx->pc = 0x1c42a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c42a4: 0x6d230028  ldr         $v1, 0x28($t1)
    ctx->pc = 0x1c42a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c42a8: 0xb0c20027  sdl         $v0, 0x27($a2)
    ctx->pc = 0x1c42a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c42ac: 0xb4c20020  sdr         $v0, 0x20($a2)
    ctx->pc = 0x1c42acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c42b0: 0xb0c3002f  sdl         $v1, 0x2F($a2)
    ctx->pc = 0x1c42b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c42b4: 0x2508ffff  addiu       $t0, $t0, -0x1
    ctx->pc = 0x1c42b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1c42b8: 0xb4c30028  sdr         $v1, 0x28($a2)
    ctx->pc = 0x1c42b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c42bc: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x1c42bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x1c42c0: 0x0  nop
    ctx->pc = 0x1c42c0u;
    // NOP
    // 0x1c42c4: 0x1500ffe4  bnez        $t0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1C42C4u;
    {
        const bool branch_taken_0x1c42c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C42C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42C4u;
            // 0x1c42c8: 0x25290030  addiu       $t1, $t1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c42c4) {
            ctx->pc = 0x1C4258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4258;
        }
    }
    ctx->pc = 0x1C42CCu;
    // 0x1c42cc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1c42ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1c42d0:
    // 0x1c42d0: 0xaa182a  slt         $v1, $a1, $t2
    ctx->pc = 0x1c42d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x1c42d4: 0x2402ff93  addiu       $v0, $zero, -0x6D
    ctx->pc = 0x1c42d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967187));
    // 0x1c42d8: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1c42d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x1c42dc: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1c42dcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1c42e0:
    // 0x1c42e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c42e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c42e4:
    // 0x1c42e4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c42e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c42e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c42e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c42ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c42ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c42f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C42F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C42F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C42F0u;
            // 0x1c42f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C42F8u;
    // 0x1c42f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c42f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c42fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c42fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c4300: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1c4300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4304: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c4304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c4308: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1c4308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c430c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1c430cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1c4310: 0x1620000d  bnez        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4310u;
    {
        const bool branch_taken_0x1c4310 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4310u;
            // 0x1c4314: 0x24050770  addiu       $a1, $zero, 0x770 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4310) {
            ctx->pc = 0x1C4348u;
            goto label_1c4348;
        }
    }
    ctx->pc = 0x1C4318u;
    // 0x1c4318: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c431c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c431cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4320: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4320u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4324: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4328: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4328u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c432c: 0x24c6bca0  addiu       $a2, $a2, -0x4360
    ctx->pc = 0x1c432cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950048));
    // 0x1c4330: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4338: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c4338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c433c: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C433Cu;
    ctx->pc = 0x1C4340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C433Cu;
            // 0x1c4340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4344u;
    // 0x1c4344: 0x0  nop
    ctx->pc = 0x1c4344u;
    // NOP
label_1c4348:
    // 0x1c4348: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C4348u;
    SET_GPR_U32(ctx, 31, 0x1C4350u);
    ctx->pc = 0x1C434Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4348u;
            // 0x1c434c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4350u; }
        if (ctx->pc != 0x1C4350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4350u; }
        if (ctx->pc != 0x1C4350u) { return; }
    }
    ctx->pc = 0x1C4350u;
label_1c4350:
    // 0x1c4350: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4354: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4358: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c435c: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c435cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c4360: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c4360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4368: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C4368u;
    {
        const bool branch_taken_0x1c4368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C436Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4368u;
            // 0x1c436c: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4368) {
            ctx->pc = 0x1C4388u;
            goto label_1c4388;
        }
    }
    ctx->pc = 0x1C4370u;
    // 0x1c4370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4374: 0x24050776  addiu       $a1, $zero, 0x776
    ctx->pc = 0x1c4374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1910));
    // 0x1c4378: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c437c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c437cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4380: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4380u;
    ctx->pc = 0x1C4384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4380u;
            // 0x1c4384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4388u;
label_1c4388:
    // 0x1c4388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c4388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c438c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c438cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4390: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x1c4390u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c4394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c439c: 0x8071c94  j           func_1C7250
    ctx->pc = 0x1C439Cu;
    ctx->pc = 0x1C43A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C439Cu;
            // 0x1c43a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7250u;
    {
        auto targetFn = runtime->lookupFunction(0x1C7250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C43A4u;
    // 0x1c43a4: 0x0  nop
    ctx->pc = 0x1c43a4u;
    // NOP
    // 0x1c43a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c43a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1c43ac: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x1c43acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1c43b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1c43b4: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x1c43b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1c43b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c43b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43bc: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x1c43bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1c43c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c43c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43c4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c43c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1c43c8: 0xc070810  jal         func_1C2040
    ctx->pc = 0x1C43C8u;
    SET_GPR_U32(ctx, 31, 0x1C43D0u);
    ctx->pc = 0x1C43CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43C8u;
            // 0x1c43cc: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2040u;
    if (runtime->hasFunction(0x1C2040u)) {
        auto targetFn = runtime->lookupFunction(0x1C2040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43D0u; }
        if (ctx->pc != 0x1C43D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2040_0x1c2040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C43D0u; }
        if (ctx->pc != 0x1C43D0u) { return; }
    }
    ctx->pc = 0x1C43D0u;
label_1c43d0:
    // 0x1c43d0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c43d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c43d4: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c43d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c43d8: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c43d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c43dc: 0x24c6bc80  addiu       $a2, $a2, -0x4380
    ctx->pc = 0x1c43dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950016));
    // 0x1c43e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c43e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c43e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c43e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C43E8u;
    {
        const bool branch_taken_0x1c43e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C43ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43E8u;
            // 0x1c43ec: 0x2408ff9c  addiu       $t0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43e8) {
            ctx->pc = 0x1C43F8u;
            goto label_1c43f8;
        }
    }
    ctx->pc = 0x1C43F0u;
    // 0x1c43f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1C43F0u;
    {
        const bool branch_taken_0x1c43f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C43F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43F0u;
            // 0x1c43f4: 0x24050787  addiu       $a1, $zero, 0x787 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1927));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c43f0) {
            ctx->pc = 0x1C4424u;
            goto label_1c4424;
        }
    }
    ctx->pc = 0x1C43F8u;
label_1c43f8:
    // 0x1c43f8: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C43F8u;
    SET_GPR_U32(ctx, 31, 0x1C4400u);
    ctx->pc = 0x1C43FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C43F8u;
            // 0x1c43fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4400u; }
        if (ctx->pc != 0x1C4400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4400u; }
        if (ctx->pc != 0x1C4400u) { return; }
    }
    ctx->pc = 0x1C4400u;
label_1c4400:
    // 0x1c4400: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4404: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4404u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4408: 0x2405078d  addiu       $a1, $zero, 0x78D
    ctx->pc = 0x1c4408u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1933));
    // 0x1c440c: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c440cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c4410: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4410u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4414: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4414u;
    {
        const bool branch_taken_0x1c4414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4414u;
            // 0x1c4418: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4414) {
            ctx->pc = 0x1C4438u;
            goto label_1c4438;
        }
    }
    ctx->pc = 0x1C441Cu;
    // 0x1c441c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c441cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4420: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
label_1c4424:
    // 0x1c4424: 0xc0711fe  jal         func_1C47F8
    ctx->pc = 0x1C4424u;
    SET_GPR_U32(ctx, 31, 0x1C442Cu);
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C442Cu; }
        if (ctx->pc != 0x1C442Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C442Cu; }
        if (ctx->pc != 0x1C442Cu) { return; }
    }
    ctx->pc = 0x1C442Cu;
label_1c442c:
    // 0x1c442c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C442Cu;
    {
        const bool branch_taken_0x1c442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C442Cu;
            // 0x1c4430: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c442c) {
            ctx->pc = 0x1C4448u;
            goto label_1c4448;
        }
    }
    ctx->pc = 0x1C4434u;
    // 0x1c4434: 0x0  nop
    ctx->pc = 0x1c4434u;
    // NOP
label_1c4438:
    // 0x1c4438: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x1c4438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1c443c: 0xc071d9e  jal         func_1C7678
    ctx->pc = 0x1C443Cu;
    SET_GPR_U32(ctx, 31, 0x1C4444u);
    ctx->pc = 0x1C4440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C443Cu;
            // 0x1c4440: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7678u;
    if (runtime->hasFunction(0x1C7678u)) {
        auto targetFn = runtime->lookupFunction(0x1C7678u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4444u; }
        if (ctx->pc != 0x1C4444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C7678_0x1c7678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4444u; }
        if (ctx->pc != 0x1C4444u) { return; }
    }
    ctx->pc = 0x1C4444u;
label_1c4444:
    // 0x1c4444: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1c4444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c4448:
    // 0x1c4448: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1c4448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c444c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1c444cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1c4450: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4450u;
            // 0x1c4454: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4458u;
    // 0x1c4458: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c445c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c445cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4460: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C4460u;
    SET_GPR_U32(ctx, 31, 0x1C4468u);
    ctx->pc = 0x1C4464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4460u;
            // 0x1c4464: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4468u; }
        if (ctx->pc != 0x1C4468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4468u; }
        if (ctx->pc != 0x1C4468u) { return; }
    }
    ctx->pc = 0x1C4468u;
label_1c4468:
    // 0x1c4468: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1c4468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c446c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c446cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4470: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4470u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4474: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4478: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c4478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c447c: 0x240507a5  addiu       $a1, $zero, 0x7A5
    ctx->pc = 0x1c447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1957));
    // 0x1c4480: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4484: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4484u;
    {
        const bool branch_taken_0x1c4484 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C4488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4484u;
            // 0x1c4488: 0x2408ff97  addiu       $t0, $zero, -0x69 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4484) {
            ctx->pc = 0x1C4498u;
            goto label_1c4498;
        }
    }
    ctx->pc = 0x1C448Cu;
    // 0x1c448c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c448cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4490: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4490u;
    ctx->pc = 0x1C4494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4490u;
            // 0x1c4494: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4498u;
label_1c4498:
    // 0x1c4498: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c4498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c449c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1C449Cu;
    {
        const bool branch_taken_0x1c449c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c449c) {
            ctx->pc = 0x1C44A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C449Cu;
            // 0x1c44a0: 0x8c630010  lw          $v1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C44D0u;
            goto label_1c44d0;
        }
    }
    ctx->pc = 0x1C44A4u;
    // 0x1c44a4: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c44a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c44a8: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c44a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c44ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44b0: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c44b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c44b4: 0x24c6bd90  addiu       $a2, $a2, -0x4270
    ctx->pc = 0x1c44b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950288));
    // 0x1c44b8: 0x240507a8  addiu       $a1, $zero, 0x7A8
    ctx->pc = 0x1c44b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1960));
    // 0x1c44bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c44bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44c0: 0x2408ff97  addiu       $t0, $zero, -0x69
    ctx->pc = 0x1c44c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1c44c4: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C44C4u;
    ctx->pc = 0x1C44C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44C4u;
            // 0x1c44c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C44CCu;
    // 0x1c44cc: 0x0  nop
    ctx->pc = 0x1c44ccu;
    // NOP
label_1c44d0:
    // 0x1c44d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c44d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c44d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c44d8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x1c44d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x1c44dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1C44DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C44E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44DCu;
            // 0x1c44e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C44E4u;
    // 0x1c44e4: 0x0  nop
    ctx->pc = 0x1c44e4u;
    // NOP
    // 0x1c44e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c44e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c44ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c44ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1c44f0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1c44f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c44f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1c44f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c44f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c44fc: 0x6200003  bltz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C44FCu;
    {
        const bool branch_taken_0x1c44fc = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1C4500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C44FCu;
            // 0x1c4500: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c44fc) {
            ctx->pc = 0x1C450Cu;
            goto label_1c450c;
        }
    }
    ctx->pc = 0x1C4504u;
    // 0x1c4504: 0x1600000e  bnez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x1C4504u;
    {
        const bool branch_taken_0x1c4504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4504) {
            ctx->pc = 0x1C4540u;
            goto label_1c4540;
        }
    }
    ctx->pc = 0x1C450Cu;
label_1c450c:
    // 0x1c450c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c450cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4510: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4510u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4514: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4514u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4518: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c4518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c451c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c451cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4520: 0x24c6bda8  addiu       $a2, $a2, -0x4258
    ctx->pc = 0x1c4520u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950312));
    // 0x1c4524: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4528: 0x240507bb  addiu       $a1, $zero, 0x7BB
    ctx->pc = 0x1c4528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1979));
    // 0x1c452c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c452cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4530: 0x2408ff9c  addiu       $t0, $zero, -0x64
    ctx->pc = 0x1c4530u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
    // 0x1c4534: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4534u;
    ctx->pc = 0x1C4538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4534u;
            // 0x1c4538: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C453Cu;
    // 0x1c453c: 0x0  nop
    ctx->pc = 0x1c453cu;
    // NOP
label_1c4540:
    // 0x1c4540: 0xc0708ae  jal         func_1C22B8
    ctx->pc = 0x1C4540u;
    SET_GPR_U32(ctx, 31, 0x1C4548u);
    ctx->pc = 0x1C4544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4540u;
            // 0x1c4544: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C22B8u;
    if (runtime->hasFunction(0x1C22B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C22B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4548u; }
        if (ctx->pc != 0x1C4548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C22B8_0x1c22b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C4548u; }
        if (ctx->pc != 0x1C4548u) { return; }
    }
    ctx->pc = 0x1C4548u;
label_1c4548:
    // 0x1c4548: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1C4548u;
    {
        const bool branch_taken_0x1c4548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4548) {
            ctx->pc = 0x1C454Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4548u;
            // 0x1c454c: 0x8c430010  lw          $v1, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C4580u;
            goto label_1c4580;
        }
    }
    ctx->pc = 0x1C4550u;
    // 0x1c4550: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c4550u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c4554: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1c4554u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x1c4558: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c4558u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c455c: 0x2484bb88  addiu       $a0, $a0, -0x4478
    ctx->pc = 0x1c455cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949768));
    // 0x1c4560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c4560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c4564: 0x24c6bc58  addiu       $a2, $a2, -0x43A8
    ctx->pc = 0x1c4564u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949976));
    // 0x1c4568: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c4568u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c456c: 0x240507bf  addiu       $a1, $zero, 0x7BF
    ctx->pc = 0x1c456cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1983));
    // 0x1c4570: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c4570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4574: 0x2408ff97  addiu       $t0, $zero, -0x69
    ctx->pc = 0x1c4574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967191));
    // 0x1c4578: 0x80711fe  j           func_1C47F8
    ctx->pc = 0x1C4578u;
    ctx->pc = 0x1C457Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C4578u;
            // 0x1c457c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C47F8u;
    if (runtime->hasFunction(0x1C47F8u)) {
        auto targetFn = runtime->lookupFunction(0x1C47F8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C47F8_0x1c47f8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C4580u;
label_1c4580:
    // 0x1c4580: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c4580u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c4584: 0x226102a  slt         $v0, $s1, $a2
    ctx->pc = 0x1c4584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1c4588: 0x222300b  movn        $a2, $s1, $v0
    ctx->pc = 0x1c4588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 17));
    // 0x1c458c: 0x18c0000e  blez        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x1C458Cu;
    {
        const bool branch_taken_0x1c458c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1C4590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C458Cu;
            // 0x1c4590: 0x24640018  addiu       $a0, $v1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c458c) {
            ctx->pc = 0x1C45C8u;
            goto label_1c45c8;
        }
    }
    ctx->pc = 0x1C4594u;
    // 0x1c4594: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1c4594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c4598:
    // 0x1c4598: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c4598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1c459c: 0x2482000e  addiu       $v0, $a0, 0xE
    ctx->pc = 0x1c459cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 14));
    // 0x1c45a0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1c45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1c45a4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1c45a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1c45a8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1c45a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1c45ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1c45acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1c45b0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1c45b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1c45b4: 0x9083000c  lbu         $v1, 0xC($a0)
    ctx->pc = 0x1c45b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1c45b8: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x1c45b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x1c45bc: 0xa203000c  sb          $v1, 0xC($s0)
    ctx->pc = 0x1c45bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c45c0: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1C45C0u;
    {
        const bool branch_taken_0x1c45c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C45C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45C0u;
            // 0x1c45c4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c45c0) {
            ctx->pc = 0x1C4598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c4598;
        }
    }
    ctx->pc = 0x1C45C8u;
label_1c45c8:
    // 0x1c45c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c45c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c45cc: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1c45ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c45d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c45d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1c45d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c45d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c45d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C45D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C45DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C45D8u;
            // 0x1c45dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C45E0u;
    // 0x1c45e0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c45e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1c45e4: 0x8c42a4d8  lw          $v0, -0x5B28($v0)
    ctx->pc = 0x1c45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943960)));
    // 0x1c45e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C45E8u;
    {
        const bool branch_taken_0x1c45e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c45e8) {
            ctx->pc = 0x1C45F8u;
            goto label_1c45f8;
        }
    }
    ctx->pc = 0x1C45F0u;
    // 0x1c45f0: 0xac450044  sw          $a1, 0x44($v0)
    ctx->pc = 0x1c45f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 5));
    // 0x1c45f4: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x1c45f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_1c45f8:
    // 0x1c45f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C45F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C4600u;
}
