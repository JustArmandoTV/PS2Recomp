#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6F00
// Address: 0x2c6f00 - 0x2c7140
void sub_002C6F00_0x2c6f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6F00_0x2c6f00");
#endif

    switch (ctx->pc) {
        case 0x2c6f30u: goto label_2c6f30;
        case 0x2c6f84u: goto label_2c6f84;
        case 0x2c7000u: goto label_2c7000;
        case 0x2c7020u: goto label_2c7020;
        case 0x2c7034u: goto label_2c7034;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c7044u: goto label_2c7044;
        case 0x2c7068u: goto label_2c7068;
        case 0x2c70f0u: goto label_2c70f0;
        case 0x2c70f8u: goto label_2c70f8;
        default: break;
    }

    ctx->pc = 0x2c6f00u;

    // 0x2c6f00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c6f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2c6f04: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2c6f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2c6f08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c6f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c6f0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c6f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c6f10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c6f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c6f14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c6f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c6f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c6f1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c6f20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2c6f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f24: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2c6f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6f28: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x2C6F28u;
    SET_GPR_U32(ctx, 31, 0x2C6F30u);
    ctx->pc = 0x2C6F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F28u;
            // 0x2c6f2c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F30u; }
        if (ctx->pc != 0x2C6F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F30u; }
        if (ctx->pc != 0x2C6F30u) { return; }
    }
    ctx->pc = 0x2C6F30u;
label_2c6f30:
    // 0x2c6f30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6f34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6f38: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x2c6f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x2c6f3c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x2c6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x2c6f40: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c6f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c6f44: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x2c6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x2c6f48: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2c6f48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x2c6f4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2c6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2c6f50: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x2c6f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x2c6f54: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c6f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c6f58: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x2c6f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x2c6f5c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2c6f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2c6f60: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x2c6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x2c6f64: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x2c6f64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x2c6f68: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x2c6f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x2c6f6c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x2c6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x2c6f70: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x2c6f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x2c6f74: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2c6f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2c6f78: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x2c6f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2c6f7c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x2C6F7Cu;
    SET_GPR_U32(ctx, 31, 0x2C6F84u);
    ctx->pc = 0x2C6F80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F7Cu;
            // 0x2c6f80: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F84u; }
        if (ctx->pc != 0x2C6F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F84u; }
        if (ctx->pc != 0x2C6F84u) { return; }
    }
    ctx->pc = 0x2C6F84u;
label_2c6f84:
    // 0x2c6f84: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6f84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6f88: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x2c6f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x2c6f8c: 0x24630a20  addiu       $v1, $v1, 0xA20
    ctx->pc = 0x2c6f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2592));
    // 0x2c6f90: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x2c6f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x2c6f94: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x2c6f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x2c6f98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c6f98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c6f9c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c6f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c6fa0: 0xac440df0  sw          $a0, 0xDF0($v0)
    ctx->pc = 0x2c6fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3568), GPR_U32(ctx, 4));
    // 0x2c6fa4: 0x24630a30  addiu       $v1, $v1, 0xA30
    ctx->pc = 0x2c6fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2608));
    // 0x2c6fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c6fac: 0x24420a68  addiu       $v0, $v0, 0xA68
    ctx->pc = 0x2c6facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2664));
    // 0x2c6fb0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2c6fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2c6fb4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x2c6fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x2c6fb8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x2c6fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x2c6fbc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x2c6fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x2c6fc0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x2c6fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x2c6fc4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x2c6fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x2c6fc8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x2c6fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x2c6fcc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x2c6fccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x2c6fd0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x2c6fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x2c6fd4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x2c6fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x2c6fd8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x2c6fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x2c6fdc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x2c6fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x2c6fe0: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x2c6fe0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2c6fe4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2C6FE4u;
    {
        const bool branch_taken_0x2c6fe4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6fe4) {
            ctx->pc = 0x2C7078u;
            goto label_2c7078;
        }
    }
    ctx->pc = 0x2C6FECu;
    // 0x2c6fec: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2c6fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2c6ff0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2c6ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2c6ff4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2c6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2c6ff8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x2C6FF8u;
    SET_GPR_U32(ctx, 31, 0x2C7000u);
    ctx->pc = 0x2C6FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FF8u;
            // 0x2c6ffc: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7000u; }
        if (ctx->pc != 0x2C7000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7000u; }
        if (ctx->pc != 0x2C7000u) { return; }
    }
    ctx->pc = 0x2C7000u;
label_2c7000:
    // 0x2c7000: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2c7004: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c7004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c7008: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c700c: 0x24a570a0  addiu       $a1, $a1, 0x70A0
    ctx->pc = 0x2c700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28832));
    // 0x2c7010: 0x24c66cf0  addiu       $a2, $a2, 0x6CF0
    ctx->pc = 0x2c7010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27888));
    // 0x2c7014: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x2c7014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x2c7018: 0xc040840  jal         func_102100
    ctx->pc = 0x2C7018u;
    SET_GPR_U32(ctx, 31, 0x2C7020u);
    ctx->pc = 0x2C701Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7018u;
            // 0x2c701c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7020u; }
        if (ctx->pc != 0x2C7020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7020u; }
        if (ctx->pc != 0x2C7020u) { return; }
    }
    ctx->pc = 0x2C7020u;
label_2c7020:
    // 0x2c7020: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x2c7020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x2c7024: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c7024u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7028: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x2c7028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x2c702c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C702Cu;
    SET_GPR_U32(ctx, 31, 0x2C7034u);
    ctx->pc = 0x2C7030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C702Cu;
            // 0x2c7030: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7034u; }
        if (ctx->pc != 0x2C7034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7034u; }
        if (ctx->pc != 0x2C7034u) { return; }
    }
    ctx->pc = 0x2C7034u;
label_2c7034:
    // 0x2c7034: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c7034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c7038: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x2C7038u;
    SET_GPR_U32(ctx, 31, 0x2C7040u);
    ctx->pc = 0x2C703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7038u;
            // 0x2c703c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7040u; }
        if (ctx->pc != 0x2C7040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7040u; }
        if (ctx->pc != 0x2C7040u) { return; }
    }
    ctx->pc = 0x2C7040u;
label_2c7040:
    // 0x2c7040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2c7040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c7044:
    // 0x2c7044: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x2c7044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x2c7048: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x2c7048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x2c704c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x2c704cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x2c7050: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2c7050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c7054: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x2c7054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x2c7058: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x2c7058u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c705c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2c705cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2c7060: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x2C7060u;
    SET_GPR_U32(ctx, 31, 0x2C7068u);
    ctx->pc = 0x2C7064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7060u;
            // 0x2c7064: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7068u; }
        if (ctx->pc != 0x2C7068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7068u; }
        if (ctx->pc != 0x2C7068u) { return; }
    }
    ctx->pc = 0x2C7068u;
label_2c7068:
    // 0x2c7068: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2c7068u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2c706c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2c706cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x2c7070: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x2C7070u;
    {
        const bool branch_taken_0x2c7070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7070u;
            // 0x2c7074: 0x26520050  addiu       $s2, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7070) {
            ctx->pc = 0x2C7044u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c7044;
        }
    }
    ctx->pc = 0x2C7078u;
label_2c7078:
    // 0x2c7078: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2c7078u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c707c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c707cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c7080: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c7080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c708c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c708cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7090: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7090u;
            // 0x2c7094: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7098u;
    // 0x2c7098: 0x0  nop
    ctx->pc = 0x2c7098u;
    // NOP
    // 0x2c709c: 0x0  nop
    ctx->pc = 0x2c709cu;
    // NOP
    // 0x2c70a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c70a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c70a4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c70a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c70a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c70a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c70ac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c70acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c70b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c70b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c70b4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c70b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c70b8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c70b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c70bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c70bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c70c0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c70c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c70c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c70c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c70c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c70c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c70cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c70ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c70d0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c70d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c70d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c70d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c70d8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c70d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c70dc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c70dcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c70e0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c70e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c70e4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c70e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c70e8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C70E8u;
    SET_GPR_U32(ctx, 31, 0x2C70F0u);
    ctx->pc = 0x2C70ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70E8u;
            // 0x2c70ec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F0u; }
        if (ctx->pc != 0x2C70F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F0u; }
        if (ctx->pc != 0x2C70F0u) { return; }
    }
    ctx->pc = 0x2C70F0u;
label_2c70f0:
    // 0x2c70f0: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C70F0u;
    SET_GPR_U32(ctx, 31, 0x2C70F8u);
    ctx->pc = 0x2C70F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70F0u;
            // 0x2c70f4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F8u; }
        if (ctx->pc != 0x2C70F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F8u; }
        if (ctx->pc != 0x2C70F8u) { return; }
    }
    ctx->pc = 0x2C70F8u;
label_2c70f8:
    // 0x2c70f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c70f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c70fc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2c70fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2c7100: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2c7100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c7104: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c7104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c7108: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2c7108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2c710c: 0x246309e0  addiu       $v1, $v1, 0x9E0
    ctx->pc = 0x2c710cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2528));
    // 0x2c7110: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2c7110u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2c7114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c7114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7118: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c7118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c711c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c711cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c7120: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c7120u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c7124: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c7124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c7128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c7128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c712c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c712cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c7130: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7130u;
            // 0x2c7134: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7138u;
    // 0x2c7138: 0x0  nop
    ctx->pc = 0x2c7138u;
    // NOP
    // 0x2c713c: 0x0  nop
    ctx->pc = 0x2c713cu;
    // NOP
}
