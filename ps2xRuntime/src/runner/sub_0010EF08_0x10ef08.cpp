#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010EF08
// Address: 0x10ef08 - 0x10ef90
void sub_0010EF08_0x10ef08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EF08_0x10ef08");
#endif

    switch (ctx->pc) {
        case 0x10ef34u: goto label_10ef34;
        case 0x10ef84u: goto label_10ef84;
        default: break;
    }

    ctx->pc = 0x10ef08u;

    // 0x10ef08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10ef08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10ef0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10ef0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10ef10: 0xffa80060  sd          $t0, 0x60($sp)
    ctx->pc = 0x10ef10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 8));
    // 0x10ef14: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x10ef14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ef1c: 0x27a80060  addiu       $t0, $sp, 0x60
    ctx->pc = 0x10ef1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x10ef20: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x10ef20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ef24: 0xffa90068  sd          $t1, 0x68($sp)
    ctx->pc = 0x10ef24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 9));
    // 0x10ef28: 0xffaa0070  sd          $t2, 0x70($sp)
    ctx->pc = 0x10ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 10));
    // 0x10ef2c: 0xc043852  jal         func_10E148
    ctx->pc = 0x10EF2Cu;
    SET_GPR_U32(ctx, 31, 0x10EF34u);
    ctx->pc = 0x10EF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF2Cu;
            // 0x10ef30: 0xffab0078  sd          $t3, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E148u;
    if (runtime->hasFunction(0x10E148u)) {
        auto targetFn = runtime->lookupFunction(0x10E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF34u; }
        if (ctx->pc != 0x10EF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E148_0x10e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF34u; }
        if (ctx->pc != 0x10EF34u) { return; }
    }
    ctx->pc = 0x10EF34u;
label_10ef34:
    // 0x10ef34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ef38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x10ef38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ef3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ef40: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x10ef40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x10ef44: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x10ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x10ef48: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10ef48u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ef4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF4Cu;
            // 0x10ef50: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EF54u;
    // 0x10ef54: 0x0  nop
    ctx->pc = 0x10ef54u;
    // NOP
    // 0x10ef58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ef58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ef5c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x10ef5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef60: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x10ef60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x10ef64: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x10ef64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef68: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x10ef68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef6c: 0x3c040011  lui         $a0, 0x11
    ctx->pc = 0x10ef6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17 << 16));
    // 0x10ef70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ef70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ef74: 0x2484ee60  addiu       $a0, $a0, -0x11A0
    ctx->pc = 0x10ef74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962784));
    // 0x10ef78: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x10ef78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ef7c: 0xc043852  jal         func_10E148
    ctx->pc = 0x10EF7Cu;
    SET_GPR_U32(ctx, 31, 0x10EF84u);
    ctx->pc = 0x10EF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF7Cu;
            // 0x10ef80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10E148u;
    if (runtime->hasFunction(0x10E148u)) {
        auto targetFn = runtime->lookupFunction(0x10E148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF84u; }
        if (ctx->pc != 0x10EF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010E148_0x10e148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10EF84u; }
        if (ctx->pc != 0x10EF84u) { return; }
    }
    ctx->pc = 0x10EF84u;
label_10ef84:
    // 0x10ef84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ef84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ef88: 0x3e00008  jr          $ra
    ctx->pc = 0x10EF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10EF88u;
            // 0x10ef8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10EF90u;
}
