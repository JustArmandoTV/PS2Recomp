#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00282E40
// Address: 0x282e40 - 0x282ee0
void sub_00282E40_0x282e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282E40_0x282e40");
#endif

    switch (ctx->pc) {
        case 0x282e80u: goto label_282e80;
        case 0x282ec0u: goto label_282ec0;
        default: break;
    }

    ctx->pc = 0x282e40u;

    // 0x282e40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x282e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x282e44: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x282e44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x282e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x282e4c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282e50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x282e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x282e54: 0x27a80030  addiu       $t0, $sp, 0x30
    ctx->pc = 0x282e54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x282e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x282e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x282e5c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x282e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282e60: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x282e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x282e64: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x282e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x282e68: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x282e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x282e6c: 0x27a40058  addiu       $a0, $sp, 0x58
    ctx->pc = 0x282e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x282e70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x282e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x282e74: 0x27a9005c  addiu       $t1, $sp, 0x5C
    ctx->pc = 0x282e74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x282e78: 0xc0a0f38  jal         func_283CE0
    ctx->pc = 0x282E78u;
    SET_GPR_U32(ctx, 31, 0x282E80u);
    ctx->pc = 0x282E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282E78u;
            // 0x282e7c: 0x27ab0048  addiu       $t3, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283CE0u;
    if (runtime->hasFunction(0x283CE0u)) {
        auto targetFn = runtime->lookupFunction(0x283CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E80u; }
        if (ctx->pc != 0x282E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00283CE0_0x283ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282E80u; }
        if (ctx->pc != 0x282E80u) { return; }
    }
    ctx->pc = 0x282E80u;
label_282e80:
    // 0x282e80: 0x83a3005c  lb          $v1, 0x5C($sp)
    ctx->pc = 0x282e80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x282e84: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x282e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x282e88: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x282e88u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x282e8c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x282e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x282e90: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x282e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x282e94: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x282E94u;
    {
        const bool branch_taken_0x282e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x282e94) {
            ctx->pc = 0x282EC0u;
            goto label_282ec0;
        }
    }
    ctx->pc = 0x282E9Cu;
    // 0x282e9c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x282e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x282ea0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x282ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
    // 0x282ea4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x282ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
    // 0x282ea8: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x282ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x282eac: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x282eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x282eb0: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x282eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x282eb4: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x282eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
    // 0x282eb8: 0xc0a7ab4  jal         func_29EAD0
    ctx->pc = 0x282EB8u;
    SET_GPR_U32(ctx, 31, 0x282EC0u);
    ctx->pc = 0x282EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282EB8u;
            // 0x282ebc: 0x23140  sll         $a2, $v0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EC0u; }
        if (ctx->pc != 0x282EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282EC0u; }
        if (ctx->pc != 0x282EC0u) { return; }
    }
    ctx->pc = 0x282EC0u;
label_282ec0:
    // 0x282ec0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x282ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x282ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x282ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x282ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x282ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x282ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282ED0u;
            // 0x282ed4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x282ED8u;
    // 0x282ed8: 0x0  nop
    ctx->pc = 0x282ed8u;
    // NOP
    // 0x282edc: 0x0  nop
    ctx->pc = 0x282edcu;
    // NOP
}
