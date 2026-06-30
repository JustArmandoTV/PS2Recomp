#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00509410
// Address: 0x509410 - 0x509480
void sub_00509410_0x509410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00509410_0x509410");
#endif

    switch (ctx->pc) {
        case 0x50942cu: goto label_50942c;
        default: break;
    }

    ctx->pc = 0x509410u;

    // 0x509410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x509410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x509414: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x509414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x509418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x509418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x50941c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x50941cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x509420: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x509420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x509424: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x509424u;
    SET_GPR_U32(ctx, 31, 0x50942Cu);
    ctx->pc = 0x509428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x509424u;
            // 0x509428: 0x24440440  addiu       $a0, $v0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50942Cu; }
        if (ctx->pc != 0x50942Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x50942Cu; }
        if (ctx->pc != 0x50942Cu) { return; }
    }
    ctx->pc = 0x50942Cu;
label_50942c:
    // 0x50942c: 0x80440052  lb          $a0, 0x52($v0)
    ctx->pc = 0x50942cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x509430: 0x82030070  lb          $v1, 0x70($s0)
    ctx->pc = 0x509430u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x509434: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x509434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x509438: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x509438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
    // 0x50943c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x50943cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x509440: 0x28610007  slti        $at, $v1, 0x7
    ctx->pc = 0x509440u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x509444: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x509444u;
    {
        const bool branch_taken_0x509444 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x509444) {
            ctx->pc = 0x509454u;
            goto label_509454;
        }
    }
    ctx->pc = 0x50944Cu;
    // 0x50944c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x50944Cu;
    {
        const bool branch_taken_0x50944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x509450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x50944Cu;
            // 0x509450: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x50944c) {
            ctx->pc = 0x509460u;
            goto label_509460;
        }
    }
    ctx->pc = 0x509454u;
label_509454:
    // 0x509454: 0x4630003  bgezl       $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x509454u;
    {
        const bool branch_taken_0x509454 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x509454) {
            ctx->pc = 0x509458u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x509454u;
            // 0x509458: 0x31e3c  dsll32      $v1, $v1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x509464u;
            goto label_509464;
        }
    }
    ctx->pc = 0x50945Cu;
    // 0x50945c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x50945cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_509460:
    // 0x509460: 0x31e3c  dsll32      $v1, $v1, 24
    ctx->pc = 0x509460u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 24));
label_509464:
    // 0x509464: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x509464u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
    // 0x509468: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x509468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
    // 0x50946c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x50946cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x509470: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x509470u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x509474: 0x3e00008  jr          $ra
    ctx->pc = 0x509474u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x509478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x509474u;
            // 0x509478: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x50947Cu;
    // 0x50947c: 0x0  nop
    ctx->pc = 0x50947cu;
    // NOP
}
