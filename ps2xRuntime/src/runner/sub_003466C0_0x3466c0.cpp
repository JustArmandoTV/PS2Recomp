#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003466C0
// Address: 0x3466c0 - 0x346700
void sub_003466C0_0x3466c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003466C0_0x3466c0");
#endif

    switch (ctx->pc) {
        case 0x3466ecu: goto label_3466ec;
        default: break;
    }

    ctx->pc = 0x3466c0u;

    // 0x3466c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3466c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3466c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3466c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3466c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3466c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3466cc: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x3466ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3466d0: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x3466D0u;
    {
        const bool branch_taken_0x3466d0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3466D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3466D0u;
            // 0x3466d4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3466d0) {
            ctx->pc = 0x3466F0u;
            goto label_3466f0;
        }
    }
    ctx->pc = 0x3466D8u;
    // 0x3466d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3466d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3466dc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3466dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
    // 0x3466e0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x3466e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3466e4: 0xc08c3f4  jal         func_230FD0
    ctx->pc = 0x3466E4u;
    SET_GPR_U32(ctx, 31, 0x3466ECu);
    ctx->pc = 0x3466E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3466E4u;
            // 0x3466e8: 0x27a4002c  addiu       $a0, $sp, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230FD0u;
    if (runtime->hasFunction(0x230FD0u)) {
        auto targetFn = runtime->lookupFunction(0x230FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466ECu; }
        if (ctx->pc != 0x3466ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230FD0_0x230fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3466ECu; }
        if (ctx->pc != 0x3466ECu) { return; }
    }
    ctx->pc = 0x3466ECu;
label_3466ec:
    // 0x3466ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x3466ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_3466f0:
    // 0x3466f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3466f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3466f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3466f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3466f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3466F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3466FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3466F8u;
            // 0x3466fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x346700u;
}
