#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00383730
// Address: 0x383730 - 0x3837a0
void sub_00383730_0x383730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383730_0x383730");
#endif

    switch (ctx->pc) {
        case 0x383754u: goto label_383754;
        default: break;
    }

    ctx->pc = 0x383730u;

    // 0x383730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x383730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x383734: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x383734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x383738: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x383738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38373c: 0x84830066  lh          $v1, 0x66($a0)
    ctx->pc = 0x38373cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 102)));
    // 0x383740: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x383740u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383744: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x383744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x383748: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x383748u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x38374c: 0xc04cce8  jal         func_1333A0
    ctx->pc = 0x38374Cu;
    SET_GPR_U32(ctx, 31, 0x383754u);
    ctx->pc = 0x383750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38374Cu;
            // 0x383750: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383754u; }
        if (ctx->pc != 0x383754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x383754u; }
        if (ctx->pc != 0x383754u) { return; }
    }
    ctx->pc = 0x383754u;
label_383754:
    // 0x383754: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x383754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x383758: 0x86050066  lh          $a1, 0x66($s0)
    ctx->pc = 0x383758u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 102)));
    // 0x38375c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x38375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
    // 0x383760: 0x86040064  lh          $a0, 0x64($s0)
    ctx->pc = 0x383760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x383764: 0x9063007e  lbu         $v1, 0x7E($v1)
    ctx->pc = 0x383764u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 126)));
    // 0x383768: 0x85202a  slt         $a0, $a0, $a1
    ctx->pc = 0x383768u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x38376c: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x38376cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x383770: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x383770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x383774: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x383774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x383778: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x383778u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x38377c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x38377cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x383780: 0xa6030066  sh          $v1, 0x66($s0)
    ctx->pc = 0x383780u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 102), (uint16_t)GPR_U32(ctx, 3));
    // 0x383784: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x383784u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x383788: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x383788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x38378c: 0x3e00008  jr          $ra
    ctx->pc = 0x38378Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38378Cu;
            // 0x383790: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x383794u;
    // 0x383794: 0x0  nop
    ctx->pc = 0x383794u;
    // NOP
    // 0x383798: 0x0  nop
    ctx->pc = 0x383798u;
    // NOP
    // 0x38379c: 0x0  nop
    ctx->pc = 0x38379cu;
    // NOP
}
