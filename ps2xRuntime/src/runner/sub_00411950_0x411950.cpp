#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00411950
// Address: 0x411950 - 0x4119b0
void sub_00411950_0x411950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00411950_0x411950");
#endif

    switch (ctx->pc) {
        case 0x411990u: goto label_411990;
        default: break;
    }

    ctx->pc = 0x411950u;

    // 0x411950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x411950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x411954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x411954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x411958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x411958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x41195c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41195cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x411960: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x411960u;
    {
        const bool branch_taken_0x411960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x411960) {
            ctx->pc = 0x411964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x411960u;
            // 0x411964: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x411994u;
            goto label_411994;
        }
    }
    ctx->pc = 0x411968u;
    // 0x411968: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x411968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x41196c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x41196cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x411970: 0x2442af48  addiu       $v0, $v0, -0x50B8
    ctx->pc = 0x411970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946632));
    // 0x411974: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x411974u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x411978: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x411978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x41197c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x41197cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x411980: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x411980u;
    {
        const bool branch_taken_0x411980 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x411984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411980u;
            // 0x411984: 0xac407308  sw          $zero, 0x7308($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 29448), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411980) {
            ctx->pc = 0x411990u;
            goto label_411990;
        }
    }
    ctx->pc = 0x411988u;
    // 0x411988: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x411988u;
    SET_GPR_U32(ctx, 31, 0x411990u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411990u; }
        if (ctx->pc != 0x411990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411990u; }
        if (ctx->pc != 0x411990u) { return; }
    }
    ctx->pc = 0x411990u;
label_411990:
    // 0x411990: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x411990u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411994:
    // 0x411994: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x411994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x411998: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x411998u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41199c: 0x3e00008  jr          $ra
    ctx->pc = 0x41199Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4119A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41199Cu;
            // 0x4119a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4119A4u;
    // 0x4119a4: 0x0  nop
    ctx->pc = 0x4119a4u;
    // NOP
    // 0x4119a8: 0x0  nop
    ctx->pc = 0x4119a8u;
    // NOP
    // 0x4119ac: 0x0  nop
    ctx->pc = 0x4119acu;
    // NOP
}
