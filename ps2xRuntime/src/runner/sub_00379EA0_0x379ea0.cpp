#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00379EA0
// Address: 0x379ea0 - 0x37a0f0
void sub_00379EA0_0x379ea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00379EA0_0x379ea0");
#endif

    switch (ctx->pc) {
        case 0x379ed0u: goto label_379ed0;
        case 0x379f24u: goto label_379f24;
        case 0x379fa0u: goto label_379fa0;
        case 0x379fc0u: goto label_379fc0;
        case 0x379fd4u: goto label_379fd4;
        case 0x379fe0u: goto label_379fe0;
        case 0x379fe4u: goto label_379fe4;
        case 0x37a008u: goto label_37a008;
        case 0x37a090u: goto label_37a090;
        case 0x37a098u: goto label_37a098;
        default: break;
    }

    ctx->pc = 0x379ea0u;

    // 0x379ea0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x379ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x379ea4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x379ea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x379ea8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x379ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x379eac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x379eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x379eb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x379eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x379eb4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x379eb4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379eb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x379eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x379ebc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x379ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x379ec0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x379ec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ec4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x379ec4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379ec8: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x379EC8u;
    SET_GPR_U32(ctx, 31, 0x379ED0u);
    ctx->pc = 0x379ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379EC8u;
            // 0x379ecc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379ED0u; }
        if (ctx->pc != 0x379ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379ED0u; }
        if (ctx->pc != 0x379ED0u) { return; }
    }
    ctx->pc = 0x379ED0u;
label_379ed0:
    // 0x379ed0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x379ed4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x379ed8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x379ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x379edc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x379edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
    // 0x379ee0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x379ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x379ee4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x379ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x379ee8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x379ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x379eec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x379eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x379ef0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x379ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
    // 0x379ef4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x379ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x379ef8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x379ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
    // 0x379efc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x379efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x379f00: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x379f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
    // 0x379f04: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x379f04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x379f08: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x379f08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
    // 0x379f0c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x379f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
    // 0x379f10: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x379f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
    // 0x379f14: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x379f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x379f18: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x379f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x379f1c: 0xc0582cc  jal         func_160B30
    ctx->pc = 0x379F1Cu;
    SET_GPR_U32(ctx, 31, 0x379F24u);
    ctx->pc = 0x379F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379F1Cu;
            // 0x379f20: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379F24u; }
        if (ctx->pc != 0x379F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379F24u; }
        if (ctx->pc != 0x379F24u) { return; }
    }
    ctx->pc = 0x379F24u;
label_379f24:
    // 0x379f24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x379f28: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x379f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
    // 0x379f2c: 0x24637240  addiu       $v1, $v1, 0x7240
    ctx->pc = 0x379f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29248));
    // 0x379f30: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x379f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
    // 0x379f34: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x379f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
    // 0x379f38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x379f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x379f3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x379f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x379f40: 0xac446090  sw          $a0, 0x6090($v0)
    ctx->pc = 0x379f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24720), GPR_U32(ctx, 4));
    // 0x379f44: 0x24637250  addiu       $v1, $v1, 0x7250
    ctx->pc = 0x379f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29264));
    // 0x379f48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x379f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x379f4c: 0x24427288  addiu       $v0, $v0, 0x7288
    ctx->pc = 0x379f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29320));
    // 0x379f50: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x379f50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x379f54: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x379f54u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x379f58: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x379f58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
    // 0x379f5c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x379f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
    // 0x379f60: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x379f60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
    // 0x379f64: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x379f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
    // 0x379f68: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x379f68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
    // 0x379f6c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x379f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
    // 0x379f70: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x379f70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
    // 0x379f74: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x379f74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
    // 0x379f78: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x379f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
    // 0x379f7c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x379f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
    // 0x379f80: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x379f80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x379f84: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x379F84u;
    {
        const bool branch_taken_0x379f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x379f84) {
            ctx->pc = 0x37A018u;
            goto label_37a018;
        }
    }
    ctx->pc = 0x379F8Cu;
    // 0x379f8c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x379f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x379f90: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x379f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x379f94: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x379f94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x379f98: 0xc040138  jal         func_1004E0
    ctx->pc = 0x379F98u;
    SET_GPR_U32(ctx, 31, 0x379FA0u);
    ctx->pc = 0x379F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379F98u;
            // 0x379f9c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FA0u; }
        if (ctx->pc != 0x379FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FA0u; }
        if (ctx->pc != 0x379FA0u) { return; }
    }
    ctx->pc = 0x379FA0u;
label_379fa0:
    // 0x379fa0: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x379fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x379fa4: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x379fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x379fa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x379fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fac: 0x24a5a040  addiu       $a1, $a1, -0x5FC0
    ctx->pc = 0x379facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942784));
    // 0x379fb0: 0x24c691b0  addiu       $a2, $a2, -0x6E50
    ctx->pc = 0x379fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939056));
    // 0x379fb4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x379fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x379fb8: 0xc040840  jal         func_102100
    ctx->pc = 0x379FB8u;
    SET_GPR_U32(ctx, 31, 0x379FC0u);
    ctx->pc = 0x379FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379FB8u;
            // 0x379fbc: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FC0u; }
        if (ctx->pc != 0x379FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FC0u; }
        if (ctx->pc != 0x379FC0u) { return; }
    }
    ctx->pc = 0x379FC0u;
label_379fc0:
    // 0x379fc0: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x379fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
    // 0x379fc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x379fc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x379fc8: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x379fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
    // 0x379fcc: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x379FCCu;
    SET_GPR_U32(ctx, 31, 0x379FD4u);
    ctx->pc = 0x379FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379FCCu;
            // 0x379fd0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FD4u; }
        if (ctx->pc != 0x379FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FD4u; }
        if (ctx->pc != 0x379FD4u) { return; }
    }
    ctx->pc = 0x379FD4u;
label_379fd4:
    // 0x379fd4: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x379fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x379fd8: 0xc0788fc  jal         func_1E23F0
    ctx->pc = 0x379FD8u;
    SET_GPR_U32(ctx, 31, 0x379FE0u);
    ctx->pc = 0x379FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x379FD8u;
            // 0x379fdc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FE0u; }
        if (ctx->pc != 0x379FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x379FE0u; }
        if (ctx->pc != 0x379FE0u) { return; }
    }
    ctx->pc = 0x379FE0u;
label_379fe0:
    // 0x379fe0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x379fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_379fe4:
    // 0x379fe4: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x379fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
    // 0x379fe8: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x379fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
    // 0x379fec: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x379fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
    // 0x379ff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x379ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x379ff4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x379ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x379ff8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x379ff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x379ffc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x379ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x37a000: 0xc0a997c  jal         func_2A65F0
    ctx->pc = 0x37A000u;
    SET_GPR_U32(ctx, 31, 0x37A008u);
    ctx->pc = 0x37A004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A000u;
            // 0x37a004: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A008u; }
        if (ctx->pc != 0x37A008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A008u; }
        if (ctx->pc != 0x37A008u) { return; }
    }
    ctx->pc = 0x37A008u;
label_37a008:
    // 0x37a008: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x37a008u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x37a00c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x37a00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x37a010: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x37A010u;
    {
        const bool branch_taken_0x37a010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37A014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A010u;
            // 0x37a014: 0x26520060  addiu       $s2, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37a010) {
            ctx->pc = 0x379FE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_379fe4;
        }
    }
    ctx->pc = 0x37A018u;
label_37a018:
    // 0x37a018: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x37a018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a01c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x37a01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37a020: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37a020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37a024: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37a024u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37a028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37a028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a02c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a02cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a030: 0x3e00008  jr          $ra
    ctx->pc = 0x37A030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A030u;
            // 0x37a034: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A038u;
    // 0x37a038: 0x0  nop
    ctx->pc = 0x37a038u;
    // NOP
    // 0x37a03c: 0x0  nop
    ctx->pc = 0x37a03cu;
    // NOP
    // 0x37a040: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37a040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37a044: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37a044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37a048: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37a048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37a04c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x37a04cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37a050: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37a050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37a054: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x37a054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x37a058: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37a058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x37a05c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x37a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x37a060: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x37a060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x37a064: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37a064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a068: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x37a068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x37a06c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37a06cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a070: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x37a070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x37a074: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x37a074u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x37a078: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x37a078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x37a07c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x37a07cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x37a080: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x37a080u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x37a084: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x37a084u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x37a088: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x37A088u;
    SET_GPR_U32(ctx, 31, 0x37A090u);
    ctx->pc = 0x37A08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A088u;
            // 0x37a08c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A090u; }
        if (ctx->pc != 0x37A090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A090u; }
        if (ctx->pc != 0x37A090u) { return; }
    }
    ctx->pc = 0x37A090u;
label_37a090:
    // 0x37a090: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x37A090u;
    SET_GPR_U32(ctx, 31, 0x37A098u);
    ctx->pc = 0x37A094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37A090u;
            // 0x37a094: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A098u; }
        if (ctx->pc != 0x37A098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37A098u; }
        if (ctx->pc != 0x37A098u) { return; }
    }
    ctx->pc = 0x37A098u;
label_37a098:
    // 0x37a098: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37a098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x37a09c: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x37a09cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
    // 0x37a0a0: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x37a0a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x37a0a4: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x37a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x37a0a8: 0x24c6c560  addiu       $a2, $a2, -0x3AA0
    ctx->pc = 0x37a0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952288));
    // 0x37a0ac: 0x24a572f0  addiu       $a1, $a1, 0x72F0
    ctx->pc = 0x37a0acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29424));
    // 0x37a0b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x37a0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37a0b4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x37a0b8: 0x8ce70788  lw          $a3, 0x788($a3)
    ctx->pc = 0x37a0b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
    // 0x37a0bc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37a0bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37a0c0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x37a0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x37a0c4: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x37a0c4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x37a0c8: 0xa206004d  sb          $a2, 0x4D($s0)
    ctx->pc = 0x37a0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x37a0cc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x37a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x37a0d0: 0xae040050  sw          $a0, 0x50($s0)
    ctx->pc = 0x37a0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 4));
    // 0x37a0d4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x37a0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x37a0d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37a0d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37a0dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37a0dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37a0e0: 0x3e00008  jr          $ra
    ctx->pc = 0x37A0E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37A0E0u;
            // 0x37a0e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37A0E8u;
    // 0x37a0e8: 0x0  nop
    ctx->pc = 0x37a0e8u;
    // NOP
    // 0x37a0ec: 0x0  nop
    ctx->pc = 0x37a0ecu;
    // NOP
}
