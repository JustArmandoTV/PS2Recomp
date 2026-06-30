#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011CEB8
// Address: 0x11ceb8 - 0x11d298
void sub_0011CEB8_0x11ceb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011CEB8_0x11ceb8");
#endif

    switch (ctx->pc) {
        case 0x11cf24u: goto label_11cf24;
        case 0x11cf28u: goto label_11cf28;
        case 0x11cf64u: goto label_11cf64;
        case 0x11cf6cu: goto label_11cf6c;
        case 0x11cfa4u: goto label_11cfa4;
        case 0x11cfb4u: goto label_11cfb4;
        case 0x11cfc0u: goto label_11cfc0;
        case 0x11cfccu: goto label_11cfcc;
        case 0x11cfdcu: goto label_11cfdc;
        case 0x11cff0u: goto label_11cff0;
        case 0x11d000u: goto label_11d000;
        case 0x11d00cu: goto label_11d00c;
        case 0x11d01cu: goto label_11d01c;
        case 0x11d028u: goto label_11d028;
        case 0x11d038u: goto label_11d038;
        case 0x11d044u: goto label_11d044;
        case 0x11d054u: goto label_11d054;
        case 0x11d060u: goto label_11d060;
        case 0x11d070u: goto label_11d070;
        case 0x11d07cu: goto label_11d07c;
        case 0x11d090u: goto label_11d090;
        case 0x11d0a0u: goto label_11d0a0;
        case 0x11d0acu: goto label_11d0ac;
        case 0x11d0bcu: goto label_11d0bc;
        case 0x11d0c8u: goto label_11d0c8;
        case 0x11d0d8u: goto label_11d0d8;
        case 0x11d0e4u: goto label_11d0e4;
        case 0x11d0f4u: goto label_11d0f4;
        case 0x11d100u: goto label_11d100;
        case 0x11d110u: goto label_11d110;
        case 0x11d11cu: goto label_11d11c;
        case 0x11d130u: goto label_11d130;
        case 0x11d140u: goto label_11d140;
        case 0x11d164u: goto label_11d164;
        case 0x11d170u: goto label_11d170;
        case 0x11d17cu: goto label_11d17c;
        case 0x11d194u: goto label_11d194;
        case 0x11d1c8u: goto label_11d1c8;
        case 0x11d1dcu: goto label_11d1dc;
        case 0x11d1f0u: goto label_11d1f0;
        case 0x11d1f8u: goto label_11d1f8;
        case 0x11d200u: goto label_11d200;
        case 0x11d21cu: goto label_11d21c;
        case 0x11d228u: goto label_11d228;
        case 0x11d230u: goto label_11d230;
        case 0x11d268u: goto label_11d268;
        case 0x11d278u: goto label_11d278;
        default: break;
    }

    ctx->pc = 0x11ceb8u;

    // 0x11ceb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11ceb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11cebc: 0x3c0f7fff  lui         $t7, 0x7FFF
    ctx->pc = 0x11cebcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)32767 << 16));
    // 0x11cec0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x11cec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x11cec4: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11cec4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11cec8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cecc: 0x3c0e440f  lui         $t6, 0x440F
    ctx->pc = 0x11ceccu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)17423 << 16));
    // 0x11ced0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x11ced0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x11ced4: 0x4983f  dsra32      $s3, $a0, 0
    ctx->pc = 0x11ced4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x11ced8: 0x26f8024  and         $s0, $s3, $t7
    ctx->pc = 0x11ced8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 15));
    // 0x11cedc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x11cedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x11cee0: 0x35ceffff  ori         $t6, $t6, 0xFFFF
    ctx->pc = 0x11cee0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)65535);
    // 0x11cee4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x11cee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x11cee8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x11cee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x11ceec: 0x1d0702a  slt         $t6, $t6, $s0
    ctx->pc = 0x11ceecu;
    SET_GPR_U64(ctx, 14, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cef0: 0x11c00020  beqz        $t6, . + 4 + (0x20 << 2)
    ctx->pc = 0x11CEF0u;
    {
        const bool branch_taken_0x11cef0 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CEF0u;
            // 0x11cef4: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cef0) {
            ctx->pc = 0x11CF74u;
            goto label_11cf74;
        }
    }
    ctx->pc = 0x11CEF8u;
    // 0x11cef8: 0x3c0d7ff0  lui         $t5, 0x7FF0
    ctx->pc = 0x11cef8u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32752 << 16));
    // 0x11cefc: 0x4703c  dsll32      $t6, $a0, 0
    ctx->pc = 0x11cefcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 4) << (32 + 0));
    // 0x11cf00: 0x1b0782a  slt         $t7, $t5, $s0
    ctx->pc = 0x11cf00u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cf04: 0x15e00005  bnez        $t7, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CF04u;
    {
        const bool branch_taken_0x11cf04 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF04u;
            // 0x11cf08: 0xe703f  dsra32      $t6, $t6, 0 (Delay Slot)
        SET_GPR_S64(ctx, 14, GPR_S64(ctx, 14) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf04) {
            ctx->pc = 0x11CF1Cu;
            goto label_11cf1c;
        }
    }
    ctx->pc = 0x11CF0Cu;
    // 0x11cf0c: 0x160d000f  bne         $s0, $t5, . + 4 + (0xF << 2)
    ctx->pc = 0x11CF0Cu;
    {
        const bool branch_taken_0x11cf0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 13));
        if (branch_taken_0x11cf0c) {
            ctx->pc = 0x11CF4Cu;
            goto label_11cf4c;
        }
    }
    ctx->pc = 0x11CF14u;
    // 0x11cf14: 0x11c0000d  beqz        $t6, . + 4 + (0xD << 2)
    ctx->pc = 0x11CF14u;
    {
        const bool branch_taken_0x11cf14 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cf14) {
            ctx->pc = 0x11CF4Cu;
            goto label_11cf4c;
        }
    }
    ctx->pc = 0x11CF1Cu;
label_11cf1c:
    // 0x11cf1c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11CF1Cu;
    SET_GPR_U32(ctx, 31, 0x11CF24u);
    ctx->pc = 0x11CF20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF1Cu;
            // 0x11cf20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF24u; }
        if (ctx->pc != 0x11CF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF24u; }
        if (ctx->pc != 0x11CF24u) { return; }
    }
    ctx->pc = 0x11CF24u;
label_11cf24:
    // 0x11cf24: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cf24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11cf28:
    // 0x11cf28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cf28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cf2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x11cf2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x11cf30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x11cf34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x11cf34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cf38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x11cf38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11cf3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x11cf3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11cf40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x11cf40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11cf44: 0x3e00008  jr          $ra
    ctx->pc = 0x11CF44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF44u;
            // 0x11cf48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11CF4Cu;
label_11cf4c:
    // 0x11cf4c: 0x1a600003  blez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CF4Cu;
    {
        const bool branch_taken_0x11cf4c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x11CF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF4Cu;
            // 0x11cf50: 0x3c0f0063  lui         $t7, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf4c) {
            ctx->pc = 0x11CF5Cu;
            goto label_11cf5c;
        }
    }
    ctx->pc = 0x11CF54u;
    // 0x11cf54: 0x1000fff4  b           . + 4 + (-0xC << 2)
    ctx->pc = 0x11CF54u;
    {
        const bool branch_taken_0x11cf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF54u;
            // 0x11cf58: 0xdde5ffb8  ld          $a1, -0x48($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294967224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf54) {
            ctx->pc = 0x11CF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf28;
        }
    }
    ctx->pc = 0x11CF5Cu;
label_11cf5c:
    // 0x11cf5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11cf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cf60: 0xdde5ffb8  ld          $a1, -0x48($t7)
    ctx->pc = 0x11cf60u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294967224)));
label_11cf64:
    // 0x11cf64: 0xc049622  jal         func_125888
    ctx->pc = 0x11CF64u;
    SET_GPR_U32(ctx, 31, 0x11CF6Cu);
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF6Cu; }
        if (ctx->pc != 0x11CF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CF6Cu; }
        if (ctx->pc != 0x11CF6Cu) { return; }
    }
    ctx->pc = 0x11CF6Cu;
label_11cf6c:
    // 0x11cf6c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
    ctx->pc = 0x11CF6Cu;
    {
        const bool branch_taken_0x11cf6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF6Cu;
            // 0x11cf70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf6c) {
            ctx->pc = 0x11CF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf28;
        }
    }
    ctx->pc = 0x11CF74u;
label_11cf74:
    // 0x11cf74: 0x3c0f3fdb  lui         $t7, 0x3FDB
    ctx->pc = 0x11cf74u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16347 << 16));
    // 0x11cf78: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11cf78u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11cf7c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11cf7cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cf80: 0x15e00082  bnez        $t7, . + 4 + (0x82 << 2)
    ctx->pc = 0x11CF80u;
    {
        const bool branch_taken_0x11cf80 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF80u;
            // 0x11cf84: 0x3c0f3e1f  lui         $t7, 0x3E1F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)15903 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf80) {
            ctx->pc = 0x11D18Cu;
            goto label_11d18c;
        }
    }
    ctx->pc = 0x11CF88u;
    // 0x11cf88: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11cf88u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11cf8c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11cf8cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11cf90: 0x15e0000b  bnez        $t7, . + 4 + (0xB << 2)
    ctx->pc = 0x11CF90u;
    {
        const bool branch_taken_0x11cf90 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF90u;
            // 0x11cf94: 0x2414ffff  addiu       $s4, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cf90) {
            ctx->pc = 0x11CFC0u;
            goto label_11cfc0;
        }
    }
    ctx->pc = 0x11CF98u;
    // 0x11cf98: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11cf98u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11cf9c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11CF9Cu;
    SET_GPR_U32(ctx, 31, 0x11CFA4u);
    ctx->pc = 0x11CFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CF9Cu;
            // 0x11cfa0: 0xdde5ffc0  ld          $a1, -0x40($t7) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294967232)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFA4u; }
        if (ctx->pc != 0x11CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFA4u; }
        if (ctx->pc != 0x11CFA4u) { return; }
    }
    ctx->pc = 0x11CFA4u;
label_11cfa4:
    // 0x11cfa4: 0x240403ff  addiu       $a0, $zero, 0x3FF
    ctx->pc = 0x11cfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11cfa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfac: 0xc049760  jal         func_125D80
    ctx->pc = 0x11CFACu;
    SET_GPR_U32(ctx, 31, 0x11CFB4u);
    ctx->pc = 0x11CFB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFACu;
            // 0x11cfb0: 0x4253c  dsll32      $a0, $a0, 20 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125D80u;
    if (runtime->hasFunction(0x125D80u)) {
        auto targetFn = runtime->lookupFunction(0x125D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFB4u; }
        if (ctx->pc != 0x11CFB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125D80_0x125d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFB4u; }
        if (ctx->pc != 0x11CFB4u) { return; }
    }
    ctx->pc = 0x11CFB4u;
label_11cfb4:
    // 0x11cfb4: 0x440ffdc  bltz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x11CFB4u;
    {
        const bool branch_taken_0x11cfb4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11CFB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFB4u;
            // 0x11cfb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cfb4) {
            ctx->pc = 0x11CF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf28;
        }
    }
    ctx->pc = 0x11CFBCu;
    // 0x11cfbc: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x11cfbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11cfc0:
    // 0x11cfc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11cfc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfc4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11CFC4u;
    SET_GPR_U32(ctx, 31, 0x11CFCCu);
    ctx->pc = 0x11CFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFC4u;
            // 0x11cfc8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFCCu; }
        if (ctx->pc != 0x11CFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFCCu; }
        if (ctx->pc != 0x11CFCCu) { return; }
    }
    ctx->pc = 0x11CFCCu;
label_11cfcc:
    // 0x11cfcc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11cfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11cfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfd4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11CFD4u;
    SET_GPR_U32(ctx, 31, 0x11CFDCu);
    ctx->pc = 0x11CFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFD4u;
            // 0x11cfd8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFDCu; }
        if (ctx->pc != 0x11CFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFDCu; }
        if (ctx->pc != 0x11CFDCu) { return; }
    }
    ctx->pc = 0x11CFDCu;
label_11cfdc:
    // 0x11cfdc: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11cfdcu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11cfe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11cfe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cfe4: 0xdde5ffc8  ld          $a1, -0x38($t7)
    ctx->pc = 0x11cfe4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294967240)));
    // 0x11cfe8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11CFE8u;
    SET_GPR_U32(ctx, 31, 0x11CFF0u);
    ctx->pc = 0x11CFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFE8u;
            // 0x11cfec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFF0u; }
        if (ctx->pc != 0x11CFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11CFF0u; }
        if (ctx->pc != 0x11CFF0u) { return; }
    }
    ctx->pc = 0x11CFF0u;
label_11cff0:
    // 0x11cff0: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11cff0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11cff4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11cff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cff8: 0xc04960a  jal         func_125828
    ctx->pc = 0x11CFF8u;
    SET_GPR_U32(ctx, 31, 0x11D000u);
    ctx->pc = 0x11CFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11CFF8u;
            // 0x11cffc: 0xdde4ffd0  ld          $a0, -0x30($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967248)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D000u; }
        if (ctx->pc != 0x11D000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D000u; }
        if (ctx->pc != 0x11D000u) { return; }
    }
    ctx->pc = 0x11D000u;
label_11d000:
    // 0x11d000: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d004: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D004u;
    SET_GPR_U32(ctx, 31, 0x11D00Cu);
    ctx->pc = 0x11D008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D004u;
            // 0x11d008: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D00Cu; }
        if (ctx->pc != 0x11D00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D00Cu; }
        if (ctx->pc != 0x11D00Cu) { return; }
    }
    ctx->pc = 0x11D00Cu;
label_11d00c:
    // 0x11d00c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d00cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d010: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d014: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D014u;
    SET_GPR_U32(ctx, 31, 0x11D01Cu);
    ctx->pc = 0x11D018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D014u;
            // 0x11d018: 0xdde4ffd8  ld          $a0, -0x28($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D01Cu; }
        if (ctx->pc != 0x11D01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D01Cu; }
        if (ctx->pc != 0x11D01Cu) { return; }
    }
    ctx->pc = 0x11D01Cu;
label_11d01c:
    // 0x11d01c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d020: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D020u;
    SET_GPR_U32(ctx, 31, 0x11D028u);
    ctx->pc = 0x11D024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D020u;
            // 0x11d024: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D028u; }
        if (ctx->pc != 0x11D028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D028u; }
        if (ctx->pc != 0x11D028u) { return; }
    }
    ctx->pc = 0x11D028u;
label_11d028:
    // 0x11d028: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d028u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d02c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d030: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D030u;
    SET_GPR_U32(ctx, 31, 0x11D038u);
    ctx->pc = 0x11D034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D030u;
            // 0x11d034: 0xdde4ffe0  ld          $a0, -0x20($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D038u; }
        if (ctx->pc != 0x11D038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D038u; }
        if (ctx->pc != 0x11D038u) { return; }
    }
    ctx->pc = 0x11D038u;
label_11d038:
    // 0x11d038: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d03c: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D03Cu;
    SET_GPR_U32(ctx, 31, 0x11D044u);
    ctx->pc = 0x11D040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D03Cu;
            // 0x11d040: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D044u; }
        if (ctx->pc != 0x11D044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D044u; }
        if (ctx->pc != 0x11D044u) { return; }
    }
    ctx->pc = 0x11D044u;
label_11d044:
    // 0x11d044: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d044u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d04c: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D04Cu;
    SET_GPR_U32(ctx, 31, 0x11D054u);
    ctx->pc = 0x11D050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D04Cu;
            // 0x11d050: 0xdde4ffe8  ld          $a0, -0x18($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967272)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D054u; }
        if (ctx->pc != 0x11D054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D054u; }
        if (ctx->pc != 0x11D054u) { return; }
    }
    ctx->pc = 0x11D054u;
label_11d054:
    // 0x11d054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d058: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D058u;
    SET_GPR_U32(ctx, 31, 0x11D060u);
    ctx->pc = 0x11D05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D058u;
            // 0x11d05c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D060u; }
        if (ctx->pc != 0x11D060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D060u; }
        if (ctx->pc != 0x11D060u) { return; }
    }
    ctx->pc = 0x11D060u;
label_11d060:
    // 0x11d060: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d060u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d064: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d068: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D068u;
    SET_GPR_U32(ctx, 31, 0x11D070u);
    ctx->pc = 0x11D06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D068u;
            // 0x11d06c: 0xdde4fff0  ld          $a0, -0x10($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 4294967280)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D070u; }
        if (ctx->pc != 0x11D070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D070u; }
        if (ctx->pc != 0x11D070u) { return; }
    }
    ctx->pc = 0x11D070u;
label_11d070:
    // 0x11d070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d074: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D074u;
    SET_GPR_U32(ctx, 31, 0x11D07Cu);
    ctx->pc = 0x11D078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D074u;
            // 0x11d078: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D07Cu; }
        if (ctx->pc != 0x11D07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D07Cu; }
        if (ctx->pc != 0x11D07Cu) { return; }
    }
    ctx->pc = 0x11D07Cu;
label_11d07c:
    // 0x11d07c: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d07cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d084: 0xdde5fff8  ld          $a1, -0x8($t7)
    ctx->pc = 0x11d084u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 4294967288)));
    // 0x11d088: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D088u;
    SET_GPR_U32(ctx, 31, 0x11D090u);
    ctx->pc = 0x11D08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D088u;
            // 0x11d08c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D090u; }
        if (ctx->pc != 0x11D090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D090u; }
        if (ctx->pc != 0x11D090u) { return; }
    }
    ctx->pc = 0x11D090u;
label_11d090:
    // 0x11d090: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d090u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d094: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d098: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D098u;
    SET_GPR_U32(ctx, 31, 0x11D0A0u);
    ctx->pc = 0x11D09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D098u;
            // 0x11d09c: 0xdde40000  ld          $a0, 0x0($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0A0u; }
        if (ctx->pc != 0x11D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0A0u; }
        if (ctx->pc != 0x11D0A0u) { return; }
    }
    ctx->pc = 0x11D0A0u;
label_11d0a0:
    // 0x11d0a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0a4: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D0A4u;
    SET_GPR_U32(ctx, 31, 0x11D0ACu);
    ctx->pc = 0x11D0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0A4u;
            // 0x11d0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0ACu; }
        if (ctx->pc != 0x11D0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0ACu; }
        if (ctx->pc != 0x11D0ACu) { return; }
    }
    ctx->pc = 0x11D0ACu;
label_11d0ac:
    // 0x11d0ac: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d0acu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d0b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0b4: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D0B4u;
    SET_GPR_U32(ctx, 31, 0x11D0BCu);
    ctx->pc = 0x11D0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0B4u;
            // 0x11d0b8: 0xdde40008  ld          $a0, 0x8($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0BCu; }
        if (ctx->pc != 0x11D0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0BCu; }
        if (ctx->pc != 0x11D0BCu) { return; }
    }
    ctx->pc = 0x11D0BCu;
label_11d0bc:
    // 0x11d0bc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0c0: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D0C0u;
    SET_GPR_U32(ctx, 31, 0x11D0C8u);
    ctx->pc = 0x11D0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0C0u;
            // 0x11d0c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0C8u; }
        if (ctx->pc != 0x11D0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0C8u; }
        if (ctx->pc != 0x11D0C8u) { return; }
    }
    ctx->pc = 0x11D0C8u;
label_11d0c8:
    // 0x11d0c8: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d0c8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d0cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0d0: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D0D0u;
    SET_GPR_U32(ctx, 31, 0x11D0D8u);
    ctx->pc = 0x11D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0D0u;
            // 0x11d0d4: 0xdde40010  ld          $a0, 0x10($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0D8u; }
        if (ctx->pc != 0x11D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0D8u; }
        if (ctx->pc != 0x11D0D8u) { return; }
    }
    ctx->pc = 0x11D0D8u;
label_11d0d8:
    // 0x11d0d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0dc: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D0DCu;
    SET_GPR_U32(ctx, 31, 0x11D0E4u);
    ctx->pc = 0x11D0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0DCu;
            // 0x11d0e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0E4u; }
        if (ctx->pc != 0x11D0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0E4u; }
        if (ctx->pc != 0x11D0E4u) { return; }
    }
    ctx->pc = 0x11D0E4u;
label_11d0e4:
    // 0x11d0e4: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d0e4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d0e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0ec: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D0ECu;
    SET_GPR_U32(ctx, 31, 0x11D0F4u);
    ctx->pc = 0x11D0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0ECu;
            // 0x11d0f0: 0xdde40018  ld          $a0, 0x18($t7) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0F4u; }
        if (ctx->pc != 0x11D0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D0F4u; }
        if (ctx->pc != 0x11D0F4u) { return; }
    }
    ctx->pc = 0x11D0F4u;
label_11d0f4:
    // 0x11d0f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d0f8: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D0F8u;
    SET_GPR_U32(ctx, 31, 0x11D100u);
    ctx->pc = 0x11D0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D0F8u;
            // 0x11d0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D100u; }
        if (ctx->pc != 0x11D100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D100u; }
        if (ctx->pc != 0x11D100u) { return; }
    }
    ctx->pc = 0x11D100u;
label_11d100:
    // 0x11d100: 0x6810009  bgez        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D100u;
    {
        const bool branch_taken_0x11d100 = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x11D104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D100u;
            // 0x11d104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d100) {
            ctx->pc = 0x11D128u;
            goto label_11d128;
        }
    }
    ctx->pc = 0x11D108u;
    // 0x11d108: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D108u;
    SET_GPR_U32(ctx, 31, 0x11D110u);
    ctx->pc = 0x11D10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D108u;
            // 0x11d10c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D110u; }
        if (ctx->pc != 0x11D110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D110u; }
        if (ctx->pc != 0x11D110u) { return; }
    }
    ctx->pc = 0x11D110u;
label_11d110:
    // 0x11d110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d114: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D114u;
    SET_GPR_U32(ctx, 31, 0x11D11Cu);
    ctx->pc = 0x11D118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D114u;
            // 0x11d118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D11Cu; }
        if (ctx->pc != 0x11D11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D11Cu; }
        if (ctx->pc != 0x11D11Cu) { return; }
    }
    ctx->pc = 0x11D11Cu;
label_11d11c:
    // 0x11d11c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d120: 0x1000ff90  b           . + 4 + (-0x70 << 2)
    ctx->pc = 0x11D120u;
    {
        const bool branch_taken_0x11d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D120u;
            // 0x11d124: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d120) {
            ctx->pc = 0x11CF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf64;
        }
    }
    ctx->pc = 0x11D128u;
label_11d128:
    // 0x11d128: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D128u;
    SET_GPR_U32(ctx, 31, 0x11D130u);
    ctx->pc = 0x11D12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D128u;
            // 0x11d12c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D130u; }
        if (ctx->pc != 0x11D130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D130u; }
        if (ctx->pc != 0x11D130u) { return; }
    }
    ctx->pc = 0x11D130u;
label_11d130:
    // 0x11d130: 0x3c110063  lui         $s1, 0x63
    ctx->pc = 0x11d130u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)99 << 16));
    // 0x11d134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d138: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D138u;
    SET_GPR_U32(ctx, 31, 0x11D140u);
    ctx->pc = 0x11D13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D138u;
            // 0x11d13c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D140u; }
        if (ctx->pc != 0x11D140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D140u; }
        if (ctx->pc != 0x11D140u) { return; }
    }
    ctx->pc = 0x11D140u;
label_11d140:
    // 0x11d140: 0x1480c0  sll         $s0, $s4, 3
    ctx->pc = 0x11d140u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x11d144: 0x2631ff10  addiu       $s1, $s1, -0xF0
    ctx->pc = 0x11d144u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967056));
    // 0x11d148: 0x3c0f0063  lui         $t7, 0x63
    ctx->pc = 0x11d148u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)99 << 16));
    // 0x11d14c: 0x25efff30  addiu       $t7, $t7, -0xD0
    ctx->pc = 0x11d14cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967088));
    // 0x11d150: 0x2118821  addu        $s1, $s0, $s1
    ctx->pc = 0x11d150u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11d154: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x11d154u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x11d158: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d15c: 0xc049622  jal         func_125888
    ctx->pc = 0x11D15Cu;
    SET_GPR_U32(ctx, 31, 0x11D164u);
    ctx->pc = 0x11D160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D15Cu;
            // 0x11d160: 0xde050000  ld          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D164u; }
        if (ctx->pc != 0x11D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D164u; }
        if (ctx->pc != 0x11D164u) { return; }
    }
    ctx->pc = 0x11D164u;
label_11d164:
    // 0x11d164: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d168: 0xc049622  jal         func_125888
    ctx->pc = 0x11D168u;
    SET_GPR_U32(ctx, 31, 0x11D170u);
    ctx->pc = 0x11D16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D168u;
            // 0x11d16c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D170u; }
        if (ctx->pc != 0x11D170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D170u; }
        if (ctx->pc != 0x11D170u) { return; }
    }
    ctx->pc = 0x11D170u;
label_11d170:
    // 0x11d170: 0xde240000  ld          $a0, 0x0($s1)
    ctx->pc = 0x11d170u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x11d174: 0xc049622  jal         func_125888
    ctx->pc = 0x11D174u;
    SET_GPR_U32(ctx, 31, 0x11D17Cu);
    ctx->pc = 0x11D178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D174u;
            // 0x11d178: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D17Cu; }
        if (ctx->pc != 0x11D17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D17Cu; }
        if (ctx->pc != 0x11D17Cu) { return; }
    }
    ctx->pc = 0x11D17Cu;
label_11d17c:
    // 0x11d17c: 0x661ff6a  bgez        $s3, . + 4 + (-0x96 << 2)
    ctx->pc = 0x11D17Cu;
    {
        const bool branch_taken_0x11d17c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x11D180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D17Cu;
            // 0x11d180: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d17c) {
            ctx->pc = 0x11CF28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf28;
        }
    }
    ctx->pc = 0x11D184u;
    // 0x11d184: 0x1000ff77  b           . + 4 + (-0x89 << 2)
    ctx->pc = 0x11D184u;
    {
        const bool branch_taken_0x11d184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D184u;
            // 0x11d188: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d184) {
            ctx->pc = 0x11CF64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cf64;
        }
    }
    ctx->pc = 0x11D18Cu;
label_11d18c:
    // 0x11d18c: 0xc0474b6  jal         func_11D2D8
    ctx->pc = 0x11D18Cu;
    SET_GPR_U32(ctx, 31, 0x11D194u);
    ctx->pc = 0x11D2D8u;
    if (runtime->hasFunction(0x11D2D8u)) {
        auto targetFn = runtime->lookupFunction(0x11D2D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D194u; }
        if (ctx->pc != 0x11D194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D2D8_0x11d2d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D194u; }
        if (ctx->pc != 0x11D194u) { return; }
    }
    ctx->pc = 0x11D194u;
label_11d194:
    // 0x11d194: 0x3c0f3ff2  lui         $t7, 0x3FF2
    ctx->pc = 0x11d194u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16370 << 16));
    // 0x11d198: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d198u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d19c: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11d19cu;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d1a0: 0x15e00026  bnez        $t7, . + 4 + (0x26 << 2)
    ctx->pc = 0x11D1A0u;
    {
        const bool branch_taken_0x11d1a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1A0u;
            // 0x11d1a4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1a0) {
            ctx->pc = 0x11D23Cu;
            goto label_11d23c;
        }
    }
    ctx->pc = 0x11D1A8u;
    // 0x11d1a8: 0x3c0f3fe5  lui         $t7, 0x3FE5
    ctx->pc = 0x11d1a8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16357 << 16));
    // 0x11d1ac: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x11d1acu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x11d1b0: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11d1b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d1b4: 0x15e00014  bnez        $t7, . + 4 + (0x14 << 2)
    ctx->pc = 0x11D1B4u;
    {
        const bool branch_taken_0x11d1b4 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1B4u;
            // 0x11d1b8: 0x241003ff  addiu       $s0, $zero, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d1b4) {
            ctx->pc = 0x11D208u;
            goto label_11d208;
        }
    }
    ctx->pc = 0x11D1BCu;
    // 0x11d1bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d1bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1c0: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D1C0u;
    SET_GPR_U32(ctx, 31, 0x11D1C8u);
    ctx->pc = 0x11D1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1C0u;
            // 0x11d1c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1C8u; }
        if (ctx->pc != 0x11D1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1C8u; }
        if (ctx->pc != 0x11D1C8u) { return; }
    }
    ctx->pc = 0x11D1C8u;
label_11d1c8:
    // 0x11d1c8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x11d1c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1cc: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x11d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11d1d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1d4: 0xc049622  jal         func_125888
    ctx->pc = 0x11D1D4u;
    SET_GPR_U32(ctx, 31, 0x11D1DCu);
    ctx->pc = 0x11D1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1D4u;
            // 0x11d1d8: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1DCu; }
        if (ctx->pc != 0x11D1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1DCu; }
        if (ctx->pc != 0x11D1DCu) { return; }
    }
    ctx->pc = 0x11D1DCu;
label_11d1dc:
    // 0x11d1dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x11d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d1e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x11d1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1e8: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D1E8u;
    SET_GPR_U32(ctx, 31, 0x11D1F0u);
    ctx->pc = 0x11D1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D1E8u;
            // 0x11d1ec: 0x52fbc  dsll32      $a1, $a1, 30 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1F0u; }
        if (ctx->pc != 0x11D1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D1F0u; }
        if (ctx->pc != 0x11D1F0u) { return; }
    }
    ctx->pc = 0x11D1F0u;
label_11d1f0:
    // 0x11d1f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d1f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d1f8:
    // 0x11d1f8: 0xc0496ca  jal         func_125B28
    ctx->pc = 0x11D1F8u;
    SET_GPR_U32(ctx, 31, 0x11D200u);
    ctx->pc = 0x125B28u;
    if (runtime->hasFunction(0x125B28u)) {
        auto targetFn = runtime->lookupFunction(0x125B28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D200u; }
        if (ctx->pc != 0x11D200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125B28_0x125b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D200u; }
        if (ctx->pc != 0x11D200u) { return; }
    }
    ctx->pc = 0x11D200u;
label_11d200:
    // 0x11d200: 0x1000ff6f  b           . + 4 + (-0x91 << 2)
    ctx->pc = 0x11D200u;
    {
        const bool branch_taken_0x11d200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D200u;
            // 0x11d204: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d200) {
            ctx->pc = 0x11CFC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11cfc0;
        }
    }
    ctx->pc = 0x11D208u;
label_11d208:
    // 0x11d208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d20c: 0x10853c  dsll32      $s0, $s0, 20
    ctx->pc = 0x11d20cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 20));
    // 0x11d210: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x11d210u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11d214: 0xc049622  jal         func_125888
    ctx->pc = 0x11D214u;
    SET_GPR_U32(ctx, 31, 0x11D21Cu);
    ctx->pc = 0x11D218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D214u;
            // 0x11d218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D21Cu; }
        if (ctx->pc != 0x11D21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D21Cu; }
        if (ctx->pc != 0x11D21Cu) { return; }
    }
    ctx->pc = 0x11D21Cu;
label_11d21c:
    // 0x11d21c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d21cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d220: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d224: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d228:
    // 0x11d228: 0xc04960a  jal         func_125828
    ctx->pc = 0x11D228u;
    SET_GPR_U32(ctx, 31, 0x11D230u);
    ctx->pc = 0x125828u;
    if (runtime->hasFunction(0x125828u)) {
        auto targetFn = runtime->lookupFunction(0x125828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D230u; }
        if (ctx->pc != 0x11D230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125828_0x125828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D230u; }
        if (ctx->pc != 0x11D230u) { return; }
    }
    ctx->pc = 0x11D230u;
label_11d230:
    // 0x11d230: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d234: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x11D234u;
    {
        const bool branch_taken_0x11d234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D234u;
            // 0x11d238: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d234) {
            ctx->pc = 0x11D1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D23Cu;
label_11d23c:
    // 0x11d23c: 0x3c0f4003  lui         $t7, 0x4003
    ctx->pc = 0x11d23cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16387 << 16));
    // 0x11d240: 0x35ef7fff  ori         $t7, $t7, 0x7FFF
    ctx->pc = 0x11d240u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)32767);
    // 0x11d244: 0x1f0782a  slt         $t7, $t7, $s0
    ctx->pc = 0x11d244u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x11d248: 0x55e0000f  bnel        $t7, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x11D248u;
    {
        const bool branch_taken_0x11d248 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x11d248) {
            ctx->pc = 0x11D24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11D248u;
            // 0x11d24c: 0x2404fbff  addiu       $a0, $zero, -0x401 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11D288u;
            goto label_11d288;
        }
    }
    ctx->pc = 0x11D250u;
    // 0x11d250: 0x241007ff  addiu       $s0, $zero, 0x7FF
    ctx->pc = 0x11d250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x11d254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d258: 0x1084fc  dsll32      $s0, $s0, 19
    ctx->pc = 0x11d258u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 19));
    // 0x11d25c: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x11d25cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d260: 0xc049622  jal         func_125888
    ctx->pc = 0x11D260u;
    SET_GPR_U32(ctx, 31, 0x11D268u);
    ctx->pc = 0x11D264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D260u;
            // 0x11d264: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D268u; }
        if (ctx->pc != 0x11D268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D268u; }
        if (ctx->pc != 0x11D268u) { return; }
    }
    ctx->pc = 0x11D268u;
label_11d268:
    // 0x11d268: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11d268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d26c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x11d26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d270: 0xc04963e  jal         func_1258F8
    ctx->pc = 0x11D270u;
    SET_GPR_U32(ctx, 31, 0x11D278u);
    ctx->pc = 0x11D274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11D270u;
            // 0x11d274: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D278u; }
        if (ctx->pc != 0x11D278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11D278u; }
        if (ctx->pc != 0x11D278u) { return; }
    }
    ctx->pc = 0x11D278u;
label_11d278:
    // 0x11d278: 0x240503ff  addiu       $a1, $zero, 0x3FF
    ctx->pc = 0x11d278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x11d27c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d280: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x11D280u;
    {
        const bool branch_taken_0x11d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D280u;
            // 0x11d284: 0x52d3c  dsll32      $a1, $a1, 20 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d280) {
            ctx->pc = 0x11D228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d228;
        }
    }
    ctx->pc = 0x11D288u;
label_11d288:
    // 0x11d288: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x11d288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d28c: 0x4253c  dsll32      $a0, $a0, 20
    ctx->pc = 0x11d28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 20));
    // 0x11d290: 0x1000ffd9  b           . + 4 + (-0x27 << 2)
    ctx->pc = 0x11D290u;
    {
        const bool branch_taken_0x11d290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11D290u;
            // 0x11d294: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d290) {
            ctx->pc = 0x11D1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d1f8;
        }
    }
    ctx->pc = 0x11D298u;
}
