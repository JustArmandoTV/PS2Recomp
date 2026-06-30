#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E2B90
// Address: 0x1e2b90 - 0x1e2c00
void sub_001E2B90_0x1e2b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2B90_0x1e2b90");
#endif

    switch (ctx->pc) {
        case 0x1e2becu: goto label_1e2bec;
        default: break;
    }

    ctx->pc = 0x1e2b90u;

    // 0x1e2b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e2b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e2b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e2b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e2b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e2b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e2b9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e2b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ba0: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E2BA0u;
    {
        const bool branch_taken_0x1e2ba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ba0) {
            ctx->pc = 0x1E2BA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BA0u;
            // 0x1e2ba4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E2BF0u;
            goto label_1e2bf0;
        }
    }
    ctx->pc = 0x1E2BA8u;
    // 0x1e2ba8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e2bac: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e2bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x1e2bb0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2BB0u;
    {
        const bool branch_taken_0x1e2bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BB0u;
            // 0x1e2bb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2bb0) {
            ctx->pc = 0x1E2BC4u;
            goto label_1e2bc4;
        }
    }
    ctx->pc = 0x1E2BB8u;
    // 0x1e2bb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e2bbc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e2bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1e2bc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e2bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e2bc4:
    // 0x1e2bc4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e2bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x1e2bc8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e2bc8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1e2bcc: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E2BCCu;
    {
        const bool branch_taken_0x1e2bcc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e2bcc) {
            ctx->pc = 0x1E2BECu;
            goto label_1e2bec;
        }
    }
    ctx->pc = 0x1E2BD4u;
    // 0x1e2bd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e2bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x1e2bd8: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e2bd8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e2bdc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e2bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x1e2be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e2be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2be4: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x1E2BE4u;
    SET_GPR_U32(ctx, 31, 0x1E2BECu);
    ctx->pc = 0x1E2BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BE4u;
            // 0x1e2be8: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2BECu; }
        if (ctx->pc != 0x1E2BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E2BECu; }
        if (ctx->pc != 0x1E2BECu) { return; }
    }
    ctx->pc = 0x1E2BECu;
label_1e2bec:
    // 0x1e2bec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e2becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e2bf0:
    // 0x1e2bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e2bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e2bf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e2bf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E2BF8u;
            // 0x1e2bfc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E2C00u;
}
