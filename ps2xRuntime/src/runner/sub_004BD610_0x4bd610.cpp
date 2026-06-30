#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004BD610
// Address: 0x4bd610 - 0x4bd670
void sub_004BD610_0x4bd610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004BD610_0x4bd610");
#endif

    switch (ctx->pc) {
        case 0x4bd650u: goto label_4bd650;
        default: break;
    }

    ctx->pc = 0x4bd610u;

    // 0x4bd610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4bd610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4bd614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4bd614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4bd618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4bd618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4bd61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4bd61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4bd620: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4BD620u;
    {
        const bool branch_taken_0x4bd620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4bd620) {
            ctx->pc = 0x4BD624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD620u;
            // 0x4bd624: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BD654u;
            goto label_4bd654;
        }
    }
    ctx->pc = 0x4BD628u;
    // 0x4bd628: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4bd628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4bd62c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4bd62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4bd630: 0x24420f08  addiu       $v0, $v0, 0xF08
    ctx->pc = 0x4bd630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3848));
    // 0x4bd634: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4bd634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4bd638: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4bd638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4bd63c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4bd63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4bd640: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4BD640u;
    {
        const bool branch_taken_0x4bd640 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4BD644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD640u;
            // 0x4bd644: 0xac40a9e0  sw          $zero, -0x5620($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945248), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4bd640) {
            ctx->pc = 0x4BD650u;
            goto label_4bd650;
        }
    }
    ctx->pc = 0x4BD648u;
    // 0x4bd648: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4BD648u;
    SET_GPR_U32(ctx, 31, 0x4BD650u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD650u; }
        if (ctx->pc != 0x4BD650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BD650u; }
        if (ctx->pc != 0x4BD650u) { return; }
    }
    ctx->pc = 0x4BD650u;
label_4bd650:
    // 0x4bd650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4bd650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4bd654:
    // 0x4bd654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4bd654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4bd658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4bd658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4bd65c: 0x3e00008  jr          $ra
    ctx->pc = 0x4BD65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BD660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BD65Cu;
            // 0x4bd660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BD664u;
    // 0x4bd664: 0x0  nop
    ctx->pc = 0x4bd664u;
    // NOP
    // 0x4bd668: 0x0  nop
    ctx->pc = 0x4bd668u;
    // NOP
    // 0x4bd66c: 0x0  nop
    ctx->pc = 0x4bd66cu;
    // NOP
}
