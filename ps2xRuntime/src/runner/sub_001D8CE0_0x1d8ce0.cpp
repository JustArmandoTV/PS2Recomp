#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D8CE0
// Address: 0x1d8ce0 - 0x1d8d30
void sub_001D8CE0_0x1d8ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8CE0_0x1d8ce0");
#endif

    switch (ctx->pc) {
        case 0x1d8d08u: goto label_1d8d08;
        default: break;
    }

    ctx->pc = 0x1d8ce0u;

    // 0x1d8ce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8ce4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d8ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1d8ce8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d8cec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d8cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d8cf0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d8cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8cf4: 0x8c840e38  lw          $a0, 0xE38($a0)
    ctx->pc = 0x1d8cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3640)));
    // 0x1d8cf8: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D8CF8u;
    {
        const bool branch_taken_0x1d8cf8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d8cf8) {
            ctx->pc = 0x1D8CFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8CF8u;
            // 0x1d8cfc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8D18u;
            goto label_1d8d18;
        }
    }
    ctx->pc = 0x1D8D00u;
    // 0x1d8d00: 0xc0ca6f0  jal         func_329BC0
    ctx->pc = 0x1D8D00u;
    SET_GPR_U32(ctx, 31, 0x1D8D08u);
    ctx->pc = 0x1D8D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D00u;
            // 0x1d8d04: 0x8e040d78  lw          $a0, 0xD78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3448)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x329BC0u;
    if (runtime->hasFunction(0x329BC0u)) {
        auto targetFn = runtime->lookupFunction(0x329BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D08u; }
        if (ctx->pc != 0x1D8D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00329BC0_0x329bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8D08u; }
        if (ctx->pc != 0x1D8D08u) { return; }
    }
    ctx->pc = 0x1D8D08u;
label_1d8d08:
    // 0x1d8d08: 0x8e030da0  lw          $v1, 0xDA0($s0)
    ctx->pc = 0x1d8d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
    // 0x1d8d0c: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x1d8d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x1d8d10: 0xae030da0  sw          $v1, 0xDA0($s0)
    ctx->pc = 0x1d8d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3488), GPR_U32(ctx, 3));
    // 0x1d8d14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8d14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d8d18:
    // 0x1d8d18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d8d18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d8d1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8D1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8D1Cu;
            // 0x1d8d20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D8D24u;
    // 0x1d8d24: 0x0  nop
    ctx->pc = 0x1d8d24u;
    // NOP
    // 0x1d8d28: 0x0  nop
    ctx->pc = 0x1d8d28u;
    // NOP
    // 0x1d8d2c: 0x0  nop
    ctx->pc = 0x1d8d2cu;
    // NOP
}
