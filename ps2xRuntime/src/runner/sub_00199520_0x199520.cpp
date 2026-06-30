#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00199520
// Address: 0x199520 - 0x199570
void sub_00199520_0x199520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199520_0x199520");
#endif

    switch (ctx->pc) {
        case 0x199544u: goto label_199544;
        case 0x199558u: goto label_199558;
        default: break;
    }

    ctx->pc = 0x199520u;

    // 0x199520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199524: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x199524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x199528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x199528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19952c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x19952cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x199530: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x199530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x199534: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x199534u;
    {
        const bool branch_taken_0x199534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x199538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199534u;
            // 0x199538: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199534) {
            ctx->pc = 0x199550u;
            goto label_199550;
        }
    }
    ctx->pc = 0x19953Cu;
    // 0x19953c: 0xc06655c  jal         func_199570
    ctx->pc = 0x19953Cu;
    SET_GPR_U32(ctx, 31, 0x199544u);
    ctx->pc = 0x199570u;
    if (runtime->hasFunction(0x199570u)) {
        auto targetFn = runtime->lookupFunction(0x199570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199544u; }
        if (ctx->pc != 0x199544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199570_0x199570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199544u; }
        if (ctx->pc != 0x199544u) { return; }
    }
    ctx->pc = 0x199544u;
label_199544:
    // 0x199544: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x199544u;
    {
        const bool branch_taken_0x199544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199544u;
            // 0x199548: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199544) {
            ctx->pc = 0x19955Cu;
            goto label_19955c;
        }
    }
    ctx->pc = 0x19954Cu;
    // 0x19954c: 0x0  nop
    ctx->pc = 0x19954cu;
    // NOP
label_199550:
    // 0x199550: 0xc06655e  jal         func_199578
    ctx->pc = 0x199550u;
    SET_GPR_U32(ctx, 31, 0x199558u);
    ctx->pc = 0x199554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199550u;
            // 0x199554: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199578u;
    if (runtime->hasFunction(0x199578u)) {
        auto targetFn = runtime->lookupFunction(0x199578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199558u; }
        if (ctx->pc != 0x199558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199578_0x199578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x199558u; }
        if (ctx->pc != 0x199558u) { return; }
    }
    ctx->pc = 0x199558u;
label_199558:
    // 0x199558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x199558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19955c:
    // 0x19955c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19955cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199560: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x199560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x199564: 0x8066588  j           func_199620
    ctx->pc = 0x199564u;
    ctx->pc = 0x199568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x199564u;
            // 0x199568: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199620u;
    {
        auto targetFn = runtime->lookupFunction(0x199620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x19956Cu;
    // 0x19956c: 0x0  nop
    ctx->pc = 0x19956cu;
    // NOP
}
