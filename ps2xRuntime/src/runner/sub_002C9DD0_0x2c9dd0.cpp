#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C9DD0
// Address: 0x2c9dd0 - 0x2ca050
void sub_002C9DD0_0x2c9dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9DD0_0x2c9dd0");
#endif

    switch (ctx->pc) {
        case 0x2c9e00u: goto label_2c9e00;
        case 0x2c9e54u: goto label_2c9e54;
        case 0x2c9ed0u: goto label_2c9ed0;
        case 0x2c9ef0u: goto label_2c9ef0;
        case 0x2c9f04u: goto label_2c9f04;
        case 0x2c9f10u: goto label_2c9f10;
        case 0x2c9f14u: goto label_2c9f14;
        case 0x2c9f38u: goto label_2c9f38;
        case 0x2c9f84u: goto label_2c9f84;
        case 0x2c9f8cu: goto label_2c9f8c;
        case 0x2c9facu: goto label_2c9fac;
        case 0x2c9fb4u: goto label_2c9fb4;
        case 0x2c9ff8u: goto label_2c9ff8;
        case 0x2ca000u: goto label_2ca000;
        default: break;
    }

    ctx->pc = 0x2c9dd0u;

    // 0x2c9dd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c9dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c9dd4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c9dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c9dd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c9dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c9ddc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c9ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c9de0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c9de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c9de4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c9de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c9de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c9dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9df0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c9df0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9df4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c9df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9df8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C9DF8u;
    SET_GPR_U32(ctx, 31, 0x2C9E00u);
    ctx->pc = 0x2C9DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9DF8u;
            // 0x2c9dfc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E00u; }
        if (ctx->pc != 0x2C9E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E00u; }
        if (ctx->pc != 0x2C9E00u) { return; }
    }
    ctx->pc = 0x2C9E00u;
label_2c9e00:
    // 0x2c9e00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9e04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9e08: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c9e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c9e0c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c9e10: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c9e10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c9e14: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c9e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c9e18: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c9e18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c9e1c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c9e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9e20: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c9e24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c9e28: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c9e28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c9e2c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c9e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c9e30: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c9e30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c9e34: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c9e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c9e38: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c9e38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c9e3c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c9e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c9e40: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c9e44: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c9e44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c9e48: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c9e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c9e4c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C9E4Cu;
    SET_GPR_U32(ctx, 31, 0x2C9E54u);
    ctx->pc = 0x2C9E50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9E4Cu;
            // 0x2c9e50: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E54u; }
        if (ctx->pc != 0x2C9E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9E54u; }
        if (ctx->pc != 0x2C9E54u) { return; }
    }
    ctx->pc = 0x2C9E54u;
label_2c9e54:
    // 0x2c9e54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9e58: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c9e5c: 0x24630448  addiu       $v1, $v1, 0x448
    ctx->pc = 0x2c9e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1096));
    // 0x2c9e60: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c9e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c9e64: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c9e64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c9e68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c9e6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9e70: 0xac440d88  sw          $a0, 0xD88($v0)
    ctx->pc = 0x2c9e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3464), GPR_U32(ctx, 4));
    // 0x2c9e74: 0x24630460  addiu       $v1, $v1, 0x460
    ctx->pc = 0x2c9e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1120));
    // 0x2c9e78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9e7c: 0x24420498  addiu       $v0, $v0, 0x498
    ctx->pc = 0x2c9e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1176));
    // 0x2c9e80: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c9e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c9e84: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c9e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c9e88: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c9e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c9e8c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c9e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c9e90: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c9e94: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c9e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c9e98: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c9e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c9e9c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c9e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c9ea0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c9ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c9ea4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c9ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c9ea8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c9ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c9eac: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c9eacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c9eb0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c9eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c9eb4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C9EB4u;
    {
        const bool branch_taken_0x2c9eb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9eb4) {
            ctx->pc = 0x2C9F48u;
            goto label_2c9f48;
        }
    }
    ctx->pc = 0x2C9EBCu;
    // 0x2c9ebc: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x2c9ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x2c9ec0: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x2c9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c9ec4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2c9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2c9ec8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C9EC8u;
    SET_GPR_U32(ctx, 31, 0x2C9ED0u);
    ctx->pc = 0x2C9ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EC8u;
            // 0x2c9ecc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9ED0u; }
        if (ctx->pc != 0x2C9ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9ED0u; }
        if (ctx->pc != 0x2C9ED0u) { return; }
    }
    ctx->pc = 0x2C9ED0u;
label_2c9ed0:
    // 0x2c9ed0: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x2c9ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x2c9ed4: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x2c9ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x2c9ed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c9ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9edc: 0x24a59f70  addiu       $a1, $a1, -0x6090
    ctx->pc = 0x2c9edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942576));
    // 0x2c9ee0: 0x24c69b60  addiu       $a2, $a2, -0x64A0
    ctx->pc = 0x2c9ee0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941536));
    // 0x2c9ee4: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x2c9ee4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2c9ee8: 0xc040840  jal         func_102100
    ctx->pc = 0x2C9EE8u;
    SET_GPR_U32(ctx, 31, 0x2C9EF0u);
    ctx->pc = 0x2C9EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EE8u;
            // 0x2c9eec: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EF0u; }
        if (ctx->pc != 0x2C9EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9EF0u; }
        if (ctx->pc != 0x2C9EF0u) { return; }
    }
    ctx->pc = 0x2C9EF0u;
label_2c9ef0:
    // 0x2c9ef0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c9ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c9ef4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c9ef4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9ef8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c9ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c9efc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C9EFCu;
    SET_GPR_U32(ctx, 31, 0x2C9F04u);
    ctx->pc = 0x2C9F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9EFCu;
            // 0x2c9f00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F04u; }
        if (ctx->pc != 0x2C9F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F04u; }
        if (ctx->pc != 0x2C9F04u) { return; }
    }
    ctx->pc = 0x2C9F04u;
label_2c9f04:
    // 0x2c9f04: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c9f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c9f08: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C9F08u;
    SET_GPR_U32(ctx, 31, 0x2C9F10u);
    ctx->pc = 0x2C9F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F08u;
            // 0x2c9f0c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F10u; }
        if (ctx->pc != 0x2C9F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F10u; }
        if (ctx->pc != 0x2C9F10u) { return; }
    }
    ctx->pc = 0x2C9F10u;
label_2c9f10:
    // 0x2c9f10: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c9f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9f14:
    // 0x2c9f14: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c9f18: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c9f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c9f1c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c9f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c9f20: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c9f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9f24: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c9f28: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c9f28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c9f2c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c9f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c9f30: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C9F30u;
    SET_GPR_U32(ctx, 31, 0x2C9F38u);
    ctx->pc = 0x2C9F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F30u;
            // 0x2c9f34: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F38u; }
        if (ctx->pc != 0x2C9F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F38u; }
        if (ctx->pc != 0x2C9F38u) { return; }
    }
    ctx->pc = 0x2C9F38u;
label_2c9f38:
    // 0x2c9f38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c9f38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c9f3c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c9f3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c9f40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C9F40u;
    {
        const bool branch_taken_0x2c9f40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F40u;
            // 0x2c9f44: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9f40) {
            ctx->pc = 0x2C9F14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9f14;
        }
    }
    ctx->pc = 0x2C9F48u;
label_2c9f48:
    // 0x2c9f48: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c9f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9f4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c9f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c9f50: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c9f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c9f54: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c9f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c9f58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c9f58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c9f5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c9f5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c9f60: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9F60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F60u;
            // 0x2c9f64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9F68u;
    // 0x2c9f68: 0x0  nop
    ctx->pc = 0x2c9f68u;
    // NOP
    // 0x2c9f6c: 0x0  nop
    ctx->pc = 0x2c9f6cu;
    // NOP
    // 0x2c9f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c9f74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c9f78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c9f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c9f7c: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x2C9F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C9F84u);
    ctx->pc = 0x2C9F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F7Cu;
            // 0x2c9f80: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F84u; }
        if (ctx->pc != 0x2C9F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F84u; }
        if (ctx->pc != 0x2C9F84u) { return; }
    }
    ctx->pc = 0x2C9F84u;
label_2c9f84:
    // 0x2c9f84: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x2C9F84u;
    SET_GPR_U32(ctx, 31, 0x2C9F8Cu);
    ctx->pc = 0x2C9F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9F84u;
            // 0x2c9f88: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F8Cu; }
        if (ctx->pc != 0x2C9F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9F8Cu; }
        if (ctx->pc != 0x2C9F8Cu) { return; }
    }
    ctx->pc = 0x2C9F8Cu;
label_2c9f8c:
    // 0x2c9f8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c9f90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c9f94: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x2c9f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x2c9f98: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x2c9f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x2c9f9c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c9fa0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x2c9fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x2c9fa4: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x2C9FA4u;
    SET_GPR_U32(ctx, 31, 0x2C9FACu);
    ctx->pc = 0x2C9FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FA4u;
            // 0x2c9fa8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FACu; }
        if (ctx->pc != 0x2C9FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FACu; }
        if (ctx->pc != 0x2C9FACu) { return; }
    }
    ctx->pc = 0x2C9FACu;
label_2c9fac:
    // 0x2c9fac: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x2C9FACu;
    SET_GPR_U32(ctx, 31, 0x2C9FB4u);
    ctx->pc = 0x2C9FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FACu;
            // 0x2c9fb0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FB4u; }
        if (ctx->pc != 0x2C9FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FB4u; }
        if (ctx->pc != 0x2C9FB4u) { return; }
    }
    ctx->pc = 0x2C9FB4u;
label_2c9fb4:
    // 0x2c9fb4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x2c9fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x2c9fb8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x2c9fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x2c9fbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x2c9fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x2c9fc0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x2c9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x2c9fc4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x2c9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x2c9fc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2c9fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c9fcc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x2c9fccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x2c9fd0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2c9fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c9fd4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x2c9fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x2c9fd8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x2c9fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x2c9fdc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x2c9fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x2c9fe0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x2c9fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x2c9fe4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x2c9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x2c9fe8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x2c9fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x2c9fec: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x2c9fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x2c9ff0: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x2C9FF0u;
    SET_GPR_U32(ctx, 31, 0x2C9FF8u);
    ctx->pc = 0x2C9FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FF0u;
            // 0x2c9ff4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FF8u; }
        if (ctx->pc != 0x2C9FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9FF8u; }
        if (ctx->pc != 0x2C9FF8u) { return; }
    }
    ctx->pc = 0x2C9FF8u;
label_2c9ff8:
    // 0x2c9ff8: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x2C9FF8u;
    SET_GPR_U32(ctx, 31, 0x2CA000u);
    ctx->pc = 0x2C9FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9FF8u;
            // 0x2c9ffc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA000u; }
        if (ctx->pc != 0x2CA000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CA000u; }
        if (ctx->pc != 0x2CA000u) { return; }
    }
    ctx->pc = 0x2CA000u;
label_2ca000:
    // 0x2ca000: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x2ca000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x2ca004: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x2ca004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x2ca008: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x2ca008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x2ca00c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x2ca00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x2ca010: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2ca010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ca014: 0x248460c0  addiu       $a0, $a0, 0x60C0
    ctx->pc = 0x2ca014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24768));
    // 0x2ca018: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x2ca018u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca01c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ca01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ca020: 0x24636100  addiu       $v1, $v1, 0x6100
    ctx->pc = 0x2ca020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24832));
    // 0x2ca024: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x2ca024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2ca028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2ca028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca02c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x2ca02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x2ca030: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x2ca030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x2ca034: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x2ca034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x2ca038: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x2ca038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x2ca03c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2ca03cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ca040: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ca040u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ca044: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA044u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CA044u;
            // 0x2ca048: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CA04Cu;
    // 0x2ca04c: 0x0  nop
    ctx->pc = 0x2ca04cu;
    // NOP
}
