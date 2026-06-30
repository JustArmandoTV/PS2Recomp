#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051C140
// Address: 0x51c140 - 0x51c1d0
void sub_0051C140_0x51c140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051C140_0x51c140");
#endif

    switch (ctx->pc) {
        case 0x51c1b0u: goto label_51c1b0;
        default: break;
    }

    ctx->pc = 0x51c140u;

    // 0x51c140: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c144: 0x244259b8  addiu       $v0, $v0, 0x59B8
    ctx->pc = 0x51c144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22968));
    // 0x51c148: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c148u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c14c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51c150: 0xac440ed0  sw          $a0, 0xED0($v0)
    ctx->pc = 0x51c150u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3792), GPR_U32(ctx, 4));
    // 0x51c154: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c158: 0x244259a8  addiu       $v0, $v0, 0x59A8
    ctx->pc = 0x51c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22952));
    // 0x51c15c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x51c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x51c160: 0x3e00008  jr          $ra
    ctx->pc = 0x51C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C160u;
            // 0x51c164: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C168u;
    // 0x51c168: 0x0  nop
    ctx->pc = 0x51c168u;
    // NOP
    // 0x51c16c: 0x0  nop
    ctx->pc = 0x51c16cu;
    // NOP
    // 0x51c170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51c170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51c174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51c174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51c178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51c178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51c17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51c17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51c180: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x51C180u;
    {
        const bool branch_taken_0x51c180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x51c180) {
            ctx->pc = 0x51C184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51C180u;
            // 0x51c184: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51C1B4u;
            goto label_51c1b4;
        }
    }
    ctx->pc = 0x51C188u;
    // 0x51c188: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x51c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x51c18c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x51c18cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x51c190: 0x244259b8  addiu       $v0, $v0, 0x59B8
    ctx->pc = 0x51c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22968));
    // 0x51c194: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x51c194u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x51c198: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51c198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51c19c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x51c19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x51c1a0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x51C1A0u;
    {
        const bool branch_taken_0x51c1a0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x51C1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C1A0u;
            // 0x51c1a4: 0xac400ed0  sw          $zero, 0xED0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3792), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51c1a0) {
            ctx->pc = 0x51C1B0u;
            goto label_51c1b0;
        }
    }
    ctx->pc = 0x51C1A8u;
    // 0x51c1a8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x51C1A8u;
    SET_GPR_U32(ctx, 31, 0x51C1B0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C1B0u; }
        if (ctx->pc != 0x51C1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51C1B0u; }
        if (ctx->pc != 0x51C1B0u) { return; }
    }
    ctx->pc = 0x51C1B0u;
label_51c1b0:
    // 0x51c1b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51c1b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51c1b4:
    // 0x51c1b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51c1b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51c1b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51c1b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51c1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x51C1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51C1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51C1BCu;
            // 0x51c1c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51C1C4u;
    // 0x51c1c4: 0x0  nop
    ctx->pc = 0x51c1c4u;
    // NOP
    // 0x51c1c8: 0x0  nop
    ctx->pc = 0x51c1c8u;
    // NOP
    // 0x51c1cc: 0x0  nop
    ctx->pc = 0x51c1ccu;
    // NOP
}
