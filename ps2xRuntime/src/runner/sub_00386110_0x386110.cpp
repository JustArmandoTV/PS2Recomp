#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00386110
// Address: 0x386110 - 0x386170
void sub_00386110_0x386110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00386110_0x386110");
#endif

    switch (ctx->pc) {
        case 0x386150u: goto label_386150;
        default: break;
    }

    ctx->pc = 0x386110u;

    // 0x386110: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x386110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x386114: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x386114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x386118: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x386118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38611c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x38611cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x386120: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x386120u;
    {
        const bool branch_taken_0x386120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x386120) {
            ctx->pc = 0x386124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x386120u;
            // 0x386124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x386154u;
            goto label_386154;
        }
    }
    ctx->pc = 0x386128u;
    // 0x386128: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x386128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x38612c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x38612cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x386130: 0x24427ab0  addiu       $v0, $v0, 0x7AB0
    ctx->pc = 0x386130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31408));
    // 0x386134: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x386134u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x386138: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x386138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x38613c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x38613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x386140: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x386140u;
    {
        const bool branch_taken_0x386140 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x386144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x386140u;
            // 0x386144: 0xac406118  sw          $zero, 0x6118($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24856), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x386140) {
            ctx->pc = 0x386150u;
            goto label_386150;
        }
    }
    ctx->pc = 0x386148u;
    // 0x386148: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x386148u;
    SET_GPR_U32(ctx, 31, 0x386150u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386150u; }
        if (ctx->pc != 0x386150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x386150u; }
        if (ctx->pc != 0x386150u) { return; }
    }
    ctx->pc = 0x386150u;
label_386150:
    // 0x386150: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x386150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_386154:
    // 0x386154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x386154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x386158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x386158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38615c: 0x3e00008  jr          $ra
    ctx->pc = 0x38615Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x386160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38615Cu;
            // 0x386160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x386164u;
    // 0x386164: 0x0  nop
    ctx->pc = 0x386164u;
    // NOP
    // 0x386168: 0x0  nop
    ctx->pc = 0x386168u;
    // NOP
    // 0x38616c: 0x0  nop
    ctx->pc = 0x38616cu;
    // NOP
}
