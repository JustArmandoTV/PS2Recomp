#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00537540
// Address: 0x537540 - 0x5375a0
void sub_00537540_0x537540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00537540_0x537540");
#endif

    switch (ctx->pc) {
        case 0x537580u: goto label_537580;
        default: break;
    }

    ctx->pc = 0x537540u;

    // 0x537540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x537540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x537544: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x537544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x537548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x537548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x53754c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x53754cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x537550: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x537550u;
    {
        const bool branch_taken_0x537550 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x537550) {
            ctx->pc = 0x537554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537550u;
            // 0x537554: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537584u;
            goto label_537584;
        }
    }
    ctx->pc = 0x537558u;
    // 0x537558: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x537558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x53755c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x53755cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x537560: 0x24427008  addiu       $v0, $v0, 0x7008
    ctx->pc = 0x537560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28680));
    // 0x537564: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x537564u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x537568: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x537568u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x53756c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x53756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x537570: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x537570u;
    {
        const bool branch_taken_0x537570 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x537574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537570u;
            // 0x537574: 0xac40b6a8  sw          $zero, -0x4958($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537570) {
            ctx->pc = 0x537580u;
            goto label_537580;
        }
    }
    ctx->pc = 0x537578u;
    // 0x537578: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x537578u;
    SET_GPR_U32(ctx, 31, 0x537580u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537580u; }
        if (ctx->pc != 0x537580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537580u; }
        if (ctx->pc != 0x537580u) { return; }
    }
    ctx->pc = 0x537580u;
label_537580:
    // 0x537580: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x537580u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_537584:
    // 0x537584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x537584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x537588: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537588u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x53758c: 0x3e00008  jr          $ra
    ctx->pc = 0x53758Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x537590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53758Cu;
            // 0x537590: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x537594u;
    // 0x537594: 0x0  nop
    ctx->pc = 0x537594u;
    // NOP
    // 0x537598: 0x0  nop
    ctx->pc = 0x537598u;
    // NOP
    // 0x53759c: 0x0  nop
    ctx->pc = 0x53759cu;
    // NOP
}
