#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BB270
// Address: 0x2bb270 - 0x2bb310
void sub_002BB270_0x2bb270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB270_0x2bb270");
#endif

    switch (ctx->pc) {
        case 0x2bb2a0u: goto label_2bb2a0;
        case 0x2bb2f8u: goto label_2bb2f8;
        default: break;
    }

    ctx->pc = 0x2bb270u;

    // 0x2bb270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb274: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb278: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb27c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb280: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BB280u;
    {
        const bool branch_taken_0x2bb280 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb280) {
            ctx->pc = 0x2BB284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB280u;
            // 0x2bb284: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB2A4u;
            goto label_2bb2a4;
        }
    }
    ctx->pc = 0x2BB288u;
    // 0x2bb288: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2bb288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bb28c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb28cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bb290: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB290u;
    {
        const bool branch_taken_0x2bb290 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bb290) {
            ctx->pc = 0x2BB2A0u;
            goto label_2bb2a0;
        }
    }
    ctx->pc = 0x2BB298u;
    // 0x2bb298: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BB298u;
    SET_GPR_U32(ctx, 31, 0x2BB2A0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2A0u; }
        if (ctx->pc != 0x2BB2A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2A0u; }
        if (ctx->pc != 0x2BB2A0u) { return; }
    }
    ctx->pc = 0x2BB2A0u;
label_2bb2a0:
    // 0x2bb2a0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2a4:
    // 0x2bb2a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb2a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb2a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb2a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb2ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB2ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB2ACu;
            // 0x2bb2b0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB2B4u;
    // 0x2bb2b4: 0x0  nop
    ctx->pc = 0x2bb2b4u;
    // NOP
    // 0x2bb2b8: 0x0  nop
    ctx->pc = 0x2bb2b8u;
    // NOP
    // 0x2bb2bc: 0x0  nop
    ctx->pc = 0x2bb2bcu;
    // NOP
    // 0x2bb2c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2bb2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2bb2c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2bb2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2bb2c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bb2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2bb2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bb2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb2d0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2BB2D0u;
    {
        const bool branch_taken_0x2bb2d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bb2d0) {
            ctx->pc = 0x2BB2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB2D0u;
            // 0x2bb2d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BB2FCu;
            goto label_2bb2fc;
        }
    }
    ctx->pc = 0x2BB2D8u;
    // 0x2bb2d8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2bb2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2bb2dc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bb2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2bb2e0: 0x246321e0  addiu       $v1, $v1, 0x21E0
    ctx->pc = 0x2bb2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8672));
    // 0x2bb2e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bb2e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2bb2e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BB2E8u;
    {
        const bool branch_taken_0x2bb2e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2BB2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB2E8u;
            // 0x2bb2ec: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb2e8) {
            ctx->pc = 0x2BB2F8u;
            goto label_2bb2f8;
        }
    }
    ctx->pc = 0x2BB2F0u;
    // 0x2bb2f0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2BB2F0u;
    SET_GPR_U32(ctx, 31, 0x2BB2F8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2F8u; }
        if (ctx->pc != 0x2BB2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BB2F8u; }
        if (ctx->pc != 0x2BB2F8u) { return; }
    }
    ctx->pc = 0x2BB2F8u;
label_2bb2f8:
    // 0x2bb2f8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bb2f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bb2fc:
    // 0x2bb2fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2bb2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bb300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bb300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bb304: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BB304u;
            // 0x2bb308: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BB30Cu;
    // 0x2bb30c: 0x0  nop
    ctx->pc = 0x2bb30cu;
    // NOP
}
