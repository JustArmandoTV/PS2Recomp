#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003B2C00
// Address: 0x3b2c00 - 0x3b2c50
void sub_003B2C00_0x3b2c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B2C00_0x3b2c00");
#endif

    switch (ctx->pc) {
        case 0x3b2c30u: goto label_3b2c30;
        case 0x3b2c38u: goto label_3b2c38;
        default: break;
    }

    ctx->pc = 0x3b2c00u;

    // 0x3b2c00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b2c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b2c04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b2c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b2c08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3b2c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3b2c0c: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x3b2c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3b2c10: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3B2C10u;
    {
        const bool branch_taken_0x3b2c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B2C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2C10u;
            // 0x3b2c14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b2c10) {
            ctx->pc = 0x3B2C38u;
            goto label_3b2c38;
        }
    }
    ctx->pc = 0x3B2C18u;
    // 0x3b2c18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3b2c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b2c1c: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x3b2c1cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x3b2c20: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B2C20u;
    {
        const bool branch_taken_0x3b2c20 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b2c20) {
            ctx->pc = 0x3B2C24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2C20u;
            // 0x3b2c24: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3B2C3Cu;
            goto label_3b2c3c;
        }
    }
    ctx->pc = 0x3B2C28u;
    // 0x3b2c28: 0xc0ecd90  jal         func_3B3640
    ctx->pc = 0x3B2C28u;
    SET_GPR_U32(ctx, 31, 0x3B2C30u);
    ctx->pc = 0x3B3640u;
    if (runtime->hasFunction(0x3B3640u)) {
        auto targetFn = runtime->lookupFunction(0x3B3640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2C30u; }
        if (ctx->pc != 0x3B2C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B3640_0x3b3640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2C30u; }
        if (ctx->pc != 0x3B2C30u) { return; }
    }
    ctx->pc = 0x3B2C30u;
label_3b2c30:
    // 0x3b2c30: 0xc0ecb14  jal         func_3B2C50
    ctx->pc = 0x3B2C30u;
    SET_GPR_U32(ctx, 31, 0x3B2C38u);
    ctx->pc = 0x3B2C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2C30u;
            // 0x3b2c34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B2C50u;
    if (runtime->hasFunction(0x3B2C50u)) {
        auto targetFn = runtime->lookupFunction(0x3B2C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2C38u; }
        if (ctx->pc != 0x3B2C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B2C50_0x3b2c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3B2C38u; }
        if (ctx->pc != 0x3B2C38u) { return; }
    }
    ctx->pc = 0x3B2C38u;
label_3b2c38:
    // 0x3b2c38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b2c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3b2c3c:
    // 0x3b2c3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3b2c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b2c40: 0x3e00008  jr          $ra
    ctx->pc = 0x3B2C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B2C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3B2C40u;
            // 0x3b2c44: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3B2C48u;
    // 0x3b2c48: 0x0  nop
    ctx->pc = 0x3b2c48u;
    // NOP
    // 0x3b2c4c: 0x0  nop
    ctx->pc = 0x3b2c4cu;
    // NOP
}
