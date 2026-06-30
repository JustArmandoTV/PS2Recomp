#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001854E8
// Address: 0x1854e8 - 0x185538
void sub_001854E8_0x1854e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001854E8_0x1854e8");
#endif

    switch (ctx->pc) {
        case 0x185518u: goto label_185518;
        default: break;
    }

    ctx->pc = 0x1854e8u;

    // 0x1854e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1854e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1854ec: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x1854ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x1854f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1854f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1854f4: 0x24500778  addiu       $s0, $v0, 0x778
    ctx->pc = 0x1854f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1912));
    // 0x1854f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1854f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1854fc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1854FCu;
    {
        const bool branch_taken_0x1854fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x185500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1854FCu;
            // 0x185500: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1854fc) {
            ctx->pc = 0x18551Cu;
            goto label_18551c;
        }
    }
    ctx->pc = 0x185504u;
    // 0x185504: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x185504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x185508: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x185508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18550c: 0x24840780  addiu       $a0, $a0, 0x780
    ctx->pc = 0x18550cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1920));
    // 0x185510: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x185510u;
    SET_GPR_U32(ctx, 31, 0x185518u);
    ctx->pc = 0x185514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x185510u;
            // 0x185514: 0x24064800  addiu       $a2, $zero, 0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 18432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185518u; }
        if (ctx->pc != 0x185518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x185518u; }
        if (ctx->pc != 0x185518u) { return; }
    }
    ctx->pc = 0x185518u;
label_185518:
    // 0x185518: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x185518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_18551c:
    // 0x18551c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x18551cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x185520: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x185520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x185524: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x185524u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x185528: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x185528u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18552c: 0x3e00008  jr          $ra
    ctx->pc = 0x18552Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18552Cu;
            // 0x185530: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x185534u;
    // 0x185534: 0x0  nop
    ctx->pc = 0x185534u;
    // NOP
}
