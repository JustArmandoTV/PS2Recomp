#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017EE00
// Address: 0x17ee00 - 0x17eef8
void sub_0017EE00_0x17ee00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EE00_0x17ee00");
#endif

    switch (ctx->pc) {
        case 0x17ee74u: goto label_17ee74;
        case 0x17ee88u: goto label_17ee88;
        case 0x17ee90u: goto label_17ee90;
        case 0x17ee98u: goto label_17ee98;
        case 0x17eea0u: goto label_17eea0;
        case 0x17eea8u: goto label_17eea8;
        case 0x17eeccu: goto label_17eecc;
        default: break;
    }

    ctx->pc = 0x17ee00u;

    // 0x17ee00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17ee00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17ee04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ee04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ee08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ee08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee0c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17ee0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17ee10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x17ee10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ee14: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17ee14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17ee18: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17ee18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17ee1c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17ee1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17ee20: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x17EE20u;
    {
        const bool branch_taken_0x17ee20 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE20u;
            // 0x17ee24: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee20) {
            ctx->pc = 0x17EE50u;
            goto label_17ee50;
        }
    }
    ctx->pc = 0x17EE28u;
    // 0x17ee28: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17ee28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17ee2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17ee2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17ee30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17ee30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17ee34: 0x24a56500  addiu       $a1, $a1, 0x6500
    ctx->pc = 0x17ee34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25856));
    // 0x17ee38: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17ee38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ee3c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17ee3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17ee40: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17ee40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ee44: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17ee44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17ee48: 0x805f8e4  j           func_17E390
    ctx->pc = 0x17EE48u;
    ctx->pc = 0x17EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE48u;
            // 0x17ee4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E390u;
    if (runtime->hasFunction(0x17E390u)) {
        auto targetFn = runtime->lookupFunction(0x17E390u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0017E390_0x17e390(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17EE50u;
label_17ee50:
    // 0x17ee50: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x17ee50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17ee54: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x17ee54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17ee58: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x17EE58u;
    {
        const bool branch_taken_0x17ee58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17ee58) {
            ctx->pc = 0x17EE5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE58u;
            // 0x17ee5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EED8u;
            goto label_17eed8;
        }
    }
    ctx->pc = 0x17EE60u;
    // 0x17ee60: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x17ee60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x17ee64: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17EE64u;
    {
        const bool branch_taken_0x17ee64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE64u;
            // 0x17ee68: 0x3c110063  lui         $s1, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee64) {
            ctx->pc = 0x17EE74u;
            goto label_17ee74;
        }
    }
    ctx->pc = 0x17EE6Cu;
    // 0x17ee6c: 0xc05eaae  jal         func_17AAB8
    ctx->pc = 0x17EE6Cu;
    SET_GPR_U32(ctx, 31, 0x17EE74u);
    ctx->pc = 0x17AAB8u;
    if (runtime->hasFunction(0x17AAB8u)) {
        auto targetFn = runtime->lookupFunction(0x17AAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE74u; }
        if (ctx->pc != 0x17EE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017AAB8_0x17aab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE74u; }
        if (ctx->pc != 0x17EE74u) { return; }
    }
    ctx->pc = 0x17EE74u;
label_17ee74:
    // 0x17ee74: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x17ee74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ee78: 0x3631fff6  ori         $s1, $s1, 0xFFF6
    ctx->pc = 0x17ee78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)65526);
    // 0x17ee7c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17EE7Cu;
    {
        const bool branch_taken_0x17ee7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EE7Cu;
            // 0x17ee80: 0x3c140063  lui         $s4, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ee7c) {
            ctx->pc = 0x17EE90u;
            goto label_17ee90;
        }
    }
    ctx->pc = 0x17EE84u;
    // 0x17ee84: 0x0  nop
    ctx->pc = 0x17ee84u;
    // NOP
label_17ee88:
    // 0x17ee88: 0xc05f8d8  jal         func_17E360
    ctx->pc = 0x17EE88u;
    SET_GPR_U32(ctx, 31, 0x17EE90u);
    ctx->pc = 0x17E360u;
    if (runtime->hasFunction(0x17E360u)) {
        auto targetFn = runtime->lookupFunction(0x17E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE90u; }
        if (ctx->pc != 0x17EE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E360_0x17e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE90u; }
        if (ctx->pc != 0x17EE90u) { return; }
    }
    ctx->pc = 0x17EE90u;
label_17ee90:
    // 0x17ee90: 0xc05ec12  jal         func_17B048
    ctx->pc = 0x17EE90u;
    SET_GPR_U32(ctx, 31, 0x17EE98u);
    ctx->pc = 0x17B048u;
    if (runtime->hasFunction(0x17B048u)) {
        auto targetFn = runtime->lookupFunction(0x17B048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE98u; }
        if (ctx->pc != 0x17EE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B048_0x17b048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EE98u; }
        if (ctx->pc != 0x17EE98u) { return; }
    }
    ctx->pc = 0x17EE98u;
label_17ee98:
    // 0x17ee98: 0xc05f968  jal         func_17E5A0
    ctx->pc = 0x17EE98u;
    SET_GPR_U32(ctx, 31, 0x17EEA0u);
    ctx->pc = 0x17E5A0u;
    if (runtime->hasFunction(0x17E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x17E5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEA0u; }
        if (ctx->pc != 0x17EEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E5A0_0x17e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEA0u; }
        if (ctx->pc != 0x17EEA0u) { return; }
    }
    ctx->pc = 0x17EEA0u;
label_17eea0:
    // 0x17eea0: 0xc05fbbe  jal         func_17EEF8
    ctx->pc = 0x17EEA0u;
    SET_GPR_U32(ctx, 31, 0x17EEA8u);
    ctx->pc = 0x17EEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEA0u;
            // 0x17eea4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17EEF8u;
    if (runtime->hasFunction(0x17EEF8u)) {
        auto targetFn = runtime->lookupFunction(0x17EEF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEA8u; }
        if (ctx->pc != 0x17EEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017EEF8_0x17eef8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EEA8u; }
        if (ctx->pc != 0x17EEA8u) { return; }
    }
    ctx->pc = 0x17EEA8u;
label_17eea8:
    // 0x17eea8: 0x82030002  lb          $v1, 0x2($s0)
    ctx->pc = 0x17eea8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x17eeac: 0x54730008  bnel        $v1, $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x17EEACu;
    {
        const bool branch_taken_0x17eeac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x17eeac) {
            ctx->pc = 0x17EEB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEACu;
            // 0x17eeb0: 0xae000028  sw          $zero, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17EED0u;
            goto label_17eed0;
        }
    }
    ctx->pc = 0x17EEB4u;
    // 0x17eeb4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x17eeb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x17eeb8: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x17eeb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x17eebc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x17EEBCu;
    {
        const bool branch_taken_0x17eebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17eebc) {
            ctx->pc = 0x17EE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17ee88;
        }
    }
    ctx->pc = 0x17EEC4u;
    // 0x17eec4: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x17EEC4u;
    SET_GPR_U32(ctx, 31, 0x17EECCu);
    ctx->pc = 0x17EEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEC4u;
            // 0x17eec8: 0x26846518  addiu       $a0, $s4, 0x6518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 25880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EECCu; }
        if (ctx->pc != 0x17EECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17EECCu; }
        if (ctx->pc != 0x17EECCu) { return; }
    }
    ctx->pc = 0x17EECCu;
label_17eecc:
    // 0x17eecc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x17eeccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_17eed0:
    // 0x17eed0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17eed0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17eed4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17eed4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17eed8:
    // 0x17eed8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17eed8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17eedc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17eedcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17eee0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17eee0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17eee4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17eee4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17eee8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17eee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17eeec: 0x3e00008  jr          $ra
    ctx->pc = 0x17EEECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EEECu;
            // 0x17eef0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17EEF4u;
    // 0x17eef4: 0x0  nop
    ctx->pc = 0x17eef4u;
    // NOP
}
