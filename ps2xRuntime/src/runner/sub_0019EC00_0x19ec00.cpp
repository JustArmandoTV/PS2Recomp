#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019EC00
// Address: 0x19ec00 - 0x19ec78
void sub_0019EC00_0x19ec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019EC00_0x19ec00");
#endif

    switch (ctx->pc) {
        case 0x19ec1cu: goto label_19ec1c;
        case 0x19ec2cu: goto label_19ec2c;
        case 0x19ec50u: goto label_19ec50;
        case 0x19ec5cu: goto label_19ec5c;
        default: break;
    }

    ctx->pc = 0x19ec00u;

    // 0x19ec00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ec00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ec04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19ec04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ec08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19ec08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec0c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19ec0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19ec10: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19ec10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19ec14: 0xc067b1e  jal         func_19EC78
    ctx->pc = 0x19EC14u;
    SET_GPR_U32(ctx, 31, 0x19EC1Cu);
    ctx->pc = 0x19EC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC14u;
            // 0x19ec18: 0x24b10060  addiu       $s1, $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EC78u;
    if (runtime->hasFunction(0x19EC78u)) {
        auto targetFn = runtime->lookupFunction(0x19EC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC1Cu; }
        if (ctx->pc != 0x19EC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019EC78_0x19ec78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC1Cu; }
        if (ctx->pc != 0x19EC1Cu) { return; }
    }
    ctx->pc = 0x19EC1Cu;
label_19ec1c:
    // 0x19ec1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19ec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19ec20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19ec20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ec24: 0xc067b3a  jal         func_19ECE8
    ctx->pc = 0x19EC24u;
    SET_GPR_U32(ctx, 31, 0x19EC2Cu);
    ctx->pc = 0x19EC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC24u;
            // 0x19ec28: 0x26100098  addiu       $s0, $s0, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ECE8u;
    if (runtime->hasFunction(0x19ECE8u)) {
        auto targetFn = runtime->lookupFunction(0x19ECE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC2Cu; }
        if (ctx->pc != 0x19EC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019ECE8_0x19ece8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC2Cu; }
        if (ctx->pc != 0x19EC2Cu) { return; }
    }
    ctx->pc = 0x19EC2Cu;
label_19ec2c:
    // 0x19ec2c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x19ec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x19ec30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x19ec30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x19ec34: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x19ec34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x19ec38: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x19ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x19ec3c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x19ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x19ec40: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x19ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x19ec44: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x19ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19ec48: 0xc067b56  jal         func_19ED58
    ctx->pc = 0x19EC48u;
    SET_GPR_U32(ctx, 31, 0x19EC50u);
    ctx->pc = 0x19EC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC48u;
            // 0x19ec4c: 0xae230010  sw          $v1, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ED58u;
    if (runtime->hasFunction(0x19ED58u)) {
        auto targetFn = runtime->lookupFunction(0x19ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC50u; }
        if (ctx->pc != 0x19EC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019ED58_0x19ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC50u; }
        if (ctx->pc != 0x19EC50u) { return; }
    }
    ctx->pc = 0x19EC50u;
label_19ec50:
    // 0x19ec50: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x19ec50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x19ec54: 0xc067b56  jal         func_19ED58
    ctx->pc = 0x19EC54u;
    SET_GPR_U32(ctx, 31, 0x19EC5Cu);
    ctx->pc = 0x19EC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC54u;
            // 0x19ec58: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19ED58u;
    if (runtime->hasFunction(0x19ED58u)) {
        auto targetFn = runtime->lookupFunction(0x19ED58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC5Cu; }
        if (ctx->pc != 0x19EC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019ED58_0x19ed58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19EC5Cu; }
        if (ctx->pc != 0x19EC5Cu) { return; }
    }
    ctx->pc = 0x19EC5Cu;
label_19ec5c:
    // 0x19ec5c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x19ec5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x19ec60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19ec60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ec64: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19ec64u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19ec68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19ec68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ec6c: 0x3e00008  jr          $ra
    ctx->pc = 0x19EC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19EC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19EC6Cu;
            // 0x19ec70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19EC74u;
    // 0x19ec74: 0x0  nop
    ctx->pc = 0x19ec74u;
    // NOP
}
