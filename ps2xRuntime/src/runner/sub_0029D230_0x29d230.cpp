#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029D230
// Address: 0x29d230 - 0x29d280
void sub_0029D230_0x29d230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D230_0x29d230");
#endif

    switch (ctx->pc) {
        case 0x29d254u: goto label_29d254;
        case 0x29d26cu: goto label_29d26c;
        default: break;
    }

    ctx->pc = 0x29d230u;

    // 0x29d230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29d230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29d234: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x29d234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x29d238: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29d238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29d23c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x29d23cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x29d240: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29d240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29d244: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29d244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d248: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x29d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x29d24c: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x29D24Cu;
    SET_GPR_U32(ctx, 31, 0x29D254u);
    ctx->pc = 0x29D250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D24Cu;
            // 0x29d250: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D254u; }
        if (ctx->pc != 0x29D254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D254u; }
        if (ctx->pc != 0x29D254u) { return; }
    }
    ctx->pc = 0x29D254u;
label_29d254:
    // 0x29d254: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29d254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x29d258: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29d258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d25c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x29d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x29d260: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x29d260u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x29d264: 0xc0a7314  jal         func_29CC50
    ctx->pc = 0x29D264u;
    SET_GPR_U32(ctx, 31, 0x29D26Cu);
    ctx->pc = 0x29D268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29D264u;
            // 0x29d268: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CC50u;
    if (runtime->hasFunction(0x29CC50u)) {
        auto targetFn = runtime->lookupFunction(0x29CC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D26Cu; }
        if (ctx->pc != 0x29D26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CC50_0x29cc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29D26Cu; }
        if (ctx->pc != 0x29D26Cu) { return; }
    }
    ctx->pc = 0x29D26Cu;
label_29d26c:
    // 0x29d26c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x29d26cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29d270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29d270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29d274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29d274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29d278: 0x3e00008  jr          $ra
    ctx->pc = 0x29D278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29D278u;
            // 0x29d27c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29D280u;
}
