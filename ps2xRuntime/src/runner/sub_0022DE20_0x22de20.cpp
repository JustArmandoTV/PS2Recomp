#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DE20
// Address: 0x22de20 - 0x22de90
void sub_0022DE20_0x22de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DE20_0x22de20");
#endif

    switch (ctx->pc) {
        case 0x22de58u: goto label_22de58;
        default: break;
    }

    ctx->pc = 0x22de20u;

    // 0x22de20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22de24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x22de24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x22de28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22de28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22de2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22de2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x22de30: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x22de30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x22de34: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22de34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22de38: 0x8c850040  lw          $a1, 0x40($a0)
    ctx->pc = 0x22de38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x22de3c: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x22de3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x22de40: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x22de40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x22de44: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22DE44u;
    {
        const bool branch_taken_0x22de44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x22DE48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE44u;
            // 0x22de48: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22de44) {
            ctx->pc = 0x22DE58u;
            goto label_22de58;
        }
    }
    ctx->pc = 0x22DE4Cu;
    // 0x22de4c: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x22de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x22de50: 0xc0a728c  jal         func_29CA30
    ctx->pc = 0x22DE50u;
    SET_GPR_U32(ctx, 31, 0x22DE58u);
    ctx->pc = 0x22DE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE50u;
            // 0x22de54: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE58u; }
        if (ctx->pc != 0x22DE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE58u; }
        if (ctx->pc != 0x22DE58u) { return; }
    }
    ctx->pc = 0x22DE58u;
label_22de58:
    // 0x22de58: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x22de58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x22de5c: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x22de5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x22de60: 0xae230040  sw          $v1, 0x40($s1)
    ctx->pc = 0x22de60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 3));
    // 0x22de64: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x22de64u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x22de68: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x22de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x22de6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x22de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22de70: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x22de70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x22de74: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x22de74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x22de78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x22de78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22de7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22de7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22de80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22de80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22de84: 0x3e00008  jr          $ra
    ctx->pc = 0x22DE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22DE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE84u;
            // 0x22de88: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22DE8Cu;
    // 0x22de8c: 0x0  nop
    ctx->pc = 0x22de8cu;
    // NOP
}
