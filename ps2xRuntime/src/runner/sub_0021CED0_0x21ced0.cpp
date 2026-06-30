#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021CED0
// Address: 0x21ced0 - 0x21cf70
void sub_0021CED0_0x21ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CED0_0x21ced0");
#endif

    switch (ctx->pc) {
        case 0x21cf1cu: goto label_21cf1c;
        default: break;
    }

    ctx->pc = 0x21ced0u;

    // 0x21ced0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21ced0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21ced4: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x21ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x21ced8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x21ced8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x21cedc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x21cedcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21cee0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21cee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21cee4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21cee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21cee8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21cee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ceec: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x21ceecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x21cef0: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x21cef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21cef4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x21cef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x21cef8: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x21cef8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x21cefc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x21cefcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x21cf00: 0xb01021  addu        $v0, $a1, $s0
    ctx->pc = 0x21cf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x21cf04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21cf08: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x21cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x21cf0c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x21cf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
    // 0x21cf10: 0x438824  and         $s1, $v0, $v1
    ctx->pc = 0x21cf10u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x21cf14: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x21CF14u;
    SET_GPR_U32(ctx, 31, 0x21CF1Cu);
    ctx->pc = 0x21CF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF14u;
            // 0x21cf18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF1Cu; }
        if (ctx->pc != 0x21CF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21CF1Cu; }
        if (ctx->pc != 0x21CF1Cu) { return; }
    }
    ctx->pc = 0x21CF1Cu;
label_21cf1c:
    // 0x21cf1c: 0xa4510002  sh          $s1, 0x2($v0)
    ctx->pc = 0x21cf1cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
    // 0x21cf20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x21cf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21cf24: 0xa4500006  sh          $s0, 0x6($v0)
    ctx->pc = 0x21cf24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x21cf28: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x21cf28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x21cf2c: 0xa4400010  sh          $zero, 0x10($v0)
    ctx->pc = 0x21cf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x21cf30: 0xa4440012  sh          $a0, 0x12($v0)
    ctx->pc = 0x21cf30u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x21cf34: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x21cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
    // 0x21cf38: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x21cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x21cf3c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x21cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x21cf40: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x21cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x21cf44: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x21cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x21cf48: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x21cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
    // 0x21cf4c: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x21cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x21cf50: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x21cf50u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x21cf54: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x21cf54u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 0));
    // 0x21cf58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x21cf58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21cf5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21cf5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21cf60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21cf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21cf64: 0x3e00008  jr          $ra
    ctx->pc = 0x21CF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21CF64u;
            // 0x21cf68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21CF6Cu;
    // 0x21cf6c: 0x0  nop
    ctx->pc = 0x21cf6cu;
    // NOP
}
