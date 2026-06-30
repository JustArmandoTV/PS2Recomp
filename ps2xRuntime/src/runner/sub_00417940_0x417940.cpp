#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00417940
// Address: 0x417940 - 0x4179a0
void sub_00417940_0x417940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417940_0x417940");
#endif

    switch (ctx->pc) {
        case 0x417980u: goto label_417980;
        default: break;
    }

    ctx->pc = 0x417940u;

    // 0x417940: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x417944: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x417944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x417948: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x417948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41794c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41794cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x417950: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x417950u;
    {
        const bool branch_taken_0x417950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x417950) {
            ctx->pc = 0x417954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x417950u;
            // 0x417954: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x417984u;
            goto label_417984;
        }
    }
    ctx->pc = 0x417958u;
    // 0x417958: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x417958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41795c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x41795cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x417960: 0x2442b448  addiu       $v0, $v0, -0x4BB8
    ctx->pc = 0x417960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947912));
    // 0x417964: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x417964u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x417968: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x417968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x41796c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41796cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x417970: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x417970u;
    {
        const bool branch_taken_0x417970 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x417974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417970u;
            // 0x417974: 0xac407310  sw          $zero, 0x7310($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417970) {
            ctx->pc = 0x417980u;
            goto label_417980;
        }
    }
    ctx->pc = 0x417978u;
    // 0x417978: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x417978u;
    SET_GPR_U32(ctx, 31, 0x417980u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417980u; }
        if (ctx->pc != 0x417980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417980u; }
        if (ctx->pc != 0x417980u) { return; }
    }
    ctx->pc = 0x417980u;
label_417980:
    // 0x417980: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417984:
    // 0x417984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x417984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x417988: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x417988u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41798c: 0x3e00008  jr          $ra
    ctx->pc = 0x41798Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41798Cu;
            // 0x417990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x417994u;
    // 0x417994: 0x0  nop
    ctx->pc = 0x417994u;
    // NOP
    // 0x417998: 0x0  nop
    ctx->pc = 0x417998u;
    // NOP
    // 0x41799c: 0x0  nop
    ctx->pc = 0x41799cu;
    // NOP
}
