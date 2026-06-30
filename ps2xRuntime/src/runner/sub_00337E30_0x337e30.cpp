#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00337E30
// Address: 0x337e30 - 0x3380b0
void sub_00337E30_0x337e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337E30_0x337e30");
#endif

    switch (ctx->pc) {
        case 0x337e60u: goto label_337e60;
        case 0x337eb4u: goto label_337eb4;
        case 0x337f30u: goto label_337f30;
        case 0x337f50u: goto label_337f50;
        case 0x337f64u: goto label_337f64;
        case 0x337f70u: goto label_337f70;
        case 0x337f74u: goto label_337f74;
        case 0x337f98u: goto label_337f98;
        case 0x337fe4u: goto label_337fe4;
        case 0x337fecu: goto label_337fec;
        case 0x33800cu: goto label_33800c;
        case 0x338014u: goto label_338014;
        case 0x338058u: goto label_338058;
        case 0x338060u: goto label_338060;
        default: break;
    }

    ctx->pc = 0x337e30u;

    // 0x337e30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x337e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x337e34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x337e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337e38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x337e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x337e3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x337e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x337e40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x337e44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x337e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x337e4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337e4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337e50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x337e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x337e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337e58: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x337E58u;
    SET_GPR_U32(ctx, 31, 0x337E60u);
    ctx->pc = 0x337E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337E58u;
            // 0x337e5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337E60u; }
        if (ctx->pc != 0x337E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337E60u; }
        if (ctx->pc != 0x337E60u) { return; }
    }
    ctx->pc = 0x337E60u;
label_337e60:
    // 0x337e60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x337e64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337e68: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x337e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x337e6c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x337e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x337e70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x337e70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x337e74: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x337e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x337e78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x337e78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x337e7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x337e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x337e80: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x337e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x337e84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x337e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x337e88: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x337e88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x337e8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x337e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x337e90: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x337e90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x337e94: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x337e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x337e98: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x337e98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x337e9c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x337e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x337ea0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x337ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x337ea4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x337ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337ea8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x337ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x337eac: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x337EACu;
    SET_GPR_U32(ctx, 31, 0x337EB4u);
    ctx->pc = 0x337EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337EACu;
            // 0x337eb0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337EB4u; }
        if (ctx->pc != 0x337EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337EB4u; }
        if (ctx->pc != 0x337EB4u) { return; }
    }
    ctx->pc = 0x337EB4u;
label_337eb4:
    // 0x337eb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x337eb8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x337eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x337ebc: 0x24634e08  addiu       $v1, $v1, 0x4E08
    ctx->pc = 0x337ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19976));
    // 0x337ec0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x337ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x337ec4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x337ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x337ec8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x337ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x337ecc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x337ed0: 0xac443e70  sw          $a0, 0x3E70($v0)
    ctx->pc = 0x337ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15984), GPR_U32(ctx, 4));
    // 0x337ed4: 0x24634e20  addiu       $v1, $v1, 0x4E20
    ctx->pc = 0x337ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20000));
    // 0x337ed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337edc: 0x24424e58  addiu       $v0, $v0, 0x4E58
    ctx->pc = 0x337edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20056));
    // 0x337ee0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x337ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x337ee4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x337ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x337ee8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x337ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x337eec: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x337eecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x337ef0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x337ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x337ef4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x337ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x337ef8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x337ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x337efc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x337efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x337f00: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x337f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x337f04: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x337f04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x337f08: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x337f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x337f0c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x337f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x337f10: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x337f10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x337f14: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x337F14u;
    {
        const bool branch_taken_0x337f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x337f14) {
            ctx->pc = 0x337FA8u;
            goto label_337fa8;
        }
    }
    ctx->pc = 0x337F1Cu;
    // 0x337f1c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x337f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x337f20: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x337f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x337f24: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x337f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x337f28: 0xc040138  jal         func_1004E0
    ctx->pc = 0x337F28u;
    SET_GPR_U32(ctx, 31, 0x337F30u);
    ctx->pc = 0x337F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337F28u;
            // 0x337f2c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F30u; }
        if (ctx->pc != 0x337F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F30u; }
        if (ctx->pc != 0x337F30u) { return; }
    }
    ctx->pc = 0x337F30u;
label_337f30:
    // 0x337f30: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x337f30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x337f34: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x337f34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x337f38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x337f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f3c: 0x24a57fd0  addiu       $a1, $a1, 0x7FD0
    ctx->pc = 0x337f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32720));
    // 0x337f40: 0x24c67800  addiu       $a2, $a2, 0x7800
    ctx->pc = 0x337f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30720));
    // 0x337f44: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x337f44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x337f48: 0xc040840  jal         func_102100
    ctx->pc = 0x337F48u;
    SET_GPR_U32(ctx, 31, 0x337F50u);
    ctx->pc = 0x337F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337F48u;
            // 0x337f4c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F50u; }
        if (ctx->pc != 0x337F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F50u; }
        if (ctx->pc != 0x337F50u) { return; }
    }
    ctx->pc = 0x337F50u;
label_337f50:
    // 0x337f50: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x337f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x337f54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x337f54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f58: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x337f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x337f5c: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x337F5Cu;
    SET_GPR_U32(ctx, 31, 0x337F64u);
    ctx->pc = 0x337F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337F5Cu;
            // 0x337f60: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F64u; }
        if (ctx->pc != 0x337F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F64u; }
        if (ctx->pc != 0x337F64u) { return; }
    }
    ctx->pc = 0x337F64u;
label_337f64:
    // 0x337f64: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x337f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x337f68: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x337F68u;
    SET_GPR_U32(ctx, 31, 0x337F70u);
    ctx->pc = 0x337F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337F68u;
            // 0x337f6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F70u; }
        if (ctx->pc != 0x337F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F70u; }
        if (ctx->pc != 0x337F70u) { return; }
    }
    ctx->pc = 0x337F70u;
label_337f70:
    // 0x337f70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x337f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337f74:
    // 0x337f74: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x337f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x337f78: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x337f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x337f7c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x337f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x337f80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337f84: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x337f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x337f88: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x337f88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x337f8c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x337f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x337f90: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x337F90u;
    SET_GPR_U32(ctx, 31, 0x337F98u);
    ctx->pc = 0x337F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337F90u;
            // 0x337f94: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F98u; }
        if (ctx->pc != 0x337F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337F98u; }
        if (ctx->pc != 0x337F98u) { return; }
    }
    ctx->pc = 0x337F98u;
label_337f98:
    // 0x337f98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x337f98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x337f9c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x337f9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x337fa0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x337FA0u;
    {
        const bool branch_taken_0x337fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337FA0u;
            // 0x337fa4: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fa0) {
            ctx->pc = 0x337F74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_337f74;
        }
    }
    ctx->pc = 0x337FA8u;
label_337fa8:
    // 0x337fa8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x337fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337fac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x337facu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x337fb0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x337fb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337fb4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337fb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x337fb8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337fb8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337fbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337fbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x337FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337FC0u;
            // 0x337fc4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337FC8u;
    // 0x337fc8: 0x0  nop
    ctx->pc = 0x337fc8u;
    // NOP
    // 0x337fcc: 0x0  nop
    ctx->pc = 0x337fccu;
    // NOP
    // 0x337fd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x337fd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x337fd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x337fdc: 0xc0aeebc  jal         func_2BBAF0
    ctx->pc = 0x337FDCu;
    SET_GPR_U32(ctx, 31, 0x337FE4u);
    ctx->pc = 0x337FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337FDCu;
            // 0x337fe0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337FE4u; }
        if (ctx->pc != 0x337FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337FE4u; }
        if (ctx->pc != 0x337FE4u) { return; }
    }
    ctx->pc = 0x337FE4u;
label_337fe4:
    // 0x337fe4: 0xc0aeeb4  jal         func_2BBAD0
    ctx->pc = 0x337FE4u;
    SET_GPR_U32(ctx, 31, 0x337FECu);
    ctx->pc = 0x337FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337FE4u;
            // 0x337fe8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337FECu; }
        if (ctx->pc != 0x337FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337FECu; }
        if (ctx->pc != 0x337FECu) { return; }
    }
    ctx->pc = 0x337FECu;
label_337fec:
    // 0x337fec: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x337ff0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x337ff4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x337ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
    // 0x337ff8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x337ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
    // 0x337ffc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x338000: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x338000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x338004: 0xc0aeea4  jal         func_2BBA90
    ctx->pc = 0x338004u;
    SET_GPR_U32(ctx, 31, 0x33800Cu);
    ctx->pc = 0x338008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338004u;
            // 0x338008: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33800Cu; }
        if (ctx->pc != 0x33800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33800Cu; }
        if (ctx->pc != 0x33800Cu) { return; }
    }
    ctx->pc = 0x33800Cu;
label_33800c:
    // 0x33800c: 0xc0aee8c  jal         func_2BBA30
    ctx->pc = 0x33800Cu;
    SET_GPR_U32(ctx, 31, 0x338014u);
    ctx->pc = 0x338010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33800Cu;
            // 0x338010: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338014u; }
        if (ctx->pc != 0x338014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338014u; }
        if (ctx->pc != 0x338014u) { return; }
    }
    ctx->pc = 0x338014u;
label_338014:
    // 0x338014: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x338014u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x338018: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x338018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
    // 0x33801c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x33801cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
    // 0x338020: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x338020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
    // 0x338024: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x338024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
    // 0x338028: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x338028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33802c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x33802cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
    // 0x338030: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x338030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x338034: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x338034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
    // 0x338038: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x338038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
    // 0x33803c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x33803cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
    // 0x338040: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x338040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
    // 0x338044: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x338044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
    // 0x338048: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x338048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
    // 0x33804c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x33804cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
    // 0x338050: 0xc0775b8  jal         func_1DD6E0
    ctx->pc = 0x338050u;
    SET_GPR_U32(ctx, 31, 0x338058u);
    ctx->pc = 0x338054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338050u;
            // 0x338054: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338058u; }
        if (ctx->pc != 0x338058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338058u; }
        if (ctx->pc != 0x338058u) { return; }
    }
    ctx->pc = 0x338058u;
label_338058:
    // 0x338058: 0xc077314  jal         func_1DCC50
    ctx->pc = 0x338058u;
    SET_GPR_U32(ctx, 31, 0x338060u);
    ctx->pc = 0x33805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x338058u;
            // 0x33805c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338060u; }
        if (ctx->pc != 0x338060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x338060u; }
        if (ctx->pc != 0x338060u) { return; }
    }
    ctx->pc = 0x338060u;
label_338060:
    // 0x338060: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x338060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x338064: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x338064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x338068: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x338068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x33806c: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x33806cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
    // 0x338070: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x338070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338074: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x338074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    // 0x338078: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x338078u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33807c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33807cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x338080: 0x24634f00  addiu       $v1, $v1, 0x4F00
    ctx->pc = 0x338080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20224));
    // 0x338084: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x338084u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x338088: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x338088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33808c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x33808cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
    // 0x338090: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x338090u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x338094: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x338094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x338098: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x338098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x33809c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x33809cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3380a0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3380a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3380a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3380A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3380A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3380A4u;
            // 0x3380a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3380ACu;
    // 0x3380ac: 0x0  nop
    ctx->pc = 0x3380acu;
    // NOP
}
