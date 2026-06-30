#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044AF20
// Address: 0x44af20 - 0x44af60
void sub_0044AF20_0x44af20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044AF20_0x44af20");
#endif

    switch (ctx->pc) {
        case 0x44af44u: goto label_44af44;
        default: break;
    }

    ctx->pc = 0x44af20u;

    // 0x44af20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x44af20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x44af24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x44af24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x44af28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44af28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44af2c: 0x8c850034  lw          $a1, 0x34($a0)
    ctx->pc = 0x44af2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x44af30: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x44AF30u;
    {
        const bool branch_taken_0x44af30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x44AF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AF30u;
            // 0x44af34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44af30) {
            ctx->pc = 0x44AF48u;
            goto label_44af48;
        }
    }
    ctx->pc = 0x44AF38u;
    // 0x44af38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x44af38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x44af3c: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x44AF3Cu;
    SET_GPR_U32(ctx, 31, 0x44AF44u);
    ctx->pc = 0x44AF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44AF3Cu;
            // 0x44af40: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AF44u; }
        if (ctx->pc != 0x44AF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44AF44u; }
        if (ctx->pc != 0x44AF44u) { return; }
    }
    ctx->pc = 0x44AF44u;
label_44af44:
    // 0x44af44: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x44af44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_44af48:
    // 0x44af48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x44af48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44af4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44af4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44af50: 0x3e00008  jr          $ra
    ctx->pc = 0x44AF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44AF50u;
            // 0x44af54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44AF58u;
    // 0x44af58: 0x0  nop
    ctx->pc = 0x44af58u;
    // NOP
    // 0x44af5c: 0x0  nop
    ctx->pc = 0x44af5cu;
    // NOP
}
