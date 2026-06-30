#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C100
// Address: 0x51c100 - 0x51c140
void sub_0051C100_0x51c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C100_0x51c100");
#endif

    switch (ctx->pc) {
        case 0x51c114u: goto label_51c114;
        default: break;
    }

    ctx->pc = 0x51c100u;

    // 0x51c100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c104: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c10c: 0xc147204  jal         func_51C810
    ctx->pc = 0x51C10Cu;
    SET_GPR_U32(ctx, 31, 0x51C114u);
    ctx->pc = 0x51C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51C10Cu;
            // 0x51c110: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x51C810u;
    if (runtime->hasFunction(0x51C810u)) {
        auto targetFn = runtime->lookupFunction(0x51C810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C114u; }
        if (ctx->pc != 0x51C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C810_0x51c810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C114u; }
        if (ctx->pc != 0x51C114u) { return; }
    }
    ctx->pc = 0x51C114u;
label_51c114:
    // 0x51c114: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x51c114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x51c118: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c118u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c11c: 0x246359c8  addiu       $v1, $v1, 0x59C8
    ctx->pc = 0x51c11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22984));
    // 0x51c120: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x51c120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x51c124: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c128: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c12c: 0x3e00008  jr          $ra
    ctx->pc = 0x51C12Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C12Cu;
            // 0x51c130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C134u;
    // 0x51c134: 0x0  nop
    ctx->pc = 0x51c134u;
    // NOP
    // 0x51c138: 0x0  nop
    ctx->pc = 0x51c138u;
    // NOP
    // 0x51c13c: 0x0  nop
    ctx->pc = 0x51c13cu;
    // NOP
}
