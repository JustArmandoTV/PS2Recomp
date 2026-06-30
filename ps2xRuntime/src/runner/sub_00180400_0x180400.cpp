#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00180400
// Address: 0x180400 - 0x180468
void sub_00180400_0x180400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180400_0x180400");
#endif

    switch (ctx->pc) {
        case 0x180444u: goto label_180444;
        default: break;
    }

    ctx->pc = 0x180400u;

    // 0x180400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x180404: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x180404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x180408: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x180408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18040c: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18040Cu;
    {
        const bool branch_taken_0x18040c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x180410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18040Cu;
            // 0x180410: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18040c) {
            ctx->pc = 0x180430u;
            goto label_180430;
        }
    }
    ctx->pc = 0x180414u;
    // 0x180414: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x180414u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x180418: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18041c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18041cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180420: 0x248467e8  addiu       $a0, $a0, 0x67E8
    ctx->pc = 0x180420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26600));
    // 0x180424: 0x8060334  j           func_180CD0
    ctx->pc = 0x180424u;
    ctx->pc = 0x180428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x180424u;
            // 0x180428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180CD0u;
    if (runtime->hasFunction(0x180CD0u)) {
        auto targetFn = runtime->lookupFunction(0x180CD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00180CD0_0x180cd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18042Cu;
    // 0x18042c: 0x0  nop
    ctx->pc = 0x18042cu;
    // NOP
label_180430:
    // 0x180430: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x180430u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x180434: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x180434u;
    {
        const bool branch_taken_0x180434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180434) {
            ctx->pc = 0x180438u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180434u;
            // 0x180438: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180448u;
            goto label_180448;
        }
    }
    ctx->pc = 0x18043Cu;
    // 0x18043c: 0xc06011a  jal         func_180468
    ctx->pc = 0x18043Cu;
    SET_GPR_U32(ctx, 31, 0x180444u);
    ctx->pc = 0x180468u;
    if (runtime->hasFunction(0x180468u)) {
        auto targetFn = runtime->lookupFunction(0x180468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180444u; }
        if (ctx->pc != 0x180444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180468_0x180468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x180444u; }
        if (ctx->pc != 0x180444u) { return; }
    }
    ctx->pc = 0x180444u;
label_180444:
    // 0x180444: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x180444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_180448:
    // 0x180448: 0x58400002  blezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x180448u;
    {
        const bool branch_taken_0x180448 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x180448) {
            ctx->pc = 0x18044Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x180448u;
            // 0x18044c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x180454u;
            goto label_180454;
        }
    }
    ctx->pc = 0x180450u;
    // 0x180450: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_180454:
    // 0x180454: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x180454u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x180458: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180458u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18045c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x18045cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x180460: 0x3e00008  jr          $ra
    ctx->pc = 0x180460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x180460u;
            // 0x180464: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x180468u;
}
