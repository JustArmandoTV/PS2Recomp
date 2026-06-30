#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051B830
// Address: 0x51b830 - 0x51b890
void sub_0051B830_0x51b830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051B830_0x51b830");
#endif

    switch (ctx->pc) {
        case 0x51b85cu: goto label_51b85c;
        default: break;
    }

    ctx->pc = 0x51b830u;

    // 0x51b830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x51b830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x51b834: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x51b834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x51b838: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x51b838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x51b83c: 0x2463fc68  addiu       $v1, $v1, -0x398
    ctx->pc = 0x51b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966376));
    // 0x51b840: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x51b840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x51b844: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x51b844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x51b848: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x51b848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b84c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x51b84cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x51b850: 0xac50a348  sw          $s0, -0x5CB8($v0)
    ctx->pc = 0x51b850u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943560), GPR_U32(ctx, 16));
    // 0x51b854: 0xc0aaa9c  jal         func_2AAA70
    ctx->pc = 0x51B854u;
    SET_GPR_U32(ctx, 31, 0x51B85Cu);
    ctx->pc = 0x51B858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51B854u;
            // 0x51b858: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA70u;
    if (runtime->hasFunction(0x2AAA70u)) {
        auto targetFn = runtime->lookupFunction(0x2AAA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B85Cu; }
        if (ctx->pc != 0x51B85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAA70_0x2aaa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51B85Cu; }
        if (ctx->pc != 0x51B85Cu) { return; }
    }
    ctx->pc = 0x51B85Cu;
label_51b85c:
    // 0x51b85c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x51b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x51b860: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x51b860u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x51b864: 0x2442fbe0  addiu       $v0, $v0, -0x420
    ctx->pc = 0x51b864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966240));
    // 0x51b868: 0x2463fbec  addiu       $v1, $v1, -0x414
    ctx->pc = 0x51b868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966252));
    // 0x51b86c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x51b86cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x51b870: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x51b870u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x51b874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x51b874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51b878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x51b878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x51b87c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x51b87cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x51b880: 0x3e00008  jr          $ra
    ctx->pc = 0x51B880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51B884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51B880u;
            // 0x51b884: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51B888u;
    // 0x51b888: 0x0  nop
    ctx->pc = 0x51b888u;
    // NOP
    // 0x51b88c: 0x0  nop
    ctx->pc = 0x51b88cu;
    // NOP
}
