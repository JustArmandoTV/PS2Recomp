#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00142A20
// Address: 0x142a20 - 0x142aa0
void sub_00142A20_0x142a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142A20_0x142a20");
#endif

    switch (ctx->pc) {
        case 0x142a3cu: goto label_142a3c;
        case 0x142a5cu: goto label_142a5c;
        case 0x142a80u: goto label_142a80;
        default: break;
    }

    ctx->pc = 0x142a20u;

    // 0x142a20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x142a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x142a24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x142a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x142a28: 0x8f84825c  lw          $a0, -0x7DA4($gp)
    ctx->pc = 0x142a28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935132)));
    // 0x142a2c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x142A2Cu;
    {
        const bool branch_taken_0x142a2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x142a2c) {
            ctx->pc = 0x142A40u;
            goto label_142a40;
        }
    }
    ctx->pc = 0x142A34u;
    // 0x142a34: 0xc056b00  jal         func_15AC00
    ctx->pc = 0x142A34u;
    SET_GPR_U32(ctx, 31, 0x142A3Cu);
    ctx->pc = 0x15AC00u;
    if (runtime->hasFunction(0x15AC00u)) {
        auto targetFn = runtime->lookupFunction(0x15AC00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A3Cu; }
        if (ctx->pc != 0x142A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015AC00_0x15ac00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A3Cu; }
        if (ctx->pc != 0x142A3Cu) { return; }
    }
    ctx->pc = 0x142A3Cu;
label_142a3c:
    // 0x142a3c: 0xaf80825c  sw          $zero, -0x7DA4($gp)
    ctx->pc = 0x142a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935132), GPR_U32(ctx, 0));
label_142a40:
    // 0x142a40: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142a44: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142a48: 0x8c635850  lw          $v1, 0x5850($v1)
    ctx->pc = 0x142a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22608)));
    // 0x142a4c: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142A4Cu;
    {
        const bool branch_taken_0x142a4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x142a4c) {
            ctx->pc = 0x142A64u;
            goto label_142a64;
        }
    }
    ctx->pc = 0x142A54u;
    // 0x142a54: 0xc04f204  jal         func_13C810
    ctx->pc = 0x142A54u;
    SET_GPR_U32(ctx, 31, 0x142A5Cu);
    ctx->pc = 0x142A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142A54u;
            // 0x142a58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C810u;
    if (runtime->hasFunction(0x13C810u)) {
        auto targetFn = runtime->lookupFunction(0x13C810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A5Cu; }
        if (ctx->pc != 0x142A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C810_0x13c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A5Cu; }
        if (ctx->pc != 0x142A5Cu) { return; }
    }
    ctx->pc = 0x142A5Cu;
label_142a5c:
    // 0x142a5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142a60: 0xac605850  sw          $zero, 0x5850($v1)
    ctx->pc = 0x142a60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22608), GPR_U32(ctx, 0));
label_142a64:
    // 0x142a64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142a68: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x142a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x142a6c: 0x8c63584c  lw          $v1, 0x584C($v1)
    ctx->pc = 0x142a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22604)));
    // 0x142a70: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x142A70u;
    {
        const bool branch_taken_0x142a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x142a70) {
            ctx->pc = 0x142A88u;
            goto label_142a88;
        }
    }
    ctx->pc = 0x142A78u;
    // 0x142a78: 0xc04f220  jal         func_13C880
    ctx->pc = 0x142A78u;
    SET_GPR_U32(ctx, 31, 0x142A80u);
    ctx->pc = 0x142A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x142A78u;
            // 0x142a7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C880u;
    if (runtime->hasFunction(0x13C880u)) {
        auto targetFn = runtime->lookupFunction(0x13C880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A80u; }
        if (ctx->pc != 0x142A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C880_0x13c880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142A80u; }
        if (ctx->pc != 0x142A80u) { return; }
    }
    ctx->pc = 0x142A80u;
label_142a80:
    // 0x142a80: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142a80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142a84: 0xac60584c  sw          $zero, 0x584C($v1)
    ctx->pc = 0x142a84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22604), GPR_U32(ctx, 0));
label_142a88:
    // 0x142a88: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x142a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x142a8c: 0xac605824  sw          $zero, 0x5824($v1)
    ctx->pc = 0x142a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 0));
    // 0x142a90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x142a90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x142a94: 0x3e00008  jr          $ra
    ctx->pc = 0x142A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x142A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142A94u;
            // 0x142a98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x142A9Cu;
    // 0x142a9c: 0x0  nop
    ctx->pc = 0x142a9cu;
    // NOP
}
