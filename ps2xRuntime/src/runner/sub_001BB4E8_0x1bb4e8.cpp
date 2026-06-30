#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BB4E8
// Address: 0x1bb4e8 - 0x1bb540
void sub_001BB4E8_0x1bb4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BB4E8_0x1bb4e8");
#endif

    switch (ctx->pc) {
        case 0x1bb520u: goto label_1bb520;
        case 0x1bb530u: goto label_1bb530;
        default: break;
    }

    ctx->pc = 0x1bb4e8u;

    // 0x1bb4e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bb4e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1bb4ec: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1bb4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1bb4f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bb4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bb4f4: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1bb4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1bb4f8: 0x8c870010  lw          $a3, 0x10($a0)
    ctx->pc = 0x1bb4f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1bb4fc: 0x10e20006  beq         $a3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BB4FCu;
    {
        const bool branch_taken_0x1bb4fc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB4FCu;
            // 0x1bb500: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb4fc) {
            ctx->pc = 0x1BB518u;
            goto label_1bb518;
        }
    }
    ctx->pc = 0x1BB504u;
    // 0x1bb504: 0x240200c8  addiu       $v0, $zero, 0xC8
    ctx->pc = 0x1bb504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    // 0x1bb508: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BB508u;
    {
        const bool branch_taken_0x1bb508 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BB50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB508u;
            // 0x1bb50c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb508) {
            ctx->pc = 0x1BB528u;
            goto label_1bb528;
        }
    }
    ctx->pc = 0x1BB510u;
    // 0x1bb510: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1BB510u;
    {
        const bool branch_taken_0x1bb510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB510u;
            // 0x1bb514: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb510) {
            ctx->pc = 0x1BB534u;
            goto label_1bb534;
        }
    }
    ctx->pc = 0x1BB518u;
label_1bb518:
    // 0x1bb518: 0xc06f0ba  jal         func_1BC2E8
    ctx->pc = 0x1BB518u;
    SET_GPR_U32(ctx, 31, 0x1BB520u);
    ctx->pc = 0x1BC2E8u;
    if (runtime->hasFunction(0x1BC2E8u)) {
        auto targetFn = runtime->lookupFunction(0x1BC2E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB520u; }
        if (ctx->pc != 0x1BB520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BC2E8_0x1bc2e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB520u; }
        if (ctx->pc != 0x1BB520u) { return; }
    }
    ctx->pc = 0x1BB520u;
label_1bb520:
    // 0x1bb520: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1BB520u;
    {
        const bool branch_taken_0x1bb520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BB524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB520u;
            // 0x1bb524: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bb520) {
            ctx->pc = 0x1BB534u;
            goto label_1bb534;
        }
    }
    ctx->pc = 0x1BB528u;
label_1bb528:
    // 0x1bb528: 0xc06f4ac  jal         func_1BD2B0
    ctx->pc = 0x1BB528u;
    SET_GPR_U32(ctx, 31, 0x1BB530u);
    ctx->pc = 0x1BB52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB528u;
            // 0x1bb52c: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BD2B0u;
    if (runtime->hasFunction(0x1BD2B0u)) {
        auto targetFn = runtime->lookupFunction(0x1BD2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB530u; }
        if (ctx->pc != 0x1BB530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BD2B0_0x1bd2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BB530u; }
        if (ctx->pc != 0x1BB530u) { return; }
    }
    ctx->pc = 0x1BB530u;
label_1bb530:
    // 0x1bb530: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bb530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bb534:
    // 0x1bb534: 0x3e00008  jr          $ra
    ctx->pc = 0x1BB534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BB538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BB534u;
            // 0x1bb538: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BB53Cu;
    // 0x1bb53c: 0x0  nop
    ctx->pc = 0x1bb53cu;
    // NOP
}
