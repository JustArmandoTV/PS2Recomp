#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029FF30
// Address: 0x29ff30 - 0x29ff80
void sub_0029FF30_0x29ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FF30_0x29ff30");
#endif

    switch (ctx->pc) {
        case 0x29ff58u: goto label_29ff58;
        case 0x29ff64u: goto label_29ff64;
        default: break;
    }

    ctx->pc = 0x29ff30u;

    // 0x29ff30: 0x27bdd8b0  addiu       $sp, $sp, -0x2750
    ctx->pc = 0x29ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294957232));
    // 0x29ff34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x29ff34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff38: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29ff38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29ff3c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x29ff3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
    // 0x29ff40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29ff44: 0x24052728  addiu       $a1, $zero, 0x2728
    ctx->pc = 0x29ff44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10024));
    // 0x29ff48: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29ff48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff4c: 0x24c6db68  addiu       $a2, $a2, -0x2498
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957928));
    // 0x29ff50: 0xc0a8410  jal         func_2A1040
    ctx->pc = 0x29FF50u;
    SET_GPR_U32(ctx, 31, 0x29FF58u);
    ctx->pc = 0x29FF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF50u;
            // 0x29ff54: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1040u;
    if (runtime->hasFunction(0x2A1040u)) {
        auto targetFn = runtime->lookupFunction(0x2A1040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF58u; }
        if (ctx->pc != 0x29FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1040_0x2a1040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF58u; }
        if (ctx->pc != 0x29FF58u) { return; }
    }
    ctx->pc = 0x29FF58u;
label_29ff58:
    // 0x29ff58: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x29ff58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29ff5c: 0xc0a7f44  jal         func_29FD10
    ctx->pc = 0x29FF5Cu;
    SET_GPR_U32(ctx, 31, 0x29FF64u);
    ctx->pc = 0x29FF60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF5Cu;
            // 0x29ff60: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29FD10u;
    if (runtime->hasFunction(0x29FD10u)) {
        auto targetFn = runtime->lookupFunction(0x29FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF64u; }
        if (ctx->pc != 0x29FF64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029FD10_0x29fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FF64u; }
        if (ctx->pc != 0x29FF64u) { return; }
    }
    ctx->pc = 0x29FF64u;
label_29ff64:
    // 0x29ff64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29ff64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff68: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29ff68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ff6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29ff6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ff70: 0x3e00008  jr          $ra
    ctx->pc = 0x29FF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF70u;
            // 0x29ff74: 0x27bd2750  addiu       $sp, $sp, 0x2750 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10064));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29FF78u;
    // 0x29ff78: 0x0  nop
    ctx->pc = 0x29ff78u;
    // NOP
    // 0x29ff7c: 0x0  nop
    ctx->pc = 0x29ff7cu;
    // NOP
}
