#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C5700
// Address: 0x2c5700 - 0x2c5760
void sub_002C5700_0x2c5700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5700_0x2c5700");
#endif

    switch (ctx->pc) {
        case 0x2c5740u: goto label_2c5740;
        default: break;
    }

    ctx->pc = 0x2c5700u;

    // 0x2c5700: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c5700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c5704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c5704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c5708: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c5708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c570c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c570cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5710: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C5710u;
    {
        const bool branch_taken_0x2c5710 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c5710) {
            ctx->pc = 0x2C5714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5710u;
            // 0x2c5714: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C5744u;
            goto label_2c5744;
        }
    }
    ctx->pc = 0x2C5718u;
    // 0x2c5718: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c5718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c571c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c571cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c5720: 0x24420ce8  addiu       $v0, $v0, 0xCE8
    ctx->pc = 0x2c5720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3304));
    // 0x2c5724: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c5724u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c5728: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c5728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c572c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c572cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c5730: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C5730u;
    {
        const bool branch_taken_0x2c5730 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C5734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5730u;
            // 0x2c5734: 0xac400de0  sw          $zero, 0xDE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3552), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c5730) {
            ctx->pc = 0x2C5740u;
            goto label_2c5740;
        }
    }
    ctx->pc = 0x2C5738u;
    // 0x2c5738: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C5738u;
    SET_GPR_U32(ctx, 31, 0x2C5740u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5740u; }
        if (ctx->pc != 0x2C5740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C5740u; }
        if (ctx->pc != 0x2C5740u) { return; }
    }
    ctx->pc = 0x2C5740u;
label_2c5740:
    // 0x2c5740: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c5740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c5744:
    // 0x2c5744: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c5744u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c5748: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c5748u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c574c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C574Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C5750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C574Cu;
            // 0x2c5750: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C5754u;
    // 0x2c5754: 0x0  nop
    ctx->pc = 0x2c5754u;
    // NOP
    // 0x2c5758: 0x0  nop
    ctx->pc = 0x2c5758u;
    // NOP
    // 0x2c575c: 0x0  nop
    ctx->pc = 0x2c575cu;
    // NOP
}
