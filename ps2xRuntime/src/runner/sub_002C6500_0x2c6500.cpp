#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6500
// Address: 0x2c6500 - 0x2c6560
void sub_002C6500_0x2c6500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6500_0x2c6500");
#endif

    switch (ctx->pc) {
        case 0x2c6540u: goto label_2c6540;
        default: break;
    }

    ctx->pc = 0x2c6500u;

    // 0x2c6500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c6500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c6504: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c6504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c6508: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c6508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c650c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c650cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6510: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2C6510u;
    {
        const bool branch_taken_0x2c6510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c6510) {
            ctx->pc = 0x2C6514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6510u;
            // 0x2c6514: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6544u;
            goto label_2c6544;
        }
    }
    ctx->pc = 0x2C6518u;
    // 0x2c6518: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c6518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c651c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2c651cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c6520: 0x24420ac8  addiu       $v0, $v0, 0xAC8
    ctx->pc = 0x2c6520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2760));
    // 0x2c6524: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2c6524u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2c6528: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c6528u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2c652c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c652cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c6530: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C6530u;
    {
        const bool branch_taken_0x2c6530 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2C6534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6530u;
            // 0x2c6534: 0xac400de8  sw          $zero, 0xDE8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6530) {
            ctx->pc = 0x2C6540u;
            goto label_2c6540;
        }
    }
    ctx->pc = 0x2C6538u;
    // 0x2c6538: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C6538u;
    SET_GPR_U32(ctx, 31, 0x2C6540u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6540u; }
        if (ctx->pc != 0x2C6540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6540u; }
        if (ctx->pc != 0x2C6540u) { return; }
    }
    ctx->pc = 0x2C6540u;
label_2c6540:
    // 0x2c6540: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c6540u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6544:
    // 0x2c6544: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c6544u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c6548: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c6548u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c654c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C654Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C654Cu;
            // 0x2c6550: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6554u;
    // 0x2c6554: 0x0  nop
    ctx->pc = 0x2c6554u;
    // NOP
    // 0x2c6558: 0x0  nop
    ctx->pc = 0x2c6558u;
    // NOP
    // 0x2c655c: 0x0  nop
    ctx->pc = 0x2c655cu;
    // NOP
}
