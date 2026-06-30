#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1C20
// Address: 0x1d1c20 - 0x1d1c90
void sub_001D1C20_0x1d1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1C20_0x1d1c20");
#endif

    switch (ctx->pc) {
        case 0x1d1c40u: goto label_1d1c40;
        case 0x1d1c60u: goto label_1d1c60;
        case 0x1d1c70u: goto label_1d1c70;
        case 0x1d1c80u: goto label_1d1c80;
        default: break;
    }

    ctx->pc = 0x1d1c20u;

    // 0x1d1c20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1c24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1c28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1c2c: 0x848502f8  lh          $a1, 0x2F8($a0)
    ctx->pc = 0x1d1c2cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1d1c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1c34: 0xa4850304  sh          $a1, 0x304($a0)
    ctx->pc = 0x1d1c34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 772), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1c38: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1C38u;
    SET_GPR_U32(ctx, 31, 0x1D1C40u);
    ctx->pc = 0x1D1C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C38u;
            // 0x1d1c3c: 0x8c840184  lw          $a0, 0x184($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C40u; }
        if (ctx->pc != 0x1D1C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C40u; }
        if (ctx->pc != 0x1D1C40u) { return; }
    }
    ctx->pc = 0x1D1C40u;
label_1d1c40:
    // 0x1d1c40: 0x920201b4  lbu         $v0, 0x1B4($s0)
    ctx->pc = 0x1d1c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1d1c44: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d1c44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d1c48: 0x54200006  bnel        $at, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D1C48u;
    {
        const bool branch_taken_0x1d1c48 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1c48) {
            ctx->pc = 0x1D1C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C48u;
            // 0x1d1c4c: 0x86050300  lh          $a1, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1C64u;
            goto label_1d1c64;
        }
    }
    ctx->pc = 0x1D1C50u;
    // 0x1d1c50: 0x860502fa  lh          $a1, 0x2FA($s0)
    ctx->pc = 0x1d1c50u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x1d1c54: 0xa6050306  sh          $a1, 0x306($s0)
    ctx->pc = 0x1d1c54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1c58: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1C58u;
    SET_GPR_U32(ctx, 31, 0x1D1C60u);
    ctx->pc = 0x1D1C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C58u;
            // 0x1d1c5c: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C60u; }
        if (ctx->pc != 0x1D1C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C60u; }
        if (ctx->pc != 0x1D1C60u) { return; }
    }
    ctx->pc = 0x1D1C60u;
label_1d1c60:
    // 0x1d1c60: 0x86050300  lh          $a1, 0x300($s0)
    ctx->pc = 0x1d1c60u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
label_1d1c64:
    // 0x1d1c64: 0xa605030c  sh          $a1, 0x30C($s0)
    ctx->pc = 0x1d1c64u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 780), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1c68: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1C68u;
    SET_GPR_U32(ctx, 31, 0x1D1C70u);
    ctx->pc = 0x1D1C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C68u;
            // 0x1d1c6c: 0x8e040194  lw          $a0, 0x194($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C70u; }
        if (ctx->pc != 0x1D1C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C70u; }
        if (ctx->pc != 0x1D1C70u) { return; }
    }
    ctx->pc = 0x1D1C70u;
label_1d1c70:
    // 0x1d1c70: 0x86050302  lh          $a1, 0x302($s0)
    ctx->pc = 0x1d1c70u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 770)));
    // 0x1d1c74: 0xa605030e  sh          $a1, 0x30E($s0)
    ctx->pc = 0x1d1c74u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 782), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1c78: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1C78u;
    SET_GPR_U32(ctx, 31, 0x1D1C80u);
    ctx->pc = 0x1D1C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C78u;
            // 0x1d1c7c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C80u; }
        if (ctx->pc != 0x1D1C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C80u; }
        if (ctx->pc != 0x1D1C80u) { return; }
    }
    ctx->pc = 0x1D1C80u;
label_1d1c80:
    // 0x1d1c80: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1c80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1c84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1c84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1c88: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C88u;
            // 0x1d1c8c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1C90u;
}
