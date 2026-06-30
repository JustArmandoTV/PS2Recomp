#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017DEC8
// Address: 0x17dec8 - 0x17e048
void sub_0017DEC8_0x17dec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DEC8_0x17dec8");
#endif

    switch (ctx->pc) {
        case 0x17df08u: goto label_17df08;
        case 0x17df20u: goto label_17df20;
        case 0x17df40u: goto label_17df40;
        case 0x17df7cu: goto label_17df7c;
        case 0x17df98u: goto label_17df98;
        case 0x17dfa4u: goto label_17dfa4;
        case 0x17dfbcu: goto label_17dfbc;
        case 0x17dfccu: goto label_17dfcc;
        case 0x17e004u: goto label_17e004;
        case 0x17e010u: goto label_17e010;
        default: break;
    }

    ctx->pc = 0x17dec8u;

    // 0x17dec8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17dec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17decc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x17deccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17ded0: 0x3c14006d  lui         $s4, 0x6D
    ctx->pc = 0x17ded0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)109 << 16));
    // 0x17ded4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17ded4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17ded8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ded8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dedc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17dedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17dee0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17dee0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dee4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x17dee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x17dee8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17dee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17deec: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x17deecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17def0: 0x2684d940  addiu       $a0, $s4, -0x26C0
    ctx->pc = 0x17def0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957376));
    // 0x17def4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17def4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17def8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x17def8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17defc: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17defcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17df00: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17DF00u;
    SET_GPR_U32(ctx, 31, 0x17DF08u);
    ctx->pc = 0x17DF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF00u;
            // 0x17df04: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF08u; }
        if (ctx->pc != 0x17DF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF08u; }
        if (ctx->pc != 0x17DF08u) { return; }
    }
    ctx->pc = 0x17DF08u;
label_17df08:
    // 0x17df08: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x17df08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x17df0c: 0x8c626540  lw          $v0, 0x6540($v1)
    ctx->pc = 0x17df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 25920)));
    // 0x17df10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DF10u;
    {
        const bool branch_taken_0x17df10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df10) {
            ctx->pc = 0x17DF20u;
            goto label_17df20;
        }
    }
    ctx->pc = 0x17DF18u;
    // 0x17df18: 0xc05f730  jal         func_17DCC0
    ctx->pc = 0x17DF18u;
    SET_GPR_U32(ctx, 31, 0x17DF20u);
    ctx->pc = 0x17DCC0u;
    if (runtime->hasFunction(0x17DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x17DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF20u; }
        if (ctx->pc != 0x17DF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DCC0_0x17dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF20u; }
        if (ctx->pc != 0x17DF20u) { return; }
    }
    ctx->pc = 0x17DF20u;
label_17df20:
    // 0x17df20: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DF20u;
    {
        const bool branch_taken_0x17df20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df20) {
            ctx->pc = 0x17DF38u;
            goto label_17df38;
        }
    }
    ctx->pc = 0x17DF28u;
    // 0x17df28: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DF28u;
    {
        const bool branch_taken_0x17df28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x17df28) {
            ctx->pc = 0x17DF38u;
            goto label_17df38;
        }
    }
    ctx->pc = 0x17DF30u;
    // 0x17df30: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17DF30u;
    {
        const bool branch_taken_0x17df30 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17df30) {
            ctx->pc = 0x17DF40u;
            goto label_17df40;
        }
    }
    ctx->pc = 0x17DF38u;
label_17df38:
    // 0x17df38: 0xc05f730  jal         func_17DCC0
    ctx->pc = 0x17DF38u;
    SET_GPR_U32(ctx, 31, 0x17DF40u);
    ctx->pc = 0x17DCC0u;
    if (runtime->hasFunction(0x17DCC0u)) {
        auto targetFn = runtime->lookupFunction(0x17DCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF40u; }
        if (ctx->pc != 0x17DF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DCC0_0x17dcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF40u; }
        if (ctx->pc != 0x17DF40u) { return; }
    }
    ctx->pc = 0x17DF40u;
label_17df40:
    // 0x17df40: 0x12000038  beqz        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x17DF40u;
    {
        const bool branch_taken_0x17df40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF40u;
            // 0x17df44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df40) {
            ctx->pc = 0x17E024u;
            goto label_17e024;
        }
    }
    ctx->pc = 0x17DF48u;
    // 0x17df48: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x17DF48u;
    {
        const bool branch_taken_0x17df48 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF48u;
            // 0x17df4c: 0x3c040063  lui         $a0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df48) {
            ctx->pc = 0x17DF60u;
            goto label_17df60;
        }
    }
    ctx->pc = 0x17DF50u;
    // 0x17df50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17df50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x17DF54u;
    {
        const bool branch_taken_0x17df54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF54u;
            // 0x17df58: 0x24846120  addiu       $a0, $a0, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df54) {
            ctx->pc = 0x17DF74u;
            goto label_17df74;
        }
    }
    ctx->pc = 0x17DF5Cu;
    // 0x17df5c: 0x0  nop
    ctx->pc = 0x17df5cu;
    // NOP
label_17df60:
    // 0x17df60: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x17DF60u;
    {
        const bool branch_taken_0x17df60 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x17DF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF60u;
            // 0x17df64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df60) {
            ctx->pc = 0x17DF88u;
            goto label_17df88;
        }
    }
    ctx->pc = 0x17DF68u;
    // 0x17df68: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17df68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17df6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17df6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df70: 0x24846150  addiu       $a0, $a0, 0x6150
    ctx->pc = 0x17df70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24912));
label_17df74:
    // 0x17df74: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DF74u;
    SET_GPR_U32(ctx, 31, 0x17DF7Cu);
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF7Cu; }
        if (ctx->pc != 0x17DF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF7Cu; }
        if (ctx->pc != 0x17DF7Cu) { return; }
    }
    ctx->pc = 0x17DF7Cu;
label_17df7c:
    // 0x17df7c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x17DF7Cu;
    {
        const bool branch_taken_0x17df7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF7Cu;
            // 0x17df80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17df7c) {
            ctx->pc = 0x17E024u;
            goto label_17e024;
        }
    }
    ctx->pc = 0x17DF84u;
    // 0x17df84: 0x0  nop
    ctx->pc = 0x17df84u;
    // NOP
label_17df88:
    // 0x17df88: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17df88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df8c: 0x2694d940  addiu       $s4, $s4, -0x26C0
    ctx->pc = 0x17df8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294957376));
    // 0x17df90: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x17DF90u;
    SET_GPR_U32(ctx, 31, 0x17DF98u);
    ctx->pc = 0x17DF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF90u;
            // 0x17df94: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF98u; }
        if (ctx->pc != 0x17DF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DF98u; }
        if (ctx->pc != 0x17DF98u) { return; }
    }
    ctx->pc = 0x17DF98u;
label_17df98:
    // 0x17df98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17df98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17df9c: 0xc05f638  jal         func_17D8E0
    ctx->pc = 0x17DF9Cu;
    SET_GPR_U32(ctx, 31, 0x17DFA4u);
    ctx->pc = 0x17DFA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DF9Cu;
            // 0x17dfa0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D8E0u;
    if (runtime->hasFunction(0x17D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x17D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFA4u; }
        if (ctx->pc != 0x17DFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D8E0_0x17d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFA4u; }
        if (ctx->pc != 0x17DFA4u) { return; }
    }
    ctx->pc = 0x17DFA4u;
label_17dfa4:
    // 0x17dfa4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x17DFA4u;
    {
        const bool branch_taken_0x17dfa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17dfa4) {
            ctx->pc = 0x17DFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFA4u;
            // 0x17dfa8: 0x26700009  addiu       $s0, $s3, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17DFD8u;
            goto label_17dfd8;
        }
    }
    ctx->pc = 0x17DFACu;
    // 0x17dfac: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x17dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x17dfb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17dfb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfb4: 0xc05b97e  jal         func_16E5F8
    ctx->pc = 0x17DFB4u;
    SET_GPR_U32(ctx, 31, 0x17DFBCu);
    ctx->pc = 0x17DFB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFB4u;
            // 0x17dfb8: 0x24846180  addiu       $a0, $a0, 0x6180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E5F8u;
    if (runtime->hasFunction(0x16E5F8u)) {
        auto targetFn = runtime->lookupFunction(0x16E5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFBCu; }
        if (ctx->pc != 0x17DFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E5F8_0x16e5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFBCu; }
        if (ctx->pc != 0x17DFBCu) { return; }
    }
    ctx->pc = 0x17DFBCu;
label_17dfbc:
    // 0x17dfbc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x17dfbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x17dfc0: 0x24a561a8  addiu       $a1, $a1, 0x61A8
    ctx->pc = 0x17dfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25000));
    // 0x17dfc4: 0xc05f242  jal         func_17C908
    ctx->pc = 0x17DFC4u;
    SET_GPR_U32(ctx, 31, 0x17DFCCu);
    ctx->pc = 0x17DFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFC4u;
            // 0x17dfc8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C908u;
    if (runtime->hasFunction(0x17C908u)) {
        auto targetFn = runtime->lookupFunction(0x17C908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFCCu; }
        if (ctx->pc != 0x17DFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C908_0x17c908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17DFCCu; }
        if (ctx->pc != 0x17DFCCu) { return; }
    }
    ctx->pc = 0x17DFCCu;
label_17dfcc:
    // 0x17dfcc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x17DFCCu;
    {
        const bool branch_taken_0x17dfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFCCu;
            // 0x17dfd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dfcc) {
            ctx->pc = 0x17E024u;
            goto label_17e024;
        }
    }
    ctx->pc = 0x17DFD4u;
    // 0x17dfd4: 0x0  nop
    ctx->pc = 0x17dfd4u;
    // NOP
label_17dfd8:
    // 0x17dfd8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17dfd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfdc: 0x230001b  divu        $zero, $s1, $s0
    ctx->pc = 0x17dfdcu;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 17) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,17); } }
    // 0x17dfe0: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x17dfe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x17dfe4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x17dfe4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfe8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17dfe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dfec: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17DFECu;
    {
        const bool branch_taken_0x17dfec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17dfec) {
            ctx->pc = 0x17DFF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFECu;
            // 0x17dff0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17DFF4u;
            goto label_17dff4;
        }
    }
    ctx->pc = 0x17DFF4u;
label_17dff4:
    // 0x17dff4: 0x8812  mflo        $s1
    ctx->pc = 0x17dff4u;
    SET_GPR_U64(ctx, 17, ctx->lo);
    // 0x17dff8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x17dff8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dffc: 0xc05f5d2  jal         func_17D748
    ctx->pc = 0x17DFFCu;
    SET_GPR_U32(ctx, 31, 0x17E004u);
    ctx->pc = 0x17E000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17DFFCu;
            // 0x17e000: 0x1188c0  sll         $s1, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D748u;
    if (runtime->hasFunction(0x17D748u)) {
        auto targetFn = runtime->lookupFunction(0x17D748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E004u; }
        if (ctx->pc != 0x17E004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017D748_0x17d748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E004u; }
        if (ctx->pc != 0x17E004u) { return; }
    }
    ctx->pc = 0x17E004u;
label_17e004:
    // 0x17e004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e008: 0xc05f69a  jal         func_17DA68
    ctx->pc = 0x17E008u;
    SET_GPR_U32(ctx, 31, 0x17E010u);
    ctx->pc = 0x17E00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E008u;
            // 0x17e00c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA68u;
    if (runtime->hasFunction(0x17DA68u)) {
        auto targetFn = runtime->lookupFunction(0x17DA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E010u; }
        if (ctx->pc != 0x17E010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017DA68_0x17da68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E010u; }
        if (ctx->pc != 0x17E010u) { return; }
    }
    ctx->pc = 0x17E010u;
label_17e010:
    // 0x17e010: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x17E010u;
    {
        const bool branch_taken_0x17e010 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e010) {
            ctx->pc = 0x17E014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E010u;
            // 0x17e014: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E018u;
            goto label_17e018;
        }
    }
    ctx->pc = 0x17E018u;
label_17e018:
    // 0x17e018: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x17e018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x17e01c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x17e01cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x17e020: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x17e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17e024:
    // 0x17e024: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e024u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e028: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e028u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e02c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x17e02cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e030: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x17e030u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17e034: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x17e034u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17e038: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17e038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17e03c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E03Cu;
            // 0x17e040: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E044u;
    // 0x17e044: 0x0  nop
    ctx->pc = 0x17e044u;
    // NOP
}
