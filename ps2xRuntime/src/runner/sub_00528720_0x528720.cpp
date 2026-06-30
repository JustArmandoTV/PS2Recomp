#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00528720
// Address: 0x528720 - 0x528780
void sub_00528720_0x528720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00528720_0x528720");
#endif

    switch (ctx->pc) {
        case 0x528760u: goto label_528760;
        default: break;
    }

    ctx->pc = 0x528720u;

    // 0x528720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x528720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x528724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x528724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x528728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x528728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52872c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x52872cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x528730: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x528730u;
    {
        const bool branch_taken_0x528730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x528730) {
            ctx->pc = 0x528734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x528730u;
            // 0x528734: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x528764u;
            goto label_528764;
        }
    }
    ctx->pc = 0x528738u;
    // 0x528738: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x528738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x52873c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x52873cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x528740: 0x24426620  addiu       $v0, $v0, 0x6620
    ctx->pc = 0x528740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26144));
    // 0x528744: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x528744u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x528748: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x528748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x52874c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x52874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x528750: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x528750u;
    {
        const bool branch_taken_0x528750 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x528754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x528750u;
            // 0x528754: 0xac40b5f8  sw          $zero, -0x4A08($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x528750) {
            ctx->pc = 0x528760u;
            goto label_528760;
        }
    }
    ctx->pc = 0x528758u;
    // 0x528758: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x528758u;
    SET_GPR_U32(ctx, 31, 0x528760u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528760u; }
        if (ctx->pc != 0x528760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x528760u; }
        if (ctx->pc != 0x528760u) { return; }
    }
    ctx->pc = 0x528760u;
label_528760:
    // 0x528760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x528760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_528764:
    // 0x528764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x528764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x528768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x528768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52876c: 0x3e00008  jr          $ra
    ctx->pc = 0x52876Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x528770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52876Cu;
            // 0x528770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x528774u;
    // 0x528774: 0x0  nop
    ctx->pc = 0x528774u;
    // NOP
    // 0x528778: 0x0  nop
    ctx->pc = 0x528778u;
    // NOP
    // 0x52877c: 0x0  nop
    ctx->pc = 0x52877cu;
    // NOP
}
