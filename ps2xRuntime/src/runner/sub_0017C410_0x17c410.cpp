#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017C410
// Address: 0x17c410 - 0x17c478
void sub_0017C410_0x17c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017C410_0x17c410");
#endif

    switch (ctx->pc) {
        case 0x17c438u: goto label_17c438;
        case 0x17c440u: goto label_17c440;
        case 0x17c454u: goto label_17c454;
        default: break;
    }

    ctx->pc = 0x17c410u;

    // 0x17c410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17c414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17c414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17c418: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17c41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17c41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c420: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17c420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17c424: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17c424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17c428: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x17c428u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x17c42c: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x17c42cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17c430: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17C430u;
    {
        const bool branch_taken_0x17c430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x17C434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17C430u;
            // 0x17c434: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17c430) {
            ctx->pc = 0x17C44Cu;
            goto label_17c44c;
        }
    }
    ctx->pc = 0x17C438u;
label_17c438:
    // 0x17c438: 0xc05f21e  jal         func_17C878
    ctx->pc = 0x17C438u;
    SET_GPR_U32(ctx, 31, 0x17C440u);
    ctx->pc = 0x17C878u;
    if (runtime->hasFunction(0x17C878u)) {
        auto targetFn = runtime->lookupFunction(0x17C878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C440u; }
        if (ctx->pc != 0x17C440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C878_0x17c878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C440u; }
        if (ctx->pc != 0x17C440u) { return; }
    }
    ctx->pc = 0x17C440u;
label_17c440:
    // 0x17c440: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x17c440u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x17c444: 0x1051fffc  beq         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x17C444u;
    {
        const bool branch_taken_0x17c444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x17c444) {
            ctx->pc = 0x17C438u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17c438;
        }
    }
    ctx->pc = 0x17C44Cu;
label_17c44c:
    // 0x17c44c: 0xc05f056  jal         func_17C158
    ctx->pc = 0x17C44Cu;
    SET_GPR_U32(ctx, 31, 0x17C454u);
    ctx->pc = 0x17C450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C44Cu;
            // 0x17c450: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C158u;
    if (runtime->hasFunction(0x17C158u)) {
        auto targetFn = runtime->lookupFunction(0x17C158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C454u; }
        if (ctx->pc != 0x17C454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C158_0x17c158(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17C454u; }
        if (ctx->pc != 0x17C454u) { return; }
    }
    ctx->pc = 0x17C454u;
label_17c454:
    // 0x17c454: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17c454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c458: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17c458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17c45c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17c45cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17c460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17c460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17c464: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x17c464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x17c468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17c468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17c46c: 0x804a576  j           func_1295D8
    ctx->pc = 0x17C46Cu;
    ctx->pc = 0x17C470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17C46Cu;
            // 0x17c470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001295D8_0x1295d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x17C474u;
    // 0x17c474: 0x0  nop
    ctx->pc = 0x17c474u;
    // NOP
}
