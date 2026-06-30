#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037D720
// Address: 0x37d720 - 0x37d780
void sub_0037D720_0x37d720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D720_0x37d720");
#endif

    switch (ctx->pc) {
        case 0x37d760u: goto label_37d760;
        default: break;
    }

    ctx->pc = 0x37d720u;

    // 0x37d720: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x37d720u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37d724: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x37d724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x37d728: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37d728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x37d72c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37d72cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37d730: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x37D730u;
    {
        const bool branch_taken_0x37d730 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d730) {
            ctx->pc = 0x37D734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37D730u;
            // 0x37d734: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37D764u;
            goto label_37d764;
        }
    }
    ctx->pc = 0x37D738u;
    // 0x37d738: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x37d738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x37d73c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x37d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x37d740: 0x244275a0  addiu       $v0, $v0, 0x75A0
    ctx->pc = 0x37d740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30112));
    // 0x37d744: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x37d744u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x37d748: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x37d748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x37d74c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x37d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x37d750: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x37D750u;
    {
        const bool branch_taken_0x37d750 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x37D754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D750u;
            // 0x37d754: 0xac4060a0  sw          $zero, 0x60A0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24736), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d750) {
            ctx->pc = 0x37D760u;
            goto label_37d760;
        }
    }
    ctx->pc = 0x37D758u;
    // 0x37d758: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x37D758u;
    SET_GPR_U32(ctx, 31, 0x37D760u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D760u; }
        if (ctx->pc != 0x37D760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D760u; }
        if (ctx->pc != 0x37D760u) { return; }
    }
    ctx->pc = 0x37D760u;
label_37d760:
    // 0x37d760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x37d760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_37d764:
    // 0x37d764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37d764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37d768: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37d76c: 0x3e00008  jr          $ra
    ctx->pc = 0x37D76Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D76Cu;
            // 0x37d770: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37D774u;
    // 0x37d774: 0x0  nop
    ctx->pc = 0x37d774u;
    // NOP
    // 0x37d778: 0x0  nop
    ctx->pc = 0x37d778u;
    // NOP
    // 0x37d77c: 0x0  nop
    ctx->pc = 0x37d77cu;
    // NOP
}
