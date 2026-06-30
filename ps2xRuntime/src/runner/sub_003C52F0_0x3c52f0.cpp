#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C52F0
// Address: 0x3c52f0 - 0x3c5370
void sub_003C52F0_0x3c52f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C52F0_0x3c52f0");
#endif

    switch (ctx->pc) {
        case 0x3c534cu: goto label_3c534c;
        default: break;
    }

    ctx->pc = 0x3c52f0u;

    // 0x3c52f0: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x3c52f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x3c52f4: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x3c52f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x3c52f8: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x3C52F8u;
    {
        const bool branch_taken_0x3c52f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c52f8) {
            ctx->pc = 0x3C5320u;
            goto label_3c5320;
        }
    }
    ctx->pc = 0x3C5300u;
    // 0x3c5300: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x3c5300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3c5304: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x3c5304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
    // 0x3c5308: 0xa0600054  sb          $zero, 0x54($v1)
    ctx->pc = 0x3c5308u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 84), (uint8_t)GPR_U32(ctx, 0));
    // 0x3c530c: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x3c530cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x3c5310: 0x8c640780  lw          $a0, 0x780($v1)
    ctx->pc = 0x3c5310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1920)));
    // 0x3c5314: 0x90830055  lbu         $v1, 0x55($a0)
    ctx->pc = 0x3c5314u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 85)));
    // 0x3c5318: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3c5318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3c531c: 0xa0830055  sb          $v1, 0x55($a0)
    ctx->pc = 0x3c531cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 85), (uint8_t)GPR_U32(ctx, 3));
label_3c5320:
    // 0x3c5320: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C5328u;
    // 0x3c5328: 0x0  nop
    ctx->pc = 0x3c5328u;
    // NOP
    // 0x3c532c: 0x0  nop
    ctx->pc = 0x3c532cu;
    // NOP
    // 0x3c5330: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c5330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3c5334: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c5334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3c5338: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c5338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3c533c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c533cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3c5340: 0x8c900024  lw          $s0, 0x24($a0)
    ctx->pc = 0x3c5340u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x3c5344: 0xc0da994  jal         func_36A650
    ctx->pc = 0x3C5344u;
    SET_GPR_U32(ctx, 31, 0x3C534Cu);
    ctx->pc = 0x3C5348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5344u;
            // 0x3c5348: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36A650u;
    if (runtime->hasFunction(0x36A650u)) {
        auto targetFn = runtime->lookupFunction(0x36A650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C534Cu; }
        if (ctx->pc != 0x3C534Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036A650_0x36a650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C534Cu; }
        if (ctx->pc != 0x3C534Cu) { return; }
    }
    ctx->pc = 0x3C534Cu;
label_3c534c:
    // 0x3c534c: 0x8e230778  lw          $v1, 0x778($s1)
    ctx->pc = 0x3c534cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1912)));
    // 0x3c5350: 0x2022023  subu        $a0, $s0, $v0
    ctx->pc = 0x3c5350u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3c5354: 0xac64005c  sw          $a0, 0x5C($v1)
    ctx->pc = 0x3c5354u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 4));
    // 0x3c5358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c5358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c535c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c535cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c5360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c5360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c5364: 0x3e00008  jr          $ra
    ctx->pc = 0x3C5364u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C5368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C5364u;
            // 0x3c5368: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C536Cu;
    // 0x3c536c: 0x0  nop
    ctx->pc = 0x3c536cu;
    // NOP
}
