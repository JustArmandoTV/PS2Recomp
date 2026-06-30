#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0044BD50
// Address: 0x44bd50 - 0x44bdc0
void sub_0044BD50_0x44bd50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0044BD50_0x44bd50");
#endif

    switch (ctx->pc) {
        case 0x44bd90u: goto label_44bd90;
        case 0x44bda8u: goto label_44bda8;
        default: break;
    }

    ctx->pc = 0x44bd50u;

    // 0x44bd50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x44bd50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x44bd54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x44bd54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x44bd58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x44bd58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x44bd5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x44bd5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x44bd60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x44bd60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x44bd64: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x44BD64u;
    {
        const bool branch_taken_0x44bd64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x44BD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BD64u;
            // 0x44bd68: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x44bd64) {
            ctx->pc = 0x44BDA8u;
            goto label_44bda8;
        }
    }
    ctx->pc = 0x44BD6Cu;
    // 0x44bd6c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x44BD6Cu;
    {
        const bool branch_taken_0x44bd6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bd6c) {
            ctx->pc = 0x44BD70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44BD6Cu;
            // 0x44bd70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44BD94u;
            goto label_44bd94;
        }
    }
    ctx->pc = 0x44BD74u;
    // 0x44bd74: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x44BD74u;
    {
        const bool branch_taken_0x44bd74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bd74) {
            ctx->pc = 0x44BD90u;
            goto label_44bd90;
        }
    }
    ctx->pc = 0x44BD7Cu;
    // 0x44bd7c: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x44bd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x44bd80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x44BD80u;
    {
        const bool branch_taken_0x44bd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x44bd80) {
            ctx->pc = 0x44BD90u;
            goto label_44bd90;
        }
    }
    ctx->pc = 0x44BD88u;
    // 0x44bd88: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44BD88u;
    SET_GPR_U32(ctx, 31, 0x44BD90u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BD90u; }
        if (ctx->pc != 0x44BD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BD90u; }
        if (ctx->pc != 0x44BD90u) { return; }
    }
    ctx->pc = 0x44BD90u;
label_44bd90:
    // 0x44bd90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x44bd90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_44bd94:
    // 0x44bd94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x44bd94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x44bd98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x44BD98u;
    {
        const bool branch_taken_0x44bd98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x44bd98) {
            ctx->pc = 0x44BD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x44BD98u;
            // 0x44bd9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x44BDACu;
            goto label_44bdac;
        }
    }
    ctx->pc = 0x44BDA0u;
    // 0x44bda0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x44BDA0u;
    SET_GPR_U32(ctx, 31, 0x44BDA8u);
    ctx->pc = 0x44BDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x44BDA0u;
            // 0x44bda4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BDA8u; }
        if (ctx->pc != 0x44BDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x44BDA8u; }
        if (ctx->pc != 0x44BDA8u) { return; }
    }
    ctx->pc = 0x44BDA8u;
label_44bda8:
    // 0x44bda8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x44bda8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_44bdac:
    // 0x44bdac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x44bdacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x44bdb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x44bdb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x44bdb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x44bdb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x44bdb8: 0x3e00008  jr          $ra
    ctx->pc = 0x44BDB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x44BDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x44BDB8u;
            // 0x44bdbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x44BDC0u;
}
