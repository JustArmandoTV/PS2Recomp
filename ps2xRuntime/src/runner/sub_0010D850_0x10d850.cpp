#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D850
// Address: 0x10d850 - 0x10d878
void sub_0010D850_0x10d850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D850_0x10d850");
#endif

    switch (ctx->pc) {
        case 0x10d868u: goto label_10d868;
        default: break;
    }

    ctx->pc = 0x10d850u;

    // 0x10d850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10d850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10d854: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10d854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10d858: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10d858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d85c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10d85cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10d860: 0xc0431e4  jal         func_10C790
    ctx->pc = 0x10D860u;
    SET_GPR_U32(ctx, 31, 0x10D868u);
    ctx->pc = 0x10D864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D860u;
            // 0x10d864: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C790u;
    if (runtime->hasFunction(0x10C790u)) {
        auto targetFn = runtime->lookupFunction(0x10C790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D868u; }
        if (ctx->pc != 0x10D868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C790_0x10c790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D868u; }
        if (ctx->pc != 0x10D868u) { return; }
    }
    ctx->pc = 0x10D868u;
label_10d868:
    // 0x10d868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10d868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d86c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D86Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D86Cu;
            // 0x10d870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D874u;
    // 0x10d874: 0x0  nop
    ctx->pc = 0x10d874u;
    // NOP
}
