#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB610
// Address: 0x2cb610 - 0x2cb670
void sub_002CB610_0x2cb610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB610_0x2cb610");
#endif

    switch (ctx->pc) {
        case 0x2cb650u: goto label_2cb650;
        default: break;
    }

    ctx->pc = 0x2cb610u;

    // 0x2cb610: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2cb610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2cb614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2cb614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2cb618: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2cb618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2cb61c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cb61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cb620: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2CB620u;
    {
        const bool branch_taken_0x2cb620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb620) {
            ctx->pc = 0x2CB624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB620u;
            // 0x2cb624: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CB654u;
            goto label_2cb654;
        }
    }
    ctx->pc = 0x2CB628u;
    // 0x2cb628: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2cb628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2cb62c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x2cb62cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2cb630: 0x24420148  addiu       $v0, $v0, 0x148
    ctx->pc = 0x2cb630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 328));
    // 0x2cb634: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2cb634u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2cb638: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2cb638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x2cb63c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2cb63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2cb640: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CB640u;
    {
        const bool branch_taken_0x2cb640 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2CB644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB640u;
            // 0x2cb644: 0xac400e38  sw          $zero, 0xE38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb640) {
            ctx->pc = 0x2CB650u;
            goto label_2cb650;
        }
    }
    ctx->pc = 0x2CB648u;
    // 0x2cb648: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CB648u;
    SET_GPR_U32(ctx, 31, 0x2CB650u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB650u; }
        if (ctx->pc != 0x2CB650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CB650u; }
        if (ctx->pc != 0x2CB650u) { return; }
    }
    ctx->pc = 0x2CB650u;
label_2cb650:
    // 0x2cb650: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2cb650u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2cb654:
    // 0x2cb654: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2cb654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cb658: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2cb658u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cb65c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB65Cu;
            // 0x2cb660: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB664u;
    // 0x2cb664: 0x0  nop
    ctx->pc = 0x2cb664u;
    // NOP
    // 0x2cb668: 0x0  nop
    ctx->pc = 0x2cb668u;
    // NOP
    // 0x2cb66c: 0x0  nop
    ctx->pc = 0x2cb66cu;
    // NOP
}
