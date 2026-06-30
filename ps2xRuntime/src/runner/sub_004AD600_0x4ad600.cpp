#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AD600
// Address: 0x4ad600 - 0x4ad660
void sub_004AD600_0x4ad600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD600_0x4ad600");
#endif

    switch (ctx->pc) {
        case 0x4ad640u: goto label_4ad640;
        default: break;
    }

    ctx->pc = 0x4ad600u;

    // 0x4ad600: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4ad600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x4ad604: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4ad604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4ad608: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ad608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4ad60c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad610: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x4AD610u;
    {
        const bool branch_taken_0x4ad610 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ad610) {
            ctx->pc = 0x4AD614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD610u;
            // 0x4ad614: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AD644u;
            goto label_4ad644;
        }
    }
    ctx->pc = 0x4AD618u;
    // 0x4ad618: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4ad618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4ad61c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x4ad61cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x4ad620: 0x24420478  addiu       $v0, $v0, 0x478
    ctx->pc = 0x4ad620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1144));
    // 0x4ad624: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x4ad624u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x4ad628: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4ad628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x4ad62c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4ad62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
    // 0x4ad630: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD630u;
    {
        const bool branch_taken_0x4ad630 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x4AD634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD630u;
            // 0x4ad634: 0xac40a990  sw          $zero, -0x5670($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294945168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad630) {
            ctx->pc = 0x4AD640u;
            goto label_4ad640;
        }
    }
    ctx->pc = 0x4AD638u;
    // 0x4ad638: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4AD638u;
    SET_GPR_U32(ctx, 31, 0x4AD640u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD640u; }
        if (ctx->pc != 0x4AD640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AD640u; }
        if (ctx->pc != 0x4AD640u) { return; }
    }
    ctx->pc = 0x4AD640u;
label_4ad640:
    // 0x4ad640: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad640u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4ad644:
    // 0x4ad644: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4ad644u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ad648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad64c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AD64Cu;
            // 0x4ad650: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AD654u;
    // 0x4ad654: 0x0  nop
    ctx->pc = 0x4ad654u;
    // NOP
    // 0x4ad658: 0x0  nop
    ctx->pc = 0x4ad658u;
    // NOP
    // 0x4ad65c: 0x0  nop
    ctx->pc = 0x4ad65cu;
    // NOP
}
