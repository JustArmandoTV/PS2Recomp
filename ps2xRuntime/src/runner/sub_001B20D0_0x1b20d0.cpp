#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B20D0
// Address: 0x1b20d0 - 0x1b2120
void sub_001B20D0_0x1b20d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B20D0_0x1b20d0");
#endif

    switch (ctx->pc) {
        case 0x1b20e4u: goto label_1b20e4;
        case 0x1b20fcu: goto label_1b20fc;
        default: break;
    }

    ctx->pc = 0x1b20d0u;

    // 0x1b20d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1b20d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1b20d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b20d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b20d8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1b20d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1b20dc: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B20DCu;
    SET_GPR_U32(ctx, 31, 0x1B20E4u);
    ctx->pc = 0x1B20E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20DCu;
            // 0x1b20e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20E4u; }
        if (ctx->pc != 0x1B20E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20E4u; }
        if (ctx->pc != 0x1B20E4u) { return; }
    }
    ctx->pc = 0x1B20E4u;
label_1b20e4:
    // 0x1b20e4: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b20e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b20e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b20e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b20ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B20ECu;
    {
        const bool branch_taken_0x1b20ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B20F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20ECu;
            // 0x1b20f0: 0x34a50141  ori         $a1, $a1, 0x141 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)321);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20ec) {
            ctx->pc = 0x1B2108u;
            goto label_1b2108;
        }
    }
    ctx->pc = 0x1B20F4u;
    // 0x1b20f4: 0xc06a1ac  jal         func_1A86B0
    ctx->pc = 0x1B20F4u;
    SET_GPR_U32(ctx, 31, 0x1B20FCu);
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20FCu; }
        if (ctx->pc != 0x1B20FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B20FCu; }
        if (ctx->pc != 0x1B20FCu) { return; }
    }
    ctx->pc = 0x1B20FCu;
label_1b20fc:
    // 0x1b20fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B20FCu;
    {
        const bool branch_taken_0x1b20fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B20FCu;
            // 0x1b2100: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b20fc) {
            ctx->pc = 0x1B210Cu;
            goto label_1b210c;
        }
    }
    ctx->pc = 0x1B2104u;
    // 0x1b2104: 0x0  nop
    ctx->pc = 0x1b2104u;
    // NOP
label_1b2108:
    // 0x1b2108: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1b2108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1b210c:
    // 0x1b210c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b210cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2110: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1b2110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b2114: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2114u;
            // 0x1b2118: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B211Cu;
    // 0x1b211c: 0x0  nop
    ctx->pc = 0x1b211cu;
    // NOP
}
