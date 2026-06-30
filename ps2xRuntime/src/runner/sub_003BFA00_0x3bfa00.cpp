#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003BFA00
// Address: 0x3bfa00 - 0x3bfa80
void sub_003BFA00_0x3bfa00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFA00_0x3bfa00");
#endif

    switch (ctx->pc) {
        case 0x3bfa2cu: goto label_3bfa2c;
        case 0x3bfa54u: goto label_3bfa54;
        case 0x3bfa68u: goto label_3bfa68;
        default: break;
    }

    ctx->pc = 0x3bfa00u;

    // 0x3bfa00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3bfa00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3bfa04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bfa04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bfa08: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x3bfa08u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x3bfa0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3bfa0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3bfa10: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3bfa10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3bfa14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3bfa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3bfa18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3bfa18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa1c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3bfa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bfa20: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3bfa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3bfa24: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x3BFA24u;
    SET_GPR_U32(ctx, 31, 0x3BFA2Cu);
    ctx->pc = 0x3BFA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA24u;
            // 0x3bfa28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFA2Cu; }
        if (ctx->pc != 0x3BFA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFA2Cu; }
        if (ctx->pc != 0x3BFA2Cu) { return; }
    }
    ctx->pc = 0x3BFA2Cu;
label_3bfa2c:
    // 0x3bfa2c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3bfa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bfa30: 0x5203000a  beql        $s0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3BFA30u;
    {
        const bool branch_taken_0x3bfa30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x3bfa30) {
            ctx->pc = 0x3BFA34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA30u;
            // 0x3bfa34: 0x26240320  addiu       $a0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFA5Cu;
            goto label_3bfa5c;
        }
    }
    ctx->pc = 0x3BFA38u;
    // 0x3bfa38: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3BFA38u;
    {
        const bool branch_taken_0x3bfa38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfa38) {
            ctx->pc = 0x3BFA3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA38u;
            // 0x3bfa3c: 0x26240320  addiu       $a0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3BFA48u;
            goto label_3bfa48;
        }
    }
    ctx->pc = 0x3BFA40u;
    // 0x3bfa40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3BFA40u;
    {
        const bool branch_taken_0x3bfa40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA40u;
            // 0x3bfa44: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfa40) {
            ctx->pc = 0x3BFA6Cu;
            goto label_3bfa6c;
        }
    }
    ctx->pc = 0x3BFA48u;
label_3bfa48:
    // 0x3bfa48: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x3bfa48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
    // 0x3bfa4c: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3BFA4Cu;
    SET_GPR_U32(ctx, 31, 0x3BFA54u);
    ctx->pc = 0x3BFA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA4Cu;
            // 0x3bfa50: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFA54u; }
        if (ctx->pc != 0x3BFA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFA54u; }
        if (ctx->pc != 0x3BFA54u) { return; }
    }
    ctx->pc = 0x3BFA54u;
label_3bfa54:
    // 0x3bfa54: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BFA54u;
    {
        const bool branch_taken_0x3bfa54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3bfa54) {
            ctx->pc = 0x3BFA68u;
            goto label_3bfa68;
        }
    }
    ctx->pc = 0x3BFA5Cu;
label_3bfa5c:
    // 0x3bfa5c: 0x26250580  addiu       $a1, $s1, 0x580
    ctx->pc = 0x3bfa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
    // 0x3bfa60: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3BFA60u;
    SET_GPR_U32(ctx, 31, 0x3BFA68u);
    ctx->pc = 0x3BFA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA60u;
            // 0x3bfa64: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFA68u; }
        if (ctx->pc != 0x3BFA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3BFA68u; }
        if (ctx->pc != 0x3BFA68u) { return; }
    }
    ctx->pc = 0x3BFA68u;
label_3bfa68:
    // 0x3bfa68: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bfa68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3bfa6c:
    // 0x3bfa6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3bfa6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3bfa70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3bfa70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3bfa74: 0x3e00008  jr          $ra
    ctx->pc = 0x3BFA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BFA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3BFA74u;
            // 0x3bfa78: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3BFA7Cu;
    // 0x3bfa7c: 0x0  nop
    ctx->pc = 0x3bfa7cu;
    // NOP
}
