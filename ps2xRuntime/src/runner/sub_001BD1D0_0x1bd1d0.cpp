#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BD1D0
// Address: 0x1bd1d0 - 0x1bd210
void sub_001BD1D0_0x1bd1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD1D0_0x1bd1d0");
#endif

    switch (ctx->pc) {
        case 0x1bd1e8u: goto label_1bd1e8;
        default: break;
    }

    ctx->pc = 0x1bd1d0u;

    // 0x1bd1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bd1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bd1d4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1bd1d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bd1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bd1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bd1dc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1bd1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1bd1e0: 0xc06f2e6  jal         func_1BCB98
    ctx->pc = 0x1BD1E0u;
    SET_GPR_U32(ctx, 31, 0x1BD1E8u);
    ctx->pc = 0x1BD1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1E0u;
            // 0x1bd1e4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BCB98u;
    if (runtime->hasFunction(0x1BCB98u)) {
        auto targetFn = runtime->lookupFunction(0x1BCB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1E8u; }
        if (ctx->pc != 0x1BD1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BCB98_0x1bcb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD1E8u; }
        if (ctx->pc != 0x1BD1E8u) { return; }
    }
    ctx->pc = 0x1BD1E8u;
label_1bd1e8:
    // 0x1bd1e8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bd1e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd1ec: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BD1ECu;
    {
        const bool branch_taken_0x1bd1ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd1ec) {
            ctx->pc = 0x1BD1F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD1ECu;
            // 0x1bd1f0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD204u;
            goto label_1bd204;
        }
    }
    ctx->pc = 0x1BD1F4u;
    // 0x1bd1f4: 0x90630024  lbu         $v1, 0x24($v1)
    ctx->pc = 0x1bd1f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1bd1f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bd1fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1bd1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1bd200: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bd200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd204:
    // 0x1bd204: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bd204u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bd208: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD208u;
            // 0x1bd20c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD210u;
}
