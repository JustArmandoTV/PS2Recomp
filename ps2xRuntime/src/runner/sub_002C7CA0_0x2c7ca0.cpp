#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C7CA0
// Address: 0x2c7ca0 - 0x2c7ee0
void sub_002C7CA0_0x2c7ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7CA0_0x2c7ca0");
#endif

    switch (ctx->pc) {
        case 0x2c7cd0u: goto label_2c7cd0;
        case 0x2c7d24u: goto label_2c7d24;
        case 0x2c7da0u: goto label_2c7da0;
        case 0x2c7dc0u: goto label_2c7dc0;
        case 0x2c7dd4u: goto label_2c7dd4;
        case 0x2c7de0u: goto label_2c7de0;
        case 0x2c7de4u: goto label_2c7de4;
        case 0x2c7e08u: goto label_2c7e08;
        case 0x2c7e90u: goto label_2c7e90;
        case 0x2c7e98u: goto label_2c7e98;
        default: break;
    }

    ctx->pc = 0x2c7ca0u;

    // 0x2c7ca0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c7ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c7ca4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c7ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c7ca8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c7ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c7cac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c7cb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c7cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c7cb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c7cb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7cb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c7cbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7cc0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c7cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7cc4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c7cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7cc8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C7CC8u;
    SET_GPR_U32(ctx, 31, 0x2C7CD0u);
    ctx->pc = 0x2C7CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7CC8u;
            // 0x2c7ccc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7CD0u; }
        if (ctx->pc != 0x2C7CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7CD0u; }
        if (ctx->pc != 0x2C7CD0u) { return; }
    }
    ctx->pc = 0x2C7CD0u;
label_2c7cd0:
    // 0x2c7cd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7cd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7cd8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c7cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c7cdc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c7cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c7ce0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c7ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c7ce4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c7ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c7ce8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c7ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c7cec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c7cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c7cf0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c7cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c7cf4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c7cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c7cf8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c7cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c7cfc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c7cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c7d00: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c7d00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c7d04: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c7d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c7d08: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c7d08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c7d0c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c7d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c7d10: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c7d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c7d14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c7d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c7d18: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c7d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c7d1c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C7D1Cu;
    SET_GPR_U32(ctx, 31, 0x2C7D24u);
    ctx->pc = 0x2C7D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7D1Cu;
            // 0x2c7d20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7D24u; }
        if (ctx->pc != 0x2C7D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7D24u; }
        if (ctx->pc != 0x2C7D24u) { return; }
    }
    ctx->pc = 0x2C7D24u;
label_2c7d24:
    // 0x2c7d24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7d28: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c7d2c: 0x24630880  addiu       $v1, $v1, 0x880
    ctx->pc = 0x2c7d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2176));
    // 0x2c7d30: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c7d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c7d34: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c7d38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c7d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c7d3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7d40: 0xac440e00  sw          $a0, 0xE00($v0)
    ctx->pc = 0x2c7d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3584), GPR_U32(ctx, 4));
    // 0x2c7d44: 0x24630890  addiu       $v1, $v1, 0x890
    ctx->pc = 0x2c7d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
    // 0x2c7d48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7d4c: 0x244208c8  addiu       $v0, $v0, 0x8C8
    ctx->pc = 0x2c7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2248));
    // 0x2c7d50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c7d50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c7d54: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c7d54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c7d58: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c7d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c7d5c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c7d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c7d60: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c7d60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c7d64: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c7d64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c7d68: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c7d68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c7d6c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c7d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c7d70: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c7d70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c7d74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c7d74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c7d78: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c7d78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c7d7c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c7d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c7d80: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c7d80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c7d84: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C7D84u;
    {
        const bool branch_taken_0x2c7d84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c7d84) {
            ctx->pc = 0x2C7E18u;
            goto label_2c7e18;
        }
    }
    ctx->pc = 0x2C7D8Cu;
    // 0x2c7d8c: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c7d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c7d90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c7d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c7d94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c7d98: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C7D98u;
    SET_GPR_U32(ctx, 31, 0x2C7DA0u);
    ctx->pc = 0x2C7D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7D98u;
            // 0x2c7d9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DA0u; }
        if (ctx->pc != 0x2C7DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DA0u; }
        if (ctx->pc != 0x2C7DA0u) { return; }
    }
    ctx->pc = 0x2C7DA0u;
label_2c7da0:
    // 0x2c7da0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c7da0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c7da4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c7da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c7da8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7dac: 0x24a57e40  addiu       $a1, $a1, 0x7E40
    ctx->pc = 0x2c7dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32320));
    // 0x2c7db0: 0x24c67a90  addiu       $a2, $a2, 0x7A90
    ctx->pc = 0x2c7db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31376));
    // 0x2c7db4: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2c7db4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c7db8: 0xc040840  jal         func_102100
    ctx->pc = 0x2C7DB8u;
    SET_GPR_U32(ctx, 31, 0x2C7DC0u);
    ctx->pc = 0x2C7DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7DB8u;
            // 0x2c7dbc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DC0u; }
        if (ctx->pc != 0x2C7DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DC0u; }
        if (ctx->pc != 0x2C7DC0u) { return; }
    }
    ctx->pc = 0x2C7DC0u;
label_2c7dc0:
    // 0x2c7dc0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c7dc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c7dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7dc8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c7dcc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C7DCCu;
    SET_GPR_U32(ctx, 31, 0x2C7DD4u);
    ctx->pc = 0x2C7DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7DCCu;
            // 0x2c7dd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DD4u; }
        if (ctx->pc != 0x2C7DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DD4u; }
        if (ctx->pc != 0x2C7DD4u) { return; }
    }
    ctx->pc = 0x2C7DD4u;
label_2c7dd4:
    // 0x2c7dd4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c7dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c7dd8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C7DD8u;
    SET_GPR_U32(ctx, 31, 0x2C7DE0u);
    ctx->pc = 0x2C7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7DD8u;
            // 0x2c7ddc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DE0u; }
        if (ctx->pc != 0x2C7DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7DE0u; }
        if (ctx->pc != 0x2C7DE0u) { return; }
    }
    ctx->pc = 0x2C7DE0u;
label_2c7de0:
    // 0x2c7de0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c7de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7de4:
    // 0x2c7de4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c7de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c7de8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c7dec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c7decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c7df0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c7df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7df4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c7df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c7df8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c7df8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c7dfc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c7dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c7e00: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C7E00u;
    SET_GPR_U32(ctx, 31, 0x2C7E08u);
    ctx->pc = 0x2C7E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7E00u;
            // 0x2c7e04: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E08u; }
        if (ctx->pc != 0x2C7E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E08u; }
        if (ctx->pc != 0x2C7E08u) { return; }
    }
    ctx->pc = 0x2C7E08u;
label_2c7e08:
    // 0x2c7e08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c7e08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c7e0c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c7e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c7e10: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C7E10u;
    {
        const bool branch_taken_0x2c7e10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7E10u;
            // 0x2c7e14: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7e10) {
            ctx->pc = 0x2C7DE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7de4;
        }
    }
    ctx->pc = 0x2C7E18u;
label_2c7e18:
    // 0x2c7e18: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c7e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e1c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c7e1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7e20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7e20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7e24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7e28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7e2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7e2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7e30: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7E30u;
            // 0x2c7e34: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7E38u;
    // 0x2c7e38: 0x0  nop
    ctx->pc = 0x2c7e38u;
    // NOP
    // 0x2c7e3c: 0x0  nop
    ctx->pc = 0x2c7e3cu;
    // NOP
    // 0x2c7e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c7e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c7e44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c7e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c7e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c7e4c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c7e4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c7e50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7e54: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c7e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c7e58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7e5c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c7e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c7e60: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c7e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c7e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c7e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7e68: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c7e68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c7e6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c7e6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7e70: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c7e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c7e74: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c7e74u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c7e78: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c7e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c7e7c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c7e7cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c7e80: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c7e80u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c7e84: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c7e84u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c7e88: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C7E88u;
    SET_GPR_U32(ctx, 31, 0x2C7E90u);
    ctx->pc = 0x2C7E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7E88u;
            // 0x2c7e8c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E90u; }
        if (ctx->pc != 0x2C7E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E90u; }
        if (ctx->pc != 0x2C7E90u) { return; }
    }
    ctx->pc = 0x2C7E90u;
label_2c7e90:
    // 0x2c7e90: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C7E90u;
    SET_GPR_U32(ctx, 31, 0x2C7E98u);
    ctx->pc = 0x2C7E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7E90u;
            // 0x2c7e94: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E98u; }
        if (ctx->pc != 0x2C7E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7E98u; }
        if (ctx->pc != 0x2C7E98u) { return; }
    }
    ctx->pc = 0x2C7E98u;
label_2c7e98:
    // 0x2c7e98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c7e98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c7e9c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2c7e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2c7ea0: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2c7ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c7ea4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7ea8: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2c7ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2c7eac: 0x24630840  addiu       $v1, $v1, 0x840
    ctx->pc = 0x2c7eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2112));
    // 0x2c7eb0: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2c7eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2c7eb4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7eb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7eb8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c7eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c7ebc: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c7ebcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c7ec0: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c7ec0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7ec4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c7ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7ec8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7ED0u;
            // 0x2c7ed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7ED8u;
    // 0x2c7ed8: 0x0  nop
    ctx->pc = 0x2c7ed8u;
    // NOP
    // 0x2c7edc: 0x0  nop
    ctx->pc = 0x2c7edcu;
    // NOP
}
