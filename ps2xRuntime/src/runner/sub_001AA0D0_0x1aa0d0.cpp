#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001AA0D0
// Address: 0x1aa0d0 - 0x1aa158
void sub_001AA0D0_0x1aa0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA0D0_0x1aa0d0");
#endif

    switch (ctx->pc) {
        case 0x1aa0f0u: goto label_1aa0f0;
        case 0x1aa104u: goto label_1aa104;
        case 0x1aa118u: goto label_1aa118;
        default: break;
    }

    ctx->pc = 0x1aa0d0u;

    // 0x1aa0d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aa0d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aa0d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa0d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa0dc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aa0e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aa0e4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aa0e8: 0xc06a856  jal         func_1AA158
    ctx->pc = 0x1AA0E8u;
    SET_GPR_U32(ctx, 31, 0x1AA0F0u);
    ctx->pc = 0x1AA0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0E8u;
            // 0x1aa0ec: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA158u;
    if (runtime->hasFunction(0x1AA158u)) {
        auto targetFn = runtime->lookupFunction(0x1AA158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0F0u; }
        if (ctx->pc != 0x1AA0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA158_0x1aa158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0F0u; }
        if (ctx->pc != 0x1AA0F0u) { return; }
    }
    ctx->pc = 0x1AA0F0u;
label_1aa0f0:
    // 0x1aa0f0: 0x10520013  beq         $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1AA0F0u;
    {
        const bool branch_taken_0x1aa0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x1AA0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0F0u;
            // 0x1aa0f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0f0) {
            ctx->pc = 0x1AA140u;
            goto label_1aa140;
        }
    }
    ctx->pc = 0x1AA0F8u;
    // 0x1aa0f8: 0x8e301ff4  lw          $s0, 0x1FF4($s1)
    ctx->pc = 0x1aa0f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8180)));
    // 0x1aa0fc: 0xc069948  jal         func_1A6520
    ctx->pc = 0x1AA0FCu;
    SET_GPR_U32(ctx, 31, 0x1AA104u);
    ctx->pc = 0x1AA100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0FCu;
            // 0x1aa100: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A6520u;
    if (runtime->hasFunction(0x1A6520u)) {
        auto targetFn = runtime->lookupFunction(0x1A6520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA104u; }
        if (ctx->pc != 0x1AA104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A6520_0x1a6520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA104u; }
        if (ctx->pc != 0x1AA104u) { return; }
    }
    ctx->pc = 0x1AA104u;
label_1aa104:
    // 0x1aa104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa108: 0x1452000d  bne         $v0, $s2, . + 4 + (0xD << 2)
    ctx->pc = 0x1AA108u;
    {
        const bool branch_taken_0x1aa108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x1AA10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA108u;
            // 0x1aa10c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa108) {
            ctx->pc = 0x1AA140u;
            goto label_1aa140;
        }
    }
    ctx->pc = 0x1AA110u;
    // 0x1aa110: 0xc06a8a2  jal         func_1AA288
    ctx->pc = 0x1AA110u;
    SET_GPR_U32(ctx, 31, 0x1AA118u);
    ctx->pc = 0x1AA288u;
    if (runtime->hasFunction(0x1AA288u)) {
        auto targetFn = runtime->lookupFunction(0x1AA288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA118u; }
        if (ctx->pc != 0x1AA118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AA288_0x1aa288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA118u; }
        if (ctx->pc != 0x1AA118u) { return; }
    }
    ctx->pc = 0x1AA118u;
label_1aa118:
    // 0x1aa118: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA118u;
    {
        const bool branch_taken_0x1aa118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA118u;
            // 0x1aa11c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa118) {
            ctx->pc = 0x1AA140u;
            goto label_1aa140;
        }
    }
    ctx->pc = 0x1AA120u;
    // 0x1aa120: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa120u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa124: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa124u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa12c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa12cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa130: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa134: 0x806a87a  j           func_1AA1E8
    ctx->pc = 0x1AA134u;
    ctx->pc = 0x1AA138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA134u;
            // 0x1aa138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AA1E8u;
    {
        auto targetFn = runtime->lookupFunction(0x1AA1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1AA13Cu;
    // 0x1aa13c: 0x0  nop
    ctx->pc = 0x1aa13cu;
    // NOP
label_1aa140:
    // 0x1aa140: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa140u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa144: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa144u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aa148: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa148u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa14c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa14cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aa150: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA150u;
            // 0x1aa154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1AA158u;
}
