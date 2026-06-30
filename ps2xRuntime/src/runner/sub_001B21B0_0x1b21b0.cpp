#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B21B0
// Address: 0x1b21b0 - 0x1b2240
void sub_001B21B0_0x1b21b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B21B0_0x1b21b0");
#endif

    switch (ctx->pc) {
        case 0x1b2228u: goto label_1b2228;
        default: break;
    }

    ctx->pc = 0x1b21b0u;

    // 0x1b21b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b21b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b21b4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1b21b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b21b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b21bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b21bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b21c0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1b21c0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b21c4: 0x10c2000c  beq         $a2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B21C4u;
    {
        const bool branch_taken_0x1b21c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B21C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21C4u;
            // 0x1b21c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21c4) {
            ctx->pc = 0x1B21F8u;
            goto label_1b21f8;
        }
    }
    ctx->pc = 0x1B21CCu;
    // 0x1b21cc: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B21CCu;
    {
        const bool branch_taken_0x1b21cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21cc) {
            ctx->pc = 0x1B21D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21CCu;
            // 0x1b21d0: 0x8c620054  lw          $v0, 0x54($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B2210u;
            goto label_1b2210;
        }
    }
    ctx->pc = 0x1B21D4u;
    // 0x1b21d4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1b21d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b21d8: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B21D8u;
    {
        const bool branch_taken_0x1b21d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B21DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21D8u;
            // 0x1b21dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21d8) {
            ctx->pc = 0x1B2230u;
            goto label_1b2230;
        }
    }
    ctx->pc = 0x1B21E0u;
    // 0x1b21e0: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x1b21e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1b21e4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b21e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b21e8: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B21E8u;
    {
        const bool branch_taken_0x1b21e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B21ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B21E8u;
            // 0x1b21ec: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b21e8) {
            ctx->pc = 0x1B2234u;
            goto label_1b2234;
        }
    }
    ctx->pc = 0x1B21F0u;
    // 0x1b21f0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1B21F0u;
    {
        const bool branch_taken_0x1b21f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b21f0) {
            ctx->pc = 0x1B2220u;
            goto label_1b2220;
        }
    }
    ctx->pc = 0x1B21F8u;
label_1b21f8:
    // 0x1b21f8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1b21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1b21fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1b21fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1b2200: 0x1446000a  bne         $v0, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1B2200u;
    {
        const bool branch_taken_0x1b2200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1B2204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2200u;
            // 0x1b2204: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2200) {
            ctx->pc = 0x1B222Cu;
            goto label_1b222c;
        }
    }
    ctx->pc = 0x1B2208u;
    // 0x1b2208: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2208u;
    {
        const bool branch_taken_0x1b2208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2208) {
            ctx->pc = 0x1B2220u;
            goto label_1b2220;
        }
    }
    ctx->pc = 0x1B2210u;
label_1b2210:
    // 0x1b2210: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b2210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1b2214: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2214u;
    {
        const bool branch_taken_0x1b2214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2214u;
            // 0x1b2218: 0xac620054  sw          $v0, 0x54($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2214) {
            ctx->pc = 0x1B222Cu;
            goto label_1b222c;
        }
    }
    ctx->pc = 0x1B221Cu;
    // 0x1b221c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b221cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2220:
    // 0x1b2220: 0xc06c890  jal         func_1B2240
    ctx->pc = 0x1B2220u;
    SET_GPR_U32(ctx, 31, 0x1B2228u);
    ctx->pc = 0x1B2240u;
    if (runtime->hasFunction(0x1B2240u)) {
        auto targetFn = runtime->lookupFunction(0x1B2240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2228u; }
        if (ctx->pc != 0x1B2228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B2240_0x1b2240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2228u; }
        if (ctx->pc != 0x1B2228u) { return; }
    }
    ctx->pc = 0x1B2228u;
label_1b2228:
    // 0x1b2228: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b2228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b222c:
    // 0x1b222c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b222cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b2230:
    // 0x1b2230: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x1b2230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b2234:
    // 0x1b2234: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2234u;
            // 0x1b2238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B223Cu;
    // 0x1b223c: 0x0  nop
    ctx->pc = 0x1b223cu;
    // NOP
}
