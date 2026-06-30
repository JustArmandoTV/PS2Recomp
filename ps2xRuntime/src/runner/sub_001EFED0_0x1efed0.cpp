#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001EFED0
// Address: 0x1efed0 - 0x1f0000
void sub_001EFED0_0x1efed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFED0_0x1efed0");
#endif

    switch (ctx->pc) {
        case 0x1eff20u: goto label_1eff20;
        case 0x1eff6cu: goto label_1eff6c;
        case 0x1eff90u: goto label_1eff90;
        case 0x1effb8u: goto label_1effb8;
        case 0x1effdcu: goto label_1effdc;
        default: break;
    }

    ctx->pc = 0x1efed0u;

    // 0x1efed0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1efed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1efed4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1efed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1efed8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1efed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1efedc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1efedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1efee0: 0x2463ff30  addiu       $v1, $v1, -0xD0
    ctx->pc = 0x1efee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967088));
    // 0x1efee4: 0x2442f670  addiu       $v0, $v0, -0x990
    ctx->pc = 0x1efee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964848));
    // 0x1efee8: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1efee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1efeec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1efeecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efef0: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1efef0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1efef4: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1efef4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1efef8: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1efef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1efefc: 0x2463efc0  addiu       $v1, $v1, -0x1040
    ctx->pc = 0x1efefcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963136));
    // 0x1eff00: 0x24420d90  addiu       $v0, $v0, 0xD90
    ctx->pc = 0x1eff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3472));
    // 0x1eff04: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1eff04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1eff08: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x1eff08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x1eff0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1eff0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1eff10: 0xa3a60021  sb          $a2, 0x21($sp)
    ctx->pc = 0x1eff10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 6));
    // 0x1eff14: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1eff14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff18: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1EFF18u;
    SET_GPR_U32(ctx, 31, 0x1EFF20u);
    ctx->pc = 0x1EFF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF18u;
            // 0x1eff1c: 0xa3a00020  sb          $zero, 0x20($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF20u; }
        if (ctx->pc != 0x1EFF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF20u; }
        if (ctx->pc != 0x1EFF20u) { return; }
    }
    ctx->pc = 0x1EFF20u;
label_1eff20:
    // 0x1eff20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1eff20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1eff24: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF24u;
            // 0x1eff28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFF2Cu;
    // 0x1eff2c: 0x0  nop
    ctx->pc = 0x1eff2cu;
    // NOP
    // 0x1eff30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1eff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1eff34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1eff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1eff38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1eff38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1eff3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1eff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1eff40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1eff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1eff44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1eff44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1eff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1eff4c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1eff4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff50: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1EFF50u;
    {
        const bool branch_taken_0x1eff50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF50u;
            // 0x1eff54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff50) {
            ctx->pc = 0x1EFFA4u;
            goto label_1effa4;
        }
    }
    ctx->pc = 0x1EFF58u;
    // 0x1eff58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1eff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1eff5c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1eff5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eff60: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1eff60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1eff64: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1EFF64u;
    SET_GPR_U32(ctx, 31, 0x1EFF6Cu);
    ctx->pc = 0x1EFF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF64u;
            // 0x1eff68: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF6Cu; }
        if (ctx->pc != 0x1EFF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF6Cu; }
        if (ctx->pc != 0x1EFF6Cu) { return; }
    }
    ctx->pc = 0x1EFF6Cu;
label_1eff6c:
    // 0x1eff6c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1eff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1eff70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1eff70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff74: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1EFF74u;
    {
        const bool branch_taken_0x1eff74 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF74u;
            // 0x1eff78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff74) {
            ctx->pc = 0x1EFF9Cu;
            goto label_1eff9c;
        }
    }
    ctx->pc = 0x1EFF7Cu;
    // 0x1eff7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eff7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1eff80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff84: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1eff84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eff88: 0xc07be84  jal         func_1EFA10
    ctx->pc = 0x1EFF88u;
    SET_GPR_U32(ctx, 31, 0x1EFF90u);
    ctx->pc = 0x1EFF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF88u;
            // 0x1eff8c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA10u;
    if (runtime->hasFunction(0x1EFA10u)) {
        auto targetFn = runtime->lookupFunction(0x1EFA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF90u; }
        if (ctx->pc != 0x1EFF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFA10_0x1efa10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFF90u; }
        if (ctx->pc != 0x1EFF90u) { return; }
    }
    ctx->pc = 0x1EFF90u;
label_1eff90:
    // 0x1eff90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1eff90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1eff94: 0x2442d9a0  addiu       $v0, $v0, -0x2660
    ctx->pc = 0x1eff94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957472));
    // 0x1eff98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1eff98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1eff9c:
    // 0x1eff9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1EFF9Cu;
    {
        const bool branch_taken_0x1eff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFF9Cu;
            // 0x1effa0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eff9c) {
            ctx->pc = 0x1EFFE0u;
            goto label_1effe0;
        }
    }
    ctx->pc = 0x1EFFA4u;
label_1effa4:
    // 0x1effa4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1effa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1effa8: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1effa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1effac: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1effacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1effb0: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x1EFFB0u;
    SET_GPR_U32(ctx, 31, 0x1EFFB8u);
    ctx->pc = 0x1EFFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFB0u;
            // 0x1effb4: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFB8u; }
        if (ctx->pc != 0x1EFFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFB8u; }
        if (ctx->pc != 0x1EFFB8u) { return; }
    }
    ctx->pc = 0x1EFFB8u;
label_1effb8:
    // 0x1effb8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1effb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1effbc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1effbcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effc0: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EFFC0u;
    {
        const bool branch_taken_0x1effc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EFFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFC0u;
            // 0x1effc4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1effc0) {
            ctx->pc = 0x1EFFDCu;
            goto label_1effdc;
        }
    }
    ctx->pc = 0x1EFFC8u;
    // 0x1effc8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1effc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effcc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1effccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effd0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1effd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1effd4: 0xc07bb08  jal         func_1EEC20
    ctx->pc = 0x1EFFD4u;
    SET_GPR_U32(ctx, 31, 0x1EFFDCu);
    ctx->pc = 0x1EFFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFD4u;
            // 0x1effd8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EEC20u;
    if (runtime->hasFunction(0x1EEC20u)) {
        auto targetFn = runtime->lookupFunction(0x1EEC20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFDCu; }
        if (ctx->pc != 0x1EFFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EEC20_0x1eec20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1EFFDCu; }
        if (ctx->pc != 0x1EFFDCu) { return; }
    }
    ctx->pc = 0x1EFFDCu;
label_1effdc:
    // 0x1effdc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1effdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1effe0:
    // 0x1effe0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1effe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1effe4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1effe4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1effe8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1effe8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1effec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1effecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1efff0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1efff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1efff4: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFFF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1EFFF4u;
            // 0x1efff8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1EFFFCu;
    // 0x1efffc: 0x0  nop
    ctx->pc = 0x1efffcu;
    // NOP
}
