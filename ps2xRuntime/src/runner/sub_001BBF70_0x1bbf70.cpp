#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BBF70
// Address: 0x1bbf70 - 0x1bbfe8
void sub_001BBF70_0x1bbf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BBF70_0x1bbf70");
#endif

    switch (ctx->pc) {
        case 0x1bbf88u: goto label_1bbf88;
        default: break;
    }

    ctx->pc = 0x1bbf70u;

    // 0x1bbf70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bbf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bbf74: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bbf74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bbf78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bbf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bbf7c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bbf7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bbf80: 0xc06ef36  jal         func_1BBCD8
    ctx->pc = 0x1BBF80u;
    SET_GPR_U32(ctx, 31, 0x1BBF88u);
    ctx->pc = 0x1BBF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF80u;
            // 0x1bbf84: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BBCD8u;
    if (runtime->hasFunction(0x1BBCD8u)) {
        auto targetFn = runtime->lookupFunction(0x1BBCD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF88u; }
        if (ctx->pc != 0x1BBF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BBCD8_0x1bbcd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BBF88u; }
        if (ctx->pc != 0x1BBF88u) { return; }
    }
    ctx->pc = 0x1BBF88u;
label_1bbf88:
    // 0x1bbf88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bbf88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bbf8c: 0x50600012  beql        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1BBF8Cu;
    {
        const bool branch_taken_0x1bbf8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbf8c) {
            ctx->pc = 0x1BBF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF8Cu;
            // 0x1bbf90: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBFD8u;
            goto label_1bbfd8;
        }
    }
    ctx->pc = 0x1BBF94u;
    // 0x1bbf94: 0x90630019  lbu         $v1, 0x19($v1)
    ctx->pc = 0x1bbf94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 25)));
    // 0x1bbf98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbf9c: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1BBF9Cu;
    {
        const bool branch_taken_0x1bbf9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbf9c) {
            ctx->pc = 0x1BBFA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBF9Cu;
            // 0x1bbfa0: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBFCCu;
            goto label_1bbfcc;
        }
    }
    ctx->pc = 0x1BBFA4u;
    // 0x1bbfa4: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1BBFA4u;
    {
        const bool branch_taken_0x1bbfa4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bbfa4) {
            ctx->pc = 0x1BBFA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFA4u;
            // 0x1bbfa8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBFCCu;
            goto label_1bbfcc;
        }
    }
    ctx->pc = 0x1BBFACu;
    // 0x1bbfac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bbfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1bbfb0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BBFB0u;
    {
        const bool branch_taken_0x1bbfb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BBFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFB0u;
            // 0x1bbfb4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfb0) {
            ctx->pc = 0x1BBFC8u;
            goto label_1bbfc8;
        }
    }
    ctx->pc = 0x1BBFB8u;
    // 0x1bbfb8: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BBFB8u;
    {
        const bool branch_taken_0x1bbfb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bbfb8) {
            ctx->pc = 0x1BBFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFB8u;
            // 0x1bbfbc: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BBFCCu;
            goto label_1bbfcc;
        }
    }
    ctx->pc = 0x1BBFC0u;
    // 0x1bbfc0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BBFC0u;
    {
        const bool branch_taken_0x1bbfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BBFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFC0u;
            // 0x1bbfc4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bbfc0) {
            ctx->pc = 0x1BBFCCu;
            goto label_1bbfcc;
        }
    }
    ctx->pc = 0x1BBFC8u;
label_1bbfc8:
    // 0x1bbfc8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bbfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bbfcc:
    // 0x1bbfcc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bbfccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bbfd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bbfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bbfd4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bbfd4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bbfd8:
    // 0x1bbfd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bbfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bbfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1BBFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BBFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BBFDCu;
            // 0x1bbfe0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BBFE4u;
    // 0x1bbfe4: 0x0  nop
    ctx->pc = 0x1bbfe4u;
    // NOP
}
