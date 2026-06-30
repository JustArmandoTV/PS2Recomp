#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00226650
// Address: 0x226650 - 0x2266b0
void sub_00226650_0x226650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226650_0x226650");
#endif

    switch (ctx->pc) {
        case 0x226668u: goto label_226668;
        default: break;
    }

    ctx->pc = 0x226650u;

    // 0x226650: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x226650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x226654: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x226654u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226658: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x226658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x22665c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x22665cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226660: 0xc0895e4  jal         func_225790
    ctx->pc = 0x226660u;
    SET_GPR_U32(ctx, 31, 0x226668u);
    ctx->pc = 0x226664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x226660u;
            // 0x226664: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225790u;
    if (runtime->hasFunction(0x225790u)) {
        auto targetFn = runtime->lookupFunction(0x225790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226668u; }
        if (ctx->pc != 0x226668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225790_0x225790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x226668u; }
        if (ctx->pc != 0x226668u) { return; }
    }
    ctx->pc = 0x226668u;
label_226668:
    // 0x226668: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x226668u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x22666c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x22666cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x226670: 0x2442ed90  addiu       $v0, $v0, -0x1270
    ctx->pc = 0x226670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962576));
    // 0x226674: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x226674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x226678: 0xae000120  sw          $zero, 0x120($s0)
    ctx->pc = 0x226678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 0));
    // 0x22667c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22667cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226680: 0xae000124  sw          $zero, 0x124($s0)
    ctx->pc = 0x226680u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 0));
    // 0x226684: 0xae0000dc  sw          $zero, 0xDC($s0)
    ctx->pc = 0x226684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 220), GPR_U32(ctx, 0));
    // 0x226688: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x226688u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
    // 0x22668c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x22668cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
    // 0x226690: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x226690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
    // 0x226694: 0xa2030008  sb          $v1, 0x8($s0)
    ctx->pc = 0x226694u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x226698: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x226698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22669c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x22669cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2266a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2266A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2266A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2266A0u;
            // 0x2266a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2266A8u;
    // 0x2266a8: 0x0  nop
    ctx->pc = 0x2266a8u;
    // NOP
    // 0x2266ac: 0x0  nop
    ctx->pc = 0x2266acu;
    // NOP
}
