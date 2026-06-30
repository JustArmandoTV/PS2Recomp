#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001617D0
// Address: 0x1617d0 - 0x161828
void sub_001617D0_0x1617d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001617D0_0x1617d0");
#endif

    switch (ctx->pc) {
        case 0x161808u: goto label_161808;
        case 0x161810u: goto label_161810;
        default: break;
    }

    ctx->pc = 0x1617d0u;

    // 0x1617d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1617d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1617d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1617d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1617d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1617d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1617dc: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1617DCu;
    {
        const bool branch_taken_0x1617dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1617E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1617DCu;
            // 0x1617e0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1617dc) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617E4u;
    // 0x1617e4: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x1617e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x1617e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1617e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1617ec: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1617ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1617f0: 0x248426e0  addiu       $a0, $a0, 0x26E0
    ctx->pc = 0x1617f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9952));
    // 0x1617f4: 0x805856c  j           func_1615B0
    ctx->pc = 0x1617F4u;
    ctx->pc = 0x1617F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1617F4u;
            // 0x1617f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1617FCu;
    // 0x1617fc: 0x0  nop
    ctx->pc = 0x1617fcu;
    // NOP
label_161800:
    // 0x161800: 0xc05860a  jal         func_161828
    ctx->pc = 0x161800u;
    SET_GPR_U32(ctx, 31, 0x161808u);
    ctx->pc = 0x161828u;
    if (runtime->hasFunction(0x161828u)) {
        auto targetFn = runtime->lookupFunction(0x161828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161808u; }
        if (ctx->pc != 0x161808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161828_0x161828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161808u; }
        if (ctx->pc != 0x161808u) { return; }
    }
    ctx->pc = 0x161808u;
label_161808:
    // 0x161808: 0xc0585e2  jal         func_161788
    ctx->pc = 0x161808u;
    SET_GPR_U32(ctx, 31, 0x161810u);
    ctx->pc = 0x16180Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x161808u;
            // 0x16180c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161788u;
    if (runtime->hasFunction(0x161788u)) {
        auto targetFn = runtime->lookupFunction(0x161788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161810u; }
        if (ctx->pc != 0x161810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00161788_0x161788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x161810u; }
        if (ctx->pc != 0x161810u) { return; }
    }
    ctx->pc = 0x161810u;
label_161810:
    // 0x161810: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161814: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x161814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x161818: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16181c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16181cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161820: 0x3e00008  jr          $ra
    ctx->pc = 0x161820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161820u;
            // 0x161824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161828u;
}
