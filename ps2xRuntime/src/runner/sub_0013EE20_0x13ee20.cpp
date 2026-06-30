#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013EE20
// Address: 0x13ee20 - 0x13eeb0
void sub_0013EE20_0x13ee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EE20_0x13ee20");
#endif

    switch (ctx->pc) {
        case 0x13ee60u: goto label_13ee60;
        default: break;
    }

    ctx->pc = 0x13ee20u;

    // 0x13ee20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13ee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13ee24: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13ee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13ee28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13ee28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13ee2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13ee2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13ee30: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13ee30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13ee34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13ee38: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x13ee38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee3c: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x13ee3cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x13ee40: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x13EE40u;
    {
        const bool branch_taken_0x13ee40 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x13EE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE40u;
            // 0x13ee44: 0x261056f0  addiu       $s0, $s0, 0x56F0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 22256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee40) {
            ctx->pc = 0x13EE50u;
            goto label_13ee50;
        }
    }
    ctx->pc = 0x13EE48u;
    // 0x13ee48: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13EE48u;
    {
        const bool branch_taken_0x13ee48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13EE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE48u;
            // 0x13ee4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ee48) {
            ctx->pc = 0x13EE94u;
            goto label_13ee94;
        }
    }
    ctx->pc = 0x13EE50u;
label_13ee50:
    // 0x13ee50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13ee50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x13ee54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ee58: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x13EE58u;
    SET_GPR_U32(ctx, 31, 0x13EE60u);
    ctx->pc = 0x13EE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13EE58u;
            // 0x13ee5c: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE60u; }
        if (ctx->pc != 0x13EE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13EE60u; }
        if (ctx->pc != 0x13EE60u) { return; }
    }
    ctx->pc = 0x13EE60u;
label_13ee60:
    // 0x13ee60: 0x2643003f  addiu       $v1, $s2, 0x3F
    ctx->pc = 0x13ee60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x13ee64: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x13ee64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x13ee68: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13ee68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13ee6c: 0x2421823  subu        $v1, $s2, $v0
    ctx->pc = 0x13ee6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x13ee70: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x13ee70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x13ee74: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x13ee74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x13ee78: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x13ee78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x13ee7c: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x13ee7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x13ee80: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x13ee80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13ee84: 0xae040020  sw          $a0, 0x20($s0)
    ctx->pc = 0x13ee84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 4));
    // 0x13ee88: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x13ee88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
    // 0x13ee8c: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x13ee8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x13ee90: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x13ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
label_13ee94:
    // 0x13ee94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13ee94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13ee98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13ee98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ee9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13ee9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13eea0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13eea0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eea4: 0x3e00008  jr          $ra
    ctx->pc = 0x13EEA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13EEA4u;
            // 0x13eea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13EEACu;
    // 0x13eeac: 0x0  nop
    ctx->pc = 0x13eeacu;
    // NOP
}
