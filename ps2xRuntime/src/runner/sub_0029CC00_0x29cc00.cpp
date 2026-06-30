#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CC00
// Address: 0x29cc00 - 0x29cc50
void sub_0029CC00_0x29cc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CC00_0x29cc00");
#endif

    switch (ctx->pc) {
        case 0x29cc14u: goto label_29cc14;
        case 0x29cc34u: goto label_29cc34;
        default: break;
    }

    ctx->pc = 0x29cc00u;

    // 0x29cc00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29cc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29cc04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29cc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29cc08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29cc08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29cc0c: 0xc0a7400  jal         func_29D000
    ctx->pc = 0x29CC0Cu;
    SET_GPR_U32(ctx, 31, 0x29CC14u);
    ctx->pc = 0x29CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC0Cu;
            // 0x29cc10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D000u;
    if (runtime->hasFunction(0x29D000u)) {
        auto targetFn = runtime->lookupFunction(0x29D000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CC14u; }
        if (ctx->pc != 0x29CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029D000_0x29d000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CC14u; }
        if (ctx->pc != 0x29CC14u) { return; }
    }
    ctx->pc = 0x29CC14u;
label_29cc14:
    // 0x29cc14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29cc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29cc18: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x29cc18u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29cc1c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x29cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x29cc20: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29CC20u;
    {
        const bool branch_taken_0x29cc20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cc20) {
            ctx->pc = 0x29CC24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC20u;
            // 0x29cc24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CC38u;
            goto label_29cc38;
        }
    }
    ctx->pc = 0x29CC28u;
    // 0x29cc28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29cc2c: 0xc0a7380  jal         func_29CE00
    ctx->pc = 0x29CC2Cu;
    SET_GPR_U32(ctx, 31, 0x29CC34u);
    ctx->pc = 0x29CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC2Cu;
            // 0x29cc30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CE00u;
    if (runtime->hasFunction(0x29CE00u)) {
        auto targetFn = runtime->lookupFunction(0x29CE00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CC34u; }
        if (ctx->pc != 0x29CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CE00_0x29ce00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CC34u; }
        if (ctx->pc != 0x29CC34u) { return; }
    }
    ctx->pc = 0x29CC34u;
label_29cc34:
    // 0x29cc34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29cc34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cc38:
    // 0x29cc38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29cc38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29cc3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29cc3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29cc40: 0x3e00008  jr          $ra
    ctx->pc = 0x29CC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CC40u;
            // 0x29cc44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29CC48u;
    // 0x29cc48: 0x0  nop
    ctx->pc = 0x29cc48u;
    // NOP
    // 0x29cc4c: 0x0  nop
    ctx->pc = 0x29cc4cu;
    // NOP
}
