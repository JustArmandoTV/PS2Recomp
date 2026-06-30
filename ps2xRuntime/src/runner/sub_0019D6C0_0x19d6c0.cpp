#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019D6C0
// Address: 0x19d6c0 - 0x19d730
void sub_0019D6C0_0x19d6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D6C0_0x19d6c0");
#endif

    switch (ctx->pc) {
        case 0x19d6d4u: goto label_19d6d4;
        default: break;
    }

    ctx->pc = 0x19d6c0u;

    // 0x19d6c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d6c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19d6c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19d6c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19d6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x19d6cc: 0xc0675cc  jal         func_19D730
    ctx->pc = 0x19D6CCu;
    SET_GPR_U32(ctx, 31, 0x19D6D4u);
    ctx->pc = 0x19D6D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6CCu;
            // 0x19d6d0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19D730u;
    if (runtime->hasFunction(0x19D730u)) {
        auto targetFn = runtime->lookupFunction(0x19D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6D4u; }
        if (ctx->pc != 0x19D6D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019D730_0x19d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19D6D4u; }
        if (ctx->pc != 0x19D6D4u) { return; }
    }
    ctx->pc = 0x19D6D4u;
label_19d6d4:
    // 0x19d6d4: 0x8e040554  lw          $a0, 0x554($s0)
    ctx->pc = 0x19d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1364)));
    // 0x19d6d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x19d6d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d6dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19d6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19d6e0: 0x5482000f  bnel        $a0, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x19D6E0u;
    {
        const bool branch_taken_0x19d6e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x19d6e0) {
            ctx->pc = 0x19D6E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6E0u;
            // 0x19d6e4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D6E8u;
    // 0x19d6e8: 0x8e050558  lw          $a1, 0x558($s0)
    ctx->pc = 0x19d6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1368)));
    // 0x19d6ec: 0x54a4000c  bnel        $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x19D6ECu;
    {
        const bool branch_taken_0x19d6ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x19d6ec) {
            ctx->pc = 0x19D6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D6ECu;
            // 0x19d6f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D6F4u;
    // 0x19d6f4: 0x8e020564  lw          $v0, 0x564($s0)
    ctx->pc = 0x19d6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1380)));
    // 0x19d6f8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x19d6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x19d6fc: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x19d6fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x19d700: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x19D700u;
    {
        const bool branch_taken_0x19d700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19d700) {
            ctx->pc = 0x19D704u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19D700u;
            // 0x19d704: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D708u;
    // 0x19d708: 0x10650003  beq         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D708u;
    {
        const bool branch_taken_0x19d708 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x19D70Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D708u;
            // 0x19d70c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d708) {
            ctx->pc = 0x19D718u;
            goto label_19d718;
        }
    }
    ctx->pc = 0x19D710u;
    // 0x19d710: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19D710u;
    {
        const bool branch_taken_0x19d710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19D714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D710u;
            // 0x19d714: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19d710) {
            ctx->pc = 0x19D720u;
            goto label_19d720;
        }
    }
    ctx->pc = 0x19D718u;
label_19d718:
    // 0x19d718: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x19d718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19d71c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19d71cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19d720:
    // 0x19d720: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x19d720u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d724: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19d724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19d728: 0x3e00008  jr          $ra
    ctx->pc = 0x19D728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19D728u;
            // 0x19d72c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19D730u;
}
