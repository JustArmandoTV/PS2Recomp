#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00390030
// Address: 0x390030 - 0x3900a0
void sub_00390030_0x390030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00390030_0x390030");
#endif

    switch (ctx->pc) {
        case 0x390070u: goto label_390070;
        case 0x390088u: goto label_390088;
        default: break;
    }

    ctx->pc = 0x390030u;

    // 0x390030: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x390030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x390034: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x390034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x390038: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x390038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39003c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x390040: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x390040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x390044: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x390044u;
    {
        const bool branch_taken_0x390044 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x390048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390044u;
            // 0x390048: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390044) {
            ctx->pc = 0x390088u;
            goto label_390088;
        }
    }
    ctx->pc = 0x39004Cu;
    // 0x39004c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x39004Cu;
    {
        const bool branch_taken_0x39004c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39004c) {
            ctx->pc = 0x390050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39004Cu;
            // 0x390050: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x390074u;
            goto label_390074;
        }
    }
    ctx->pc = 0x390054u;
    // 0x390054: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x390054u;
    {
        const bool branch_taken_0x390054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x390054) {
            ctx->pc = 0x390070u;
            goto label_390070;
        }
    }
    ctx->pc = 0x39005Cu;
    // 0x39005c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x39005cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x390060: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x390060u;
    {
        const bool branch_taken_0x390060 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x390060) {
            ctx->pc = 0x390070u;
            goto label_390070;
        }
    }
    ctx->pc = 0x390068u;
    // 0x390068: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x390068u;
    SET_GPR_U32(ctx, 31, 0x390070u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390070u; }
        if (ctx->pc != 0x390070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390070u; }
        if (ctx->pc != 0x390070u) { return; }
    }
    ctx->pc = 0x390070u;
label_390070:
    // 0x390070: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x390070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_390074:
    // 0x390074: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x390074u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x390078: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x390078u;
    {
        const bool branch_taken_0x390078 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x390078) {
            ctx->pc = 0x39007Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x390078u;
            // 0x39007c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39008Cu;
            goto label_39008c;
        }
    }
    ctx->pc = 0x390080u;
    // 0x390080: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x390080u;
    SET_GPR_U32(ctx, 31, 0x390088u);
    ctx->pc = 0x390084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x390080u;
            // 0x390084: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390088u; }
        if (ctx->pc != 0x390088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x390088u; }
        if (ctx->pc != 0x390088u) { return; }
    }
    ctx->pc = 0x390088u;
label_390088:
    // 0x390088: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x390088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39008c:
    // 0x39008c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39008cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x390090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x390090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x390094: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x390094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x390098: 0x3e00008  jr          $ra
    ctx->pc = 0x390098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39009Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x390098u;
            // 0x39009c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3900A0u;
}
