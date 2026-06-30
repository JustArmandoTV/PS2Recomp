#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CE60
// Address: 0x47ce60 - 0x47cf40
void sub_0047CE60_0x47ce60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CE60_0x47ce60");
#endif

    switch (ctx->pc) {
        case 0x47ce9cu: goto label_47ce9c;
        case 0x47ceb4u: goto label_47ceb4;
        case 0x47ceccu: goto label_47cecc;
        case 0x47cee8u: goto label_47cee8;
        case 0x47cf20u: goto label_47cf20;
        default: break;
    }

    ctx->pc = 0x47ce60u;

    // 0x47ce60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47ce60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47ce64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x47ce64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x47ce68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47ce68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x47ce6c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x47ce6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x47ce70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47ce70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47ce74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x47ce74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ce78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47ce78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47ce7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47ce7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47ce80: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x47ce80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
    // 0x47ce84: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x47ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
    // 0x47ce88: 0x2472002c  addiu       $s2, $v1, 0x2C
    ctx->pc = 0x47ce88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
    // 0x47ce8c: 0x24710040  addiu       $s1, $v1, 0x40
    ctx->pc = 0x47ce8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x47ce90: 0x2470006c  addiu       $s0, $v1, 0x6C
    ctx->pc = 0x47ce90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 108));
    // 0x47ce94: 0xc057b7c  jal         func_15EDF0
    ctx->pc = 0x47CE94u;
    SET_GPR_U32(ctx, 31, 0x47CE9Cu);
    ctx->pc = 0x47CE98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CE94u;
            // 0x47ce98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CE9Cu; }
        if (ctx->pc != 0x47CE9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CE9Cu; }
        if (ctx->pc != 0x47CE9Cu) { return; }
    }
    ctx->pc = 0x47CE9Cu;
label_47ce9c:
    // 0x47ce9c: 0x82430012  lb          $v1, 0x12($s2)
    ctx->pc = 0x47ce9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x47cea0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x47cea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47cea4: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47CEA4u;
    {
        const bool branch_taken_0x47cea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x47cea4) {
            ctx->pc = 0x47CEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CEA4u;
            // 0x47cea8: 0x82230026  lb          $v1, 0x26($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47CEBCu;
            goto label_47cebc;
        }
    }
    ctx->pc = 0x47CEACu;
    // 0x47ceac: 0xc11f3dc  jal         func_47CF70
    ctx->pc = 0x47CEACu;
    SET_GPR_U32(ctx, 31, 0x47CEB4u);
    ctx->pc = 0x47CEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CEACu;
            // 0x47ceb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CF70u;
    if (runtime->hasFunction(0x47CF70u)) {
        auto targetFn = runtime->lookupFunction(0x47CF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CEB4u; }
        if (ctx->pc != 0x47CEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CF70_0x47cf70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CEB4u; }
        if (ctx->pc != 0x47CEB4u) { return; }
    }
    ctx->pc = 0x47CEB4u;
label_47ceb4:
    // 0x47ceb4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x47CEB4u;
    {
        const bool branch_taken_0x47ceb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47CEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CEB4u;
            // 0x47ceb8: 0x82430012  lb          $v1, 0x12($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ceb4) {
            ctx->pc = 0x47CEECu;
            goto label_47ceec;
        }
    }
    ctx->pc = 0x47CEBCu;
label_47cebc:
    // 0x47cebc: 0x50640005  beql        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47CEBCu;
    {
        const bool branch_taken_0x47cebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x47cebc) {
            ctx->pc = 0x47CEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CEBCu;
            // 0x47cec0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47CED4u;
            goto label_47ced4;
        }
    }
    ctx->pc = 0x47CEC4u;
    // 0x47cec4: 0xc13d6c8  jal         func_4F5B20
    ctx->pc = 0x47CEC4u;
    SET_GPR_U32(ctx, 31, 0x47CECCu);
    ctx->pc = 0x47CEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CEC4u;
            // 0x47cec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4F5B20u;
    if (runtime->hasFunction(0x4F5B20u)) {
        auto targetFn = runtime->lookupFunction(0x4F5B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CECCu; }
        if (ctx->pc != 0x47CECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004F5B20_0x4f5b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CECCu; }
        if (ctx->pc != 0x47CECCu) { return; }
    }
    ctx->pc = 0x47CECCu;
label_47cecc:
    // 0x47cecc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47CECCu;
    {
        const bool branch_taken_0x47cecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cecc) {
            ctx->pc = 0x47CEE8u;
            goto label_47cee8;
        }
    }
    ctx->pc = 0x47CED4u;
label_47ced4:
    // 0x47ced4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47ced8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x47CED8u;
    {
        const bool branch_taken_0x47ced8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x47ced8) {
            ctx->pc = 0x47CEE8u;
            goto label_47cee8;
        }
    }
    ctx->pc = 0x47CEE0u;
    // 0x47cee0: 0xc142444  jal         func_509110
    ctx->pc = 0x47CEE0u;
    SET_GPR_U32(ctx, 31, 0x47CEE8u);
    ctx->pc = 0x47CEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CEE0u;
            // 0x47cee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509110u;
    if (runtime->hasFunction(0x509110u)) {
        auto targetFn = runtime->lookupFunction(0x509110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CEE8u; }
        if (ctx->pc != 0x47CEE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509110_0x509110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CEE8u; }
        if (ctx->pc != 0x47CEE8u) { return; }
    }
    ctx->pc = 0x47CEE8u;
label_47cee8:
    // 0x47cee8: 0x82430012  lb          $v1, 0x12($s2)
    ctx->pc = 0x47cee8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 18)));
label_47ceec:
    // 0x47ceec: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x47ceecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47cef0: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x47CEF0u;
    {
        const bool branch_taken_0x47cef0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x47cef0) {
            ctx->pc = 0x47CEF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x47CEF0u;
            // 0x47cef4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x47CF24u;
            goto label_47cf24;
        }
    }
    ctx->pc = 0x47CEF8u;
    // 0x47cef8: 0x82230026  lb          $v1, 0x26($s1)
    ctx->pc = 0x47cef8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 38)));
    // 0x47cefc: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47CEFCu;
    {
        const bool branch_taken_0x47cefc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x47cefc) {
            ctx->pc = 0x47CF20u;
            goto label_47cf20;
        }
    }
    ctx->pc = 0x47CF04u;
    // 0x47cf04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x47cf04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x47cf08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x47cf08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47cf0c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x47CF0Cu;
    {
        const bool branch_taken_0x47cf0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x47cf0c) {
            ctx->pc = 0x47CF20u;
            goto label_47cf20;
        }
    }
    ctx->pc = 0x47CF14u;
    // 0x47cf14: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x47cf14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x47cf18: 0xc0b8cf4  jal         func_2E33D0
    ctx->pc = 0x47CF18u;
    SET_GPR_U32(ctx, 31, 0x47CF20u);
    ctx->pc = 0x47CF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CF18u;
            // 0x47cf1c: 0x8c4489d0  lw          $a0, -0x7630($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E33D0u;
    if (runtime->hasFunction(0x2E33D0u)) {
        auto targetFn = runtime->lookupFunction(0x2E33D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CF20u; }
        if (ctx->pc != 0x47CF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E33D0_0x2e33d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CF20u; }
        if (ctx->pc != 0x47CF20u) { return; }
    }
    ctx->pc = 0x47CF20u;
label_47cf20:
    // 0x47cf20: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47cf20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_47cf24:
    // 0x47cf24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47cf24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47cf28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47cf28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47cf2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47cf2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47cf30: 0x3e00008  jr          $ra
    ctx->pc = 0x47CF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CF30u;
            // 0x47cf34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CF38u;
    // 0x47cf38: 0x0  nop
    ctx->pc = 0x47cf38u;
    // NOP
    // 0x47cf3c: 0x0  nop
    ctx->pc = 0x47cf3cu;
    // NOP
}
