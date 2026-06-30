#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F4B00
// Address: 0x1f4b00 - 0x1f4b80
void sub_001F4B00_0x1f4b00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4B00_0x1f4b00");
#endif

    switch (ctx->pc) {
        case 0x1f4b5cu: goto label_1f4b5c;
        case 0x1f4b70u: goto label_1f4b70;
        default: break;
    }

    ctx->pc = 0x1f4b00u;

    // 0x1f4b00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f4b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f4b04: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f4b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f4b08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f4b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f4b0c: 0x24424c40  addiu       $v0, $v0, 0x4C40
    ctx->pc = 0x1f4b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19520));
    // 0x1f4b10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f4b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f4b14: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f4b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f4b18: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x1f4b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x1f4b1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4b1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b20: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f4b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f4b24: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x1f4b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1f4b28: 0x24424f30  addiu       $v0, $v0, 0x4F30
    ctx->pc = 0x1f4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20272));
    // 0x1f4b2c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f4b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4b30: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x1f4b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x1f4b34: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f4b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f4b38: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1f4b38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f4b3c: 0x24424f70  addiu       $v0, $v0, 0x4F70
    ctx->pc = 0x1f4b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20336));
    // 0x1f4b40: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x1f4b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x1f4b44: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f4b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f4b48: 0x24424f90  addiu       $v0, $v0, 0x4F90
    ctx->pc = 0x1f4b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20368));
    // 0x1f4b4c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x1f4b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x1f4b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f4b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4b54: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1F4B54u;
    SET_GPR_U32(ctx, 31, 0x1F4B5Cu);
    ctx->pc = 0x1F4B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B54u;
            // 0x1f4b58: 0xa3a20031  sb          $v0, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B5Cu; }
        if (ctx->pc != 0x1F4B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B5Cu; }
        if (ctx->pc != 0x1F4B5Cu) { return; }
    }
    ctx->pc = 0x1F4B5Cu;
label_1f4b5c:
    // 0x1f4b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4b60: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1f4b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1f4b64: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1f4b64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f4b68: 0xc07ff48  jal         func_1FFD20
    ctx->pc = 0x1F4B68u;
    SET_GPR_U32(ctx, 31, 0x1F4B70u);
    ctx->pc = 0x1F4B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B68u;
            // 0x1f4b6c: 0x2407001e  addiu       $a3, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B70u; }
        if (ctx->pc != 0x1F4B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F4B70u; }
        if (ctx->pc != 0x1F4B70u) { return; }
    }
    ctx->pc = 0x1F4B70u;
label_1f4b70:
    // 0x1f4b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f4b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f4b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4b78: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F4B78u;
            // 0x1f4b7c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F4B80u;
}
