#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004DB040
// Address: 0x4db040 - 0x4db0b0
void sub_004DB040_0x4db040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004DB040_0x4db040");
#endif

    switch (ctx->pc) {
        case 0x4db080u: goto label_4db080;
        case 0x4db098u: goto label_4db098;
        default: break;
    }

    ctx->pc = 0x4db040u;

    // 0x4db040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4db040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4db044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4db044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4db048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4db048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4db04c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4db04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4db050: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4db050u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4db054: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x4DB054u;
    {
        const bool branch_taken_0x4db054 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4DB058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB054u;
            // 0x4db058: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4db054) {
            ctx->pc = 0x4DB098u;
            goto label_4db098;
        }
    }
    ctx->pc = 0x4DB05Cu;
    // 0x4db05c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x4DB05Cu;
    {
        const bool branch_taken_0x4db05c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db05c) {
            ctx->pc = 0x4DB060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB05Cu;
            // 0x4db060: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB084u;
            goto label_4db084;
        }
    }
    ctx->pc = 0x4DB064u;
    // 0x4db064: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x4DB064u;
    {
        const bool branch_taken_0x4db064 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db064) {
            ctx->pc = 0x4DB080u;
            goto label_4db080;
        }
    }
    ctx->pc = 0x4DB06Cu;
    // 0x4db06c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x4db06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4db070: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4DB070u;
    {
        const bool branch_taken_0x4db070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4db070) {
            ctx->pc = 0x4DB080u;
            goto label_4db080;
        }
    }
    ctx->pc = 0x4DB078u;
    // 0x4db078: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DB078u;
    SET_GPR_U32(ctx, 31, 0x4DB080u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB080u; }
        if (ctx->pc != 0x4DB080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB080u; }
        if (ctx->pc != 0x4DB080u) { return; }
    }
    ctx->pc = 0x4DB080u;
label_4db080:
    // 0x4db080: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4db080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4db084:
    // 0x4db084: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4db084u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4db088: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4DB088u;
    {
        const bool branch_taken_0x4db088 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4db088) {
            ctx->pc = 0x4DB08Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB088u;
            // 0x4db08c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4DB09Cu;
            goto label_4db09c;
        }
    }
    ctx->pc = 0x4DB090u;
    // 0x4db090: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4DB090u;
    SET_GPR_U32(ctx, 31, 0x4DB098u);
    ctx->pc = 0x4DB094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB090u;
            // 0x4db094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB098u; }
        if (ctx->pc != 0x4DB098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4DB098u; }
        if (ctx->pc != 0x4DB098u) { return; }
    }
    ctx->pc = 0x4DB098u;
label_4db098:
    // 0x4db098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4db098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4db09c:
    // 0x4db09c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4db09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4db0a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4db0a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4db0a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4db0a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4db0a8: 0x3e00008  jr          $ra
    ctx->pc = 0x4DB0A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4DB0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4DB0A8u;
            // 0x4db0ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4DB0B0u;
}
