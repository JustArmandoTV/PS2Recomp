#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00110C50
// Address: 0x110c50 - 0x110cd8
void sub_00110C50_0x110c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110C50_0x110c50");
#endif

    switch (ctx->pc) {
        case 0x110c68u: goto label_110c68;
        case 0x110c70u: goto label_110c70;
        case 0x110c90u: goto label_110c90;
        case 0x110ca4u: goto label_110ca4;
        case 0x110cc0u: goto label_110cc0;
        default: break;
    }

    ctx->pc = 0x110c50u;

    // 0x110c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x110c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x110c54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x110c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x110c58: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x110c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x110c5c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x110c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x110c60: 0xc0442d8  jal         func_110B60
    ctx->pc = 0x110C60u;
    SET_GPR_U32(ctx, 31, 0x110C68u);
    ctx->pc = 0x110C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C60u;
            // 0x110c64: 0x3c11005d  lui         $s1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x110B60u;
    if (runtime->hasFunction(0x110B60u)) {
        auto targetFn = runtime->lookupFunction(0x110B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C68u; }
        if (ctx->pc != 0x110C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00110B60_0x110b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C68u; }
        if (ctx->pc != 0x110C68u) { return; }
    }
    ctx->pc = 0x110C68u;
label_110c68:
    // 0x110c68: 0xc0430e8  jal         func_10C3A0
    ctx->pc = 0x110C68u;
    SET_GPR_U32(ctx, 31, 0x110C70u);
    ctx->pc = 0x110C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C68u;
            // 0x110c6c: 0x8e24e448  lw          $a0, -0x1BB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C3A0u;
    if (runtime->hasFunction(0x10C3A0u)) {
        auto targetFn = runtime->lookupFunction(0x10C3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C70u; }
        if (ctx->pc != 0x110C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C3A0_0x10c3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110C70u; }
        if (ctx->pc != 0x110C70u) { return; }
    }
    ctx->pc = 0x110C70u;
label_110c70:
    // 0x110c70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x110c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x110c74: 0x2470c940  addiu       $s0, $v1, -0x36C0
    ctx->pc = 0x110c74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953280));
    // 0x110c78: 0x26030200  addiu       $v1, $s0, 0x200
    ctx->pc = 0x110c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
    // 0x110c7c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x110c7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x110c80: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x110C80u;
    {
        const bool branch_taken_0x110c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110C80u;
            // 0x110c84: 0x3c051000  lui         $a1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110c80) {
            ctx->pc = 0x110CB8u;
            goto label_110cb8;
        }
    }
    ctx->pc = 0x110C88u;
    // 0x110c88: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x110c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x110c8c: 0x0  nop
    ctx->pc = 0x110c8cu;
    // NOP
label_110c90:
    // 0x110c90: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x110C90u;
    {
        const bool branch_taken_0x110c90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110c90) {
            ctx->pc = 0x110C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110C90u;
            // 0x110c94: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110CACu;
            goto label_110cac;
        }
    }
    ctx->pc = 0x110C98u;
    // 0x110c98: 0x8e24e448  lw          $a0, -0x1BB8($s1)
    ctx->pc = 0x110c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
    // 0x110c9c: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x110C9Cu;
    SET_GPR_U32(ctx, 31, 0x110CA4u);
    ctx->pc = 0x110CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110C9Cu;
            // 0x110ca0: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CA4u; }
        if (ctx->pc != 0x110CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CA4u; }
        if (ctx->pc != 0x110CA4u) { return; }
    }
    ctx->pc = 0x110CA4u;
label_110ca4:
    // 0x110ca4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x110CA4u;
    {
        const bool branch_taken_0x110ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110CA4u;
            // 0x110ca8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ca4) {
            ctx->pc = 0x110CC4u;
            goto label_110cc4;
        }
    }
    ctx->pc = 0x110CACu;
label_110cac:
    // 0x110cac: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x110cacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x110cb0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x110CB0u;
    {
        const bool branch_taken_0x110cb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x110cb0) {
            ctx->pc = 0x110CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x110CB0u;
            // 0x110cb4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x110C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_110c90;
        }
    }
    ctx->pc = 0x110CB8u;
label_110cb8:
    // 0x110cb8: 0xc0430e0  jal         func_10C380
    ctx->pc = 0x110CB8u;
    SET_GPR_U32(ctx, 31, 0x110CC0u);
    ctx->pc = 0x110CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x110CB8u;
            // 0x110cbc: 0x8e24e448  lw          $a0, -0x1BB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294960200)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C380u;
    if (runtime->hasFunction(0x10C380u)) {
        auto targetFn = runtime->lookupFunction(0x10C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CC0u; }
        if (ctx->pc != 0x110CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C380_0x10c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x110CC0u; }
        if (ctx->pc != 0x110CC0u) { return; }
    }
    ctx->pc = 0x110CC0u;
label_110cc0:
    // 0x110cc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x110cc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_110cc4:
    // 0x110cc4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x110cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x110cc8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x110cc8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x110ccc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x110cccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x110cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x110CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x110CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110CD0u;
            // 0x110cd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x110CD8u;
}
