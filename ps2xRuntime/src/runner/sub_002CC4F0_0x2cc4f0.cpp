#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CC4F0
// Address: 0x2cc4f0 - 0x2cc550
void sub_002CC4F0_0x2cc4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC4F0_0x2cc4f0");
#endif

    switch (ctx->pc) {
        case 0x2cc530u: goto label_2cc530;
        default: break;
    }

    ctx->pc = 0x2cc4f0u;

    // 0x2cc4f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cc4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cc4f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cc4f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cc4f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cc4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cc4fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cc4fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc500: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CC500u;
    {
        const bool branch_taken_0x2cc500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cc500) {
            ctx->pc = 0x2CC504u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC500u;
            // 0x2cc504: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CC534u;
            goto label_2cc534;
        }
    }
    ctx->pc = 0x2CC508u;
    // 0x2cc508: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cc508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cc50c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2cc50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2cc510: 0x2442ffe8  addiu       $v0, $v0, -0x18
    ctx->pc = 0x2cc510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967272));
    // 0x2cc514: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cc514u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cc518: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cc518u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2cc51c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cc51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cc520: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC520u;
    {
        const bool branch_taken_0x2cc520 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CC524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC520u;
            // 0x2cc524: 0xac400e40  sw          $zero, 0xE40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc520) {
            ctx->pc = 0x2CC530u;
            goto label_2cc530;
        }
    }
    ctx->pc = 0x2CC528u;
    // 0x2cc528: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CC528u;
    SET_GPR_U32(ctx, 31, 0x2CC530u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC530u; }
        if (ctx->pc != 0x2CC530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC530u; }
        if (ctx->pc != 0x2CC530u) { return; }
    }
    ctx->pc = 0x2CC530u;
label_2cc530:
    // 0x2cc530: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cc530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cc534:
    // 0x2cc534: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cc534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cc538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cc53c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC53Cu;
            // 0x2cc540: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC544u;
    // 0x2cc544: 0x0  nop
    ctx->pc = 0x2cc544u;
    // NOP
    // 0x2cc548: 0x0  nop
    ctx->pc = 0x2cc548u;
    // NOP
    // 0x2cc54c: 0x0  nop
    ctx->pc = 0x2cc54cu;
    // NOP
}
